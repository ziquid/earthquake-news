<?php
/**
 * @file
 */

/**
 * get the weightings for keywords.
 *
 * @todo: get it from the taxonomy.
 *
 */
function feeds_articles_get_weightings() {

  $weightings = array(
    'base' => array(
      'aftershock' => 3,
      'aftershocks' => 3,
      'earthquake' => 3,
      'earthquakes' => 3,
      'epicenter' => 3,
      'magnitude' => 3,
      'quake' => 3,
      'quakes' => 3,
      'seismic' => 3,

      'aftermath' => 2,
      'casualties' => 2,
      'damage' => 2,
      'damaged' => 2,
      'death toll' => 2,
      'debris' => 1,
      'destroy' => 1,
      'destroyed' => 1,
      'landslide' => 2,
      'survivors' => 2,
      'tsunami' => 2,

      'a-hole' => -100,
      'b\*tch' => -100,
      'badass' => -100,
      'damn' => -100,
      'f---' => -100,
      'f\*ck' => -100,
      'motherf\*\*cker' => -100,
      'sh\*t' => -100,
      'wtf' => -100,
    )
  );

  $weightings['Quakes'] = $weightings['base'];

  $weightings['Japan'] = array(
    'Japan' => 3,
  ) + $weightings['Quakes'];

  $weightings['Ecuador'] = array(
    'Ecuador' => 3,
  ) + $weightings['Quakes'];

  $weightings['Preparation'] = array(
    'anti-seismic' => 3,
    'avoid' => 1,
    'expert' => 2,
    'experts' => 2,
    'infrastructure' => 1,
    'observed' => 1,
    'prediction' => 3,
    'preparing' => 3,
    'preparation' => 3,
    'protect' => 3,
    'protection' => 3,
    'quake-proof' => 3,
    'quake-proofing' => 3,
    'researcher' => 2,
    'researchers' => 2,
    'scientist' => 2,
    'scientists' => 2,
  ) + $weightings['Quakes'];


  unset($weightings['base']);

  return $weightings;

}
