// Generated from /POI/java/org/apache/poi/ss/formula/atp/AnalysisToolPak.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::atp::AnalysisToolPak final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::formula::udf::UDFFinder
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::ss::formula::udf::UDFFinder* instance_;
    ::java::util::Map* _functionsByName {  };
protected:
    void ctor();

public:
    ::org::apache::poi::ss::formula::functions::FreeRefFunction* findFunction(::java::lang::String* name) override;

private:
    ::java::util::Map* createFunctionsMap();
    static void r(::java::util::Map* m, ::java::lang::String* functionName, ::org::apache::poi::ss::formula::functions::FreeRefFunction* pFunc);

public:
    static bool isATPFunction(::java::lang::String* name);
    static ::java::util::Collection* getSupportedFunctionNames();
    static ::java::util::Collection* getNotSupportedFunctionNames();
    static void registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::FreeRefFunction* func);

    // Generated

private:
    AnalysisToolPak();
protected:
    AnalysisToolPak(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    static ::org::apache::poi::ss::formula::udf::UDFFinder*& instance();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AnalysisToolPak_NotImplemented;
};
