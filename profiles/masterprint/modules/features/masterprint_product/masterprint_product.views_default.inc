<?php
/**
 * @file
 * masterprint_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function masterprint_product_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'my_sale_staff';
  $view->description = '我的客户列表';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'my_sale_staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '我的客户列表';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name' => 'name',
    'view_user' => 'view_user',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'dealer' => 'dealer',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '用户名';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Profile: 电话 */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tel']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tel']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tel']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tel']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tel']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tel']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tel']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tel']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tel']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tel']['field_api_classes'] = 0;
  /* Field: Profile: 联系人 */
  $handler->display->display_options['fields']['field_dealer_contacter']['id'] = 'field_dealer_contacter';
  $handler->display->display_options['fields']['field_dealer_contacter']['table'] = 'field_data_field_dealer_contacter';
  $handler->display->display_options['fields']['field_dealer_contacter']['field'] = 'field_dealer_contacter';
  $handler->display->display_options['fields']['field_dealer_contacter']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dealer_contacter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dealer_contacter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dealer_contacter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dealer_contacter']['field_api_classes'] = 0;
  /* Field: Profile: 名称 */
  $handler->display->display_options['fields']['field_dealer_name']['id'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['table'] = 'field_data_field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['field'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['relationship'] = 'profile';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '查看';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_user']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_user']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_user']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_user']['text'] = '销售员资料';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '编辑';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '销售员资料';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]/edit/salesman';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: Block-我的销售员列表 */
  $handler = $view->new_display('block', 'Block-我的销售员列表', 'block');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;

  /* Display: Block-我的经销商列表 */
  $handler = $view->new_display('block', 'Block-我的经销商列表', 'block_1');
  $translatables['my_sale_staff'] = array(
    t('Master'),
    t('我的客户列表'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Profile'),
    t('用户名'),
    t('电话'),
    t('联系人'),
    t('名称'),
    t('查看'),
    t('销售员资料'),
    t('编辑'),
    t('user/[uid]/edit/salesman'),
    t('Block-我的销售员列表'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Block-我的经销商列表'),
  );
  $export['my_sale_staff'] = $view;

  return $export;
}
