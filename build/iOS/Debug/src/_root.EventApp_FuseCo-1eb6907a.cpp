// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-1eb6907a.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseControlsScrollViewBase_UserScroll_Property :176
// {
static void EventApp_FuseControlsScrollViewBase_UserScroll_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.ScrollViewBase*/], offsetof(::g::EventApp_FuseControlsScrollViewBase_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseControlsScrollViewBase_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseControlsScrollViewBase_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseControlsScrollViewBase_UserScroll_Property", options);
    type->fp_build_ = EventApp_FuseControlsScrollViewBase_UserScroll_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseControlsScrollViewBase_UserScroll_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseControlsScrollViewBase_UserScroll_Property__Set1_fn;
    return type;
}

// public EventApp_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :179
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__ctor_3_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :181
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__Get1_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[0/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(), void();
}

// public EventApp_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :179
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsScrollViewBase_UserScroll_Property** __retval)
{
    *__retval = EventApp_FuseControlsScrollViewBase_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :180
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :182
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__Set1_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[0/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(v_);
}

// public EventApp_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :179
void EventApp_FuseControlsScrollViewBase_UserScroll_Property::ctor_3(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :179
EventApp_FuseControlsScrollViewBase_UserScroll_Property* EventApp_FuseControlsScrollViewBase_UserScroll_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseControlsScrollViewBase_UserScroll_Property* obj1 = (EventApp_FuseControlsScrollViewBase_UserScroll_Property*)uNew(EventApp_FuseControlsScrollViewBase_UserScroll_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
