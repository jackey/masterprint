<div class="form-name">
	<?php print drupal_render($form['name']);?>
</div>

<div class="form-pass">
	<?php print drupal_render($form['pass'])?>
</div>

<div class="actions">
	<div class="links forget-password">
		<?php //print l(t('忘记密码'), 'user/password')?>
	</div>
	<?php print drupal_render($form['actions'])?>
</div>

<?php print drupal_render_children($form)?>