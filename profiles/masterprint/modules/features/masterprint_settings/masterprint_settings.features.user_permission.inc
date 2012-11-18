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

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'AE业务经理',
      1 => 'administrator',
      2 => 'authenticated user',
      3 => '仓储管理员',
      4 => '管理员',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => '管理员',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

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

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any admin profile.
  $permissions['edit any admin profile'] = array(
    'name' => 'edit any admin profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any ae profile.
  $permissions['edit any ae profile'] = array(
    'name' => 'edit any ae profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any client profile.
  $permissions['edit any client profile'] = array(
    'name' => 'edit any client profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any dealer profile.
  $permissions['edit any dealer profile'] = array(
    'name' => 'edit any dealer profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any salesman profile.
  $permissions['edit any salesman profile'] = array(
    'name' => 'edit any salesman profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any stock_keeper profile.
  $permissions['edit any stock_keeper profile'] = array(
    'name' => 'edit any stock_keeper profile',
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

  // Exported permission: edit own client profile.
  $permissions['edit own client profile'] = array(
    'name' => 'edit own client profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own dealer profile.
  $permissions['edit own dealer profile'] = array(
    'name' => 'edit own dealer profile',
    'roles' => array(
      0 => '客户',
      1 => '客户的经销商',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own salesman profile.
  $permissions['edit own salesman profile'] = array(
    'name' => 'edit own salesman profile',
    'roles' => array(
      0 => '客户',
      1 => '客户销售人员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own stock_keeper profile.
  $permissions['edit own stock_keeper profile'] = array(
    'name' => 'edit own stock_keeper profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: manage own profile2.
  $permissions['manage own profile2'] = array(
    'name' => 'manage own profile2',
    'roles' => array(
      0 => 'AE业务经理',
      1 => '仓储管理员',
      2 => '客户',
      3 => '客户的经销商',
      4 => '客户销售人员',
      5 => '管理员',
    ),
    'module' => 'masterprint_user',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: select different theme.
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
    'module' => 'admin',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: use admin toolbar.
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(),
    'module' => 'admin',
  );

  // Exported permission: view any admin profile.
  $permissions['view any admin profile'] = array(
    'name' => 'view any admin profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any ae profile.
  $permissions['view any ae profile'] = array(
    'name' => 'view any ae profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view any client profile.
  $permissions['view any client profile'] = array(
    'name' => 'view any client profile',
    'roles' => array(
      0 => '客户',
      1 => '客户的经销商',
      2 => '客户销售人员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any dealer profile.
  $permissions['view any dealer profile'] = array(
    'name' => 'view any dealer profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any salesman profile.
  $permissions['view any salesman profile'] = array(
    'name' => 'view any salesman profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any stock_keeper profile.
  $permissions['view any stock_keeper profile'] = array(
    'name' => 'view any stock_keeper profile',
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

  // Exported permission: view own client profile.
  $permissions['view own client profile'] = array(
    'name' => 'view own client profile',
    'roles' => array(
      0 => '客户',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own dealer profile.
  $permissions['view own dealer profile'] = array(
    'name' => 'view own dealer profile',
    'roles' => array(
      0 => '客户',
      1 => '客户的经销商',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own salesman profile.
  $permissions['view own salesman profile'] = array(
    'name' => 'view own salesman profile',
    'roles' => array(
      0 => '客户',
      1 => '客户销售人员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own stock_keeper profile.
  $permissions['view own stock_keeper profile'] = array(
    'name' => 'view own stock_keeper profile',
    'roles' => array(
      0 => '管理员',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(),
    'module' => 'system',
  );

  return $permissions;
}
