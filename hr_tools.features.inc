<?php
/**
 * @file
 * hr_tools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_tools_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_tools_node_info() {
  $items = array(
    'hr_tool' => array(
      'name' => t('Tool'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
