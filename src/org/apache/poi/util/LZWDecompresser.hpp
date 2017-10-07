// Generated from /POI/java/org/apache/poi/util/LZWDecompresser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::util::LZWDecompresser
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool maskMeansCompressed {  };
    int32_t codeLengthIncrease {  };
    bool positionIsBigEndian {  };
protected:
    void ctor(bool maskMeansCompressed, int32_t codeLengthIncrease, bool positionIsBigEndian);

public: /* protected */
    virtual int32_t populateDictionary(::int8_tArray* dict) = 0;
    virtual int32_t adjustDictionaryOffset(int32_t offset) = 0;

public:
    virtual ::int8_tArray* decompress(::java::io::InputStream* src) /* throws(IOException) */;
    virtual void decompress(::java::io::InputStream* src, ::java::io::OutputStream* res) /* throws(IOException) */;
    static int8_t fromInt(int32_t b);
    static int32_t fromByte(int8_t b);

    // Generated

public: /* protected */
    LZWDecompresser(bool maskMeansCompressed, int32_t codeLengthIncrease, bool positionIsBigEndian);
protected:
    LZWDecompresser(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
