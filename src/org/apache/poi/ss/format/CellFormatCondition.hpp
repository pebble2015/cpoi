// Generated from /POI/java/org/apache/poi/ss/format/CellFormatCondition.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatCondition
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t LT { int32_t(0) };
    static constexpr int32_t LE { int32_t(1) };
    static constexpr int32_t GT { int32_t(2) };
    static constexpr int32_t GE { int32_t(3) };
    static constexpr int32_t EQ { int32_t(4) };
    static constexpr int32_t NE { int32_t(5) };
    static ::java::util::Map* TESTS_;

public:
    static CellFormatCondition* getInstance(::java::lang::String* opString, ::java::lang::String* constStr);
    virtual bool pass(double value) = 0;

    // Generated
    CellFormatCondition();
protected:
    CellFormatCondition(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& TESTS();
    virtual ::java::lang::Class* getClass0();
    friend class CellFormatCondition_getInstance_1;
    friend class CellFormatCondition_getInstance_2;
    friend class CellFormatCondition_getInstance_3;
    friend class CellFormatCondition_getInstance_4;
    friend class CellFormatCondition_getInstance_5;
    friend class CellFormatCondition_getInstance_6;
};
