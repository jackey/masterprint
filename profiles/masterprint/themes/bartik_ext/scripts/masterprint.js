// @file 

(function ($) {
	Drupal.behaviors.settingMasterprint = {
	  attach: function (context, settings) {
		$('input.add-new-contact').click(function () {
			var name = $.trim($('#edit-contact-name').val());
			var phone = $.trim($('#edit-phone').val());
			var address = $.trim($('#edit-address').val());
			var last = $("table.field-multiple-table tbody tr").last();

			if (!name) {
				alert("请输入联系人名称");
				$('#edit-contact-name').focus();
				return false;
			}
			if (!phone) {
				alert("请输入联系人电话");
				$('#edit-phone').focus();
				return false;
			}
			if (!address) {
				alert("联系人地址");
				$('#edit-address').focus();
				return false;
			}
			var new_contact = name + " " + phone + " " + address;
			$('.form-textarea', last).val(new_contact);
			$('input[name="field_salesman_addresses_add_more"]').trigger('mousedown');
			return false;
		});

	    //隐藏修改用户的edit profile secodory tab
	    $('body.page-user-edit .secondary').hide();

	    $('.showProductThumbnail').click(function () {
	    	var src = $(this).attr('href');
	    	var img = $("<img />").attr('src', src);
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
	    		//
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
		
		var dateVal = $('#edit-field-entry-date-und-0-value-datepicker-popup-0').next('.description').text();
		$('#edit-field-entry-date-und-0-value-datepicker-popup-0').autofill({
			value: dateVal,
			defaultTextColor: '#000',
			activeTextColor: '#333'
		});


	  }
	};
})(jQuery);