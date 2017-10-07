// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationName.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
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

struct org::apache::poi::ss::formula::EvaluationName
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getNameText() = 0;
    virtual bool isFunctionName() = 0;
    virtual bool hasFormula() = 0;
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* getNameDefinition() = 0;
    virtual bool isRange() = 0;
    virtual ::org::apache::poi::ss::formula::ptg::NamePtg* createPtg() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
