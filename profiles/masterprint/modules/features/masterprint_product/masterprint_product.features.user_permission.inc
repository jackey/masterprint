<?php
/**
 * @file
 * masterprint_product.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_product_user_default_permissions() {
  $permissions = array();

  // Exported permission: manage masterprint products.
  $permissions['manage masterprint products'] = array(
    'name' => 'manage masterprint products',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'masterprint_product',
  );

  return $permissions;
}
