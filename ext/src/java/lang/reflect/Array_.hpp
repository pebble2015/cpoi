// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::reflect::Array_ final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    /*void ctor(); (private) */
    static ::java::lang::Object* get(::java::lang::Object* array, int32_t index);
    static bool getBoolean(::java::lang::Object* array, int32_t index);
    static int8_t getByte(::java::lang::Object* array, int32_t index);
    static char16_t getChar(::java::lang::Object* array, int32_t index);
    static double getDouble(::java::lang::Object* array, int32_t index);
    static float getFloat(::java::lang::Object* array, int32_t index);
    static int32_t getInt(::java::lang::Object* array, int32_t index);
    static int32_t getLength(::java::lang::Object* array);
    static int64_t getLong(::java::lang::Object* array, int32_t index);
    static int16_t getShort(::java::lang::Object* array, int32_t index);
    /*static ::java::lang::Object* multiNewArray_(::java::lang::Class* componentType, ::int32_tArray* dimensions); (private) */
    /*static ::java::lang::Object* newArray_(::java::lang::Class* componentType, int32_t length); (private) */
    static ::java::lang::Object* newInstance(::java::lang::Class* componentType, int32_t length);
    static ::java::lang::Object* newInstance(::java::lang::Class* componentType, ::int32_tArray* dimensions);
    static void set(::java::lang::Object* array, int32_t index, ::java::lang::Object* value);
    static void setBoolean(::java::lang::Object* array, int32_t index, bool z);
    static void setByte(::java::lang::Object* array, int32_t index, int8_t b);
    static void setChar(::java::lang::Object* array, int32_t index, char16_t c);
    static void setDouble(::java::lang::Object* array, int32_t index, double d);
    static void setFloat(::java::lang::Object* array, int32_t index, float f);
    static void setInt(::java::lang::Object* array, int32_t index, int32_t i);
    static void setLong(::java::lang::Object* array, int32_t index, int64_t l);
    static void setShort(::java::lang::Object* array, int32_t index, int16_t s);

    // Generated
    Array_();
protected:
    Array_(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
