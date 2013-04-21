<?php
/**
 * @file
 * pradipsh_home.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function pradipsh_home_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'single_column_layout';
  $delta->name = 'single-column-layout';
  $delta->description = 'Creates a single column layout delta';
  $delta->theme = 'pradipsh';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_pradipsh_settings' => array(
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_columns' => '3',
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_footer_second_columns' => '12',
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_columns' => '3',
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_content_force' => 1,
      'alpha_region_content_columns' => '24',
    ),
    'color_pradipsh_files' => NULL,
    'color_pradipsh_logo' => NULL,
    'color_pradipsh_palette' => NULL,
    'color_pradipsh_stylesheets' => NULL,
    'color_pradipsh_screenshot' => NULL,
  );
  $export['single_column_layout'] = $delta;

  return $export;
}
