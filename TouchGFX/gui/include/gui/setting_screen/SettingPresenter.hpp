#ifndef SETTINGPRESENTER_HPP
#define SETTINGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SettingView;

class SettingPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SettingPresenter(SettingView& v);

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

    virtual ~SettingPresenter() {};

private:
    SettingPresenter();

    SettingView& view;
};

#endif // SETTINGPRESENTER_HPP
