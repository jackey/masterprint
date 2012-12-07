<?php

function bartik_ext_process_breadcrumb(&$variables) {
  $bread_crumb = drupal_get_breadcrumb();
  if (!drupal_is_front_page() && arg(0) != 'user') {
    $bread_crumb[] = drupal_get_title();
  }
  drupal_set_breadcrumb($bread_crumb);
  $variables['breadcrumb'] = $bread_crumb;
}
