<?php
/**
 * @file
 * ae_participants.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function ae_participants_defaultconfig_features() {
  return array(
    'ae_participants' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function ae_participants_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit own ae_participant profile.
  $permissions['edit own ae_participant profile'] = array(
    'name' => 'edit own ae_participant profile',
    'roles' => array(
      'administrator' => 'administrator',
      'participant' => 'participant',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own ae_participant profile.
  $permissions['view own ae_participant profile'] = array(
    'name' => 'view own ae_participant profile',
    'roles' => array(
      'administrator' => 'administrator',
      'participant' => 'participant',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
