// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Formatter_FormatString.hpp>

struct default_init_tag;

class java::util::Formatter_FixedString
    : public virtual ::java::lang::Object
    , public virtual Formatter_FormatString
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* s {  };

public: /* package */
    Formatter* this$0 {  };

protected:
    void ctor(::java::lang::String* s);

public:
    int32_t index() override;
    void print(::java::lang::Object* arg, Locale* l) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    Formatter_FixedString(Formatter *Formatter_this, ::java::lang::String* s);
protected:
    Formatter_FixedString(Formatter *Formatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Formatter *Formatter_this;

private:
    virtual ::java::lang::Class* getClass0();
};
