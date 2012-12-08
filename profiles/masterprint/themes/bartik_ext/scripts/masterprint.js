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

	    // 产品发货地方要检查用户选择的物流公司
	    var form = $('#page-delivery-product-sure');
	    var company_id = $('#edit-delivery-company', form).val();
	    var delivery_no = $('#edit-delivery-serial-no', form).val();
	    var company_name = $('#edit-delivery-company-other', form).val();
	    var company_phone = $('#edit-delivery-company-phone', form).val();
	    var history_print_link = $('#print_link', form).attr('href');
	    //print/[product_id]?company_id=[]&delivery_no=[]&company_phone=[]&company_name=[]
	    $('#print_link', form).attr('href', function (i,h) {
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
	    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
	    });

	    //
	    $('#edit-delivery-company', form).change(function () {
		    var company_id = $('#edit-delivery-company', form).val();
		    var delivery_no = $('#edit-delivery-serial-no', form).val();
		    var company_name = $('#edit-delivery-company-other', form).val();
		    var company_phone = $('#edit-delivery-company-phone', form).val();
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
		    $('#print_link', form).attr('href', function (i,h) {
	    		var param = {
	    			company_id: company_id,
	    			delivery_no: delivery_no,
	    			company_phone: company_phone,
	    			company_name: company_name
	    		};
	    		var query = $.param(param);
		    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
		    });
	    });

	    $('#edit-delivery-serial-no', form).change(function () {
		    var company_id = $('#edit-delivery-company', form).val();
		    var delivery_no = $('#edit-delivery-serial-no', form).val();
		    var company_name = $('#edit-delivery-company-other', form).val();
		    var company_phone = $('#edit-delivery-company-phone', form).val();
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
		    $('#print_link', form).attr('href', function (i,h) {
	    		var param = {
	    			company_id: company_id,
	    			delivery_no: delivery_no,
	    			company_phone: company_phone,
	    			company_name: company_name
	    		};
	    		var query = $.param(param);
		    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
		    });
	    });

	    $('#edit-delivery-company-other', form).change(function () {
		    var company_id = $('#edit-delivery-company', form).val();
		    var delivery_no = $('#edit-delivery-serial-no', form).val();
		    var company_name = $('#edit-delivery-company-other', form).val();
		    var company_phone = $('#edit-delivery-company-phone', form).val();
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
		    $('#print_link', form).attr('href', function (i,h) {
	    		var param = {
	    			company_id: company_id,
	    			delivery_no: delivery_no,
	    			company_phone: company_phone,
	    			company_name: company_name
	    		};
	    		var query = $.param(param);
		    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
		    });
	    });

	    $('#edit-delivery-company-phone', form).change(function () {
		    var company_id = $('#edit-delivery-company', form).val();
		    var delivery_no = $('#edit-delivery-serial-no', form).val();
		    var company_name = $('#edit-delivery-company-other', form).val();
		    var company_phone = $('#edit-delivery-company-phone', form).val();
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
		    $('#print_link', form).attr('href', function (i,h) {
	    		var param = {
	    			company_id: company_id,
	    			delivery_no: delivery_no,
	    			company_phone: company_phone,
	    			company_name: company_name
	    		};
	    		var query = $.param(param);
		    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
		    });
	    });


	    $('#edit-delivery-company', form).change(function () {
		    var company_id = $('#edit-delivery-company', form).val();
		    var delivery_no = $('#edit-delivery-serial-no', form).val();
		    var company_name = $('#edit-delivery-company-other', form).val();
		    var company_phone = $('#edit-delivery-company-phone', form).val();
    		var param = {
    			company_id: company_id,
    			delivery_no: delivery_no,
    			company_phone: company_phone,
    			company_name: company_name
    		};
    		var query = $.param(param);
		    $('#print_link', form).attr('href', function (i,h) {
	    		var param = {
	    			company_id: company_id,
	    			delivery_no: delivery_no,
	    			company_phone: company_phone,
	    			company_name: company_name
	    		};
	    		var query = $.param(param);
		    	return history_print_link + (history_print_link.indexOf('?') == -1 ? "?" + query: '&' + query);
		    });
	    });
		$('#edit-name').autofill({
			value: '请输入用户名',
			defaultTextColor: '#000',
			activeTextColor: '#333'
		});
		$('#edit-pass').autofill({
			value: '请输入密码',
			defaultTextColor: '#000',
			activeTextColor: '#333'
		});
	  }
	};
})(jQuery);