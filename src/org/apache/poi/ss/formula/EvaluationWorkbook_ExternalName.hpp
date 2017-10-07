// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _nameName {  };
    int32_t _nameNumber {  };
    int32_t _ix {  };
protected:
    void ctor(::java::lang::String* nameName, int32_t nameNumber, int32_t ix);

public:
    virtual ::java::lang::String* getName();
    virtual int32_t getNumber();
    virtual int32_t getIx();

    // Generated
    EvaluationWorkbook_ExternalName(::java::lang::String* nameName, int32_t nameNumber, int32_t ix);
protected:
    EvaluationWorkbook_ExternalName(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EvaluationWorkbook;
    friend class EvaluationWorkbook_ExternalSheet;
    friend class EvaluationWorkbook_ExternalSheetRange;
};
