<?php
/**
 * @file
 * webhook_slack.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function webhook_slack_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "webhook" && $api == "webhook") {
    return array("version" => "1");
  }
}