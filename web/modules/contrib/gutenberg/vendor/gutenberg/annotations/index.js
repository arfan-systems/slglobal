window.wp=window.wp||{},window.wp.annotations=function(t){var e={};function n(r){if(e[r])return e[r].exports;var o=e[r]={i:r,l:!1,exports:{}};return t[r].call(o.exports,o,o.exports,n),o.l=!0,o.exports}return n.m=t,n.c=e,n.d=function(t,e,r){n.o(t,e)||Object.defineProperty(t,e,{enumerable:!0,get:r})},n.r=function(t){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})},n.t=function(t,e){if(1&e&&(t=n(t)),8&e)return t;if(4&e&&"object"==typeof t&&t&&t.__esModule)return t;var r=Object.create(null);if(n.r(r),Object.defineProperty(r,"default",{enumerable:!0,value:t}),2&e&&"string"!=typeof t)for(var o in t)n.d(r,o,function(e){return t[e]}.bind(null,o));return r},n.n=function(t){var e=t&&t.__esModule?function(){return t.default}:function(){return t};return n.d(e,"a",e),e},n.o=function(t,e){return Object.prototype.hasOwnProperty.call(t,e)},n.p="",n(n.s=433)}({1:function(t,e){t.exports=window.wp.i18n},16:function(t,e){t.exports=window.wp.richText},162:function(t,e,n){"use strict";var r="undefined"!=typeof crypto&&crypto.getRandomValues&&crypto.getRandomValues.bind(crypto)||"undefined"!=typeof msCrypto&&"function"==typeof msCrypto.getRandomValues&&msCrypto.getRandomValues.bind(msCrypto),o=new Uint8Array(16);function a(){if(!r)throw new Error("crypto.getRandomValues() not supported. See https://github.com/uuidjs/uuid#getrandomvalues-not-supported");return r(o)}for(var i=/^(?:[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}|00000000-0000-0000-0000-000000000000)$/i,u=function(t){return"string"==typeof t&&i.test(t)},c=[],l=0;l<256;++l)c.push((l+256).toString(16).substr(1));e.a=function(t,e,n){var r=(t=t||{}).random||(t.rng||a)();if(r[6]=15&r[6]|64,r[8]=63&r[8]|128,e){n=n||0;for(var o=0;o<16;++o)e[n+o]=r[o];return e}return function(t){var e=arguments.length>1&&void 0!==arguments[1]?arguments[1]:0,n=(c[t[e+0]]+c[t[e+1]]+c[t[e+2]]+c[t[e+3]]+"-"+c[t[e+4]]+c[t[e+5]]+"-"+c[t[e+6]]+c[t[e+7]]+"-"+c[t[e+8]]+c[t[e+9]]+"-"+c[t[e+10]]+c[t[e+11]]+c[t[e+12]]+c[t[e+13]]+c[t[e+14]]+c[t[e+15]]).toLowerCase();if(!u(n))throw TypeError("Stringified UUID is invalid");return n}(r)}},18:function(t,e){t.exports=window.wp.hooks},2:function(t,e){t.exports=window.lodash},30:function(t,e,n){"use strict";var r,o;function a(t){return[t]}function i(){var t={clear:function(){t.head=null}};return t}function u(t,e,n){var r;if(t.length!==e.length)return!1;for(r=n;r<t.length;r++)if(t[r]!==e[r])return!1;return!0}r={},o="undefined"!=typeof WeakMap,e.a=function(t,e){var n,c;function l(){n=o?new WeakMap:i()}function s(){var n,r,o,a,i,l=arguments.length;for(a=new Array(l),o=0;o<l;o++)a[o]=arguments[o];for(i=e.apply(null,a),(n=c(i)).isUniqueByDependants||(n.lastDependants&&!u(i,n.lastDependants,0)&&n.clear(),n.lastDependants=i),r=n.head;r;){if(u(r.args,a,1))return r!==n.head&&(r.prev.next=r.next,r.next&&(r.next.prev=r.prev),r.next=n.head,r.prev=null,n.head.prev=r,n.head=r),r.val;r=r.next}return r={val:t.apply(null,a)},a[0]=null,r.args=a,n.head&&(n.head.prev=r,r.next=n.head),n.head=r,r.val}return e||(e=a),c=o?function(t){var e,o,a,u,c,l=n,s=!0;for(e=0;e<t.length;e++){if(!(c=o=t[e])||"object"!=typeof c){s=!1;break}l.has(o)?l=l.get(o):(a=new WeakMap,l.set(o,a),l=a)}return l.has(r)||((u=i()).isUniqueByDependants=s,l.set(r,u)),l.get(r)}:function(){return n},s.getDependants=e,s.clear=l,l(),s}},4:function(t,e){t.exports=window.wp.data},433:function(t,e,n){"use strict";n.r(e),n.d(e,"store",(function(){return T}));var r={};n.r(r),n.d(r,"__experimentalGetAnnotationsForBlock",(function(){return b})),n.d(r,"__experimentalGetAllAnnotationsForBlock",(function(){return x})),n.d(r,"__experimentalGetAnnotationsForRichText",(function(){return _})),n.d(r,"__experimentalGetAnnotations",(function(){return h}));var o={};n.r(o),n.d(o,"__experimentalAddAnnotation",(function(){return O})),n.d(o,"__experimentalRemoveAnnotation",(function(){return y})),n.d(o,"__experimentalUpdateAnnotationRange",(function(){return w})),n.d(o,"__experimentalRemoveAnnotationsBySource",(function(){return N}));var a=n(16),i=n(1);const u="core/annotations",c={name:"core/annotation",title:Object(i.__)("Annotation"),tagName:"mark",className:"annotation-text",attributes:{className:"class",id:"id"},edit:()=>null,__experimentalGetPropsForEditableTreePreparation:(t,{richTextIdentifier:e,blockClientId:n})=>({annotations:t(u).__experimentalGetAnnotationsForRichText(n,e)}),__experimentalCreatePrepareEditableTree:({annotations:t})=>(e,n)=>{if(0===t.length)return e;let r={formats:e,text:n};return r=function(t,e=[]){return e.forEach(e=>{let{start:n,end:r}=e;n>t.text.length&&(n=t.text.length),r>t.text.length&&(r=t.text.length);const o="annotation-text-"+e.source,i="annotation-text-"+e.id;t=Object(a.applyFormat)(t,{type:"core/annotation",attributes:{className:o,id:i}},n,r)}),t}(r,t),r.formats},__experimentalGetPropsForEditableTreeChangeHandler:t=>({removeAnnotation:t(u).__experimentalRemoveAnnotation,updateAnnotationRange:t(u).__experimentalUpdateAnnotationRange}),__experimentalCreateOnChangeEditableValue:t=>e=>{const n=function(t){const e={};return t.forEach((t,n)=>{(t=(t=t||[]).filter(t=>"core/annotation"===t.type)).forEach(t=>{let{id:r}=t.attributes;r=r.replace("annotation-text-",""),e.hasOwnProperty(r)||(e[r]={start:n}),e[r].end=n+1})}),e}(e),{removeAnnotation:r,updateAnnotationRange:o,annotations:a}=t;!function(t,e,{removeAnnotation:n,updateAnnotationRange:r}){t.forEach(t=>{const o=e[t.id];if(!o)return void n(t.id);const{start:a,end:i}=t;a===o.start&&i===o.end||r(t.id,o.start,o.end)})}(a,n,{removeAnnotation:r,updateAnnotationRange:o})}},{name:l,...s}=c;Object(a.registerFormatType)(l,s);var d=n(18),f=n(4);Object(d.addFilter)("editor.BlockListBlock","core/annotations",t=>Object(f.withSelect)((t,{clientId:e,className:n})=>({className:t(u).__experimentalGetAnnotationsForBlock(e).map(t=>"is-annotated-by-"+t.source).concat(n).filter(Boolean).join(" ")}))(t));var p=n(2);function v(t,e){const n=t.filter(e);return t.length===n.length?t:n}var m=n(30);const g=[],b=Object(m.a)((t,e)=>{var n;return(null!==(n=null==t?void 0:t[e])&&void 0!==n?n:[]).filter(t=>"block"===t.selector)},(t,e)=>{var n;return[null!==(n=null==t?void 0:t[e])&&void 0!==n?n:g]});function x(t,e){var n;return null!==(n=null==t?void 0:t[e])&&void 0!==n?n:g}const _=Object(m.a)((t,e,n)=>{var r;return(null!==(r=null==t?void 0:t[e])&&void 0!==r?r:[]).filter(t=>"range"===t.selector&&n===t.richTextIdentifier).map(t=>{const{range:e,...n}=t;return{...e,...n}})},(t,e)=>{var n;return[null!==(n=null==t?void 0:t[e])&&void 0!==n?n:g]});function h(t){return Object(p.flatMap)(t,t=>t)}var A=n(162);function O({blockClientId:t,richTextIdentifier:e=null,range:n=null,selector:r="range",source:o="default",id:a=Object(A.a)()}){const i={type:"ANNOTATION_ADD",id:a,blockClientId:t,richTextIdentifier:e,source:o,selector:r};return"range"===r&&(i.range=n),i}function y(t){return{type:"ANNOTATION_REMOVE",annotationId:t}}function w(t,e,n){return{type:"ANNOTATION_UPDATE_RANGE",annotationId:t,start:e,end:n}}function N(t){return{type:"ANNOTATION_REMOVE_SOURCE",source:t}}const T=Object(f.createReduxStore)(u,{reducer:function(t={},e){var n,r;switch(e.type){case"ANNOTATION_ADD":const o=e.blockClientId,a={id:e.id,blockClientId:o,richTextIdentifier:e.richTextIdentifier,source:e.source,selector:e.selector,range:e.range};if("range"===a.selector&&(r=a.range,!(Object(p.isNumber)(r.start)&&Object(p.isNumber)(r.end)&&r.start<=r.end)))return t;const i=null!==(n=null==t?void 0:t[o])&&void 0!==n?n:[];return{...t,[o]:[...i,a]};case"ANNOTATION_REMOVE":return Object(p.mapValues)(t,t=>v(t,t=>t.id!==e.annotationId));case"ANNOTATION_UPDATE_RANGE":return Object(p.mapValues)(t,t=>{let n=!1;const r=t.map(t=>t.id===e.annotationId?(n=!0,{...t,range:{start:e.start,end:e.end}}):t);return n?r:t});case"ANNOTATION_REMOVE_SOURCE":return Object(p.mapValues)(t,t=>v(t,t=>t.source!==e.source))}return t},selectors:r,actions:o});Object(f.register)(T)}});