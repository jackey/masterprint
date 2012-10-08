// @file 

(function ($) {
	Drupal.behaviors.settingMasterprint = {
	  attach: function (context, settings) {
	    //隐藏修改用户的edit profile secodory tab
	    $('body.page-user-edit .secondary').hide();
	  }
	};
})(jQuery);