<?php
/**
 * @file
 * pro_101_answers_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pro_101_answers_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Category 1',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '74971cd8-6cbf-4ab4-397c-9b6c93e7648b',
    'vocabulary_machine_name' => 'question_category',
    'path' => array(
      'alias' => 'faq-page/category-1',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Category 2',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '1',
    'uuid' => '859b19dc-1769-dd44-11fd-ee909a4f994f',
    'vocabulary_machine_name' => 'question_category',
    'path' => array(
      'alias' => 'faq-page/category-2',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Category 3',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '2',
    'uuid' => 'a6f86711-cae4-be84-fd4e-b42c7162ebe9',
    'vocabulary_machine_name' => 'question_category',
    'path' => array(
      'alias' => 'faq-page/category-3',
      'pathauto' => FALSE,
    ),
  );
  return $terms;
}
