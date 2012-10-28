// @file 

(function ($) {
	Drupal.behaviors.settingMasterprint = {
	  attach: function (context, settings) {
	    //隐藏修改用户的edit profile secodory tab
	    $('body.page-user-edit .secondary').hide();

	    $('.showProductThumbnail').click(function () {
	    	var src = $(this).attr('href');
	    	var img = $("<img />").attr('src', src);
	    	console.log(img);
	    	try {
	    		var maxBody = $('body').height();
	    		$.modal(img, {
	    			maxHeight: 600,
	    			maxWidth: 700,
					opacity:80,
					overlayCss: {backgroundColor:"#000"}
	    		});
	    	}
	    	catch (e) {

	    	}
	    	return false;
	    });
	  }
	};
})(jQuery);