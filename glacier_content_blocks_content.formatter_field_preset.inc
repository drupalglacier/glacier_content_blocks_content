<?php
/**
 * @file
 * glacier_content_blocks_content.formatter_field_preset.inc
 */

/**
 * Implements hook_formatter_field_preset_settings_info().
 */
function glacier_content_blocks_content_formatter_field_preset_settings_info() {
  $export = array();

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_large';
  $formatter_field_preset->name = 'Large';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'image';
  $formatter_field_preset->settings = array(
    'image_style' => 'pg_content_image_large_size_l',
    'image_link' => '',
  );
  $export['pg_content_image_large'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_large_zoom';
  $formatter_field_preset->name = 'Large (Zoom)';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'colorbox';
  $formatter_field_preset->settings = array(
    'colorbox_node_style' => 'pg_content_image_large_size_l',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'rm_system_lightbox',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['pg_content_image_large_zoom'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_medium';
  $formatter_field_preset->name = 'Medium';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'image';
  $formatter_field_preset->settings = array(
    'image_style' => 'pg_content_image_medium_size_l',
    'image_link' => '',
  );
  $export['pg_content_image_medium'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_medium_zoom';
  $formatter_field_preset->name = 'Medium (Zoom)';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'colorbox';
  $formatter_field_preset->settings = array(
    'colorbox_node_style' => 'pg_content_image_medium_size_l',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'rm_system_lightbox',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['pg_content_image_medium_zoom'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_small';
  $formatter_field_preset->name = 'Small';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'image';
  $formatter_field_preset->settings = array(
    'image_style' => 'pg_content_image_small_size_l',
    'image_link' => '',
  );
  $export['pg_content_image_small'] = $formatter_field_preset;

  $formatter_field_preset = new stdClass();
  $formatter_field_preset->api_version = 1;
  $formatter_field_preset->disabled = FALSE;
  $formatter_field_preset->machine_name = 'pg_content_image_small_zoom';
  $formatter_field_preset->name = 'Small (Zoom)';
  $formatter_field_preset->field = 'field_pg_content_image';
  $formatter_field_preset->format = 'colorbox';
  $formatter_field_preset->settings = array(
    'colorbox_node_style' => 'pg_content_image_small_size_l',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'rm_system_lightbox',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['pg_content_image_small_zoom'] = $formatter_field_preset;

  return $export;
}
