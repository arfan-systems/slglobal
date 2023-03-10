<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function search_api_stats_views_default_views() {
  $view = new view();
  $view->name = 'search_api_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_stats';
  $view->human_name = 'search reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'search reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access search api stats';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 30, 40, 60, 70';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = [
    'keywords_1' => 'keywords_1',
    'keywords' => 'keywords',
    'uid' => 'uid',
    'timestamp' => 'timestamp',
    'language' => 'language',
  ];
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = [
    'keywords_1' => [
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'keywords' => [
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'uid' => [
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'timestamp' => [
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'language' => [
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
  ];
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Search API stats: User ID */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'search_api_stats';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords_1']['id'] = 'keywords_1';
  $handler->display->display_options['fields']['keywords_1']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords_1']['field'] = 'keywords';
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords']['id'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['group_type'] = 'count';
  /* Field: Search API stats: Page */
  $handler->display->display_options['fields']['page']['id'] = 'page';
  $handler->display->display_options['fields']['page']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['page']['field'] = 'page';
  /* Field: Search API stats: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['group_type'] = 'max';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last Search Time';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'search_api_stats';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];

  /* Display: Search Stats Summary */
  $handler = $view->new_display('page', 'Search Stats Summary', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'search reports summary';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords_1']['id'] = 'keywords_1';
  $handler->display->display_options['fields']['keywords_1']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords_1']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['keywords_1']['alter']['path'] = 'admin/reports/search-api-report/details?keywords=[keywords_1]';
  $handler->display->display_options['fields']['keywords_1']['alter']['alt'] = 'Detail view of queries with: [keywords_1]';
  $handler->display->display_options['fields']['keywords_1']['alter']['target'] = '_blank';
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords']['id'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['group_type'] = 'count';
  $handler->display->display_options['fields']['keywords']['label'] = 'Times';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = 'How many user(s) searched';
  /* Field: Search API stats: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['group_type'] = 'max';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last Search Time';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search API stats: Keywords */
  $handler->display->display_options['filters']['keywords']['id'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['filters']['keywords']['field'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['operator'] = 'contains';
  $handler->display->display_options['filters']['keywords']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keywords']['expose']['operator_id'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keywords']['expose']['operator'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];
  /* Filter criterion: Search API stats: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'search_api_stats';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];
  $handler->display->display_options['path'] = 'admin/reports/search-api-report/summary';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Search API Stats Summary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Search Stats';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Search Stats Details */
  $handler = $view->new_display('page', 'Search Stats Details', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Stats Details';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = [
    'keywords_1' => 'keywords_1',
    'timestamp' => 'timestamp',
    'name' => 'name',
    'language' => 'language',
  ];
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = [
    'keywords_1' => [
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'timestamp' => [
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'name' => [
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
    'language' => [
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ],
  ];
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Search API stats: User ID */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'search_api_stats';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords_1']['id'] = 'keywords_1';
  $handler->display->display_options['fields']['keywords_1']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords_1']['field'] = 'keywords';
  /* Field: Search API stats: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Date';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = TRUE;
  $handler->display->display_options['fields']['name']['anonymous_text'] = 'anonymous';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search API stats: Keywords */
  $handler->display->display_options['filters']['keywords']['id'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['filters']['keywords']['field'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['operator'] = 'contains';
  $handler->display->display_options['filters']['keywords']['group'] = 1;
  $handler->display->display_options['filters']['keywords']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keywords']['expose']['operator_id'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keywords']['expose']['operator'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];
  /* Filter criterion: Search API stats: Timestamp */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'search_api_stats';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['group'] = 1;
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'UserName';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = [
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  ];
  $handler->display->display_options['path'] = 'admin/reports/search-api-report/details';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Search API Stats Details';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Search Stats';
  $handler->display->display_options['tab_options']['weight'] = '6';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Search Phase';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 30, 40, 60, 70';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords_1']['id'] = 'keywords_1';
  $handler->display->display_options['fields']['keywords_1']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords_1']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['keywords_1']['label'] = '';
  $handler->display->display_options['fields']['keywords_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['keywords_1']['element_label_colon'] = FALSE;
  /* Field: Search API stats: Keywords */
  $handler->display->display_options['fields']['keywords']['id'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['fields']['keywords']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['label'] = '';
  $handler->display->display_options['fields']['keywords']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['keywords']['alter']['text'] = '[keywords]([keywords_1])';
  $handler->display->display_options['fields']['keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Search API stats: Keywords */
  $handler->display->display_options['sorts']['keywords']['id'] = 'keywords';
  $handler->display->display_options['sorts']['keywords']['table'] = 'search_api_stats';
  $handler->display->display_options['sorts']['keywords']['field'] = 'keywords';
  $handler->display->display_options['sorts']['keywords']['group_type'] = 'count';
  $handler->display->display_options['sorts']['keywords']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  $views[$view->name] = $view;
  return $views;
}
