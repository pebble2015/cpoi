// Generated from /POI/java/org/apache/poi/util/LZWDecompresser.java
#include <org/apache/poi/util/LZWDecompresser.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::LZWDecompresser::LZWDecompresser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LZWDecompresser::LZWDecompresser(bool maskMeansCompressed, int32_t codeLengthIncrease, bool positionIsBigEndian) 
    : LZWDecompresser(*static_cast< ::default_init_tag* >(0))
{
    ctor(maskMeansCompressed,codeLengthIncrease,positionIsBigEndian);
}

void poi::util::LZWDecompresser::ctor(bool maskMeansCompressed, int32_t codeLengthIncrease, bool positionIsBigEndian)
{
    super::ctor();
    this->maskMeansCompressed = maskMeansCompressed;
    this->codeLengthIncrease = codeLengthIncrease;
    this->positionIsBigEndian = positionIsBigEndian;
}

int8_tArray* poi::util::LZWDecompresser::decompress(::java::io::InputStream* src) /* throws(IOException) */
{
    auto res = new ::java::io::ByteArrayOutputStream();
    decompress(src, res);
    return npc(res)->toByteArray_();
}

void poi::util::LZWDecompresser::decompress(::java::io::InputStream* src, ::java::io::OutputStream* res) /* throws(IOException) */
{
    int32_t pos;
    int32_t flag;
    int32_t mask;
    auto buffer = new ::int8_tArray(int32_t(4096));
    pos = populateDictionary(buffer);
    auto dataB = new ::int8_tArray(int32_t(16) + codeLengthIncrease);
    int32_t dataI;
    int32_t dataIPt1, dataIPt2;
    int32_t len, pntr;
    while ((flag = npc(src)->read()) != -int32_t(1)) {
        for (mask = 1; mask < 256; mask <<= 1) {
            auto isMaskSet = (flag & mask) > 0;
            if(isMaskSet ^ maskMeansCompressed) {
                if((dataI = npc(src)->read()) != -int32_t(1)) {
                    (*buffer)[(pos & int32_t(4095))] = fromInt(dataI);
                    pos++;
                    npc(res)->write(new ::int8_tArray({fromInt(dataI)}));
                }
            } else {
                dataIPt1 = npc(src)->read();
                dataIPt2 = npc(src)->read();
                if(dataIPt1 == -int32_t(1) || dataIPt2 == -int32_t(1))
                    break;

                len = (dataIPt2 & int32_t(15)) + codeLengthIncrease;
                if(positionIsBigEndian) {
                    pntr = (dataIPt1 << int32_t(4)) + (dataIPt2 >> int32_t(4));
                } else {
                    pntr = dataIPt1 + ((dataIPt2 & int32_t(240)) << int32_t(4));
                }
                pntr = adjustDictionaryOffset(pntr);
                for (auto i = int32_t(0); i < len; i++) {
                    (*dataB)[i] = (*buffer)[(pntr + i) & int32_t(4095)];
                    (*buffer)[(pos + i) & int32_t(4095)] = (*dataB)[i];
                }
                npc(res)->write(dataB, 0, len);
                pos = pos + len;
            }
        }
    }
}

int8_t poi::util::LZWDecompresser::fromInt(int32_t b)
{
    clinit();
    if(b < 128)
        return static_cast< int8_t >(b);

    return static_cast< int8_t >((b - int32_t(256)));
}

int32_t poi::util::LZWDecompresser::fromByte(int8_t b)
{
    clinit();
    if(b >= 0) {
        return b;
    }
    return b + int32_t(256);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LZWDecompresser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LZWDecompresser", 35);
    return c;
}

java::lang::Class* poi::util::LZWDecompresser::getClass0()
{
    return class_();
}

