<?php
/**
 * @file
 * masterprint_client.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_client_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage client accounts.
  $permissions['manage client accounts'] = array(
    'name' => 'manage client accounts',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'masterprint_client',
  );

  return $permissions;
}
