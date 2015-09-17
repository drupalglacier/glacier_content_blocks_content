<?php
/**
 * @file
 * glacier_content_blocks_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glacier_content_blocks_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "formatter_field_preset" && $api == "formatter_field_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function glacier_content_blocks_content_image_default_styles() {
  $styles = array();

  // Exported image style: pg_content_image_large_size_l.
  $styles['pg_content_image_large_size_l'] = array(
    'label' => 'Content block content: Image large [l] (542x)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 542,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: pg_content_image_medium_size_l.
  $styles['pg_content_image_medium_size_l'] = array(
    'label' => 'Content block content: Image medium [l] (328x)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 328,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: pg_content_image_small_size_l.
  $styles['pg_content_image_small_size_l'] = array(
    'label' => 'Content block content: Image small [l] (164x)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 164,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function glacier_content_blocks_content_paragraphs_info() {
  $items = array(
    'content' => array(
      'name' => 'Content (textarea and image)',
      'bundle' => 'content',
      'locked' => '1',
    ),
  );
  return $items;
}
