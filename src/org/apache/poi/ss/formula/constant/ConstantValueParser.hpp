// Generated from /POI/java/org/apache/poi/ss/formula/constant/ConstantValueParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/constant/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::constant::ConstantValueParser final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t TYPE_EMPTY { int32_t(0) };
    static constexpr int32_t TYPE_NUMBER { int32_t(1) };
    static constexpr int32_t TYPE_STRING { int32_t(2) };
    static constexpr int32_t TYPE_BOOLEAN { int32_t(4) };
    static constexpr int32_t TYPE_ERROR_CODE { int32_t(16) };
    static constexpr int32_t TRUE_ENCODING { int32_t(1) };
    static constexpr int32_t FALSE_ENCODING { int32_t(0) };
    static ::java::lang::Object* EMPTY_REPRESENTATION_;
protected:
    void ctor();

public:
    static ::java::lang::ObjectArray* parse(::org::apache::poi::util::LittleEndianInput* in, int32_t nValues);

private:
    static ::java::lang::Object* readAConstantValue(::org::apache::poi::util::LittleEndianInput* in);
    static ::java::lang::Object* readBoolean(::org::apache::poi::util::LittleEndianInput* in);

public:
    static int32_t getEncodedSize(::java::lang::ObjectArray* values);

private:
    static int32_t getEncodedSize(::java::lang::Object* object);

public:
    static void encode(::org::apache::poi::util::LittleEndianOutput* out, ::java::lang::ObjectArray* values);

private:
    static void encodeSingleValue(::org::apache::poi::util::LittleEndianOutput* out, ::java::lang::Object* value);

    // Generated
    ConstantValueParser();
protected:
    ConstantValueParser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::Object*& EMPTY_REPRESENTATION();
    virtual ::java::lang::Class* getClass0();
};
