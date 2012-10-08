<?php
/**
 * @file
 * masterprint_product.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function masterprint_product_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function masterprint_product_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function masterprint_product_node_info() {
  $items = array(
    'product_apply' => array(
      'name' => t('印刷产品'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('产品名称'),
      'help' => '',
    ),
  );
  return $items;
}
