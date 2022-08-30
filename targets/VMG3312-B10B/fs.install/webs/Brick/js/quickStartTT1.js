function nextWizardStateTT(wizardDB, id, MLGsave){
	var buttomPana = wizardDB.parents('.ui-dialog').find('.ui-dialog-buttonpane');
	var titlePana = wizardDB.parents('.ui-dialog').find('.ui-dialog-titlebar');
	switch (id) {
		case 'welcome':
			if ( isInetExist() && checkInternetValue() && saveConfig() && saveWlConfig()) {
			 wizardDB.find('#welcome').hide(0);
			 wizardDB.find('#internetsetting').hide(0);
			 wizardDB.find('#wirelesssetting').hide(0);
			 wizardDB.find('#waiting').show(0);
			 wizardDB.find('#result').hide(0);
             buttomPana.children('Button:nth-child(3)').removeAttr('disabled');//back
             buttomPana.children('Button:nth-child(2)').removeAttr('disabled').html(MLGsave);
			 titlePana.children('.ui-dialog-titlebar-close').hide(0);
			 buttomPana.children('Button:nth-child(1)').attr('disabled', 'disabled');//close
			 buttomPana.children('Button:nth-child(2)').attr('disabled', 'disabled');//next
			 buttomPana.children('Button:nth-child(3)').attr('disabled', 'disabled');//back	
			}
			else {
                               ;
			}

            break;

		case 'waiting':

			wizardDB.find('#welcome').hide(0);
			wizardDB.find('#internetsetting').hide(0);
			wizardDB.find('#wirelesssetting').hide(0);
			wizardDB.find('#waiting').hide(0);
			wizardDB.find('#result').show(0);
			
			titlePana.children('.ui-dialog-titlebar-close').show(0);
			buttomPana.children('Button:nth-child(1)').removeAttr('disabled');
			buttomPana.children('Button:nth-child(2)').hide();
			buttomPana.children('Button:nth-child(3)').hide();
			break;				          

		default:
			wizardDB.dialog('close');
			break; 
	}
}