<?php
/**
 * @file
 * ae_participants.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ae_participants_user_default_roles() {
  $roles = array();

  // Exported role: participant.
  $roles['participant'] = array(
    'name' => 'participant',
    'weight' => '4',
  );

  return $roles;
}
