<?php
/**
 * @file
 * pnw_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnw_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function pnw_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Handbook Page'),
      'base' => 'node_content',
      'description' => t('Use for adding for adding regular pages to site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
