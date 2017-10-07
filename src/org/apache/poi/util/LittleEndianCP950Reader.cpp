// Generated from /POI/java/org/apache/poi/util/LittleEndianCP950Reader.java
#include <org/apache/poi/util/LittleEndianCP950Reader.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/CharBuffer.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetDecoder.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::LittleEndianCP950Reader::LittleEndianCP950Reader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::LittleEndianCP950Reader::LittleEndianCP950Reader(::int8_tArray* data) 
    : LittleEndianCP950Reader(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

org::apache::poi::util::LittleEndianCP950Reader::LittleEndianCP950Reader(::int8_tArray* data, int32_t offset, int32_t length) 
    : LittleEndianCP950Reader(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset,length);
}

void org::apache::poi::util::LittleEndianCP950Reader::init()
{
    doubleByteBuffer = ::java::nio::ByteBuffer::allocate(2);
    charBuffer = ::java::nio::CharBuffer::allocate(2);
    decoder = npc(StringUtil::BIG5())->newDecoder();
    cnt = int32_t(0);
}

org::apache::poi::util::POILogger*& org::apache::poi::util::LittleEndianCP950Reader::LOGGER()
{
    clinit();
    return LOGGER_;
}
org::apache::poi::util::POILogger* org::apache::poi::util::LittleEndianCP950Reader::LOGGER_;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::UNMAPPABLE;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range1Low;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range1High;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range2Low;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range2High;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range3Low;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range3High;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range4Low;

constexpr char16_t org::apache::poi::util::LittleEndianCP950Reader::range4High;

void org::apache::poi::util::LittleEndianCP950Reader::ctor(::int8_tArray* data)
{
    ctor(data, int32_t(0), npc(data)->length);
}

void org::apache::poi::util::LittleEndianCP950Reader::ctor(::int8_tArray* data, int32_t offset, int32_t length)
{
    super::ctor();
    init();
    this->data = data;
    this->startOffset = offset;
    this->offset = startOffset;
    this->length = length;
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::read()
{
    if(offset + int32_t(1) > npc(data)->length || offset - startOffset > length) {
        return -int32_t(1);
    }
    trailing = (*data)[offset++] & int32_t(255);
    leading = (*data)[offset++] & int32_t(255);
    npc(decoder)->reset();
    if(leading < 129) {
        return trailing;
    } else if(leading == 249) {
        return handleF9(trailing);
    } else {
        auto ch = (leading << int32_t(8)) + trailing;
        if(ch >= range1Low && ch <= range1High) {
            return handleRange1(leading, trailing);
        } else if(ch >= range2Low && ch <= range2High) {
            return handleRange2(leading, trailing);
        } else if(ch >= range3Low && ch <= range3High) {
            return handleRange3(leading, trailing);
        } else if(ch >= range4Low && ch <= range4High) {
            return handleRange4(leading, trailing);
        }
        npc(charBuffer)->clear();
        npc(doubleByteBuffer)->clear();
        npc(doubleByteBuffer)->put(static_cast< int8_t >(leading));
        npc(doubleByteBuffer)->put(static_cast< int8_t >(trailing));
        npc(doubleByteBuffer)->flip();
        npc(decoder)->decode(doubleByteBuffer, charBuffer, true);
        npc(charBuffer)->flip();
        if(npc(charBuffer)->length() == 0) {
            npc(LOGGER_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"couldn't create char for: "_j)->append(::java::lang::Integer::toString((leading & int32_t(255)), 16))
                ->append(u" "_j)
                ->append(::java::lang::Integer::toString((trailing & int32_t(255)), 16))->toString())}));
            return UNMAPPABLE;
        } else {
            return ::java::lang::Character::codePointAt(static_cast< ::java::lang::CharSequence* >(charBuffer), int32_t(0));
        }
    }
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::read(::char16_tArray* cbuf, int32_t off, int32_t len) /* throws(IOException) */
{
    for (auto i = off; i < off + len; i++) {
        auto c = read();
        if(c == -int32_t(1)) {
            return i - off;
        }
        (*cbuf)[i] = static_cast< char16_t >(c);
    }
    return len;
}

void org::apache::poi::util::LittleEndianCP950Reader::close()
{
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::handleRange1(int32_t leading, int32_t trailing)
{
    return (int32_t(61112) + (int32_t(157) * (leading - int32_t(129)))) + ((trailing < 128) ? trailing - int32_t(64) : trailing - int32_t(98));
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::handleRange2(int32_t leading, int32_t trailing)
{
    return (int32_t(58129) + (int32_t(157) * (leading - int32_t(142)))) + ((trailing < 128) ? trailing - int32_t(64) : trailing - int32_t(98));
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::handleRange3(int32_t leading, int32_t trailing)
{
    return (int32_t(63090) + (int32_t(157) * (leading - int32_t(198)))) + ((trailing < 128) ? trailing - int32_t(64) : trailing - int32_t(98));
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::handleRange4(int32_t leading, int32_t trailing)
{
    return (int32_t(57344) + (int32_t(157) * (leading - int32_t(250)))) + ((trailing < 128) ? trailing - int32_t(64) : trailing - int32_t(98));
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::handleF9(int32_t trailing)
{
    switch (trailing) {
    case int32_t(64):
        return 32408;
    case int32_t(65):
        return 32411;
    case int32_t(66):
        return 32409;
    case int32_t(67):
        return 33248;
    case int32_t(68):
        return 33249;
    case int32_t(69):
        return 34374;
    case int32_t(70):
        return 34375;
    case int32_t(71):
        return 34376;
    case int32_t(72):
        return 35193;
    case int32_t(73):
        return 35194;
    case int32_t(74):
        return 35196;
    case int32_t(75):
        return 35195;
    case int32_t(76):
        return 35327;
    case int32_t(77):
        return 35736;
    case int32_t(78):
        return 35737;
    case int32_t(79):
        return 36517;
    case int32_t(80):
        return 36516;
    case int32_t(81):
        return 36515;
    case int32_t(82):
        return 37998;
    case int32_t(83):
        return 37997;
    case int32_t(84):
        return 37999;
    case int32_t(85):
        return 38001;
    case int32_t(86):
        return 38003;
    case int32_t(87):
        return 38729;
    case int32_t(88):
        return 39026;
    case int32_t(89):
        return 39263;
    case int32_t(90):
        return 40040;
    case int32_t(91):
        return 40046;
    case int32_t(92):
        return 40045;
    case int32_t(93):
        return 40459;
    case int32_t(94):
        return 40461;
    case int32_t(95):
        return 40464;
    case int32_t(96):
        return 40463;
    case int32_t(97):
        return 40466;
    case int32_t(98):
        return 40465;
    case int32_t(99):
        return 40609;
    case int32_t(100):
        return 40693;
    case int32_t(101):
        return 40713;
    case int32_t(102):
        return 40775;
    case int32_t(103):
        return 40824;
    case int32_t(104):
        return 40827;
    case int32_t(105):
        return 40826;
    case int32_t(106):
        return 40825;
    case int32_t(107):
        return 22302;
    case int32_t(108):
        return 28774;
    case int32_t(109):
        return 31855;
    case int32_t(110):
        return 34876;
    case int32_t(111):
        return 36274;
    case int32_t(112):
        return 36518;
    case int32_t(113):
        return 37315;
    case int32_t(114):
        return 38004;
    case int32_t(115):
        return 38008;
    case int32_t(116):
        return 38006;
    case int32_t(117):
        return 38005;
    case int32_t(118):
        return 39520;
    case int32_t(119):
        return 40052;
    case int32_t(120):
        return 40051;
    case int32_t(121):
        return 40049;
    case int32_t(122):
        return 40053;
    case int32_t(123):
        return 40468;
    case int32_t(124):
        return 40467;
    case int32_t(125):
        return 40694;
    case int32_t(126):
        return 40714;
    case int32_t(161):
        return 40868;
    case int32_t(162):
        return 28776;
    case int32_t(163):
        return 28773;
    case int32_t(164):
        return 31991;
    case int32_t(165):
        return 34410;
    case int32_t(166):
        return 34878;
    case int32_t(167):
        return 34877;
    case int32_t(168):
        return 34879;
    case int32_t(169):
        return 35742;
    case int32_t(170):
        return 35996;
    case int32_t(171):
        return 36521;
    case int32_t(172):
        return 36553;
    case int32_t(173):
        return 38731;
    case int32_t(174):
        return 39027;
    case int32_t(175):
        return 39028;
    case int32_t(176):
        return 39116;
    case int32_t(177):
        return 39265;
    case int32_t(178):
        return 39339;
    case int32_t(179):
        return 39524;
    case int32_t(180):
        return 39526;
    case int32_t(181):
        return 39527;
    case int32_t(182):
        return 39716;
    case int32_t(183):
        return 40469;
    case int32_t(184):
        return 40471;
    case int32_t(185):
        return 40776;
    case int32_t(186):
        return 25095;
    case int32_t(187):
        return 27422;
    case int32_t(188):
        return 29223;
    case int32_t(189):
        return 34380;
    case int32_t(190):
        return 36520;
    case int32_t(191):
        return 38018;
    case int32_t(192):
        return 38016;
    case int32_t(193):
        return 38017;
    case int32_t(194):
        return 39529;
    case int32_t(195):
        return 39528;
    case int32_t(196):
        return 39726;
    case int32_t(197):
        return 40473;
    case int32_t(198):
        return 29225;
    case int32_t(199):
        return 34379;
    case int32_t(200):
        return 35743;
    case int32_t(201):
        return 38019;
    case int32_t(202):
        return 40057;
    case int32_t(203):
        return 40631;
    case int32_t(204):
        return 30325;
    case int32_t(205):
        return 39531;
    case int32_t(206):
        return 40058;
    case int32_t(207):
        return 40477;
    case int32_t(208):
        return 28777;
    case int32_t(209):
        return 28778;
    case int32_t(210):
        return 40612;
    case int32_t(211):
        return 40830;
    case int32_t(212):
        return 40777;
    case int32_t(213):
        return 40856;
    case int32_t(214):
        return 30849;
    case int32_t(215):
        return 37561;
    case int32_t(216):
        return 35023;
    case int32_t(217):
        return 22715;
    case int32_t(218):
        return 24658;
    case int32_t(219):
        return 31911;
    case int32_t(220):
        return 23290;
    case int32_t(221):
        return 9556;
    case int32_t(222):
        return 9574;
    case int32_t(223):
        return 9559;
    case int32_t(224):
        return 9568;
    case int32_t(225):
        return 9580;
    case int32_t(226):
        return 9571;
    case int32_t(227):
        return 9562;
    case int32_t(228):
        return 9577;
    case int32_t(229):
        return 9565;
    case int32_t(230):
        return 9554;
    case int32_t(231):
        return 9572;
    case int32_t(232):
        return 9557;
    case int32_t(233):
        return 9566;
    case int32_t(234):
        return 9578;
    case int32_t(235):
        return 9569;
    case int32_t(236):
        return 9560;
    case int32_t(237):
        return 9575;
    case int32_t(238):
        return 9563;
    case int32_t(239):
        return 9555;
    case int32_t(240):
        return 9573;
    case int32_t(241):
        return 9558;
    case int32_t(242):
        return 9567;
    case int32_t(243):
        return 9579;
    case int32_t(244):
        return 9570;
    case int32_t(245):
        return 9561;
    case int32_t(246):
        return 9576;
    case int32_t(247):
        return 9564;
    case int32_t(248):
        return 9553;
    case int32_t(249):
        return 9552;
    case int32_t(250):
        return 9581;
    case int32_t(251):
        return 9582;
    case int32_t(252):
        return 9584;
    case int32_t(253):
        return 9583;
    case int32_t(254):
        return 9619;
    default:
        npc(LOGGER_)->log(POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"couldn't create char for: f9"_j)->append(u" "_j)
            ->append(::java::lang::Integer::toString((trailing & int32_t(255)), 16))->toString())}));
        return UNMAPPABLE;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::LittleEndianCP950Reader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndianCP950Reader", 43);
    return c;
}

void org::apache::poi::util::LittleEndianCP950Reader::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOGGER_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(LittleEndianCP950Reader::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::read(::java::nio::CharBuffer* target)
{
    return super::read(target);
}

int32_t org::apache::poi::util::LittleEndianCP950Reader::read(::char16_tArray* cbuf)
{
    return super::read(cbuf);
}

java::lang::Class* org::apache::poi::util::LittleEndianCP950Reader::getClass0()
{
    return class_();
}

