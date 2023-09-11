Ubercart Payment Method Adjustments
======================

This module is an add-on module for the Ubercart e-commerce suite that allows an
order total to be adjusted based on the payment method chosen by the customer.
For instance if you'd like to charge a $1.00 fee for people paying with Paypal,
you can set that up with this module.

Installation
------------

- Install this module using [the official Backdrop CMS instructions](https://backdropcms.org/guide/modules).

- Visit the configuration page under Administration > Configuration > Category >
  Foo (admin/config/category/foo) and enter the required information.

- Any additional steps.

Documentation
-------------

After enabling the uc_pma module you will be able to go to Administer->Store Administration->Configuration->Payment Settings->Payment Methods in order to set up these payment adjustments. Adjustment fields will be added to your form where you can specify a flat amount or percentage to be added or subtracted from an order that uses the associated payment method.

These fees and discounts will then be displayed to the customer during the checkout process with small print underneath the payment method which summarizes the adjustment.

One important note is that a percentage fee applies only to the sub-total. So if you've setup a 15% Check fee, you could have the following cart (assuming a $10 product, a 10% sales tax, and $4 flat rate shipping).

$10.00 Subtotal
$ 1.00 Sales Tax
$ 4.00 Flat Rate Shipping
$ 1.50 Check Fee
--------------
$16.50 Total


Differences from Drupal 7
-------------------------

List them here, or remove this section if none.

Issues
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/uc_pma/issues).

Current Maintainers
-------------------

- [Robert J. Lang](https://github.com/bugfolder)

Credits
-------

- Ported to Backdrop CMS by [Robert J. Lang](https://github.com/bugfolder).
- Drupal 6/7 module compiled by [Ryan](https://www.drupal.org/u/rszrama) from a patch by cYu.
- Drupal 6/7 module maintained by [xurlzaemon](https://www.drupal.org/u/xurizaemon) and [longwave](https://www.drupal.org/u/longwave).
- D6 version sponsored by [Acuity](http://acuity.ch/m) and supported by [Fuzion Development](https://www.drupal.org/fuzion).

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.

