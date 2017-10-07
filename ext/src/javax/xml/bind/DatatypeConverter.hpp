// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::bind::DatatypeConverter final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static JAXBPermission* SET_DATATYPE_CONVERTER_PERMISSION_;
    static std::atomic< DatatypeConverterInterface* > theConverter_;

    /*void ctor(); (private) */
    /*static void initConverter(); (private) */

public:
    static ::java::lang::String* parseAnySimpleType(::java::lang::String* lexicalXSDAnySimpleType);
    static ::int8_tArray* parseBase64Binary(::java::lang::String* lexicalXSDBase64Binary);
    static bool parseBoolean(::java::lang::String* lexicalXSDBoolean);
    static int8_t parseByte(::java::lang::String* lexicalXSDByte);
    static ::java::util::Calendar* parseDate(::java::lang::String* lexicalXSDDate);
    static ::java::util::Calendar* parseDateTime(::java::lang::String* lexicalXSDDateTime);
    static ::java::math::BigDecimal* parseDecimal(::java::lang::String* lexicalXSDDecimal);
    static double parseDouble(::java::lang::String* lexicalXSDDouble);
    static float parseFloat(::java::lang::String* lexicalXSDFloat);
    static ::int8_tArray* parseHexBinary(::java::lang::String* lexicalXSDHexBinary);
    static int32_t parseInt(::java::lang::String* lexicalXSDInt);
    static ::java::math::BigInteger* parseInteger(::java::lang::String* lexicalXSDInteger);
    static int64_t parseLong(::java::lang::String* lexicalXSDLong);
    static ::javax::xml::namespace_::QName* parseQName(::java::lang::String* lexicalXSDQName, ::javax::xml::namespace_::NamespaceContext* nsc);
    static int16_t parseShort(::java::lang::String* lexicalXSDShort);
    static ::java::lang::String* parseString(::java::lang::String* lexicalXSDString);
    static ::java::util::Calendar* parseTime(::java::lang::String* lexicalXSDTime);
    static int64_t parseUnsignedInt(::java::lang::String* lexicalXSDUnsignedInt);
    static int32_t parseUnsignedShort(::java::lang::String* lexicalXSDUnsignedShort);
    static ::java::lang::String* printAnySimpleType(::java::lang::String* val);
    static ::java::lang::String* printBase64Binary(::int8_tArray* val);
    static ::java::lang::String* printBoolean(bool val);
    static ::java::lang::String* printByte(int8_t val);
    static ::java::lang::String* printDate(::java::util::Calendar* val);
    static ::java::lang::String* printDateTime(::java::util::Calendar* val);
    static ::java::lang::String* printDecimal(::java::math::BigDecimal* val);
    static ::java::lang::String* printDouble(double val);
    static ::java::lang::String* printFloat(float val);
    static ::java::lang::String* printHexBinary(::int8_tArray* val);
    static ::java::lang::String* printInt(int32_t val);
    static ::java::lang::String* printInteger(::java::math::BigInteger* val);
    static ::java::lang::String* printLong(int64_t val);
    static ::java::lang::String* printQName(::javax::xml::namespace_::QName* val, ::javax::xml::namespace_::NamespaceContext* nsc);
    static ::java::lang::String* printShort(int16_t val);
    static ::java::lang::String* printString(::java::lang::String* val);
    static ::java::lang::String* printTime(::java::util::Calendar* val);
    static ::java::lang::String* printUnsignedInt(int64_t val);
    static ::java::lang::String* printUnsignedShort(int32_t val);
    static void setDatatypeConverter(DatatypeConverterInterface* converter);

    // Generated
    DatatypeConverter();
protected:
    DatatypeConverter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static JAXBPermission*& SET_DATATYPE_CONVERTER_PERMISSION();
    static std::atomic< DatatypeConverterInterface* >& theConverter();
    virtual ::java::lang::Class* getClass0();
};
