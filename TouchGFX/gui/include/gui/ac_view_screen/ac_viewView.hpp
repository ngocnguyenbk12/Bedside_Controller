#ifndef AC_VIEWVIEW_HPP
#define AC_VIEWVIEW_HPP

#include <gui_generated/ac_view_screen/ac_viewViewBase.hpp>
#include <gui/ac_view_screen/ac_viewPresenter.hpp>

class ac_viewView : public ac_viewViewBase
{
public:
    ac_viewView();
    virtual ~ac_viewView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Personal Function //
    virtual void AC_setup();
    virtual void AC_setdown();
    virtual void AC_setonoff();
    virtual void AC_setlow();
    virtual void AC_setmed();
    virtual void AC_sethigh();

protected:
    uint16_t Counter = 20;

//    bit AC_onoff_state  = 0 ;
};

#endif // AC_VIEWVIEW_HPP
