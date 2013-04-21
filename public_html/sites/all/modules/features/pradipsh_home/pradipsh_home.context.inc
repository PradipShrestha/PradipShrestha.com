<?php
/**
 * @file
 * pradipsh_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pradipsh_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'single-column-layout';
  $context->description = 'Defines context for single column page';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'single_column_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines context for single column page');
  t('theme');
  $export['single-column-layout'] = $context;

  return $export;
}
