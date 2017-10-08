// Generated from /POI/java/org/apache/poi/util/ArrayUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::ArrayUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void arraycopy(::int8_tArray* src, int32_t src_position, ::int8_tArray* dst, int32_t dst_position, int32_t length);
    static void arrayMoveWithin(::java::lang::ObjectArray* array, int32_t moveFrom, int32_t moveTo, int32_t numToMove);

    // Generated
    ArrayUtil();
protected:
    ArrayUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
