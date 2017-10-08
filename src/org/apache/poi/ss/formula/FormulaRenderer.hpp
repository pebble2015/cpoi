// Generated from /POI/java/org/apache/poi/ss/formula/FormulaRenderer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaRenderer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::lang::String* toFormulaString(FormulaRenderingWorkbook* book, ::poi::ss::formula::ptg::PtgArray* ptgs);

private:
    static ::java::lang::StringArray* getOperands(::java::util::Stack* stack, int32_t nOperands);

    // Generated

public:
    FormulaRenderer();
protected:
    FormulaRenderer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
