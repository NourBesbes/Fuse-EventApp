// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseSelectionSelection_Value_Property;}

namespace g{

// internal sealed class EventApp_FuseSelectionSelection_Value_Property :82
// {
::g::Uno::UX::Property1_type* EventApp_FuseSelectionSelection_Value_Property_typeof();
void EventApp_FuseSelectionSelection_Value_Property__ctor_2_fn(EventApp_FuseSelectionSelection_Value_Property* __this, ::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseSelectionSelection_Value_Property__Get_fn(EventApp_FuseSelectionSelection_Value_Property* __this, uString** __retval);
void EventApp_FuseSelectionSelection_Value_Property__New1_fn(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name, EventApp_FuseSelectionSelection_Value_Property** __retval);
void EventApp_FuseSelectionSelection_Value_Property__get_Object_fn(EventApp_FuseSelectionSelection_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseSelectionSelection_Value_Property__Set_fn(EventApp_FuseSelectionSelection_Value_Property* __this, uString* v, uObject* origin);
void EventApp_FuseSelectionSelection_Value_Property__get_SupportsOriginSetter_fn(EventApp_FuseSelectionSelection_Value_Property* __this, bool* __retval);

struct EventApp_FuseSelectionSelection_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Selection::Selection*> _obj;

    void ctor_2(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseSelectionSelection_Value_Property* New1(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
