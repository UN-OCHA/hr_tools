<?php
/**
 * @file
 * hr_tools.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_tools_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_tools';
  $context->description = 'In tools space';
  $context->tag = 'tools';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'applications/tools' => 'applications/tools',
        'applications/tools/*' => 'applications/tools/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hr_toolbox_categories-block' => array(
          'module' => 'views',
          'delta' => 'hr_toolbox_categories-block',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('In tools space');
  t('tools');
  $export['hr_tools'] = $context;

  return $export;
}
