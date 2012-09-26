<?php
/**
 * @file
 * masterprint_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function masterprint_settings_user_default_roles() {
  $roles = array();

  // Exported role: AE业务经理.
  $roles['AE业务经理'] = array(
    'name' => 'AE业务经理',
    'weight' => '3',
  );

  // Exported role: account executive.
  $roles['account executive'] = array(
    'name' => 'account executive',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => '5',
  );

  // Exported role: dealer.
  $roles['dealer'] = array(
    'name' => 'dealer',
    'weight' => '7',
  );

  // Exported role: salesman.
  $roles['salesman'] = array(
    'name' => 'salesman',
    'weight' => '6',
  );

  // Exported role: stock keeper.
  $roles['stock keeper'] = array(
    'name' => 'stock keeper',
    'weight' => '4',
  );

  // Exported role: 仓储管理员.
  $roles['仓储管理员'] = array(
    'name' => '仓储管理员',
    'weight' => '4',
  );

  // Exported role: 客户.
  $roles['客户'] = array(
    'name' => '客户',
    'weight' => '5',
  );

  // Exported role: 客户的经销商.
  $roles['客户的经销商'] = array(
    'name' => '客户的经销商',
    'weight' => '7',
  );

  // Exported role: 客户销售人员.
  $roles['客户销售人员'] = array(
    'name' => '客户销售人员',
    'weight' => '6',
  );

  // Exported role: 管理员.
  $roles['管理员'] = array(
    'name' => '管理员',
    'weight' => '2',
  );

  return $roles;
}
