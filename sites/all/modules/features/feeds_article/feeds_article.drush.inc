<?php

/**
 * Implements hook_drush_command().
 */
function feeds_article_drush_command() {

  $items = array();

  $items['rescore-all'] = array(
    'description' => 'Rescore all articles.',
  );

  return $items;

}


function drush_feeds_article_rescore_all() {

  return feeds_article_rescore(TRUE);

}
