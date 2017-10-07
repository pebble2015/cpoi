// Generated from /POI/java/org/apache/poi/ss/format/CellDateFormatter.java
#include <org/apache/poi/ss/format/CellDateFormatter_DatePartHandler.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/format/CellDateFormatter.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::CellDateFormatter_DatePartHandler(CellDateFormatter *CellDateFormatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , CellDateFormatter_this(CellDateFormatter_this)
{
    clinit();
}

org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::CellDateFormatter_DatePartHandler(CellDateFormatter *CellDateFormatter_this)
    : CellDateFormatter_DatePartHandler(CellDateFormatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::init()
{
    mStart = -int32_t(1);
    hStart = -int32_t(1);
}

java::lang::String* org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc)
{
    auto pos = npc(desc)->length();
    auto firstCh = npc(part)->charAt(int32_t(0));
    {
        int32_t sLen;
        switch (firstCh) {
        case u's':
        case u'S':
            if(mStart >= 0) {
                for (auto i = int32_t(0); i < mLen; i++) 
                                        npc(desc)->setCharAt(mStart + i, u'm');

                mStart = -int32_t(1);
            }
            return npc(part)->toLowerCase(::java::util::Locale::ROOT());
        case u'h':
        case u'H':
            mStart = -int32_t(1);
            hStart = pos;
            hLen = npc(part)->length();
            return npc(part)->toLowerCase(::java::util::Locale::ROOT());
        case u'd':
        case u'D':
            mStart = -int32_t(1);
            if(npc(part)->length() <= 2)
                return npc(part)->toLowerCase(::java::util::Locale::ROOT());
            else
                return npc(npc(part)->toLowerCase(::java::util::Locale::ROOT()))->replace(u'd', u'E');
        case u'm':
        case u'M':
            mStart = pos;
            mLen = npc(part)->length();
            if(hStart >= 0)
                return npc(part)->toLowerCase(::java::util::Locale::ROOT());
            else
                return npc(part)->toUpperCase(::java::util::Locale::ROOT());
        case u'y':
        case u'Y':
            mStart = -int32_t(1);
            if(npc(part)->length() == 3)
                part = u"yyyy"_j;

            return npc(part)->toLowerCase(::java::util::Locale::ROOT());
        case u'0':
            mStart = -int32_t(1);
            sLen = npc(part)->length();
            CellDateFormatter_this->sFmt = ::java::lang::StringBuilder().append(u"%0"_j)->append((sLen + int32_t(2)))
                ->append(u"."_j)
                ->append(sLen)
                ->append(u"f"_j)->toString();
            return npc(part)->replace(u'0', u'S');
        case u'a':
        case u'A':
        case u'p':
        case u'P':
            if(npc(part)->length() > 1) {
                mStart = -int32_t(1);
                CellDateFormatter_this->showAmPm = true;
                CellDateFormatter_this->showM = ::java::lang::Character::toLowerCase(npc(part)->charAt(int32_t(1))) == u'm';
                CellDateFormatter_this->amPmUpper = CellDateFormatter_this->showM || ::java::lang::Character::isUpperCase(npc(part)->charAt(int32_t(0)));
                return u"a"_j;
            }
        default:
            return nullptr;
        }
    }

}

void org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::finish(::java::lang::StringBuffer* toAppendTo)
{
    if(hStart >= 0 && !CellDateFormatter_this->showAmPm) {
        for (auto i = int32_t(0); i < hLen; i++) {
            npc(toAppendTo)->setCharAt(hStart + i, u'H');
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellDateFormatter.DatePartHandler", 58);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellDateFormatter_DatePartHandler::getClass0()
{
    return class_();
}

