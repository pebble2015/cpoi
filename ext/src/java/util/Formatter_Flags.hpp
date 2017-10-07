// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Formatter_Flags
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static Formatter_Flags* ALTERNATE_;
    static Formatter_Flags* GROUP_;
    static Formatter_Flags* LEADING_SPACE_;
    static Formatter_Flags* LEFT_JUSTIFY_;
    static Formatter_Flags* NONE_;
    static Formatter_Flags* PARENTHESES_;
    static Formatter_Flags* PLUS_;
    static Formatter_Flags* PREVIOUS_;
    static Formatter_Flags* UPPERCASE_;
    static Formatter_Flags* ZERO_PAD_;
    int32_t flags {  };

    /*void ctor(int32_t f); (private) */
    /*Formatter_Flags* add(Formatter_Flags* f); (private) */

public:
    virtual bool contains(Formatter_Flags* f);
    virtual Formatter_Flags* dup();
    static Formatter_Flags* parse(::java::lang::String* s);
    /*static Formatter_Flags* parse(char16_t c); (private) */
    virtual Formatter_Flags* remove(Formatter_Flags* f);
    ::java::lang::String* toString() override;
    static ::java::lang::String* toString(Formatter_Flags* f);
    virtual int32_t valueOf();

    // Generated
    Formatter_Flags();
protected:
    Formatter_Flags(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static Formatter_Flags*& ALTERNATE();
    static Formatter_Flags*& GROUP();
    static Formatter_Flags*& LEADING_SPACE();
    static Formatter_Flags*& LEFT_JUSTIFY();
    static Formatter_Flags*& NONE();
    static Formatter_Flags*& PARENTHESES();
    static Formatter_Flags*& PLUS();
    static Formatter_Flags*& PREVIOUS();
    static Formatter_Flags*& UPPERCASE();
    static Formatter_Flags*& ZERO_PAD();

private:
    virtual ::java::lang::Class* getClass0();
};
