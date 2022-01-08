<?php
/**
 * @file
 * Contains admin callbacks for the Bootstrap Icons module.
 */

/**
 * Return the configuration page for Bootstrap Icons.
 */
function bootstrap_icons_settings_form($form, &$form_state) {
  $form['#config'] = 'bootstrap_icons.settings';
  $form['version'] = array(
    '#type' => 'select',
    '#title' => t('Library version'),
    '#description' => t('Select the library version, either CDN or locally bundled library. See the !documentation for the available icons.', array('!documentation' => l(t('Bootstrap Icons documentation'), 'https://icons.getbootstrap.com', array('external' => TRUE)))),
    '#default_value' => config_get('bootstrap_icons.settings', 'version'),
    '#options' => array(
      '1.7.2' => t('1.7.2 (CDN)'),
      'bundled' => t('1.7.2 (bundled)'),
    ),
  );

  return system_settings_form($form);
}
