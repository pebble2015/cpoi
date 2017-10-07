// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class java::util::Arrays_NaturalOrder final
    : public virtual ::java::lang::Object
    , public Comparator
{

public:
    typedef ::java::lang::Object super;

private:
    static Arrays_NaturalOrder* INSTANCE_;

protected:
    void ctor();

public:
    int32_t compare(::java::lang::Object* first, ::java::lang::Object* second) override;

    // Generated

public: /* package */
    Arrays_NaturalOrder();
protected:
    Arrays_NaturalOrder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);

public: /* package */
    static Arrays_NaturalOrder*& INSTANCE();

private:
    virtual ::java::lang::Class* getClass0();
};
