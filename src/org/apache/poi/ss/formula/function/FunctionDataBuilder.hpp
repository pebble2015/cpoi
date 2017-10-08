// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionDataBuilder.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::function::FunctionDataBuilder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _maxFunctionIndex {  };
    ::java::util::Map* _functionDataByName {  };
    ::java::util::Map* _functionDataByIndex {  };
    ::java::util::Set* _mutatingFunctionIndexes {  };
protected:
    void ctor(int32_t sizeEstimate);

public:
    void add(int32_t functionIndex, ::java::lang::String* functionName, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes, bool hasFootnote);
    FunctionMetadataRegistry* build();

    // Generated
    FunctionDataBuilder(int32_t sizeEstimate);
protected:
    FunctionDataBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
