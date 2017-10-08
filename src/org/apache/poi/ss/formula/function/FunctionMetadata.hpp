// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadata.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::function::FunctionMetadata final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int16_t FUNCTION_MAX_PARAMS { int16_t(30) };
    int32_t _index {  };
    ::java::lang::String* _name {  };
    int32_t _minParams {  };
    int32_t _maxParams {  };
    int8_t _returnClassCode {  };
    ::int8_tArray* _parameterClassCodes {  };
protected:
    void ctor(int32_t index, ::java::lang::String* name, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes);

public:
    int32_t getIndex();
    ::java::lang::String* getName();
    int32_t getMinParams();
    int32_t getMaxParams();
    bool hasFixedArgsLength();
    int8_t getReturnClassCode();
    ::int8_tArray* getParameterClassCodes();
    bool hasUnlimitedVarags();
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    FunctionMetadata(int32_t index, ::java::lang::String* name, int32_t minParams, int32_t maxParams, int8_t returnClassCode, ::int8_tArray* parameterClassCodes);
protected:
    FunctionMetadata(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
