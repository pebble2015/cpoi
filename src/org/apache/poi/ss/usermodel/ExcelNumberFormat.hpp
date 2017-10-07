// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelNumberFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::ExcelNumberFormat
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t idx {  };
    ::java::lang::String* format {  };

public:
    static ExcelNumberFormat* from(CellStyle* style);
    static ExcelNumberFormat* from(Cell* cell, ::org::apache::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);
protected:
    void ctor(int32_t idx, ::java::lang::String* format);

public:
    virtual int32_t getIdx();
    virtual ::java::lang::String* getFormat();

    // Generated
    ExcelNumberFormat(int32_t idx, ::java::lang::String* format);
protected:
    ExcelNumberFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
