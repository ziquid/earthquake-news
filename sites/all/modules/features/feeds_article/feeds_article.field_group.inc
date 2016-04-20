<?php
/**
 * @file
 * feeds_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feeds_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_byline|node|article|default';
  $field_group->group_name = 'group_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '0',
    'children' => array(
      0 => 'field_imported_author',
      1 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-byline field-group-fieldset',
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_byline|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_generated_data|node|article|form';
  $field_group->group_name = 'group_generated_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generated Data',
    'weight' => '10',
    'children' => array(
      0 => 'field_highest_relevance',
      1 => 'field_highest_relevance_section',
      2 => 'field_relevance_log',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-generated-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_generated_data|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imported_data|node|article|form';
  $field_group->group_name = 'group_imported_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imported Data',
    'weight' => '8',
    'children' => array(
      0 => 'field_imported_author',
      1 => 'field_imported_categories',
      2 => 'field_imported_date',
      3 => 'field_imported_description',
      4 => 'field_imported_geo_locations',
      5 => 'field_imported_guid',
      6 => 'field_imported_node_id',
      7 => 'field_imported_published_date',
      8 => 'field_imported_source_link',
      9 => 'field_imported_title',
      10 => 'field_imported_url',
      11 => 'field_imported_user_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Imported Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-imported-data field-group-fieldset',
        'description' => 'If this content was imported from a third party, these fields will contain the raw imported data',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_imported_data|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pulled_data|node|article|form';
  $field_group->group_name = 'group_pulled_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pulled Data',
    'weight' => '9',
    'children' => array(
      0 => 'field_pulled_url',
      1 => 'field_pulled_title',
      2 => 'field_pulled_deck',
      3 => 'field_pulled_description',
      4 => 'field_pulled_body',
      5 => 'field_pulled_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pulled-data field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pulled_data|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_front_page_text|node|article|front_page';
  $field_group->group_name = 'group_text_front_page_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'front_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_deck',
      1 => 'field_section',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-front-page-text field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_text_front_page_text|node|article|front_page'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Byline');
  t('Generated Data');
  t('Imported Data');
  t('Pulled Data');
  t('Text');

  return $field_groups;
}
