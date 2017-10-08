// Generated from /POI/java/org/apache/poi/ss/formula/udf/AggregatingUDFFinder.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace udf
            {
typedef ::SubArray< ::poi::ss::formula::udf::UDFFinder, ::java::lang::ObjectArray > UDFFinderArray;
            } // udf
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::udf::AggregatingUDFFinder
    : public virtual ::java::lang::Object
    , public virtual UDFFinder
{

public:
    typedef ::java::lang::Object super;

private:
    static UDFFinder* DEFAULT_;
    ::java::util::Collection* _usedToolPacks {  };
protected:
    void ctor(UDFFinderArray*/*...*/ usedToolPacks);

public:
    ::poi::ss::formula::functions::FreeRefFunction* findFunction(::java::lang::String* name) override;
    virtual void add(UDFFinder* toolPack);

    // Generated
    AggregatingUDFFinder(UDFFinderArray* usedToolPacks);
protected:
    AggregatingUDFFinder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static UDFFinder*& DEFAULT();

private:
    virtual ::java::lang::Class* getClass0();
};
