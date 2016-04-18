<?php
/**
 * @file
 * feeds_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feeds_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper feed'.
  $permissions['tamper feed'] = array(
    'name' => 'tamper feed',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper opml'.
  $permissions['tamper opml'] = array(
    'name' => 'tamper opml',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'feeds_tamper',
  );

  return $permissions;
}
