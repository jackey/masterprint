<?php
/**
 * @file
 * masterprint_ae.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_ae_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage ae accounts.
  $permissions['manage ae accounts'] = array(
    'name' => 'manage ae accounts',
    'roles' => array(
      0 => 'administrator',
      1 => '管理员',
    ),
    'module' => 'masterprint_ae',
  );

  return $permissions;
}
