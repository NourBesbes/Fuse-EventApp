// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.HitTestMode.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseElementsElement_HitTestMode_Property;}

namespace g{

// internal sealed class EventApp_FuseElementsElement_HitTestMode_Property :190
// {
::g::Uno::UX::Property1_type* EventApp_FuseElementsElement_HitTestMode_Property_typeof();
void EventApp_FuseElementsElement_HitTestMode_Property__ctor_2_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseElementsElement_HitTestMode_Property__Get_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, int* __retval);
void EventApp_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, EventApp_FuseElementsElement_HitTestMode_Property** __retval);
void EventApp_FuseElementsElement_HitTestMode_Property__get_Object_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseElementsElement_HitTestMode_Property__Set_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, int* v, uObject* origin);
void EventApp_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, bool* __retval);

struct EventApp_FuseElementsElement_HitTestMode_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseElementsElement_HitTestMode_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
