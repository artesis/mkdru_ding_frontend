<?php

/**
 * Admin settings form.
 */
function mkdru_ding_frontend_admin_settings_form($form_state) {
  $form = array();
  $options = implode("\n", array(1500,1900,1950,1975,1990,2000,2006,2007,2008,2009,2010,2011,2012,2013,2014,2015));
  $form['mkdru_date_facets'] = array(
    '#type' => 'textarea',
    '#title' => t('Date facets values.'),
    '#description' => t('The avalaible values for date facet.'),
    '#default_value' => variable_get('mkdru_date_facets', $options),
    '#cols' => 30,
    '#rows' => 17,
  );

  $form['#submit'][] = 'mkdru_ding_frontend_admin_settings_form_submit';

  return system_settings_form($form);
}

function mkdru_ding_frontend_admin_settings_form_submit(&$form, &$form_state) {
  $options = $form_state['values']['mkdru_date_facets'];
  $options = explode("\r\n", $options);
  sort($options);
  $form_state['values']['mkdru_date_facets'] = implode("\r\n", array_reverse($options));

  return;
}
