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

  // Exported permission: create product content.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any product content.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own product content.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any product content.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own product content.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => '管理员',
    ),
    'module' => 'node',
  );

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
