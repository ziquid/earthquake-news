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
      'active' => 2,
      'athlete' => 2,
      'athletes' => 2,
      'class' => 1,
      'classes' => 1,
      'energy' => 3,
      'exercise' => 3,
      'exercises' => 3,
      'fitness' => 3,
      'gym' => 3,
      'shape' => 1,
      'self-defense' => 3,
      'trainer' => 3,
      'training' => 3,


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


  $weightings['cardio-base'] = array(
    'metabolism' => 3,
    'pace' => 3,
    'race' => 3,
    'racing' => 3,
    'sex' => 2,
    'sport' => 3,
    'workout' => 3,
    'workouts' => 3,
    'work out' => 3,
    'working out' => 3,
  ) + $weightings['base'];

  $weightings['Cardio'] = array(
    'badminton' => 3,
    'boxing' => 3,
    'jump rope' => 3,
    'kickbox' => 3,
    'kickboxer' => 3,
    'kickboxing' => 3,
    'martial arts' => 3,
    'pose' => 2,
    'poses' => 2,
    'squash' => 3,
    'stretch' => 2,
    'stretching' => 2,
    'swim' => 3,
    'swimming' => 3,
    'tennis' => 3,
    'treadmill' => 3,
    'yoga' => 3,
    'yogi' => 3,
    'zumba' => 3,
  ) + $weightings['cardio-base'];

  $weightings['Running'] = array(
    '10k' => 2,
    '5k' => 2,
    'jog' => 3,
    'jogging' => 3,
    'jogs' => 3,
    'run' => 3,
    'runner' => 3,
    'running' => 3,
    'runs' => 2,
  ) + $weightings['cardio-base'];

  $weightings['Walking'] = array(
    'hike' => 3,
    'hiking' => 3,
    'hikes' => 3,
    'stroll' => 3,
    'strolling' => 3,
    'strolls' => 3,
    'treadmill' => 3,
    'walk' => 3,
    'walking' => 3,
    'walks' => 3,
  ) + $weightings['cardio-base'];

  $weightings['Cycling'] = array(
    'bike' => 3,
    'biking' => 3,
    'cycling' => 3,
    'cyclist' => 3,
    'spinning' => 3,
  ) + $weightings['cardio-base'];


  $weightings['Strength'] = array(
    'barbell' => 3,
    'barbells' => 3,
    'crunch' => 2,
    'crunches' => 3,
    'dumbbell' => 3,
    'dumbbells' => 3,
    'kettle bell' => 3,
    'kettlebell' => 3,
    'medicine ball' => 3,
    'muscle' => 3,
    'pace' => 3,
    'plank' => 3,
    'pull up' => 3,
    'pull ups' => 3,
    'pull-up' => 3,
    'pull-ups' => 3,
    'pullup' => 3,
    'pullups' => 3,
    'push up' => 3,
    'push ups' => 3,
    'push-up' => 3,
    'push-ups' => 3,
    'pushup' => 3,
    'pushups' => 3,
    'sport' => 3,
    'squat' => 3,
    'squatting' => 3,
    'squats' => 3,
    'strength' => 3,
    'strengthening' => 3,
    'strengthens' => 3,
    'stretch' => 2,
    'stretching' => 2,
    'testosterone' => 3,
    'tighter' => 1,
    'tone' => 3,
    'tones' => 3,
    'weight' => 2,
    'weights' => 3,
    'workout' => 3,
    'workouts' => 3,
    'work out' => 3,
    'working out' => 3,
  ) + $weightings['base'];


  $weightings['Diet'] = array(
    'berries' => 3,
    'berry' => 3,
    'calories' => 3,
    'clean' => 3,
    'cooking' => 3,
    'cough' => 3,
    'diet' => 3,
    'diarrhea' => 3,
    'dinner' => 3,
    'disease' => 3,
    'doctor' => 2,
    'doctors' => 2,
    'drink' => 3,
    'drinking' => 3,
    'drinks' => 3,
    'eat' => 3,
    'eating' => 3,
    'edible' => 3,
    'edibles' => 3,
    'energy' => 3,
    'food' => 3,
    'fruit' => 3,
    'garden' => 3,
    'gluten' => 3,
    'grains' => 3,
    'health' => 3,
    'healthier' => 3,
    'healthiest' => 3,
    'healthy' => 3,
    'hospital' => 3,
    'hospitals' => 3,
    'hunger' => 3,
    'hungry' => 3,
    'ingredients' => 3,
    'meal' => 3,
    'meals' => 3,
    'mealtime' => 3,
    'metabolism' => 3,
    'nutrients' => 3,
    'nutrition' => 3,
    'oatmeal' => 3,
    'oxygen' => 2,
    'pregnant' => 3,
    'pregnancy' => 3,
    'probiotics' => 3,
    'recipe' => 3,
    'recipes' => 3,
    'skin' => 2,
    'sick' => 3,
    'sickness' => 3,
    'smoking' => 3,
    'snack' => 3,
    'sugar' => 3,
    'sugary' => 3,
    'vegan' => 3,
    'vegetarian' => 3,
    'water' => 3,
    'weight' => 3,
  ) + $weightings['base'];


  $weightings['Gear'] = array(
    'bras' => 3,
    'clothes' => 3,
    'fitbit' => 3,
    'gear' => 3,
    'products' => 3,
    'shoes' => 3,
    'sneakers' => 3,
    'tech' => 3,
    'watch' => 1,
  ) + $weightings['base'];


  $weightings['More'] = array(
    'behind-the-scenes' => 3,
    'celebrate' => 3,
    'educate' => 3,
    'inspiration' => 3,
    'inspire' => 3,
    'inspired' => 3,
    'sleep' => 3,
    'snore' => 3,
    'snoring' => 3,
  ) + $weightings['base'];


  unset($weightings['base'], $weightings['cardio-base']);

  return $weightings;

}
