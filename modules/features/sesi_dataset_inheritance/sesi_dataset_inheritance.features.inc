<?php
/**
 * @file
 * sesi_dataset_inheritance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sesi_dataset_inheritance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}