<?php
/**
 * @file
 * home_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
