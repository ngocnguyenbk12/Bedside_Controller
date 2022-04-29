#ifndef LIGHT_VIEWVIEW_HPP
#define LIGHT_VIEWVIEW_HPP

#include <gui_generated/light_view_screen/light_viewViewBase.hpp>
#include <gui/light_view_screen/light_viewPresenter.hpp>

class light_viewView : public light_viewViewBase
{
public:
    light_viewView();
    virtual ~light_viewView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();


    // Personal Functions //
    virtual void LIGHT_bathset();
    virtual void LIGHT_kitchenset();
    virtual void LIGHT_bedset();
protected:
};

#endif // LIGHT_VIEWVIEW_HPP
