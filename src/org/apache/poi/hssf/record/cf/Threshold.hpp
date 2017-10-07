// Generated from /POI/java/org/apache/poi/hssf/record/cf/Threshold.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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

class org::apache::poi::hssf::record::cf::Threshold
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int8_t type {  };
    ::org::apache::poi::ss::formula::Formula* formula {  };
    ::java::lang::Double* value {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    virtual int8_t getType();
    virtual void setType(int8_t type);
    virtual void setType(int32_t type);

public: /* protected */
    virtual ::org::apache::poi::ss::formula::Formula* getFormula();

public:
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* getParsedExpression();
    virtual void setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    virtual ::java::lang::Double* getValue();
    virtual void setValue(::java::lang::Double* value);
    virtual int32_t getDataLength();
    ::java::lang::String* toString() override;
    virtual void copyTo(Threshold* rec);
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated

public: /* protected */
    Threshold();
    Threshold(::org::apache::poi::util::LittleEndianInput* in);
protected:
    Threshold(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
