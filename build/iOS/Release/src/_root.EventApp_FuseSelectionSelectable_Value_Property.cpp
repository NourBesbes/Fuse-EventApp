// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseSelectionSelectable_Value_Property.h>
#include <Fuse.Selection.Selectable.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseSelectionSelectable_Value_Property :127
// {
static void EventApp_FuseSelectionSelectable_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(::g::EventApp_FuseSelectionSelectable_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseSelectionSelectable_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseSelectionSelectable_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseSelectionSelectable_Value_Property", options);
    type->fp_build_ = EventApp_FuseSelectionSelectable_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseSelectionSelectable_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseSelectionSelectable_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseSelectionSelectable_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseSelectionSelectable_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseSelectionSelectable_Value_Property(Fuse.Selection.Selectable obj, Uno.UX.Selector name) :130
void EventApp_FuseSelectionSelectable_Value_Property__ctor_2_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :132
void EventApp_FuseSelectionSelectable_Value_Property__Get_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public EventApp_FuseSelectionSelectable_Value_Property New(Fuse.Selection.Selectable obj, Uno.UX.Selector name) :130
void EventApp_FuseSelectionSelectable_Value_Property__New1_fn(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name, EventApp_FuseSelectionSelectable_Value_Property** __retval)
{
    *__retval = EventApp_FuseSelectionSelectable_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :131
void EventApp_FuseSelectionSelectable_Value_Property__get_Object_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :133
void EventApp_FuseSelectionSelectable_Value_Property__Set_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->Value(v);
}

// public override sealed bool get_SupportsOriginSetter() :134
void EventApp_FuseSelectionSelectable_Value_Property__get_SupportsOriginSetter_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseSelectionSelectable_Value_Property(Fuse.Selection.Selectable obj, Uno.UX.Selector name) [instance] :130
void EventApp_FuseSelectionSelectable_Value_Property::ctor_2(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseSelectionSelectable_Value_Property New(Fuse.Selection.Selectable obj, Uno.UX.Selector name) [static] :130
EventApp_FuseSelectionSelectable_Value_Property* EventApp_FuseSelectionSelectable_Value_Property::New1(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseSelectionSelectable_Value_Property* obj1 = (EventApp_FuseSelectionSelectable_Value_Property*)uNew(EventApp_FuseSelectionSelectable_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
