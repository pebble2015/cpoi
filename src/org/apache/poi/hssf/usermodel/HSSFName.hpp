// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFName.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Name.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFName final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::Name
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFWorkbook* _book {  };
    ::org::apache::poi::hssf::record::NameRecord* _definedNameRec {  };
    ::org::apache::poi::hssf::record::NameCommentRecord* _commentRec {  };
protected:
    void ctor(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name);
    void ctor(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name, ::org::apache::poi::hssf::record::NameCommentRecord* comment);

public:
    ::java::lang::String* getSheetName() override;
    ::java::lang::String* getNameName() override;
    void setNameName(::java::lang::String* nameName) override;

private:
    static void validateName(::java::lang::String* name);

public:
    void setRefersToFormula(::java::lang::String* formulaText) override;
    ::java::lang::String* getRefersToFormula() override;

public: /* package */
    void setNameDefinition(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);

public:
    bool isDeleted() override;
    bool isFunctionName() override;
    ::java::lang::String* toString() override;
    void setSheetIndex(int32_t index) override;
    int32_t getSheetIndex() override;
    ::java::lang::String* getComment() override;
    void setComment(::java::lang::String* comment) override;
    void setFunction(bool value) override;

    // Generated

public: /* package */
    HSSFName(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name);
    HSSFName(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name, ::org::apache::poi::hssf::record::NameCommentRecord* comment);
protected:
    HSSFName(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
