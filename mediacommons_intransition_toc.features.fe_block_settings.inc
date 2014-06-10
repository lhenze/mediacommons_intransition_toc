<?php
/**
 * @file
 * mediacommons_intransition_toc.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mediacommons_intransition_toc_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-tochub-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tochub-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'babyzen' => array(
        'region' => 'homepage_top',
        'status' => 1,
        'theme' => 'babyzen',
        'weight' => 0,
      ),
      'intransition' => array(
        'region' => 'homepage_top',
        'status' => 1,
        'theme' => 'intransition',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
