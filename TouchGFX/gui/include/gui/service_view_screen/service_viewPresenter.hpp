#ifndef SERVICE_VIEWPRESENTER_HPP
#define SERVICE_VIEWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class service_viewView;

class service_viewPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    service_viewPresenter(service_viewView& v);

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

    virtual ~service_viewPresenter() {};

private:
    service_viewPresenter();

    service_viewView& view;
};

#endif // SERVICE_VIEWPRESENTER_HPP
