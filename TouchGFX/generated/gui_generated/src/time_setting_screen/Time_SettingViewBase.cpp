/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/time_setting_screen/Time_SettingViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Time_SettingViewBase::Time_SettingViewBase() :
    buttonCallback(this, &Time_SettingViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_TEXTURES_WHITEWALL_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    Back.setXY(310, 0);
    Back.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    Back.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ESQY));
    Back.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Back.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Back.setAction(buttonCallback);

    SAVE.setXY(10, 0);
    SAVE.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    SAVE.setLabelText(touchgfx::TypedText(T___SINGLEUSE_XIFN));
    SAVE.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SAVE.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SAVE.setAction(buttonCallback);

    TIME_SETTING_BUTTON_UP.setXY(317, 122);
    TIME_SETTING_BUTTON_UP.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID));
    TIME_SETTING_BUTTON_UP.setIconXY(15, 22);
    TIME_SETTING_BUTTON_UP.setAction(buttonCallback);

    TIME_SETTING_BUTTON_RIGHT.setXY(377, 182);
    TIME_SETTING_BUTTON_RIGHT.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID));
    TIME_SETTING_BUTTON_RIGHT.setIconXY(22, 15);
    TIME_SETTING_BUTTON_RIGHT.setAction(buttonCallback);

    TIME_SETTING_BUTTON_LEFT.setXY(317, 182);
    TIME_SETTING_BUTTON_LEFT.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    TIME_SETTING_BUTTON_LEFT.setIconXY(22, 15);
    TIME_SETTING_BUTTON_LEFT.setAction(buttonCallback);

    TIME_SETTING_BUTTON_DOWN.setXY(377, 122);
    TIME_SETTING_BUTTON_DOWN.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID));
    TIME_SETTING_BUTTON_DOWN.setIconXY(15, 22);
    TIME_SETTING_BUTTON_DOWN.setAction(buttonCallback);

    digitalClock1.setPosition(95, 122, 130, 70);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W9L3));
    digitalClock1.displayLeadingZeroForHourIndicator(false);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(10, 10, 0);

    add(__background);
    add(tiledImage1);
    add(Back);
    add(SAVE);
    add(TIME_SETTING_BUTTON_UP);
    add(TIME_SETTING_BUTTON_RIGHT);
    add(TIME_SETTING_BUTTON_LEFT);
    add(TIME_SETTING_BUTTON_DOWN);
    add(digitalClock1);
}

void Time_SettingViewBase::setupScreen()
{

}

void Time_SettingViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Back)
    {
        //Back
        //When Back clicked change screen to Setting
        //Go to Setting with no screen transition
        application().gotoSettingScreenNoTransition();
    }
    else if (&src == &SAVE)
    {
        //Setting_Time_Save
        //When SAVE clicked call virtual function
        //Call Setting_Time_Save
        Setting_Time_Save();
    }
    else if (&src == &TIME_SETTING_BUTTON_UP)
    {
        //Setting_Time_up
        //When TIME_SETTING_BUTTON_UP clicked call virtual function
        //Call Setting_Time_up
        Setting_Time_up();
    }
    else if (&src == &TIME_SETTING_BUTTON_RIGHT)
    {
        //Setting_Time_right
        //When TIME_SETTING_BUTTON_RIGHT clicked call virtual function
        //Call Setting_Time_right
        Setting_Time_right();
    }
    else if (&src == &TIME_SETTING_BUTTON_LEFT)
    {
        //Setting_Time_left
        //When TIME_SETTING_BUTTON_LEFT clicked call virtual function
        //Call Setting_Time_left
        Setting_Time_left();
    }
    else if (&src == &TIME_SETTING_BUTTON_DOWN)
    {
        //Setting_Time_down
        //When TIME_SETTING_BUTTON_DOWN clicked call virtual function
        //Call Setting_Time_down
        Setting_Time_down();
    }
}
