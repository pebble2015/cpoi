// Generated from /POI/java/org/apache/poi/util/StringUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/lang/String.hpp>

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

class poi::util::StringUtil_StringsIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::StringArray* strings {  };
    int32_t position {  };
protected:
    void ctor(::java::lang::StringArray* strings);

public:
    bool hasNext() override;
    ::java::lang::String* next() override;
    void remove() override;

    // Generated
    StringUtil_StringsIterator(::java::lang::StringArray* strings);
protected:
    StringUtil_StringsIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class StringUtil;
};
