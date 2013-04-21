<?php
/**
 * @file
 * pradipsh_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pradipsh_home_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
