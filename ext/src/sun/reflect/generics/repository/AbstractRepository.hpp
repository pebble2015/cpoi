// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <sun/reflect/generics/factory/fwd-POI.hpp>
#include <sun/reflect/generics/repository/fwd-POI.hpp>
#include <sun/reflect/generics/tree/fwd-POI.hpp>
#include <sun/reflect/generics/visitor/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::reflect::generics::repository::AbstractRepository
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::sun::reflect::generics::factory::GenericsFactory* factory {  };
    ::sun::reflect::generics::tree::Tree* tree {  };

protected:
    void ctor(::java::lang::String* arg0, ::sun::reflect::generics::factory::GenericsFactory* arg1);
    /*::sun::reflect::generics::factory::GenericsFactory* getFactory(); (private) */

public: /* protected */
    virtual ::sun::reflect::generics::visitor::Reifier* getReifier();
    virtual ::sun::reflect::generics::tree::Tree* getTree();
    virtual ::sun::reflect::generics::tree::Tree* parse(::java::lang::String* arg0) = 0;

    // Generated
    AbstractRepository(::java::lang::String* arg0, ::sun::reflect::generics::factory::GenericsFactory* arg1);
protected:
    AbstractRepository(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
