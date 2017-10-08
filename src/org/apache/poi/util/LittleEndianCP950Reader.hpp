// Generated from /POI/java/org/apache/poi/util/LittleEndianCP950Reader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/Reader.hpp>

struct default_init_tag;

class poi::util::LittleEndianCP950Reader
    : public ::java::io::Reader
{

public:
    typedef ::java::io::Reader super;

private:
    static POILogger* LOGGER_;
    static constexpr char16_t UNMAPPABLE { u'?' };
    ::java::nio::ByteBuffer* doubleByteBuffer {  };
    ::java::nio::CharBuffer* charBuffer {  };
    ::java::nio::charset::CharsetDecoder* decoder {  };
    static constexpr char16_t range1Low { u'\u8140' };
    static constexpr char16_t range1High { u'\u8dfe' };
    static constexpr char16_t range2Low { u'\u8e40' };
    static constexpr char16_t range2High { u'\ua0fe' };
    static constexpr char16_t range3Low { u'\uc6a1' };
    static constexpr char16_t range3High { u'\uc8fe' };
    static constexpr char16_t range4Low { u'\ufa40' };
    static constexpr char16_t range4High { u'\ufefe' };
    ::int8_tArray* data {  };
    int32_t startOffset {  };
    int32_t length {  };
    int32_t offset {  };
    int32_t trailing {  };
    int32_t leading {  };

public: /* package */
    int32_t cnt {  };
protected:
    void ctor(::int8_tArray* data);
    void ctor(::int8_tArray* data, int32_t offset, int32_t length);

public:
    int32_t read() override;
    int32_t read(::char16_tArray* cbuf, int32_t off, int32_t len) /* throws(IOException) */ override;
    void close() override;

private:
    int32_t handleRange1(int32_t leading, int32_t trailing);
    int32_t handleRange2(int32_t leading, int32_t trailing);
    int32_t handleRange3(int32_t leading, int32_t trailing);
    int32_t handleRange4(int32_t leading, int32_t trailing);
    int32_t handleF9(int32_t trailing);

    // Generated

public:
    LittleEndianCP950Reader(::int8_tArray* data);
    LittleEndianCP950Reader(::int8_tArray* data, int32_t offset, int32_t length);
protected:
    LittleEndianCP950Reader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    int32_t read(::java::nio::CharBuffer* target);
    virtual int32_t read(::char16_tArray* cbuf);

private:
    static POILogger*& LOGGER();
    virtual ::java::lang::Class* getClass0();
};
