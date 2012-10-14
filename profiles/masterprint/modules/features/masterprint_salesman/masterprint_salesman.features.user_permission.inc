<?php
/**
 * @file
 * masterprint_salesman.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_salesman_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage salesman accounts.
  $permissions['manage salesman accounts'] = array(
    'name' => 'manage salesman accounts',
    'roles' => array(
      0 => 'AE业务经理',
      1 => '管理员',
    ),
    'module' => 'masterprint_salesman',
  );

  return $permissions;
}
