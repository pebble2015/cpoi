// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::CellReference_CellRefParts final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* sheetName {  };
    ::java::lang::String* rowRef {  };
    ::java::lang::String* colRef {  };
protected:
    void ctor(::java::lang::String* sheetName, ::java::lang::String* rowRef, ::java::lang::String* colRef);

    // Generated

private:
    CellReference_CellRefParts(::java::lang::String* sheetName, ::java::lang::String* rowRef, ::java::lang::String* colRef);
protected:
    CellReference_CellRefParts(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellReference;
    friend class CellReference_NameType;
};
