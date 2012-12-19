<?php
/**
 * @file
 * pro_101_answers_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_answers_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer faq.
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'faq',
  );

  // Exported permission: administer faq order.
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'faq',
  );

  // Exported permission: administer question_category vocabulary terms.
  $permissions['administer question_category vocabulary terms'] = array(
    'name' => 'administer question_category vocabulary terms',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'vppr',
  );

  // Exported permission: create faq content.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any faq content.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own faq content.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in question_category.
  $permissions['delete terms in question_category'] = array(
    'name' => 'delete terms in question_category',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any faq content.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own faq content.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in question_category.
  $permissions['edit terms in question_category'] = array(
    'name' => 'edit terms in question_category',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: enter faq revision log entry.
  $permissions['enter faq revision log entry'] = array(
    'name' => 'enter faq revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq authored by option.
  $permissions['override faq authored by option'] = array(
    'name' => 'override faq authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq authored on option.
  $permissions['override faq authored on option'] = array(
    'name' => 'override faq authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq promote to front page option.
  $permissions['override faq promote to front page option'] = array(
    'name' => 'override faq promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq published option.
  $permissions['override faq published option'] = array(
    'name' => 'override faq published option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq revision option.
  $permissions['override faq revision option'] = array(
    'name' => 'override faq revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override faq sticky option.
  $permissions['override faq sticky option'] = array(
    'name' => 'override faq sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: view faq page.
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'faq',
  );

  return $permissions;
}
