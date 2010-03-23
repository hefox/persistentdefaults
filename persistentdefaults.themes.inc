<?php

function theme_persistentdefaults_formatter_persistent_text($element) {
  $node = $element['#node'];
  $output = '';
  $txt = ($allowed =_text_allowed_values($element)) ? $allowed : $element['#item']['safe'];
  $field = content_fields($element['#field_name'],$element['#node']->type);
  if (empty($txt) && $field['widget']['persistentdefaults']) {
    return $field['widget']['persistentdefaults'];
  }
  return $txt;
}