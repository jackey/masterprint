<?php

function bartik_ext_process_breadcrumb(&$variables) {
  $bread_crumb = drupal_get_breadcrumb();
  if (!drupal_is_front_page() && arg(0) != 'user') {
    $bread_crumb[] = drupal_get_title();
  }
  drupal_set_breadcrumb($bread_crumb);
  $variables['breadcrumb'] = $bread_crumb;
}

/**
 * Implements hook_preprocess_page().
 */
function bartik_ext_preprocess_page(&$vars) {
  $path = $_GET['q'];
	// Exin
	if ((arg() == array('user') && user_is_anonymous()) || $path == 'user/password') {
		$vars['theme_hook_suggestions'][] = 'page__login';
	}
}

/**
 * Implements hook_theme().
 */
function bartik_ext_theme() {
  $themes = array();
  $themes['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'bartik_ext'). '/templates',
    'template' => 'user_login_form',
  );
  $themes['menu_local_tasks'] = array(
    'variables' => array(),
    'template' => 'menu_local_tasks',
    'path' => drupal_get_path('theme', 'bartik_ext'). '/templates',
    'preprocess functions' => array(
      'bartik_ext_menu_local_tasks_process'
    ),
  );

  return $themes;
}

// custom THEMENAME_menu_local_tasks().
function bartik_ext_menu_local_tasks_process(&$variables) {
  $variables['primary'] = menu_primary_local_tasks();
  $variables['secondary'] = menu_secondary_local_tasks();
  $variables['breadcrumb'] = theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb()));
}