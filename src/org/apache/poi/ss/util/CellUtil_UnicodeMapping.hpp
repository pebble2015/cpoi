// Generated from /POI/java/org/apache/poi/ss/util/CellUtil.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::CellUtil_UnicodeMapping final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* entityName {  };
    ::java::lang::String* resolvedValue {  };
protected:
    void ctor(::java::lang::String* pEntityName, ::java::lang::String* pResolvedValue);

    // Generated

public:
    CellUtil_UnicodeMapping(::java::lang::String* pEntityName, ::java::lang::String* pResolvedValue);
protected:
    CellUtil_UnicodeMapping(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellUtil;
};
