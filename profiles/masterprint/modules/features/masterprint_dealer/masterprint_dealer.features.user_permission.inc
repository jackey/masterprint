<?php
/**
 * @file
 * masterprint_dealer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_dealer_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage dealer accounts.
  $permissions['manage dealer accounts'] = array(
    'name' => 'manage dealer accounts',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '客户',
      3 => '管理员',
    ),
    'module' => 'masterprint_dealer',
  );

  return $permissions;
}
