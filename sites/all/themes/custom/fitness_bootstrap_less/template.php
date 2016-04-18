<?php

/**/
function fitness_bootstrap_less_preprocess_html(&$variables) {

// viewport
  $meta_viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' =>  'width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0',
    )
  );

  drupal_add_html_head($meta_viewport, 'meta_viewport');

// add bg image if node has one
  if (arg(0) == 'node') {

    $node = node_load(arg(1));
    $image_uri = '';

    if (isset($node->field_image[LANGUAGE_NONE][0]['uri'])) {

      $image_uri = image_style_url('1200px_wide',
        $node->field_image[LANGUAGE_NONE][0]['uri']
      );

    }

    if (empty($image_uri)) { // no image?  choose one from term

      if (isset($node->field_section[LANGUAGE_NONE][0])) { // has a section

        $section = taxonomy_term_load(
          $node->field_section[LANGUAGE_NONE][0]['tid']
        );

        if (isset($section->field_images[LANGUAGE_NONE][0]['uri'])) {

          $num_images = count($section->field_images[LANGUAGE_NONE]);
          $node_hash = intval(substr(md5($node->title), -7), 16);
          $rand_key = ($node_hash % $num_images);
          $image_uri = image_style_url('1200px_wide',
            $section->field_images[LANGUAGE_NONE][$rand_key]['uri']
          );

        }

      } // has a section

    } // get default image from term

    if (isset($image_uri)) {

      drupal_add_css('
        body {
          background: url("' . $image_uri . '") center center fixed;
          -moz-background-size: cover;
          -webkit-background-size: cover;
          -o-background-size: cover;
          background-size: cover;
        }', array(
          'group' => CSS_THEME,
          'type' => 'inline',
          'weight' => -10,
          'media' => 'screen',
        )
      );

      $variables['styles'] = drupal_get_css();

    } // do we have an image?

  } // is this a node?

} // preprocess_html()


function fitness_bootstrap_less_preprocess_views_view_unformatted(&$vars) {

  $view = $vars['view'];
  $rows = $vars['rows'];

  if ($view->name == 'top_5_articles' && $view->current_display == 'page_1')
    foreach ($rows as $id => $row) {

      $vars['classes_array'][$id] .=
        ($id == 0 ? ' col-xs-12 col-sm-8' : ' col-xs-6 col-sm-4')
        . ' panel';

    }

	if ($view->name == 'top_5_articles' && $view->current_display == 'block_1')
    foreach ($rows as $id => $row)
      $vars['classes_array'][$id] .= ' col-xs-6 col-sm-4 panel';

}
