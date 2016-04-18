<?php
/**
 * @file
 * section_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function section_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'sections' => array(
      'name' => 'Sections',
      'machine_name' => 'sections',
      'description' => 'Sections, the highest-ranking category on your site',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
