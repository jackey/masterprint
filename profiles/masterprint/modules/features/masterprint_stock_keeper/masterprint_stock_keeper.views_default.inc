<?php
/**
 * @file
 * masterprint_stock_keeper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function masterprint_stock_keeper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stock_keeper_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'stock_keeper_listing';
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
    'name_1' => 'name_1',
    'mail' => 'mail',
    'field_created_by' => 'field_created_by',
    'created' => 'created',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'name_1';
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
    'nothing' => array(
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
  $handler->display->display_options['empty']['area']['content'] = '系统未找到任何仓储管理员，请先添加。';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: 用户: 个人资料 */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'stock_keeper' => 'stock_keeper',
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
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return current_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* 字段: 个人资料: 仓库名称 */
  $handler->display->display_options['fields']['field_stock_address']['id'] = 'field_stock_address';
  $handler->display->display_options['fields']['field_stock_address']['table'] = 'field_data_field_stock_address';
  $handler->display->display_options['fields']['field_stock_address']['field'] = 'field_stock_address';
  $handler->display->display_options['fields']['field_stock_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_stock_address']['label'] = '仓库地址';
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
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '账户操作';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '编辑';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'stock_keeper/[uid]/edit?destination=[php]';
  /* Contextual filter: 用户: 创建人 (field_created_by) */
  $handler->display->display_options['arguments']['field_created_by_target_id']['id'] = 'field_created_by_target_id';
  $handler->display->display_options['arguments']['field_created_by_target_id']['table'] = 'field_data_field_created_by';
  $handler->display->display_options['arguments']['field_created_by_target_id']['field'] = 'field_created_by_target_id';
  $handler->display->display_options['arguments']['field_created_by_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_created_by_target_id']['exception']['title'] = '全部';
  $handler->display->display_options['arguments']['field_created_by_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_created_by_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_created_by_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_created_by_target_id']['summary_options']['items_per_page'] = '25';
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
    5 => '5',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'created_by_user');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['stock_keeper_listing'] = array(
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
    t('系统未找到任何仓储管理员，请先添加。'),
    t('个人资料'),
    t('Uid'),
    t('PHP'),
    t('仓库地址'),
    t('账户邮箱'),
    t('创建人'),
    t('创建于'),
    t('账户操作'),
    t('编辑'),
    t('全部'),
    t('Block'),
  );
  $export['stock_keeper_listing'] = $view;

  return $export;
}
