// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IUpdateListener :10557
// {
uInterfaceType* IUpdateListener_typeof();

struct IUpdateListener
{
    void(*fp_Update)(uObject*);
    static void Update(const uInterface& __this) { __this.VTable<IUpdateListener>()->fp_Update(__this); }
};
// }

}} // ::g::Fuse
