// This file was generated based on '.uno/ux11/SidebarIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct SidebarIcon;}

namespace g{

// public partial sealed class SidebarIcon :2
// {
::g::Fuse::Controls::Control_type* SidebarIcon_typeof();
void SidebarIcon__ctor_7_fn(SidebarIcon* __this);
void SidebarIcon__InitializeUX_fn(SidebarIcon* __this);
void SidebarIcon__New4_fn(SidebarIcon** __retval);

struct SidebarIcon : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static SidebarIcon* New4();
};
// }

} // ::g
