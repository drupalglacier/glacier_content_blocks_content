<?php
/**
 * @file
 * glacier_content_blocks_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function glacier_content_blocks_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|paragraphs_item|content|form';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Buttons',
    'weight' => '2',
    'children' => array(
      0 => 'field_pg_content_buttons',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Buttons',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-buttons field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_buttons|paragraphs_item|content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|content|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_pg_content_image',
      1 => 'field_pg_content_image_format',
      2 => 'field_pg_content_image_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_image|paragraphs_item|content|form'] = $field_group;

  return $export;
}
