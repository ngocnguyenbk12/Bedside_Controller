/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/service_view_screen/service_viewViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

service_viewViewBase::service_viewViewBase() :
    buttonCallback(this, &service_viewViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_TEXTURES_WHITEWALL_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    BACK.setXY(303, 6);
    BACK.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    BACK.setLabelText(touchgfx::TypedText(T___SINGLEUSE_QFSI));
    BACK.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    BACK.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    BACK.setAction(buttonCallback);

    SER_CALL.setXY(20, 16);
    SER_CALL.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    SER_CALL.setLabelText(touchgfx::TypedText(T___SINGLEUSE_PUHB));
    SER_CALL.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_CALL.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_CALL.setAction(buttonCallback);

    SER_CLEAN.setXY(20, 76);
    SER_CLEAN.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    SER_CLEAN.setLabelText(touchgfx::TypedText(T___SINGLEUSE_S72S));
    SER_CLEAN.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_CLEAN.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_CLEAN.setAction(buttonCallback);

    SER_LAUNDRY.setXY(20, 136);
    SER_LAUNDRY.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    SER_LAUNDRY.setLabelText(touchgfx::TypedText(T___SINGLEUSE_6QCO));
    SER_LAUNDRY.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_LAUNDRY.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_LAUNDRY.setAction(buttonCallback);

    SER_FUNCTION.setXY(20, 196);
    SER_FUNCTION.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    SER_FUNCTION.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8EBQ));
    SER_FUNCTION.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_FUNCTION.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SER_FUNCTION.setAction(buttonCallback);

    add(__background);
    add(tiledImage1);
    add(BACK);
    add(SER_CALL);
    add(SER_CLEAN);
    add(SER_LAUNDRY);
    add(SER_FUNCTION);
}

void service_viewViewBase::setupScreen()
{

}

void service_viewViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &BACK)
    {
        //SER_back
        //When BACK clicked change screen to main_view
        //Go to main_view with no screen transition
        application().gotomain_viewScreenNoTransition();
    }
    else if (&src == &SER_CALL)
    {
        //SER_call
        //When SER_CALL clicked call virtual function
        //Call SER_call
        SER_call();
    }
    else if (&src == &SER_CLEAN)
    {
        //SER_clean
        //When SER_CLEAN clicked call virtual function
        //Call SER_clean
        SER_clean();
    }
    else if (&src == &SER_LAUNDRY)
    {
        //SER_laundry
        //When SER_LAUNDRY clicked call virtual function
        //Call SER_laundry
        SER_laundry();
    }
    else if (&src == &SER_FUNCTION)
    {
        //SER_function
        //When SER_FUNCTION clicked call virtual function
        //Call SER_function
        SER_function();
    }
}
