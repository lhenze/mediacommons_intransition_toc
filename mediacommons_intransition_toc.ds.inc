<?php
/**
 * @file
 * mediacommons_intransition_toc.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mediacommons_intransition_toc_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|hub|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|hub|hubtoc';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'hub';
  $ds_fieldsetting->view_mode = 'hubtoc';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'hub-title',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pubdate',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_representative_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|hub|hubtoc'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|spoke|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'spoke';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|spoke|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|spoke|toc_spoke';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'spoke';
  $ds_fieldsetting->view_mode = 'toc_spoke';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'by',
          'lb-el' => 'span',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'byline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'toc-spoke-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_thumbnail_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'toc-spoke-thumb',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|spoke|toc_spoke'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_intransition_toc_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_representative_image',
        1 => 'title',
        2 => 'field_body',
        3 => 'field_co_editor',
        4 => 'field_contributors',
        5 => 'field_pubstat',
        6 => 'field_spokes',
        7 => 'field_period',
      ),
    ),
    'fields' => array(
      'field_representative_image' => 'ds_content',
      'title' => 'ds_content',
      'field_body' => 'ds_content',
      'field_co_editor' => 'ds_content',
      'field_contributors' => 'ds_content',
      'field_pubstat' => 'ds_content',
      'field_spokes' => 'ds_content',
      'field_period' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|hub|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hub|hubtoc';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hub';
  $ds_layout->view_mode = 'hubtoc';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_hub_header',
        1 => 'field_representative_image',
        2 => 'post_date',
        3 => 'title',
        4 => 'field_body',
        5 => 'field_spokes',
      ),
    ),
    'fields' => array(
      'group_hub_header' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'field_body' => 'ds_content',
      'field_spokes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|hub|hubtoc'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_full_image',
        1 => 'title',
        2 => 'field_contributors',
        3 => 'post_date',
        4 => 'field_embed',
        5 => 'field_body',
        6 => 'field_tags',
        7 => 'field_part_of',
        8 => 'comments',
      ),
      'ds_hidden' => array(
        9 => 'field_pubstat',
      ),
    ),
    'fields' => array(
      'field_full_image' => 'ds_content',
      'title' => 'ds_content',
      'field_contributors' => 'ds_content',
      'post_date' => 'ds_content',
      'field_embed' => 'ds_content',
      'field_body' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_part_of' => 'ds_content',
      'comments' => 'ds_content',
      'field_pubstat' => 'ds_hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|spoke|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|spoke|toc_spoke';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'spoke';
  $ds_layout->view_mode = 'toc_spoke';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_thumbnail_image',
        1 => 'title',
        2 => 'post_date',
        3 => 'author',
      ),
    ),
    'fields' => array(
      'field_thumbnail_image' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|spoke|toc_spoke'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mediacommons_intransition_toc_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'hubtoc';
  $ds_view_mode->label = 'TOC-hub';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['hubtoc'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'toc_spoke';
  $ds_view_mode->label = 'TOC-spoke';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['toc_spoke'] = $ds_view_mode;

  return $export;
}
