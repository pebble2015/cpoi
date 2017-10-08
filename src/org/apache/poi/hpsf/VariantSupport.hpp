// Generated from /POI/java/org/apache/poi/hpsf/VariantSupport.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>

struct default_init_tag;

class poi::hpsf::VariantSupport
    : public Variant
{

public:
    typedef Variant super;

private:
    static ::int32_tArray* SUPPORTED_TYPES_;
    static ::poi::util::POILogger* logger_;
    static bool logUnsupportedTypes_;
    static ::java::util::List* unsupportedMessage_;
    static ::int8_tArray* paddingBytes_;

public:
    static void setLogUnsupportedTypes(bool logUnsupportedTypes);
    static bool isLogUnsupportedTypes();

public: /* protected */
    static void writeUnsupportedTypeMessage(UnsupportedVariantTypeException* ex);

public:
    virtual bool isSupportedType(int32_t variantType);
    static ::java::lang::Object* read(::int8_tArray* src, int32_t offset, int32_t length, int64_t type, int32_t codepage) /* throws(ReadingNotSupportedException, UnsupportedEncodingException) */;
    static ::java::lang::Object* read(::poi::util::LittleEndianByteArrayInputStream* lei, int32_t length, int64_t type, int32_t codepage) /* throws(ReadingNotSupportedException, UnsupportedEncodingException) */;
    static ::java::lang::String* codepageToEncoding(int32_t codepage) /* throws(UnsupportedEncodingException) */;
    static int32_t write(::java::io::OutputStream* out, int64_t type, ::java::lang::Object* value, int32_t codepage) /* throws(IOException, WritingNotSupportedException) */;

    // Generated
    VariantSupport();
protected:
    VariantSupport(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::int32_tArray*& SUPPORTED_TYPES();

private:
    static ::poi::util::POILogger*& logger();
    static bool& logUnsupportedTypes();
    static ::java::util::List*& unsupportedMessage();
    static ::int8_tArray*& paddingBytes();
    virtual ::java::lang::Class* getClass0();
};
