<?php
/**
 * @file
 * feeds_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feeds_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feeds_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feeds_article_image_default_styles() {
  $styles = array();

  // Exported image style: 1200px_wide.
  $styles['1200px_wide'] = array(
    'label' => '1200px wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 600x600.
  $styles['600x600'] = array(
    'label' => '600x600',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 600x900.
  $styles['600x900'] = array(
    'label' => '600x900',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feeds_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('An article, the basic content type of the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feed' => array(
      'name' => t('Feed'),
      'base' => 'node_content',
      'description' => t('Subscribe to RSS or Atom feeds. Creates nodes of the content type "Article" from feed content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
