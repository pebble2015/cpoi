// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/awt/AttributeValue.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::awt::BufferCapabilities_FlipContents final
    : public AttributeValue
{

public:
    typedef AttributeValue super;

private:
    static BufferCapabilities_FlipContents* BACKGROUND_;
    static BufferCapabilities_FlipContents* COPIED_;
    static int32_t I_BACKGROUND_;
    static int32_t I_COPIED_;
    static int32_t I_PRIOR_;
    static int32_t I_UNDEFINED_;
    static ::java::lang::StringArray* NAMES_;
    static BufferCapabilities_FlipContents* PRIOR_;
    static BufferCapabilities_FlipContents* UNDEFINED_;

    /*void ctor(int32_t type); (private) */

    // Generated

public:
    BufferCapabilities_FlipContents();
protected:
    BufferCapabilities_FlipContents(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static BufferCapabilities_FlipContents*& BACKGROUND();
    static BufferCapabilities_FlipContents*& COPIED();

private:
    static int32_t& I_BACKGROUND();
    static int32_t& I_COPIED();
    static int32_t& I_PRIOR();
    static int32_t& I_UNDEFINED();
    static ::java::lang::StringArray*& NAMES();

public:
    static BufferCapabilities_FlipContents*& PRIOR();
    static BufferCapabilities_FlipContents*& UNDEFINED();

private:
    virtual ::java::lang::Class* getClass0();
};
