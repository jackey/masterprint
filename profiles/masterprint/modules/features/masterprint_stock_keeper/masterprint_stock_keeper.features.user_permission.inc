<?php
/**
 * @file
 * masterprint_stock_keeper.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_stock_keeper_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage stock_keeper accounts.
  $permissions['manage stock_keeper accounts'] = array(
    'name' => 'manage stock_keeper accounts',
    'roles' => array(
      0 => 'administrator',
      1 => '管理员',
    ),
    'module' => 'masterprint_stock_keeper',
  );

  return $permissions;
}
