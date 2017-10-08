// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ExternSheetNameResolver.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::ExternSheetNameResolver final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static ::java::lang::String* prependSheetName(::poi::ss::formula::FormulaRenderingWorkbook* book, int32_t field_1_index_extern_sheet, ::java::lang::String* cellRefText);

    // Generated

private:
    ExternSheetNameResolver();
protected:
    ExternSheetNameResolver(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
