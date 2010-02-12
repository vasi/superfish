<?php // $Id$
/**
 * @file superfish.admin.inc
 * Functions that are only called on the admin pages.
 */

/**
 * Module settings form.
 */
function superfish_menu_settings() {
  $form['superfish_number'] = array(
    '#type' => 'select',
    '#title' => t('Number of blocks'),
    '#multiple' => FALSE,
    '#options' => array(
      t('1'),
      t('2'),
      t('3'),
      t('4'),
      t('5'),
      t('6'),
      t('7'),
      t('8'),
      t('9'),
      t('10'),
      t('11'),
      t('12'),
      t('13'),
      t('14'),
      t('15'),
      t('16'),
      t('17'),
      t('18'),
      t('19'),
      t('20'),
    ),
    '#description' => t('The number of Superfish menu blocks you need.'),
    '#default_value' => variable_get('superfish_number', 2),
  );
  $form['superfish_hid'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable hoverIntent detection.'),
    '#default_value' => variable_get('superfish_hid', 1),
  );
  return system_settings_form($form);
}