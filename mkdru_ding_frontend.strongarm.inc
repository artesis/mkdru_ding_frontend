<?php
/**
 * @file
 * mkdru_ding_frontend.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mkdru_ding_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_defaults';
  $strongarm->value = array(
    'title' => '',
    'pz2_path' => '/pazpar2/search.pz2',
    'use_sessions' => 1,
    'sp' => array(
      'user' => '',
      'pass' => '',
    ),
    'facets' => array(
      'source' => array(
        'displayName' => 'Source',
        'pz2Name' => 'xtargets',
        'limiter' => NULL,
        'multiLimit' => 0,
        'max' => 10,
        'orderWeight' => 1,
      ),
      'subject' => array(
        'displayName' => 'Subject',
        'pz2Name' => 'subject',
        'limiter' => 'su',
        'multiLimit' => 1,
        'max' => 10,
        'orderWeight' => 2,
      ),
      'author' => array(
        'displayName' => 'Author',
        'pz2Name' => 'author',
        'limiter' => 'au',
        'multiLimit' => 0,
        'max' => 10,
        'orderWeight' => 3,
      ),
    ),
  );
  $export['mkdru_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_ding';
  $strongarm->value = array(
    'pz2_path' => '/service-proxy/',
    'use_sessions' => 0,
    'disable_ranking' => 0,
    'sp' => array(
      'user' => 'DADSTest',
      'pass' => 'DADSTest',
    ),
    'facets' => array(
      'source' => array(
        'displayName' => 'Source',
        'pz2Name' => 'xtargets',
        'limiter' => '',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '1',
        'remove' => 'Remove source facet',
      ),
      'subject' => array(
        'displayName' => 'Subject',
        'pz2Name' => 'subject',
        'limiter' => 'su',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '2',
        'remove' => 'Remove subject facet',
      ),
      'author' => array(
        'displayName' => 'Author',
        'pz2Name' => 'author',
        'limiter' => 'au',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '3',
        'remove' => 'Remove author facet',
      ),
      'Date' => array(
        'displayName' => 'Date',
        'pz2Name' => 'date',
        'limiter' => '',
        'multiLimit' => 0,
        'max' => '10',
        'orderWeight' => '0',
        'remove' => 'Remove Date facet',
      ),
      'Fulltext' => array(
        'displayName' => 'Fulltext',
        'pz2Name' => 'fulltext',
        'limiter' => '',
        'multiLimit' => 0,
        'max' => '1',
        'orderWeight' => '0',
        'remove' => 'Remove Fulltext facet',
      ),
    ),
    'specific_author_field' => '',
    'specific_subject_field' => '',
  );
  $export['mkdru_ding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mkdru_facets';
  $strongarm->value = array(
    0 => 'source',
    1 => 'subject',
    2 => 'author',
  );
  $export['mkdru_facets'] = $strongarm;

  return $export;
}
