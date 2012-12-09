<div class="form-name">
	<?php print drupal_render($form['name']);?>
</div>

<div class="form-pass">
	<?php print drupal_render($form['pass'])?>
</div>

<div class="actions">
	<?php print drupal_render($form['actions'])?>

	<div class="links">
		<?php print l(t('Forget password'), 'user/password')?>
	</div>
</div>

<?php print drupal_render_children($form)?>