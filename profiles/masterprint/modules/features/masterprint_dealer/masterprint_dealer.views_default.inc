<?php
/**
 * @file
 * masterprint_dealer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function masterprint_dealer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dealer_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'dealer_listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_dealer_client_owner' => 'field_dealer_client_owner',
    'field_created_by' => 'field_created_by',
    'created' => 'created',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dealer_client_owner';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dealer_client_owner' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_created_by' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '您尚未创建任何客户经销商。';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: 用户: 个人资料 */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'dealer' => 'dealer',
  );
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '账户名';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* 字段: 用户: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '账户邮箱';
  /* 字段: 个人资料: 所属客户 */
  $handler->display->display_options['fields']['field_dealer_client_owner']['id'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['table'] = 'field_data_field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['field'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_dealer_client_owner']['settings'] = array(
    'link' => 0,
  );
  /* 字段: 用户: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '创建于';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* 字段: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return current_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* 字段: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '资料操作';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '编辑';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'profile2/[uid]/edit?destination=[php]';
  /* Filter criterion: 用户: 有效的 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 用户: 角色 */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );

  /* Display: Client Summary */
  $handler = $view->new_display('block', 'Client Summary', 'client_summary');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* 字段: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return current_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* 字段: 个人资料: 名称 */
  $handler->display->display_options['fields']['field_dealer_name']['id'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['table'] = 'field_data_field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['field'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['relationship'] = 'profile';
  /* 字段: 个人资料: 电话 */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['relationship'] = 'profile';
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '账户名';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* 字段: 用户: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '账户邮箱';
  /* 字段: 个人资料: 所属客户 */
  $handler->display->display_options['fields']['field_dealer_client_owner']['id'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['table'] = 'field_data_field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['field'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_dealer_client_owner']['settings'] = array(
    'link' => 0,
  );
  /* 字段: 用户: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '创建于';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* 字段: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '资料操作';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '编辑';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'profile2/[uid]/edit?destination=[php]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: 个人资料: 所属客户 (field_dealer_client_owner) */
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['id'] = 'field_dealer_client_owner_target_id';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['table'] = 'field_data_field_dealer_client_owner';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['field'] = 'field_dealer_client_owner_target_id';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['exception']['title'] = '全部';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dealer_client_owner_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Total Summary */
  $handler = $view->new_display('block', 'Total Summary', 'total_summary');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '系统未找到任何客户经销商，请先添加。';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* 字段: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return current_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* 字段: 个人资料: 名称 */
  $handler->display->display_options['fields']['field_dealer_name']['id'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['table'] = 'field_data_field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['field'] = 'field_dealer_name';
  $handler->display->display_options['fields']['field_dealer_name']['relationship'] = 'profile';
  /* 字段: 个人资料: 电话 */
  $handler->display->display_options['fields']['field_tel']['id'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['table'] = 'field_data_field_tel';
  $handler->display->display_options['fields']['field_tel']['field'] = 'field_tel';
  $handler->display->display_options['fields']['field_tel']['relationship'] = 'profile';
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '账户名';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* 字段: 用户: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '账户邮箱';
  /* 字段: 个人资料: 所属客户 */
  $handler->display->display_options['fields']['field_dealer_client_owner']['id'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['table'] = 'field_data_field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['field'] = 'field_dealer_client_owner';
  $handler->display->display_options['fields']['field_dealer_client_owner']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_dealer_client_owner']['settings'] = array(
    'link' => 0,
  );
  /* 字段: 用户: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '创建于';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* 字段: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '资料操作';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '编辑';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'profile2/[uid]/edit?destination=[php]';
  $translatables['dealer_listing'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重置'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('您尚未创建任何客户经销商。'),
    t('个人资料'),
    t('Uid'),
    t('账户名'),
    t('账户邮箱'),
    t('所属客户'),
    t('创建于'),
    t('PHP'),
    t('资料操作'),
    t('编辑'),
    t('Client Summary'),
    t('名称'),
    t('电话'),
    t('全部'),
    t('Total Summary'),
    t('系统未找到任何客户经销商，请先添加。'),
  );
  $export['dealer_listing'] = $view;

  return $export;
}
