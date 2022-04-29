#ifndef SERVICE_VIEWVIEW_HPP
#define SERVICE_VIEWVIEW_HPP

#include <gui_generated/service_view_screen/service_viewViewBase.hpp>
#include <gui/service_view_screen/service_viewPresenter.hpp>

class service_viewView : public service_viewViewBase
{
public:
    service_viewView();
    virtual ~service_viewView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SERVICE_VIEWVIEW_HPP
