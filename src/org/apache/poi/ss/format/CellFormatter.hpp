// Generated from /POI/java/org/apache/poi/ss/format/CellFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatter
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* format_ {  };
    ::java::util::Locale* locale {  };
protected:
    void ctor(::java::lang::String* format);
    void ctor(::java::util::Locale* locale, ::java::lang::String* format);

private:
    static ::java::util::logging::Logger* logger_;

public:
    virtual void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) = 0;
    virtual void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) = 0;
    virtual ::java::lang::String* format(::java::lang::Object* value);
    virtual ::java::lang::String* simpleFormat(::java::lang::Object* value);

public: /* package */
    static ::java::lang::String* quote(::java::lang::String* str);

    // Generated

public:
    CellFormatter(::java::lang::String* format);
    CellFormatter(::java::util::Locale* locale, ::java::lang::String* format);
protected:
    CellFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::java::util::logging::Logger*& logger();

private:
    virtual ::java::lang::Class* getClass0();
};
