<?php
/**
 * @file
 * masterprint_ae.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function masterprint_ae_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ae_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'ae_listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '您尚未创建任何AE。';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* 字段: 用户: 名称 */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '账户名';
  /* 字段: 用户: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '账户邮箱';
  /* 字段: 用户: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '创建于';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'created_by_user');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['ae_listing'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重置'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('您尚未创建任何AE。'),
    t('账户名'),
    t('账户邮箱'),
    t('创建于'),
    t('全部'),
    t('Block'),
  );
  $export['ae_listing'] = $view;

  return $export;
}
