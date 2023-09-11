<?php
/**
 * @file
 * Theme functions for the Ubercart Payment Adjustments module.
 */

// Retheme the payment method settings table to include the adjustment field.
function theme_uc_pma_payment_method_table($variables) {
  $form = $variables['form'];

  backdrop_add_tabledrag('uc-payment-methods', 'order', 'sibling', 'uc-payment-method-weight');

  $header = array(t('Payment method'), t('List position'), t('Adjustment'), t('Operations'));

  $rows = array();
  foreach (element_children($form) as $method) {
    $row = array(
      backdrop_render($form[$method]['uc_payment_method_' . $method . '_checkout']),
      backdrop_render($form[$method]['uc_payment_method_' . $method . '_weight']),
      backdrop_render($form[$method]['uc_payment_method_' . $method . '_adjustment']),
      backdrop_render($form[$method]['settings']),
    );

    $rows[] = array(
      'data' => $row,
      'class' => array('draggable'),
    );
  }

  return theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'uc-payment-methods')));
}
