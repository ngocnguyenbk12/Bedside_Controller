#ifndef MAIN_VIEWVIEW_HPP
#define MAIN_VIEWVIEW_HPP

#include <gui_generated/main_view_screen/main_viewViewBase.hpp>
#include <gui/main_view_screen/main_viewPresenter.hpp>

class main_viewView : public main_viewViewBase
{
public:
    main_viewView();
    virtual ~main_viewView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MAIN_VIEWVIEW_HPP
