<?php
/**
 * @file
 * pradipsh_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pradipsh_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pradipsh_media_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pradipsh_media_image_default_styles() {
  $styles = array();

  // Exported image style: pradipsh-thumbnail.
  $styles['pradipsh-thumbnail'] = array(
    'name' => 'pradipsh-thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 304,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
