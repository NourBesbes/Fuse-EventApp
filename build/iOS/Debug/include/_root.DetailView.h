// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/DetailView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Placeholder;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DetailView;}
namespace g{struct TitleText;}

namespace g{

// public partial sealed class DetailView :2
// {
::g::Fuse::Controls::Panel_type* DetailView_typeof();
void DetailView__ctor_8_fn(DetailView* __this, ::g::Fuse::Navigation::Router* router1);
void DetailView__InitializeUX_fn(DetailView* __this);
void DetailView__New5_fn(::g::Fuse::Navigation::Router* router1, DetailView** __retval);

struct DetailView : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return DetailView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DetailView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DetailView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return DetailView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return DetailView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return DetailView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return DetailView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DetailView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DetailView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DetailView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return DetailView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return DetailView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return DetailView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return DetailView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return DetailView_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Panel*> backgroundPicture;
    uStrong< ::g::TitleText*> bottomText;
    uStrong< ::g::Uno::UX::Property1*> bottomText_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Image*> facePicture;
    uStrong< ::g::Uno::UX::Property1*> facePicture_Url_inst;
    uStrong< ::g::Fuse::Controls::MultiLayoutPanel*> headerPanel;
    uStrong< ::g::Uno::UX::Property1*> headerPanel_LayoutElement_inst;
    uStrong< ::g::Fuse::Controls::Placeholder*> overBackgroundLayout;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::iOS::StatusBarConfig*> statusBarConfig;
    uStrong< ::g::Uno::UX::Property1*> statusBarConfig_Style_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> textPanel;
    uStrong< ::g::TitleText*> topText;
    uStrong< ::g::Uno::UX::Property1*> topText_Value_inst;
    uStrong< ::g::Fuse::Controls::Placeholder*> underBackgroundLayout;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static DetailView* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
