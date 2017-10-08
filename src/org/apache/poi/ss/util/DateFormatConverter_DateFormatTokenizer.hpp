// Generated from /POI/java/org/apache/poi/ss/util/DateFormatConverter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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

class poi::ss::util::DateFormatConverter_DateFormatTokenizer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* format {  };
    int32_t pos {  };
protected:
    void ctor(::java::lang::String* format);

public:
    virtual ::java::lang::String* getNextToken();
    static ::java::lang::StringArray* tokenize(::java::lang::String* format);
    ::java::lang::String* toString() override;

    // Generated
    DateFormatConverter_DateFormatTokenizer(::java::lang::String* format);
protected:
    DateFormatConverter_DateFormatTokenizer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DateFormatConverter;
};
