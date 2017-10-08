// Generated from /POI/java/org/apache/poi/ss/usermodel/BuiltinFormats.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class poi::ss::usermodel::BuiltinFormats final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t FIRST_USER_DEFINED_FORMAT_INDEX { int32_t(164) };

private:
    static ::java::lang::StringArray* _formats_;

public:
    static ::java::lang::StringArray* getAll();
    static ::java::lang::String* getBuiltinFormat(int32_t index);
    static int32_t getBuiltinFormat(::java::lang::String* pFmt);

    // Generated
    BuiltinFormats();
protected:
    BuiltinFormats(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::StringArray*& _formats();
    virtual ::java::lang::Class* getClass0();
};
