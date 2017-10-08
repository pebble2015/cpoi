// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::usermodel::HSSFEvaluationWorkbook_Name final
    : public virtual ::java::lang::Object
    , public ::poi::ss::formula::EvaluationName
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::hssf::record::NameRecord* _nameRecord {  };
    int32_t _index {  };
protected:
    void ctor(::poi::hssf::record::NameRecord* nameRecord, int32_t index);

public:
    ::poi::ss::formula::ptg::PtgArray* getNameDefinition() override;
    ::java::lang::String* getNameText() override;
    bool hasFormula() override;
    bool isFunctionName() override;
    bool isRange() override;
    ::poi::ss::formula::ptg::NamePtg* createPtg() override;

    // Generated
    HSSFEvaluationWorkbook_Name(::poi::hssf::record::NameRecord* nameRecord, int32_t index);
protected:
    HSSFEvaluationWorkbook_Name(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFEvaluationWorkbook;
};
