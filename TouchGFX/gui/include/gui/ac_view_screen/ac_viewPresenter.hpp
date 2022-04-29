#ifndef AC_VIEWPRESENTER_HPP
#define AC_VIEWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ac_viewView;

class ac_viewPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ac_viewPresenter(ac_viewView& v);

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

    virtual ~ac_viewPresenter() {};

private:
    ac_viewPresenter();

    ac_viewView& view;
};

#endif // AC_VIEWPRESENTER_HPP
