<?php
/**
 * @file
 * masterprint_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function masterprint_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'admin_listing';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一页';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 前一页';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一页 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '末页 »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'php' => 'php',
    'field_fullname' => 'field_fullname',
    'field_tel' => 'field_tel',
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_created_by' => 'field_created_by',
    'created' => 'created',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_fullname';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fullname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tel' => array(
      'sortable' => 1,
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
  $handler->display->display_options['empty']['area']['content'] = '您尚未创建任何管理员。';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: 用户: 个人资料 */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'admin' => 'admin',
  );
  /* 字段: 用户: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* 字段: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Current Path';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return current_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* 字段: 个人资料: 姓名 */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['relationship'] = 'profile';
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
  /* 字段: 用户: 创建人 */
  $handler->display->display_options['fields']['field_created_by']['id'] = 'field_created_by';
  $handler->display->display_options['fields']['field_created_by']['table'] = 'field_data_field_created_by';
  $handler->display->display_options['fields']['field_created_by']['field'] = 'field_created_by';
  $handler->display->display_options['fields']['field_created_by']['settings'] = array(
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
  /* Sort criterion: 用户: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    9 => '9',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'created_by_user');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['admin_listing'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重置'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« 第一页'),
    t('‹ 前一页'),
    t('下一页 ›'),
    t('末页 »'),
    t('您尚未创建任何管理员。'),
    t('个人资料'),
    t('Uid'),
    t('Current Path'),
    t('姓名'),
    t('电话'),
    t('账户名'),
    t('账户邮箱'),
    t('创建人'),
    t('创建于'),
    t('资料操作'),
    t('编辑'),
    t('Block'),
  );
  $export['admin_listing'] = $view;

  return $export;
}
