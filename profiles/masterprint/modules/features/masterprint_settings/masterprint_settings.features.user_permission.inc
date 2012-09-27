<?php
/**
 * @file
 * masterprint_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function masterprint_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any admin profile.
  $permissions['edit any admin profile'] = array(
    'name' => 'edit any admin profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any ae profile.
  $permissions['edit any ae profile'] = array(
    'name' => 'edit any ae profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any main profile.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit own admin profile.
  $permissions['edit own admin profile'] = array(
    'name' => 'edit own admin profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own ae profile.
  $permissions['edit own ae profile'] = array(
    'name' => 'edit own ae profile',
    'roles' => array(
      0 => 'AE业务经理',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own main profile.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any admin profile.
  $permissions['view any admin profile'] = array(
    'name' => 'view any admin profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view any ae profile.
  $permissions['view any ae profile'] = array(
    'name' => 'view any ae profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view any main profile.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view own admin profile.
  $permissions['view own admin profile'] = array(
    'name' => 'view own admin profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own ae profile.
  $permissions['view own ae profile'] = array(
    'name' => 'view own ae profile',
    'roles' => array(
      0 => 'AE业务经理',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own main profile.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
