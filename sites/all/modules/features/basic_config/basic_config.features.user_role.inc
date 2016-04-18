<?php
/**
 * @file
 * basic_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function basic_config_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 5,
  );

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => 2,
  );

  // Exported role: Developer.
  $roles['Developer'] = array(
    'name' => 'Developer',
    'weight' => 6,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Title Administrator.
  $roles['Title Administrator'] = array(
    'name' => 'Title Administrator',
    'weight' => 4,
  );

  return $roles;
}
