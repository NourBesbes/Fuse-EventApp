// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_ExploreItem_ImageName_Property.h>
#include <_root.ExploreItem.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_ExploreItem_ImageName_Property :91
// {
static void EventApp_ExploreItem_ImageName_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::ExploreItem_typeof(), offsetof(::g::EventApp_ExploreItem_ImageName_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_ExploreItem_ImageName_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_ExploreItem_ImageName_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_ExploreItem_ImageName_Property", options);
    type->fp_build_ = EventApp_ExploreItem_ImageName_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_ExploreItem_ImageName_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_ExploreItem_ImageName_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_ExploreItem_ImageName_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_ExploreItem_ImageName_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_ExploreItem_ImageName_Property(ExploreItem obj, Uno.UX.Selector name) :94
void EventApp_ExploreItem_ImageName_Property__ctor_2_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :96
void EventApp_ExploreItem_ImageName_Property__Get_fn(EventApp_ExploreItem_ImageName_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->ImageName(), void();
}

// public EventApp_ExploreItem_ImageName_Property New(ExploreItem obj, Uno.UX.Selector name) :94
void EventApp_ExploreItem_ImageName_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, EventApp_ExploreItem_ImageName_Property** __retval)
{
    *__retval = EventApp_ExploreItem_ImageName_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :95
void EventApp_ExploreItem_ImageName_Property__get_Object_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :97
void EventApp_ExploreItem_ImageName_Property__Set_fn(EventApp_ExploreItem_ImageName_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetImageName(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :98
void EventApp_ExploreItem_ImageName_Property__get_SupportsOriginSetter_fn(EventApp_ExploreItem_ImageName_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_ExploreItem_ImageName_Property(ExploreItem obj, Uno.UX.Selector name) [instance] :94
void EventApp_ExploreItem_ImageName_Property::ctor_2(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_ExploreItem_ImageName_Property New(ExploreItem obj, Uno.UX.Selector name) [static] :94
EventApp_ExploreItem_ImageName_Property* EventApp_ExploreItem_ImageName_Property::New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    EventApp_ExploreItem_ImageName_Property* obj1 = (EventApp_ExploreItem_ImageName_Property*)uNew(EventApp_ExploreItem_ImageName_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
