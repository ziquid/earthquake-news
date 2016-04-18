<?php
/**
 * @file
 * feeds_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feeds_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|front_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'front_page';
  $ds_fieldsetting->settings = array(
    'image_or_section_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|article|front_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feeds_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_byline',
        1 => 'field_imported_source_link',
        2 => 'field_deck',
        3 => 'field_imported_author',
        4 => 'body',
        5 => 'post_date',
        6 => 'field_more_info_link',
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'group_byline' => 'ds_content',
      'field_imported_source_link' => 'ds_content',
      'field_deck' => 'ds_content',
      'field_imported_author' => 'ds_content',
      'body' => 'ds_content',
      'post_date' => 'ds_content',
      'field_more_info_link' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|front_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'front_page';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'image_or_section_image',
        1 => 'group_text_front_page_text',
        2 => 'field_section',
        3 => 'title',
        4 => 'field_deck',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'image_or_section_image' => 'ds_content',
      'group_text_front_page_text' => 'ds_content',
      'field_section' => 'ds_content',
      'title' => 'ds_content',
      'field_deck' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'article',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|front_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_section',
        2 => 'field_deck',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_section' => 'ds_content',
      'field_deck' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feeds_article_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'front_page';
  $ds_view_mode->label = 'Front Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['front_page'] = $ds_view_mode;

  return $export;
}
