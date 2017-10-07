// Generated from /POI/java/org/apache/poi/util/POILogger.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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

class org::apache::poi::util::POILogger
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t DEBUG { int32_t(1) };
    static constexpr int32_t INFO { int32_t(3) };
    static constexpr int32_t WARN { int32_t(5) };
    static constexpr int32_t ERROR { int32_t(7) };
    static constexpr int32_t FATAL { int32_t(9) };

private:
    static ::java::lang::StringArray* LEVEL_STRINGS_SHORT_;
    static ::java::lang::StringArray* LEVEL_STRINGS_;
protected:
    void ctor();

public:
    virtual void initialize(::java::lang::String* cat) = 0;

public: /* protected */
    virtual void _log(int32_t level, ::java::lang::Object* obj1) = 0;
    virtual void _log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception) = 0;

public:
    virtual bool check(int32_t level) = 0;
    virtual void log(int32_t level, ::java::lang::ObjectArray*/*...*/ objs);

    // Generated

public: /* package */
    POILogger();
protected:
    POILogger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::java::lang::StringArray*& LEVEL_STRINGS_SHORT();
    static ::java::lang::StringArray*& LEVEL_STRINGS();

private:
    virtual ::java::lang::Class* getClass0();
};
