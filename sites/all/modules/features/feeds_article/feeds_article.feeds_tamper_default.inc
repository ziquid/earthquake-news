<?php
/**
 * @file
 * feeds_article.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feeds_article_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'feed-description-absolute_url';
  $feeds_tamper->importer = 'feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'absolute_url';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Make URLs absolute';
  $export['feed-description-absolute_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'feed-description-strip_tags';
  $feeds_tamper->importer = 'feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '<em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <big> <h2>',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['feed-description-strip_tags'] = $feeds_tamper;

  return $export;
}
