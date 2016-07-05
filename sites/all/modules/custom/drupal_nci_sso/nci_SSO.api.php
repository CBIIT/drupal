<?php
/**
 *
 * A user account is about to be created using SSO. Requires the SSO headers to be
 * set upon this hook being called. (Although this could change based on the SSO configuration,
 * it is usually standard across sites.)
 *
 * This hook is primarily intended for modules that want to store properties in
 * the serialized {users}.data column, which is automatically loaded whenever a
 * user account object is loaded, modules may add to $edit['data'] in order
 * to have their data serialized on save.
 *
 * @param $edit
 *   The array of form values submitted by the user.
 * @param $account
 *   The user object on which the operation is being performed.
 * @param $category
 *   The active category of user information being edited.
 * 
 * 
 */
function hook_nci_SSO_insert_presave(&$edit, $account, $category) {
   // Make sure that our form value 'mymodule_foo' is stored as
  // 'mymodule_bar' in the 'data' (serialized) column.
  if (isset($edit['mymodule_foo'])) {
    $edit['data']['mymodule_bar'] = $edit['mymodule_foo'];
    }
}


?>
