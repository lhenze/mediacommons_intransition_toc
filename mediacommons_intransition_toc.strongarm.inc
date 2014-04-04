<?php
/**
 * @file
 * mediacommons_intransition_toc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_intransition_toc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_only';
  $strongarm->value = 'F j, Y';
  $export['date_format_date_only'] = $strongarm;

  return $export;
}
