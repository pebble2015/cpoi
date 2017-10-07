// Generated from /POI/java/org/apache/poi/ss/formula/SharedFormula.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class org::apache::poi::ss::formula::SharedFormula
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _columnWrappingMask {  };
    int32_t _rowWrappingMask {  };
protected:
    void ctor(::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

public:
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* convertSharedFormulas(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t formulaRow, int32_t formulaColumn);

private:
    int32_t fixupRelativeColumn(int32_t currentcolumn, int32_t column, bool relative);
    int32_t fixupRelativeRow(int32_t currentrow, int32_t row, bool relative);

    // Generated

public:
    SharedFormula(::org::apache::poi::ss::SpreadsheetVersion* ssVersion);
protected:
    SharedFormula(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
