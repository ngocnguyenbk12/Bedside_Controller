#ifndef TIME_SETTINGPRESENTER_HPP
#define TIME_SETTINGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Time_SettingView;

class Time_SettingPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Time_SettingPresenter(Time_SettingView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Time_SettingPresenter() {};

private:
    Time_SettingPresenter();

    Time_SettingView& view;
};

#endif // TIME_SETTINGPRESENTER_HPP
