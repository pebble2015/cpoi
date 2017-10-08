// Generated from /POI/java/org/apache/poi/ddf/EscherDump.java
#include <org/apache/poi/ddf/EscherDump.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/zip/InflaterInputStream.hpp>
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherDump_propName_PropName_1.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/HexRead.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace ddf
    {
typedef ::SubArray< ::poi::ddf::EscherDump_propName_PropName_1, ::java::lang::ObjectArray > EscherDump_propName_PropName_1Array;
    } // ddf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ddf::EscherDump::EscherDump(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherDump::EscherDump() 
    : EscherDump(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ddf::EscherDump::ctor()
{
    super::ctor();
}

void poi::ddf::EscherDump::dump(::int8_tArray* data, int32_t offset, int32_t size, ::java::io::PrintStream* out)
{
    EscherRecordFactory* recordFactory = new DefaultEscherRecordFactory();
    auto pos = offset;
    while (pos < offset + size) {
        auto r = npc(recordFactory)->createRecord(data, pos);
        auto bytesRead = npc(r)->fillFields(data, pos, recordFactory);
        npc(out)->println(static_cast< ::java::lang::Object* >(r));
        pos += bytesRead;
    }
}

void poi::ddf::EscherDump::dumpOld(int64_t maxLength, ::java::io::InputStream* in, ::java::io::PrintStream* out) /* throws(IOException, LittleEndian.BufferUnderrunException) */
{
    auto remainingBytes = maxLength;
    int16_t options;
    int16_t recordId;
    int32_t recordBytesRemaining;
    int16_t nDumpSize;
    ::java::lang::String* recordName;
    auto atEOF = false;
    while (!atEOF && (remainingBytes > 0)) {
        options = ::poi::util::LittleEndian::readShort(in);
        recordId = ::poi::util::LittleEndian::readShort(in);
        recordBytesRemaining = ::poi::util::LittleEndian::readInt(in);
        remainingBytes -= int32_t(2) + int32_t(2) + int32_t(4);
        switch (recordId) {
        case static_cast< int16_t >(int32_t(61440)):
            recordName = u"MsofbtDggContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61446)):
            recordName = u"MsofbtDgg"_j;
            break;
        case static_cast< int16_t >(int32_t(61462)):
            recordName = u"MsofbtCLSID"_j;
            break;
        case static_cast< int16_t >(int32_t(61451)):
            recordName = u"MsofbtOPT"_j;
            break;
        case static_cast< int16_t >(int32_t(61722)):
            recordName = u"MsofbtColorMRU"_j;
            break;
        case static_cast< int16_t >(int32_t(61726)):
            recordName = u"MsofbtSplitMenuColors"_j;
            break;
        case static_cast< int16_t >(int32_t(61441)):
            recordName = u"MsofbtBstoreContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61447)):
            recordName = u"MsofbtBSE"_j;
            break;
        case static_cast< int16_t >(int32_t(61442)):
            recordName = u"MsofbtDgContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61448)):
            recordName = u"MsofbtDg"_j;
            break;
        case static_cast< int16_t >(int32_t(61720)):
            recordName = u"MsofbtRegroupItem"_j;
            break;
        case static_cast< int16_t >(int32_t(61728)):
            recordName = u"MsofbtColorScheme"_j;
            break;
        case static_cast< int16_t >(int32_t(61443)):
            recordName = u"MsofbtSpgrContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61444)):
            recordName = u"MsofbtSpContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61449)):
            recordName = u"MsofbtSpgr"_j;
            break;
        case static_cast< int16_t >(int32_t(61450)):
            recordName = u"MsofbtSp"_j;
            break;
        case static_cast< int16_t >(int32_t(61452)):
            recordName = u"MsofbtTextbox"_j;
            break;
        case static_cast< int16_t >(int32_t(61453)):
            recordName = u"MsofbtClientTextbox"_j;
            break;
        case static_cast< int16_t >(int32_t(61454)):
            recordName = u"MsofbtAnchor"_j;
            break;
        case static_cast< int16_t >(int32_t(61455)):
            recordName = u"MsofbtChildAnchor"_j;
            break;
        case static_cast< int16_t >(int32_t(61456)):
            recordName = u"MsofbtClientAnchor"_j;
            break;
        case static_cast< int16_t >(int32_t(61457)):
            recordName = u"MsofbtClientData"_j;
            break;
        case static_cast< int16_t >(int32_t(61727)):
            recordName = u"MsofbtOleObject"_j;
            break;
        case static_cast< int16_t >(int32_t(61725)):
            recordName = u"MsofbtDeletedPspl"_j;
            break;
        case static_cast< int16_t >(int32_t(61445)):
            recordName = u"MsofbtSolverContainer"_j;
            break;
        case static_cast< int16_t >(int32_t(61458)):
            recordName = u"MsofbtConnectorRule"_j;
            break;
        case static_cast< int16_t >(int32_t(61459)):
            recordName = u"MsofbtAlignRule"_j;
            break;
        case static_cast< int16_t >(int32_t(61460)):
            recordName = u"MsofbtArcRule"_j;
            break;
        case static_cast< int16_t >(int32_t(61461)):
            recordName = u"MsofbtClientRule"_j;
            break;
        case static_cast< int16_t >(int32_t(61463)):
            recordName = u"MsofbtCalloutRule"_j;
            break;
        case static_cast< int16_t >(int32_t(61721)):
            recordName = u"MsofbtSelection"_j;
            break;
        case static_cast< int16_t >(int32_t(61730)):
            recordName = u"MsofbtUDefProp"_j;
            break;
        default:
            if(recordId >= static_cast< int16_t >(int32_t(61464)) && recordId <= static_cast< int16_t >(int32_t(61719))) {
                recordName = u"MsofbtBLIP"_j;
            } else if((options & static_cast< int16_t >(int32_t(15))) == static_cast< int16_t >(int32_t(15))) {
                recordName = u"UNKNOWN container"_j;
            } else {
                recordName = u"UNKNOWN ID"_j;
            }
        }

        auto stringBuf = new ::java::lang::StringBuilder();
        npc(stringBuf)->append(u"  "_j);
        npc(stringBuf)->append(::poi::util::HexDump::toHex(recordId));
        npc(npc(npc(stringBuf)->append(u"  "_j))->append(recordName))->append(u" ["_j);
        npc(stringBuf)->append(::poi::util::HexDump::toHex(options));
        npc(stringBuf)->append(u',');
        npc(stringBuf)->append(::poi::util::HexDump::toHex(recordBytesRemaining));
        npc(stringBuf)->append(u"]  instance: "_j);
        npc(stringBuf)->append(::poi::util::HexDump::toHex((static_cast< int16_t >((options >> int32_t(4))))));
        npc(out)->println(static_cast< ::java::lang::Object* >(stringBuf));
        npc(stringBuf)->setLength(0);
        if(recordId == static_cast< int16_t >(int32_t(61447)) && 36 <= remainingBytes && 36 <= recordBytesRemaining) {
            int8_t n8;
            stringBuf = npc(stringBuf)->append(u"    btWin32: "_j);
            n8 = static_cast< int8_t >(npc(in)->read());
            npc(stringBuf)->append(::poi::util::HexDump::toHex(n8));
            npc(stringBuf)->append(getBlipType(n8));
            npc(stringBuf)->append(u"  btMacOS: "_j);
            n8 = static_cast< int8_t >(npc(in)->read());
            npc(stringBuf)->append(::poi::util::HexDump::toHex(n8));
            npc(stringBuf)->append(getBlipType(n8));
            npc(out)->println(static_cast< ::java::lang::Object* >(stringBuf));
            npc(out)->println(u"    rgbUid:"_j);
            ::poi::util::HexDump::dump(in, out, int32_t(0), int32_t(16));
            npc(out)->print(u"    tag: "_j);
            outHex(2, in, out);
            npc(out)->println();
            npc(out)->print(u"    size: "_j);
            outHex(4, in, out);
            npc(out)->println();
            npc(out)->print(u"    cRef: "_j);
            outHex(4, in, out);
            npc(out)->println();
            npc(out)->print(u"    offs: "_j);
            outHex(4, in, out);
            npc(out)->println();
            npc(out)->print(u"    usage: "_j);
            outHex(1, in, out);
            npc(out)->println();
            npc(out)->print(u"    cbName: "_j);
            outHex(1, in, out);
            npc(out)->println();
            npc(out)->print(u"    unused2: "_j);
            outHex(1, in, out);
            npc(out)->println();
            npc(out)->print(u"    unused3: "_j);
            outHex(1, in, out);
            npc(out)->println();
            remainingBytes -= 36;
            recordBytesRemaining = 0;
        } else if(recordId == static_cast< int16_t >(int32_t(61456)) && 18 <= remainingBytes && 18 <= recordBytesRemaining) {
            npc(out)->print(u"    Flag: "_j);
            outHex(2, in, out);
            npc(out)->println();
            npc(out)->print(u"    Col1: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    dX1: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    Row1: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    dY1: "_j);
            outHex(2, in, out);
            npc(out)->println();
            npc(out)->print(u"    Col2: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    dX2: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    Row2: "_j);
            outHex(2, in, out);
            npc(out)->print(u"    dY2: "_j);
            outHex(2, in, out);
            npc(out)->println();
            remainingBytes -= 18;
            recordBytesRemaining -= 18;
        } else if(recordId == static_cast< int16_t >(int32_t(61451)) || recordId == static_cast< int16_t >(int32_t(61730))) {
            auto nComplex = int32_t(0);
            npc(out)->println(u"    PROPID        VALUE"_j);
            while (recordBytesRemaining >= int32_t(6) + nComplex && remainingBytes >= int32_t(6) + nComplex) {
                int16_t n16;
                int32_t n32;
                n16 = ::poi::util::LittleEndian::readShort(in);
                n32 = ::poi::util::LittleEndian::readInt(in);
                recordBytesRemaining -= 6;
                remainingBytes -= 6;
                npc(out)->print(u"    "_j);
                npc(out)->print(::poi::util::HexDump::toHex(n16));
                npc(out)->print(u" ("_j);
                auto propertyId = n16 & static_cast< int16_t >(int32_t(16383));
                npc(out)->print(::java::lang::StringBuilder().append(u" "_j)->append(propertyId)->toString());
                if((n16 & static_cast< int16_t >(int32_t(32768))) == 0) {
                    if((n16 & static_cast< int16_t >(int32_t(16384))) != 0) {
                        npc(out)->print(u", fBlipID"_j);
                    }
                    npc(out)->print(u")  "_j);
                    npc(out)->print(::poi::util::HexDump::toHex(n32));
                    if((n16 & static_cast< int16_t >(int32_t(16384))) == 0) {
                        npc(out)->print(u" ("_j);
                        npc(out)->print(dec1616(n32));
                        npc(out)->print(u')');
                        npc(out)->print(::java::lang::StringBuilder().append(u" {"_j)->append(propName(static_cast< int16_t >(propertyId)))
                            ->append(u"}"_j)->toString());
                    }
                    npc(out)->println();
                } else {
                    npc(out)->print(u", fComplex)  "_j);
                    npc(out)->print(::poi::util::HexDump::toHex(n32));
                    npc(out)->print(u" - Complex prop len"_j);
                    npc(out)->println(::java::lang::StringBuilder().append(u" {"_j)->append(propName(static_cast< int16_t >(propertyId)))
                        ->append(u"}"_j)->toString());
                    nComplex += n32;
                }
            }
            while ((nComplex & remainingBytes) > 0) {
                nDumpSize = (nComplex > static_cast< int32_t >(remainingBytes)) ? static_cast< int16_t >(remainingBytes) : static_cast< int16_t >(nComplex);
                ::poi::util::HexDump::dump(in, out, int32_t(0), static_cast< int32_t >(nDumpSize));
                nComplex -= nDumpSize;
                recordBytesRemaining -= nDumpSize;
                remainingBytes -= nDumpSize;
            }
        } else if(recordId == static_cast< int16_t >(int32_t(61458))) {
            npc(out)->print(u"    Connector rule: "_j);
            npc(out)->print(::poi::util::LittleEndian::readInt(in));
            npc(out)->print(u"    ShapeID A: "_j);
            npc(out)->print(::poi::util::LittleEndian::readInt(in));
            npc(out)->print(u"   ShapeID B: "_j);
            npc(out)->print(::poi::util::LittleEndian::readInt(in));
            npc(out)->print(u"    ShapeID connector: "_j);
            npc(out)->print(::poi::util::LittleEndian::readInt(in));
            npc(out)->print(u"   Connect pt A: "_j);
            npc(out)->print(::poi::util::LittleEndian::readInt(in));
            npc(out)->print(u"   Connect pt B: "_j);
            npc(out)->println(::poi::util::LittleEndian::readInt(in));
            recordBytesRemaining -= 24;
            remainingBytes -= 24;
        } else if(recordId >= static_cast< int16_t >(int32_t(61464)) && recordId < static_cast< int16_t >(int32_t(61719))) {
            npc(out)->println(u"    Secondary UID: "_j);
            ::poi::util::HexDump::dump(in, out, int32_t(0), int32_t(16));
            npc(out)->println(::java::lang::StringBuilder().append(u"    Cache of size: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Boundary top: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Boundary left: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Boundary width: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Boundary height: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    X: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Y: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Cache of saved size: "_j)->append(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Compression Flag: "_j)->append(::poi::util::HexDump::toHex(static_cast< int8_t >(npc(in)->read())))->toString());
            npc(out)->println(::java::lang::StringBuilder().append(u"    Filter: "_j)->append(::poi::util::HexDump::toHex(static_cast< int8_t >(npc(in)->read())))->toString());
            npc(out)->println(u"    Data (after decompression): "_j);
            recordBytesRemaining -= int32_t(34) + int32_t(16);
            remainingBytes -= int32_t(34) + int32_t(16);
            nDumpSize = (recordBytesRemaining > static_cast< int32_t >(remainingBytes)) ? static_cast< int16_t >(remainingBytes) : static_cast< int16_t >(recordBytesRemaining);
            auto buf = new ::int8_tArray(nDumpSize);
            auto read = npc(in)->read(buf);
            while (read != -int32_t(1) && read < nDumpSize) {
                read += npc(in)->read(buf, read, npc(buf)->length);
            }
            auto bin = new ::java::io::ByteArrayInputStream(buf);
            ::java::io::InputStream* in1 = new ::java::util::zip::InflaterInputStream(bin);
            auto bytesToDump = -int32_t(1);
            ::poi::util::HexDump::dump(in1, out, int32_t(0), bytesToDump);
            recordBytesRemaining -= nDumpSize;
            remainingBytes -= nDumpSize;
        }
        auto isContainer = (options & static_cast< int16_t >(int32_t(15))) == static_cast< int16_t >(int32_t(15));
        if(isContainer && remainingBytes >= 0) {
            if(recordBytesRemaining <= static_cast< int32_t >(remainingBytes)) {
                npc(out)->println(u"            completed within"_j);
            } else {
                npc(out)->println(u"            continued elsewhere"_j);
            }
        } else if(remainingBytes >= 0) {
            nDumpSize = (recordBytesRemaining > static_cast< int32_t >(remainingBytes)) ? static_cast< int16_t >(remainingBytes) : static_cast< int16_t >(recordBytesRemaining);
            if(nDumpSize != 0) {
                ::poi::util::HexDump::dump(in, out, int32_t(0), static_cast< int32_t >(nDumpSize));
                remainingBytes -= nDumpSize;
            }
        } else {
            npc(out)->println(u" >> OVERRUN <<"_j);
        }
    }
}

java::lang::String* poi::ddf::EscherDump::propName(int16_t propertyId)
{
    auto const props = new EscherDump_propName_PropName_1Array({
        new EscherDump_propName_PropName_1(this, int32_t(4), u"transform.rotation"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(119), u"protection.lockrotation"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(120), u"protection.lockaspectratio"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(121), u"protection.lockposition"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(122), u"protection.lockagainstselect"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(123), u"protection.lockcropping"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(124), u"protection.lockvertices"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(125), u"protection.locktext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(126), u"protection.lockadjusthandles"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(127), u"protection.lockagainstgrouping"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(128), u"text.textid"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(129), u"text.textleft"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(130), u"text.texttop"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(131), u"text.textright"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(132), u"text.textbottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(133), u"text.wraptext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(134), u"text.scaletext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(135), u"text.anchortext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(136), u"text.textflow"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(137), u"text.fontrotation"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(138), u"text.idofnextshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(139), u"text.bidir"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(187), u"text.singleclickselects"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(188), u"text.usehostmargins"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(189), u"text.rotatetextwithshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(190), u"text.sizeshapetofittext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(191), u"text.sizetexttofitshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(192), u"geotext.unicode"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(193), u"geotext.rtftext"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(194), u"geotext.alignmentoncurve"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(195), u"geotext.defaultpointsize"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(196), u"geotext.textspacing"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(197), u"geotext.fontfamilyname"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(240), u"geotext.reverseroworder"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(241), u"geotext.hastexteffect"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(242), u"geotext.rotatecharacters"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(243), u"geotext.kerncharacters"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(244), u"geotext.tightortrack"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(245), u"geotext.stretchtofitshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(246), u"geotext.charboundingbox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(247), u"geotext.scaletextonpath"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(248), u"geotext.stretchcharheight"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(249), u"geotext.nomeasurealongpath"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(250), u"geotext.boldfont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(251), u"geotext.italicfont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(252), u"geotext.underlinefont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(253), u"geotext.shadowfont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(254), u"geotext.smallcapsfont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(255), u"geotext.strikethroughfont"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(256), u"blip.cropfromtop"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(257), u"blip.cropfrombottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(258), u"blip.cropfromleft"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(259), u"blip.cropfromright"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(260), u"blip.bliptodisplay"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(261), u"blip.blipfilename"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(262), u"blip.blipflags"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(263), u"blip.transparentcolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(264), u"blip.contrastsetting"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(265), u"blip.brightnesssetting"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(266), u"blip.gamma"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(267), u"blip.pictureid"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(268), u"blip.doublemod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(269), u"blip.picturefillmod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(270), u"blip.pictureline"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(271), u"blip.printblip"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(272), u"blip.printblipfilename"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(273), u"blip.printflags"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(316), u"blip.nohittestpicture"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(317), u"blip.picturegray"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(318), u"blip.picturebilevel"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(319), u"blip.pictureactive"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(320), u"geometry.left"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(321), u"geometry.top"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(322), u"geometry.right"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(323), u"geometry.bottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(324), u"geometry.shapepath"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(325), u"geometry.vertices"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(326), u"geometry.segmentinfo"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(327), u"geometry.adjustvalue"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(328), u"geometry.adjust2value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(329), u"geometry.adjust3value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(330), u"geometry.adjust4value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(331), u"geometry.adjust5value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(332), u"geometry.adjust6value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(333), u"geometry.adjust7value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(334), u"geometry.adjust8value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(335), u"geometry.adjust9value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(336), u"geometry.adjust10value"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(378), u"geometry.shadowOK"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(379), u"geometry.3dok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(380), u"geometry.lineok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(381), u"geometry.geotextok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(382), u"geometry.fillshadeshapeok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(383), u"geometry.fillok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(384), u"fill.filltype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(385), u"fill.fillcolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(386), u"fill.fillopacity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(387), u"fill.fillbackcolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(388), u"fill.backopacity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(389), u"fill.crmod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(390), u"fill.patterntexture"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(391), u"fill.blipfilename"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(392), u"fill.blipflags"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(393), u"fill.width"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(394), u"fill.height"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(395), u"fill.angle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(396), u"fill.focus"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(397), u"fill.toleft"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(398), u"fill.totop"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(399), u"fill.toright"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(400), u"fill.tobottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(401), u"fill.rectleft"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(402), u"fill.recttop"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(403), u"fill.rectright"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(404), u"fill.rectbottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(405), u"fill.dztype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(406), u"fill.shadepreset"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(407), u"fill.shadecolors"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(408), u"fill.originx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(409), u"fill.originy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(410), u"fill.shapeoriginx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(411), u"fill.shapeoriginy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(412), u"fill.shadetype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(443), u"fill.filled"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(444), u"fill.hittestfill"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(445), u"fill.shape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(446), u"fill.userect"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(447), u"fill.nofillhittest"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(448), u"linestyle.color"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(449), u"linestyle.opacity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(450), u"linestyle.backcolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(451), u"linestyle.crmod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(452), u"linestyle.linetype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(453), u"linestyle.fillblip"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(454), u"linestyle.fillblipname"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(455), u"linestyle.fillblipflags"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(456), u"linestyle.fillwidth"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(457), u"linestyle.fillheight"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(458), u"linestyle.filldztype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(459), u"linestyle.linewidth"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(460), u"linestyle.linemiterlimit"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(461), u"linestyle.linestyle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(462), u"linestyle.linedashing"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(463), u"linestyle.linedashstyle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(464), u"linestyle.linestartarrowhead"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(465), u"linestyle.lineendarrowhead"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(466), u"linestyle.linestartarrowwidth"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(467), u"linestyle.lineestartarrowlength"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(468), u"linestyle.lineendarrowwidth"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(469), u"linestyle.lineendarrowlength"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(470), u"linestyle.linejoinstyle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(471), u"linestyle.lineendcapstyle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(507), u"linestyle.arrowheadsok"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(508), u"linestyle.anyline"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(509), u"linestyle.hitlinetest"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(510), u"linestyle.linefillshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(511), u"linestyle.nolinedrawdash"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(512), u"shadowstyle.type"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(513), u"shadowstyle.color"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(514), u"shadowstyle.highlight"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(515), u"shadowstyle.crmod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(516), u"shadowstyle.opacity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(517), u"shadowstyle.offsetx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(518), u"shadowstyle.offsety"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(519), u"shadowstyle.secondoffsetx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(520), u"shadowstyle.secondoffsety"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(521), u"shadowstyle.scalextox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(522), u"shadowstyle.scaleytox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(523), u"shadowstyle.scalextoy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(524), u"shadowstyle.scaleytoy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(525), u"shadowstyle.perspectivex"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(526), u"shadowstyle.perspectivey"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(527), u"shadowstyle.weight"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(528), u"shadowstyle.originx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(529), u"shadowstyle.originy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(574), u"shadowstyle.shadow"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(575), u"shadowstyle.shadowobsured"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(576), u"perspective.type"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(577), u"perspective.offsetx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(578), u"perspective.offsety"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(579), u"perspective.scalextox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(580), u"perspective.scaleytox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(581), u"perspective.scalextoy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(582), u"perspective.scaleytox"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(583), u"perspective.perspectivex"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(584), u"perspective.perspectivey"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(585), u"perspective.weight"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(586), u"perspective.originx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(587), u"perspective.originy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(639), u"perspective.perspectiveon"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(640), u"3d.specularamount"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(661), u"3d.diffuseamount"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(662), u"3d.shininess"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(663), u"3d.edgethickness"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(664), u"3d.extrudeforward"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(665), u"3d.extrudebackward"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(666), u"3d.extrudeplane"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(667), u"3d.extrusioncolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(648), u"3d.crmod"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(700), u"3d.3deffect"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(701), u"3d.metallic"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(702), u"3d.useextrusioncolor"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(703), u"3d.lightface"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(704), u"3dstyle.yrotationangle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(705), u"3dstyle.xrotationangle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(706), u"3dstyle.rotationaxisx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(707), u"3dstyle.rotationaxisy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(708), u"3dstyle.rotationaxisz"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(709), u"3dstyle.rotationangle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(710), u"3dstyle.rotationcenterx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(711), u"3dstyle.rotationcentery"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(712), u"3dstyle.rotationcenterz"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(713), u"3dstyle.rendermode"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(714), u"3dstyle.tolerance"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(715), u"3dstyle.xviewpoint"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(716), u"3dstyle.yviewpoint"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(717), u"3dstyle.zviewpoint"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(718), u"3dstyle.originx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(719), u"3dstyle.originy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(720), u"3dstyle.skewangle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(721), u"3dstyle.skewamount"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(722), u"3dstyle.ambientintensity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(723), u"3dstyle.keyx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(724), u"3dstyle.keyy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(725), u"3dstyle.keyz"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(726), u"3dstyle.keyintensity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(727), u"3dstyle.fillx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(728), u"3dstyle.filly"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(729), u"3dstyle.fillz"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(730), u"3dstyle.fillintensity"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(763), u"3dstyle.constrainrotation"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(764), u"3dstyle.rotationcenterauto"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(765), u"3dstyle.parallel"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(766), u"3dstyle.keyharsh"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(767), u"3dstyle.fillharsh"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(769), u"shape.master"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(771), u"shape.connectorstyle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(772), u"shape.blackandwhitesettings"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(773), u"shape.wmodepurebw"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(774), u"shape.wmodebw"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(826), u"shape.oleicon"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(827), u"shape.preferrelativeresize"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(828), u"shape.lockshapetype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(830), u"shape.deleteattachedobject"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(831), u"shape.backgroundshape"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(832), u"callout.callouttype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(833), u"callout.xycalloutgap"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(834), u"callout.calloutangle"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(835), u"callout.calloutdroptype"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(836), u"callout.calloutdropspecified"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(837), u"callout.calloutlengthspecified"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(889), u"callout.iscallout"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(890), u"callout.calloutaccentbar"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(891), u"callout.callouttextborder"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(892), u"callout.calloutminusx"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(893), u"callout.calloutminusy"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(894), u"callout.dropauto"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(895), u"callout.lengthspecified"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(896), u"groupshape.shapename"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(897), u"groupshape.description"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(898), u"groupshape.hyperlink"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(899), u"groupshape.wrappolygonvertices"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(900), u"groupshape.wrapdistleft"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(901), u"groupshape.wrapdisttop"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(902), u"groupshape.wrapdistright"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(903), u"groupshape.wrapdistbottom"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(904), u"groupshape.regroupid"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(953), u"groupshape.editedwrap"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(954), u"groupshape.behinddocument"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(955), u"groupshape.ondblclicknotify"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(956), u"groupshape.isbutton"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(957), u"groupshape.1dadjustment"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(958), u"groupshape.hidden"_j)
        , new EscherDump_propName_PropName_1(this, int32_t(959), u"groupshape.print"_j)
    });
    for (auto i = int32_t(0); i < npc(props)->length; i++) {
        if(npc((*props)[i])->_id == propertyId) {
            return npc((*props)[i])->_name;
        }
    }
    return u"unknown property"_j;
}

java::lang::String* poi::ddf::EscherDump::getBlipType(int8_t b)
{
    clinit();
    return EscherBSERecord::getBlipType(b);
}

java::lang::String* poi::ddf::EscherDump::dec1616(int32_t n32)
{
    auto result = u""_j;
    result = ::java::lang::StringBuilder(result).append(static_cast< int16_t >((n32 >> int32_t(16))))->toString();
    result = ::java::lang::StringBuilder(result).append(u'.')->toString();
    result = ::java::lang::StringBuilder(result).append(static_cast< int16_t >((n32 & int32_t(65535))))->toString();
    return result;
}

void poi::ddf::EscherDump::outHex(int32_t bytes, ::java::io::InputStream* in, ::java::io::PrintStream* out) /* throws(IOException, LittleEndian.BufferUnderrunException) */
{
    switch (bytes) {
    case int32_t(1):
        npc(out)->print(::poi::util::HexDump::toHex(static_cast< int8_t >(npc(in)->read())));
        break;
    case int32_t(2):
        npc(out)->print(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readShort(in)));
        break;
    case int32_t(4):
        npc(out)->print(::poi::util::HexDump::toHex(::poi::util::LittleEndian::readInt(in)));
        break;
    default:
        throw new ::java::io::IOException(u"Unable to output variable of that width"_j);
    }

}

void poi::ddf::EscherDump::main(::java::lang::StringArray* args)
{
    clinit();
    main(args, ::java::lang::System::out());
}

void poi::ddf::EscherDump::main(::java::lang::StringArray* args, ::java::io::PrintStream* out)
{
    clinit();
    auto dump = ::java::lang::StringBuilder().append(u"0F 00 00 F0 89 07 00 00 00 00 06 F0 18 00 00 00 "_j)->append(u"05 04 00 00 02 00 00 00 05 00 00 00 01 00 00 00 "_j)
        ->append(u"01 00 00 00 05 00 00 00 4F 00 01 F0 2F 07 00 00 "_j)
        ->append(u"42 00 07 F0 B7 01 00 00 03 04 3F 14 AE 6B 0F 65 "_j)
        ->append(u"B0 48 BF 5E 94 63 80 E8 91 73 FF 00 93 01 00 00 "_j)
        ->append(u"01 00 00 00 00 00 00 00 00 00 FF FF 20 54 1C F0 "_j)
        ->append(u"8B 01 00 00 3F 14 AE 6B 0F 65 B0 48 BF 5E 94 63 "_j)
        ->append(u"80 E8 91 73 92 0E 00 00 00 00 00 00 00 00 00 00 "_j)
        ->append(u"D1 07 00 00 DD 05 00 00 4A AD 6F 00 8A C5 53 00 "_j)
        ->append(u"59 01 00 00 00 FE 78 9C E3 9B C4 00 04 AC 77 D9 "_j)
        ->append(u"2F 32 08 32 FD E7 61 F8 FF 0F C8 FD 05 C5 30 19 "_j)
        ->append(u"10 90 63 90 FA 0F 06 0C 8C 0C 5C 70 19 43 30 EB "_j)
        ->append(u"0E FB 05 86 85 0C DB 18 58 80 72 8C 70 16 0B 83 "_j)
        ->append(u"05 56 51 29 88 C9 60 D9 69 0C 6C 20 26 23 03 C8 "_j)
        ->append(u"74 B0 A8 0E 03 07 FB 45 56 C7 A2 CC C4 1C 06 66 "_j)
        ->append(u"A0 0D 2C 40 39 5E 86 4C 06 3D A0 4E 10 D0 60 D9 "_j)
        ->append(u"C8 58 CC E8 CF B0 80 61 3A 8A 7E 0D C6 23 AC 4F "_j)
        ->append(u"E0 E2 98 B6 12 2B 06 73 9D 12 E3 52 56 59 F6 08 "_j)
        ->append(u"8A CC 52 66 A3 50 FF 96 2B 94 E9 DF 4C A1 FE 2D "_j)
        ->append(u"3A 03 AB 9F 81 C2 F0 A3 54 BF 0F 85 EE A7 54 FF "_j)
        ->append(u"40 FB 7F A0 E3 9F D2 F4 4F 71 FE 19 58 FF 2B 31 "_j)
        ->append(u"7F 67 36 3B 25 4F 99 1B 4E 53 A6 5F 89 25 95 E9 "_j)
        ->append(u"C4 00 C7 83 12 F3 1F 26 35 4A D3 D2 47 0E 0A C3 "_j)
        ->append(u"41 8E C9 8A 52 37 DC 15 A1 D0 0D BC 4C 06 0C 2B "_j)
        ->append(u"28 2C 13 28 D4 EF 43 61 5A A0 58 3F 85 71 E0 4B "_j)
        ->append(u"69 9E 64 65 FE 39 C0 E5 22 30 1D 30 27 0E 74 3A "_j)
        ->append(u"18 60 FD 4A CC B1 2C 13 7D 07 36 2D 2A 31 85 B2 "_j)
        ->append(u"6A 0D 74 1D 1D 22 4D 99 FE 60 0A F5 9B EC 1C 58 "_j)
        ->append(u"FD 67 06 56 3F 38 0D 84 3C A5 30 0E 28 D3 AF C4 "_j)
        ->append(u"A4 CA FA 44 7A 0D 65 6E 60 7F 4D A1 1B 24 58 F7 "_j)
        ->append(u"49 AF A5 CC 0D CC DF 19 FE 03 00 F0 B1 25 4D 42 "_j)
        ->append(u"00 07 F0 E1 01 00 00 03 04 39 50 BE 98 B0 6F 57 "_j)
        ->append(u"24 31 70 5D 23 2F 9F 10 66 FF 00 BD 01 00 00 01 "_j)
        ->append(u"00 00 00 00 00 00 00 00 00 FF FF 20 54 1C F0 B5 "_j)
        ->append(u"01 00 00 39 50 BE 98 B0 6F 57 24 31 70 5D 23 2F "_j)
        ->append(u"9F 10 66 DA 03 00 00 00 00 00 00 00 00 00 00 D1 "_j)
        ->append(u"07 00 00 DD 05 00 00 4A AD 6F 00 8A C5 53 00 83 "_j)
        ->append(u"01 00 00 00 FE 78 9C A5 52 BF 4B 42 51 14 3E F7 "_j)
        ->append(u"DC 77 7A 16 45 48 8B 3C 48 A8 16 15 0D 6C 88 D0 "_j)
        ->append(u"04 C3 40 A3 32 1C 84 96 08 21 04 A1 C5 5C A2 35 "_j)
        ->append(u"82 C0 35 6A AB 1C 6A 6B A8 24 5A 83 68 08 84 84 "_j)
        ->append(u"96 A2 86 A0 7F C2 86 5E E7 5E F5 41 E4 10 BC 03 "_j)
        ->append(u"1F E7 FB F1 CE B9 F7 F1 9E 7C 05 2E 7A 37 9B E0 "_j)
        ->append(u"45 7B 10 EC 6F 96 5F 1D 74 13 55 7E B0 6C 5D 20 "_j)
        ->append(u"60 C0 49 A2 9A BD 99 4F 50 83 1B 30 38 13 0E 33 "_j)
        ->append(u"60 A6 A7 6B B5 37 EB F4 10 FA 14 15 A0 B6 6B 37 "_j)
        ->append(u"0C 1E B3 49 73 5B A5 C2 26 48 3E C1 E0 6C 08 4A "_j)
        ->append(u"30 C9 93 AA 02 B8 20 13 62 05 4E E1 E8 D7 7C C0 "_j)
        ->append(u"B8 14 95 5E BE B8 A7 CF 1E BE 55 2C 56 B9 78 DF "_j)
        ->append(u"08 7E 88 4C 27 FF 7B DB FF 7A DD B7 1A 17 67 34 "_j)
        ->append(u"6A AE BA DA 35 D1 E7 72 BE FE EC 6E FE DA E5 7C "_j)
        ->append(u"3D EC 7A DE 03 FD 50 06 0B 23 F2 0E F3 B2 A5 11 "_j)
        ->append(u"91 0D 4C B5 B5 F3 BF 94 C1 8F 24 F7 D9 6F 60 94 "_j)
        ->append(u"3B C9 9A F3 1C 6B E7 BB F0 2E 49 B2 25 2B C6 B1 "_j)
        ->append(u"EE 69 EE 15 63 4F 71 7D CE 85 CC C8 35 B9 C3 28 "_j)
        ->append(u"28 CE D0 5C 67 79 F2 4A A2 14 23 A4 38 43 73 9D "_j)
        ->append(u"2D 69 2F C1 08 31 9F C5 5C 9B EB 7B C5 69 19 B3 "_j)
        ->append(u"B4 81 F3 DC E3 B4 8E 8B CC B3 94 53 5A E7 41 2A "_j)
        ->append(u"63 9A AA 38 C5 3D 48 BB EC 57 59 6F 2B AD 73 1F "_j)
        ->append(u"1D 60 92 AE 70 8C BB 8F CE 31 C1 3C 49 27 4A EB "_j)
        ->append(u"DC A4 5B 8C D1 0B 0E 73 37 E9 11 A7 99 C7 E8 41 "_j)
        ->append(u"69 B0 7F 00 96 F2 A7 E8 42 00 07 F0 B4 01 00 00 "_j)
        ->append(u"03 04 1A BA F9 D6 A9 B9 3A 03 08 61 E9 90 FF 7B "_j)
        ->append(u"9E E6 FF 00 90 01 00 00 01 00 00 00 00 00 00 00 "_j)
        ->append(u"00 00 FF FF 20 54 1C F0 88 01 00 00 1A BA F9 D6 "_j)
        ->append(u"A9 B9 3A 03 08 61 E9 90 FF 7B 9E E6 12 0E 00 00 "_j)
        ->append(u"00 00 00 00 00 00 00 00 D1 07 00 00 DD 05 00 00 "_j)
        ->append(u"4A AD 6F 00 8A C5 53 00 56 01 00 00 00 FE 78 9C "_j)
        ->append(u"E3 13 62 00 02 D6 BB EC 17 19 04 99 FE F3 30 FC "_j)
        ->append(u"FF 07 E4 FE 82 62 98 0C 08 C8 31 48 FD 07 03 06 "_j)
        ->append(u"46 06 2E B8 8C 21 98 75 87 FD 02 C3 42 86 6D 0C "_j)
        ->append(u"2C 40 39 46 38 8B 85 C1 02 AB A8 14 C4 64 B0 EC "_j)
        ->append(u"34 06 36 10 93 91 01 64 3A 58 54 87 81 83 FD 22 "_j)
        ->append(u"AB 63 51 66 62 0E 03 33 D0 06 16 A0 1C 2F 43 26 "_j)
        ->append(u"83 1E 50 27 08 68 B0 6C 64 2C 66 F4 67 58 C0 30 "_j)
        ->append(u"1D 45 BF 06 E3 11 D6 27 70 71 4C 5B 89 15 83 B9 "_j)
        ->append(u"4E 89 71 29 AB 2C 7B 04 45 66 29 B3 51 A8 7F CB "_j)
        ->append(u"15 CA F4 6F A6 50 FF 16 9D 81 D5 CF 40 61 F8 51 "_j)
        ->append(u"AA DF 87 42 F7 53 AA 7F A0 FD 3F D0 F1 4F 69 FA "_j)
        ->append(u"A7 38 FF 0C AC FF 95 98 BF 33 9B 9D 92 A7 CC 0D "_j)
        ->append(u"A7 29 D3 AF C4 92 CA 74 62 80 E3 41 89 F9 0F 93 "_j)
        ->append(u"1A A5 69 E9 23 07 85 E1 20 C7 64 45 A9 1B EE 8A "_j)
        ->append(u"50 E8 06 5E 26 03 86 15 14 96 09 14 EA F7 A1 30 "_j)
        ->append(u"2D 50 AC 9F C2 38 F0 A5 34 4F B2 32 FF 1C E0 72 "_j)
        ->append(u"11 98 0E 98 13 07 38 1D 28 31 C7 B2 4C F4 1D D8 "_j)
        ->append(u"B4 A0 C4 14 CA AA 35 D0 75 64 88 34 65 FA 83 29 "_j)
        ->append(u"D4 6F B2 73 60 F5 9F A1 54 FF 0E CA D3 40 C8 53 "_j)
        ->append(u"0A E3 E0 09 85 6E 50 65 7D 22 BD 86 32 37 B0 BF "_j)
        ->append(u"A6 D0 0D 12 AC FB A4 D7 52 E6 06 E6 EF 0C FF 01 "_j)
        ->append(u"97 1D 12 C7 42 00 07 F0 C3 01 00 00 03 04 BA 4C "_j)
        ->append(u"B6 23 BA 8B 27 BE C8 55 59 86 24 9F 89 D4 FF 00 "_j)
        ->append(u"9F 01 00 00 01 00 00 00 00 00 00 00 00 00 FF FF "_j)
        ->append(u"20 54 1C F0 97 01 00 00 BA 4C B6 23 BA 8B 27 BE "_j)
        ->append(u"C8 55 59 86 24 9F 89 D4 AE 0E 00 00 00 00 00 00 "_j)
        ->append(u"00 00 00 00 D1 07 00 00 DD 05 00 00 4A AD 6F 00 "_j)
        ->append(u"8A C5 53 00 65 01 00 00 00 FE 78 9C E3 5B C7 00 "_j)
        ->append(u"04 AC 77 D9 2F 32 08 32 FD E7 61 F8 FF 0F C8 FD "_j)
        ->append(u"05 C5 30 19 10 90 63 90 FA 0F 06 0C 8C 0C 5C 70 "_j)
        ->append(u"19 43 30 EB 0E FB 05 86 85 0C DB 18 58 80 72 8C "_j)
        ->append(u"70 16 0B 83 05 56 51 29 88 C9 60 D9 69 0C 6C 20 "_j)
        ->append(u"26 23 03 C8 74 B0 A8 0E 03 07 FB 45 56 C7 A2 CC "_j)
        ->append(u"C4 1C 06 66 A0 0D 2C 40 39 5E 86 4C 06 3D A0 4E "_j)
        ->append(u"10 D0 60 99 C6 B8 98 D1 9F 61 01 C3 74 14 FD 1A "_j)
        ->append(u"8C 2B D8 84 B1 88 4B A5 A5 75 03 01 50 DF 59 46 "_j)
        ->append(u"77 46 0F A8 3C A6 AB 88 15 83 B9 5E 89 B1 8B D5 "_j)
        ->append(u"97 2D 82 22 B3 94 29 D5 BF E5 CA C0 EA DF AC 43 "_j)
        ->append(u"A1 FD 14 EA 67 A0 30 FC 28 D5 EF 43 A1 FB 7D 87 "_j)
        ->append(u"B8 FF 07 3A FE 07 3A FD 53 EA 7E 0A C3 4F 89 F9 "_j)
        ->append(u"0E 73 EA 69 79 CA DC 70 8A 32 FD 4A 2C 5E 4C DF "_j)
        ->append(u"87 7A 3C BC E0 A5 30 1E 3E 31 C5 33 AC A0 30 2F "_j)
        ->append(u"52 A8 DF 87 C2 30 A4 54 3F A5 65 19 85 65 A9 12 "_j)
        ->append(u"D3 2B 16 0D 8A CB 13 4A F3 E3 27 E6 09 03 9D 0E "_j)
        ->append(u"06 58 BF 12 B3 13 CB C1 01 4E 8B 4A 4C 56 AC 91 "_j)
        ->append(u"03 5D 37 86 48 53 A6 3F 98 42 FD 26 3B 07 56 FF "_j)
        ->append(u"99 1D 14 EA A7 CC 7E 70 1A 08 79 42 61 1C 3C A5 "_j)
        ->append(u"D0 0D 9C 6C C2 32 6B 29 73 03 DB 6B CA DC C0 F8 "_j)
        ->append(u"97 F5 AD CC 1A CA DC C0 F4 83 32 37 B0 A4 30 CE "_j)
        ->append(u"FC C7 48 99 1B FE 33 32 FC 07 00 6C CC 2E 23 33 "_j)
        ->append(u"00 0B F0 12 00 00 00 BF 00 08 00 08 00 81 01 09 "_j)
        ->append(u"00 00 08 C0 01 40 00 00 08 40 00 1E F1 10 00 00 "_j)
        ->append(u"00 0D 00 00 08 0C 00 00 08 17 00 00 08 F7 00 00 "_j)
        ->append(u"10                                              "_j)->toString();
    auto bytes = ::poi::util::HexRead::readFromString(dump);
    auto dumper = new EscherDump();
    npc(dumper)->dump(bytes, 0, npc(bytes)->length, out);
}

void poi::ddf::EscherDump::dump(int32_t recordSize, ::int8_tArray* data, ::java::io::PrintStream* out)
{
    dump(data, 0, recordSize, out);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherDump::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherDump", 29);
    return c;
}

java::lang::Class* poi::ddf::EscherDump::getClass0()
{
    return class_();
}

