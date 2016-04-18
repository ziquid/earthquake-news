<?php
/**
 * @file
 * section_taxonomy.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function section_taxonomy_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_term_relevance'
  $field_bases['field_term_relevance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_term_relevance',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        3 => 'Highly Relevant (+3)',
        2 => 'Relevant (+2)',
        1 => 'Somewhat Relevant (+1)',
        -1 => 'Somewhat Irrelevant (-1)',
        -2 => 'Irrelevant (-2)',
        -3 => 'Highly Irrelevant (-3)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
