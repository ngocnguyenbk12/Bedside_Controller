#ifndef TIME_SETTINGVIEW_HPP
#define TIME_SETTINGVIEW_HPP

#include <gui_generated/time_setting_screen/Time_SettingViewBase.hpp>
#include <gui/time_setting_screen/Time_SettingPresenter.hpp>

class Time_SettingView : public Time_SettingViewBase
{
public:
    Time_SettingView();
    virtual ~Time_SettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TIME_SETTINGVIEW_HPP
