// Generated from /POI/java/org/apache/poi/ss/formula/udf/IndexedUDFFinder.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/AggregatingUDFFinder.hpp>

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
                    namespace udf
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::udf::UDFFinder, ::java::lang::ObjectArray > UDFFinderArray;
                    } // udf
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::udf::IndexedUDFFinder
    : public AggregatingUDFFinder
{

public:
    typedef AggregatingUDFFinder super;

private:
    ::java::util::HashMap* _funcMap {  };
protected:
    void ctor(UDFFinderArray*/*...*/ usedToolPacks);

public:
    ::org::apache::poi::ss::formula::functions::FreeRefFunction* findFunction(::java::lang::String* name) override;
    virtual ::java::lang::String* getFunctionName(int32_t idx);
    virtual int32_t getFunctionIndex(::java::lang::String* name);

    // Generated
    IndexedUDFFinder(UDFFinderArray* usedToolPacks);
protected:
    IndexedUDFFinder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
