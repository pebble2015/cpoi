// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadataRegistry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace function
            {
typedef ::SubArray< ::poi::ss::formula::function::FunctionMetadata, ::java::lang::ObjectArray > FunctionMetadataArray;
            } // function
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::function::FunctionMetadataRegistry final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* FUNCTION_NAME_IF_;

public:
    static constexpr int32_t FUNCTION_INDEX_IF { int32_t(1) };
    static constexpr int16_t FUNCTION_INDEX_SUM { int16_t(4) };
    static constexpr int32_t FUNCTION_INDEX_CHOOSE { int32_t(100) };
    static constexpr int16_t FUNCTION_INDEX_INDIRECT { int16_t(148) };
    static constexpr int16_t FUNCTION_INDEX_EXTERNAL { int16_t(255) };

private:
    static FunctionMetadataRegistry* _instance_;
    FunctionMetadataArray* _functionDataByIndex {  };
    ::java::util::Map* _functionDataByName {  };
    static FunctionMetadataRegistry* getInstance();
protected:
    void ctor(FunctionMetadataArray* functionDataByIndex, ::java::util::Map* functionDataByName);

public: /* package */
    ::java::util::Set* getAllFunctionNames();

public:
    static FunctionMetadata* getFunctionByIndex(int32_t index);

private:
    FunctionMetadata* getFunctionByIndexInternal(int32_t index);

public:
    static int16_t lookupIndexByName(::java::lang::String* name);

private:
    FunctionMetadata* getFunctionByNameInternal(::java::lang::String* name);

public:
    static FunctionMetadata* getFunctionByName(::java::lang::String* name);

    // Generated

public: /* package */
    FunctionMetadataRegistry(FunctionMetadataArray* functionDataByIndex, ::java::util::Map* functionDataByName);
protected:
    FunctionMetadataRegistry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& FUNCTION_NAME_IF();

private:
    static FunctionMetadataRegistry*& _instance();
    virtual ::java::lang::Class* getClass0();
};
