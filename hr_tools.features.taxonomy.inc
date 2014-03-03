<?php
/**
 * @file
 * hr_tools.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hr_tools_taxonomy_default_vocabularies() {
  return array(
    'hr_tool_type' => array(
      'name' => 'Tool type',
      'machine_name' => 'hr_tool_type',
      'description' => 'Type of tool',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
