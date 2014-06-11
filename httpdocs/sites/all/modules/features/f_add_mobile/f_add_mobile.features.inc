<?php
/**
 * @file
 * f_add_mobile.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function f_add_mobile_commerce_product_default_types() {
  $items = array(
    'accesorios' => array(
      'type' => 'accesorios',
      'name' => 'Accesorios',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
    'terminales' => array(
      'type' => 'terminales',
      'name' => 'Terminales',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function f_add_mobile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_add_mobile_node_info() {
  $items = array(
    'accesorios' => array(
      'name' => t('Accesorios'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'terminales' => array(
      'name' => t('Terminales'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
