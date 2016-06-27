<?php
/**
 * @file
 * basic_config.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function basic_config_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'itemprop:description' => array(
        'value' => '[node:summary]',
      ),
      'itemprop:name' => array(
        'value' => '[node:title]',
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
    ),
  );

  return $config;
}
