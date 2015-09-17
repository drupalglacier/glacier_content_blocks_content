<?php

/**
 * @file
 * Custom theme implementation for a content paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

hide($content['field_pg_content_image']);
hide($content['field_pg_content_image_position']);

?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (render($content['field_pg_content_image'])): ?>
    <div class="o-media o-media--mobile-reset">
      <div class="o-media__figure<?php if ($content['field_pg_content_image_position'][0]['#markup'] == 'right'): ?>-rev<?php endif; ?>">
        <?php print render($content['field_pg_content_image']); ?>
      </div>
      <div class="o-media__body">
        <?php print render($content); ?>
      </div>
    </div>
  <?php else: ?>
    <?php print render($content); ?>
  <?php endif; ?>
</div>
