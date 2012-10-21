<?php
/**
 * @file
 * masterprint_apply.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_apply_user_default_permissions() {
  $permissions = array();

  // Exported permission: apply product.
  $permissions['apply product'] = array(
    'name' => 'apply product',
    'roles' => array(),
    'module' => 'masterprint_apply',
  );

  // Exported permission: approve apply.
  $permissions['approve apply'] = array(
    'name' => 'approve apply',
    'roles' => array(),
    'module' => 'masterprint_apply',
  );

  // Exported permission: list all products.
  $permissions['list all products'] = array(
    'name' => 'list all products',
    'roles' => array(),
    'module' => 'masterprint_apply',
  );

  // Exported permission: view apply.
  $permissions['view apply'] = array(
    'name' => 'view apply',
    'roles' => array(),
    'module' => 'masterprint_apply',
  );

  return $permissions;
}
