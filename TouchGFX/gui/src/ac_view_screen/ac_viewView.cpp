#include <gui/ac_view_screen/ac_viewView.hpp>

static int AC_onoff_state  = 0;
static uint8_t Temperature = 20;


ac_viewView::ac_viewView()
{

}

void ac_viewView::setupScreen()
{
    ac_viewViewBase::setupScreen();

    if(AC_onoff_state == 0){
        Temperature = 00;
        Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
        textArea1.invalidate();
    }
    else
    {
    	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
    	textArea1.invalidate();
    }
}

void ac_viewView::tearDownScreen()
{
    ac_viewViewBase::tearDownScreen();
}

void ac_viewView::AC_setup(){
	if(AC_onoff_state == 1){
		if(Temperature < 30){
			Temperature++;
			Counter++;
			Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
			textArea1.invalidate();
		}
		else{
			Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
			textArea1.invalidate();
		}
	}
}

void ac_viewView::AC_setdown()
{
	if(AC_onoff_state == 1){
		if(Temperature > 15){
			Temperature--;
			Counter--;
			Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
			textArea1.invalidate();
		}
		else
		{
			Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
			textArea1.invalidate();
		}
	}
}


void ac_viewView::AC_setonoff(){
	// function to turn off AC
    if(AC_onoff_state == 0){
        Temperature = 22;
        Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
        textArea1.invalidate();
        AC_onoff_state = 1;
    }
    else
    {
    	AC_onoff_state = 0;
    	Temperature = 00;
    	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
    	textArea1.invalidate();
    }


}
void ac_viewView::AC_setlow(){
	if(AC_onoff_state == 1){
	Temperature = 18;
	Counter--;
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
	textArea1.invalidate();
	}
}

void ac_viewView::AC_setmed(){
	if(AC_onoff_state == 1 ){
	Temperature = 22;
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
	textArea1.invalidate();
	}
}

void ac_viewView::AC_sethigh(){
	if(AC_onoff_state == 1){
	Temperature = 26;
	Counter++;
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%u", Temperature);
	textArea1.invalidate();
	}

}
