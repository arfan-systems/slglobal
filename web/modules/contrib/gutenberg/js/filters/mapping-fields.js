/**
* DO NOT EDIT THIS FILE.
* See the following change record for more information,
* https://www.drupal.org/node/2815083
* @preserve
**/'use strict';

function _defineProperty(obj, key, value) { if (key in obj) { Object.defineProperty(obj, key, { value: value, enumerable: true, configurable: true, writable: true }); } else { obj[key] = value; } return obj; }

function _asyncToGenerator(fn) { return function () { var gen = fn.apply(this, arguments); return new Promise(function (resolve, reject) { function step(key, arg) { try { var info = gen[key](arg); var value = info.value; } catch (error) { reject(error); return; } if (info.done) { resolve(value); } else { return Promise.resolve(value).then(function (value) { step("next", value); }, function (err) { step("throw", err); }); } } return step("next"); }); }; }

(function () {
  var _ref = _asyncToGenerator(regeneratorRuntime.mark(function _callee(wp, Drupal) {
    var blockEditor, components, compose, hooks, addFilter, createHigherOrderComponent, Card, CardBody, CardHeader, PanelBody, InspectorControls, hasMappingFields, withInspectorControl;
    return regeneratorRuntime.wrap(function _callee$(_context) {
      while (1) {
        switch (_context.prev = _context.next) {
          case 0:
            hasMappingFields = function hasMappingFields(attributes) {
              return attributes && attributes.mappingFields && Array.isArray(attributes.mappingFields);
            };

            blockEditor = wp.blockEditor, components = wp.components, compose = wp.compose, hooks = wp.hooks;
            addFilter = hooks.addFilter;
            createHigherOrderComponent = compose.createHigherOrderComponent;
            Card = components.Card, CardBody = components.CardBody, CardHeader = components.CardHeader, PanelBody = components.PanelBody;
            InspectorControls = blockEditor.InspectorControls;
            withInspectorControl = createHigherOrderComponent(function (BlockEdit) {
              return function (props) {
                var isSelected = props.isSelected,
                    attributes = props.attributes,
                    setAttributes = props.setAttributes;

                var hasMapping = hasMappingFields(attributes);
                var mappingFields = attributes.mappingFields;
                var ntFields = drupalSettings.gutenberg.nonTranslatableMappingFields;


                hasMapping && mappingFields.map(function (field) {
                  if (ntFields[field.field]) {
                    var property = field.property || 'value';
                    var value = _defineProperty({}, '' + field.attribute, ntFields[field.field][0][property]);
                    setAttributes(value);
                  }
                });

                if (hasMapping && isSelected) {
                  return [React.createElement(BlockEdit, props), React.createElement(
                    InspectorControls,
                    null,
                    !attributes.lockViewMode && React.createElement(
                      PanelBody,
                      { title: Drupal.t('Field mapping'), initialOpen: true },
                      attributes.mappingFields.map(function (field) {
                        var content = void 0;
                        var property = field.property || 'value';
                        if (field.attribute) {
                          content = Drupal.t('The block attribute <strong>@attribute</strong> is mapped to the <strong>@field[@property]</strong> field.', {
                            '@attribute': field.attribute,
                            '@field': field.field,
                            '@property': property
                          });
                        } else {
                          content = Drupal.t('The block content is mapped to the <strong>@field[@property]</strong> field.', {
                            '@field': field.field,
                            '@property': property
                          });
                        }
                        return React.createElement(
                          Card,
                          null,
                          field.label && React.createElement(
                            CardHeader,
                            null,
                            React.createElement(
                              'strong',
                              null,
                              field.label
                            )
                          ),
                          React.createElement(
                            CardBody,
                            null,
                            React.createElement('div', {
                              className: 'mapping-fields-summary',

                              dangerouslySetInnerHTML: { __html: content }
                            })
                          )
                        );
                      })
                    )
                  )];
                }

                return React.createElement(BlockEdit, props);
              };
            }, 'withInspectorControl');


            addFilter('blocks.registerBlockType', 'drupalgutenberg/mapping-fields-attributes', function (settings) {
              settings.attributes = Object.assign(settings.attributes, {
                mappingFields: {
                  type: 'array'
                }
              });

              return settings;
            });

            addFilter('editor.BlockEdit', 'core/editor/mapping-fields-attributes/with-inspector-control', withInspectorControl);

          case 9:
          case 'end':
            return _context.stop();
        }
      }
    }, _callee, undefined);
  }));

  return function (_x, _x2) {
    return _ref.apply(this, arguments);
  };
})()(wp, Drupal);