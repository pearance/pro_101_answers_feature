<?php
/**
 * @file
 * pro_101_answers_feature.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_answers_feature_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:faq-page
  $menu_links['main-menu:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'Answers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Answers');


  return $menu_links;
}
