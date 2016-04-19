<?php

/** This is a @file */

/**
 * Score a title and text and return results.
 *
 * @param string $title
 *   the title of the article.
 *
 * @param string $text
 *   the text of the article.
 *
 * @param array $scores
 *   detailed scoring results.
 *
 * @param string $log
 *   logfile.
 */
function feeds_article_score($title, $deck, $text, &$scores, &$log) {

  $weightings = feeds_articles_get_weightings();

  foreach ($weightings as $section => $weighting) {

    $scores[$section] = 0;
    $log_terms = '';

    foreach ($weighting as $term => $weight) {

// title matches
      $matches = array();
      preg_match_all('/\b' . $term . '\b/i', $title, $matches,
        PREG_OFFSET_CAPTURE);
      $num_matches = sizeof($matches[0]);

      if ($num_matches > 0) {

        $extra_weight = min(25, $num_matches * $weight * 3);
        $scores[$section] += $extra_weight;
        $log_terms .= $extra_weight . ': ' . $term . ' (title)';

        ($num_matches > 1) && $log_terms .= ' x ' . $num_matches;

        $log_terms .= "\n";

      } // any matches?

// deck matches
      $matches = array();
      preg_match_all('/\b' . $term . '\b/i', $deck, $matches,
        PREG_OFFSET_CAPTURE);
      $num_matches = sizeof($matches[0]);

      if ($num_matches > 0) {

        $extra_weight = min(25, $num_matches * $weight * 2);
        $scores[$section] += $extra_weight;
        $log_terms .= $extra_weight . ': ' . $term . ' (deck)';

        ($num_matches > 1) && $log_terms .= ' x ' . $num_matches;

        $log_terms .= "\n";

      } // any matches?

// text matches
      $matches = array();
      preg_match_all('/\b' . $term . '\b/i', $text, $matches,
        PREG_OFFSET_CAPTURE);
      $num_matches = sizeof($matches[0]);

      if ($num_matches > 0) {

        $extra_weight = min(25, $num_matches * $weight);
        $scores[$section] += $extra_weight;
        $log_terms .= $extra_weight . ': ' . $term;

        ($num_matches > 1) && $log_terms .= ' x ' . $num_matches;

        $log_terms .= "\n";

      } // any matches?

    } // foreach term

    $log .= 'Section ' . $section . ' (score: ' . $scores[$section] . ")\n"
    . $log_terms . "\n";

  } // foreach section

  $log .= "Raw text\n------------\n\n" . $text;

  return;

}

