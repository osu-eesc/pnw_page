<?php
/**
 * @file
 * pnw_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnw_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_date|node|page|default';
  $field_group->group_name = 'group_author_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_revision_date',
      1 => 'field_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'author-date-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author_date|node|page|default'] = $field_group;

  return $export;
}
