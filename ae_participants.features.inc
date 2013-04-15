<?php
/**
 * @file
 * ae_participants.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function ae_participants_default_profile2_type() {
  $items = array();
  $items['ae_participant'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "ae_participant",
    "label" : "Participant profile",
    "weight" : "10",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}
