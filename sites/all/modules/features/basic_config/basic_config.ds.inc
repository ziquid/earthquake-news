<?php
/**
 * @file
 * basic_config.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function basic_config_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'image_or_section_image';
  $ds_field->label = 'Image or Section Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'article|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php

  $image_uri = \'\';

    if (isset($entity->field_image[LANGUAGE_NONE][0][\'uri\'])) {

      $image_uri = image_style_url(\'800x800\',
        $entity->field_image[LANGUAGE_NONE][0][\'uri\']
      );

    }

    if (empty($image_uri)) { // no image?  get default from term

      if (isset($entity->field_section[LANGUAGE_NONE][0])) { // has a section

        $section = taxonomy_term_load(
          $entity->field_section[LANGUAGE_NONE][0][\'tid\']
        );

        if (isset($section->field_images[LANGUAGE_NONE][0][\'uri\'])) {

          $num_images = count($section->field_images[LANGUAGE_NONE]);
          $node_hash = intval(substr(md5($entity->title), -7), 16);
          $rand_key = ($node_hash % $num_images);
          $image_uri = image_style_url(\'800x800\',
            $section->field_images[LANGUAGE_NONE][$rand_key][\'uri\']
          );

        }

      } // has a section

    } // get default image from term

  if (isset($image_uri))
    print l(\'<img class="img-responsive" src="\' . $image_uri . \'"/>\', \'node/\' . $entity->nid, array(\'html\' => TRUE));

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['image_or_section_image'] = $ds_field;

  return $export;
}
