// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <sun/reflect/generics/tree/fwd-POI.hpp>
#include <sun/reflect/generics/tree/Tree.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace sun
{
    namespace reflect
    {
        namespace generics
        {
            namespace tree
            {
typedef ::SubArray< ::sun::reflect::generics::tree::Tree, ::java::lang::ObjectArray > TreeArray;
typedef ::SubArray< ::sun::reflect::generics::tree::TypeTree, ::java::lang::ObjectArray, TreeArray > TypeTreeArray;
typedef ::SubArray< ::sun::reflect::generics::tree::FormalTypeParameter, ::java::lang::ObjectArray, TypeTreeArray > FormalTypeParameterArray;
            } // tree
        } // generics
    } // reflect
} // sun

struct sun::reflect::generics::tree::Signature
    : public virtual Tree
{

    virtual FormalTypeParameterArray* getFormalTypeParameters() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
