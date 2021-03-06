<?php
/**
 * @file
 * pro_101_answers_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pro_101_answers_feature_taxonomy_default_vocabularies() {
  return array(
    'question_category' => array(
      'name' => 'Question Category',
      'machine_name' => 'question_category',
      'description' => 'For categorizing frequently asked questions.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
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
