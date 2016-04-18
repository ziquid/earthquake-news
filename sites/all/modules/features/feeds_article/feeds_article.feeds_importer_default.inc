<?php
/**
 * @file
 * feeds_article.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_article_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feed';
  $feeds_importer->config = array(
    'name' => 'Feed',
    'description' => 'Import RSS or Atom feeds, create nodes from feed items.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSimplePieParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'article',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'author_name',
            'target' => 'field_imported_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'tags',
            'target' => 'field_imported_categories',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'description',
            'target' => 'field_imported_description',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'parent:nid',
            'target' => 'field_imported_node_id',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'parent:uid',
            'target' => 'field_imported_user_id',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'geolocations',
            'target' => 'field_imported_geo_locations',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'guid',
            'target' => 'field_imported_guid',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'url',
            'target' => 'field_imported_url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'timestamp',
            'target' => 'field_imported_published_date:start',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'title',
            'target' => 'field_imported_title',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'feeds_article_feed_source',
            'target' => 'field_imported_source_link:title',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'feeds_article_feed_source_link',
            'target' => 'field_imported_source_link:url',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'feeds_article_current_time',
            'target' => 'field_imported_date:start',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'limited_html',
        'author' => '7',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'feed',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'opml';
  $feeds_importer->config = array(
    'name' => 'OPML import',
    'description' => 'Import subscriptions from OPML files. Use together with "Feed" configuration.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsOPMLParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'feed',
        'update_existing' => 0,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xmlurl',
            'target' => 'feeds_source',
            'unique' => 1,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['opml'] = $feeds_importer;

  return $export;
}
