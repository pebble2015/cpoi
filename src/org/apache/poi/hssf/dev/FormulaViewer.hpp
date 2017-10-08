// Generated from /POI/java/org/apache/poi/hssf/dev/FormulaViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
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

struct default_init_tag;

class poi::hssf::dev::FormulaViewer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* file {  };
    bool list {  };
protected:
    void ctor();

public:
    virtual void run() /* throws(IOException) */;

private:
    void listFormula(::poi::hssf::record::FormulaRecord* record);

public:
    virtual void parseFormulaRecord(::poi::hssf::record::FormulaRecord* record);

private:
    ::java::lang::String* formulaString(::poi::hssf::record::FormulaRecord* record);
    static void throwInvalidRVAToken(::poi::ss::formula::ptg::Ptg* token);
    static ::java::lang::String* composeFormula(::poi::hssf::record::FormulaRecord* record);

public:
    virtual void setFile(::java::lang::String* file);
    virtual void setList(bool list);
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

    // Generated
    FormulaViewer();
protected:
    FormulaViewer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
