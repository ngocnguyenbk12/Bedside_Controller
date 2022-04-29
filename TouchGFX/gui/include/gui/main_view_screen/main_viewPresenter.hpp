#ifndef MAIN_VIEWPRESENTER_HPP
#define MAIN_VIEWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class main_viewView;

class main_viewPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    main_viewPresenter(main_viewView& v);

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

    virtual ~main_viewPresenter() {};

private:
    main_viewPresenter();

    main_viewView& view;
};

#endif // MAIN_VIEWPRESENTER_HPP
