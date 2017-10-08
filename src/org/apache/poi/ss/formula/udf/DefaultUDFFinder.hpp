// Generated from /POI/java/org/apache/poi/ss/formula/udf/DefaultUDFFinder.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace functions
            {
typedef ::SubArray< ::poi::ss::formula::functions::FreeRefFunction, ::java::lang::ObjectArray > FreeRefFunctionArray;
            } // functions
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::udf::DefaultUDFFinder final
    : public virtual ::java::lang::Object
    , public UDFFinder
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _functionsByName {  };
protected:
    void ctor(::java::lang::StringArray* functionNames, ::poi::ss::formula::functions::FreeRefFunctionArray* functionImpls);

public:
    ::poi::ss::formula::functions::FreeRefFunction* findFunction(::java::lang::String* name) override;

    // Generated
    DefaultUDFFinder(::java::lang::StringArray* functionNames, ::poi::ss::formula::functions::FreeRefFunctionArray* functionImpls);
protected:
    DefaultUDFFinder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
