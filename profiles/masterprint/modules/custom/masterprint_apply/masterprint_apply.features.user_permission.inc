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
    'roles' => array(
      0 => '客户的经销商',
      1 => '客户销售人员',
    ),
    'module' => 'masterprint_apply',
  );

  // Exported permission: approve apply.
  $permissions['approve apply'] = array(
    'name' => 'approve apply',
    'roles' => array(
      0 => 'AE业务经理',
      1 => '客户',
    ),
    'module' => 'masterprint_apply',
  );

  // Exported permission: list all products.
  $permissions['list all products'] = array(
    'name' => 'list all products',
    'roles' => array(
      0 => 'AE业务经理',
      1 => '管理员',
    ),
    'module' => 'masterprint_apply',
  );

  // Exported permission: view apply.
  $permissions['view apply'] = array(
    'name' => 'view apply',
    'roles' => array(
      0 => '客户',
      1 => '管理员',
    ),
    'module' => 'masterprint_apply',
  );

  return $permissions;
}
