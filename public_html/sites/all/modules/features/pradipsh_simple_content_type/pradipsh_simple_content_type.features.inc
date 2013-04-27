<?php
/**
 * @file
 * pradipsh_simple_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pradipsh_simple_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pradipsh_simple_content_type_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pradipsh_simple_content_type_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'html_page' => array(
      'name' => t('HTML page'),
      'base' => 'node_content',
      'description' => t('HTML pages containing only body field'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
