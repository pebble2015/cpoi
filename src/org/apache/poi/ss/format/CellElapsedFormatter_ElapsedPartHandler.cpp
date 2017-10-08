// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java
#include <org/apache/poi/ss/format/CellElapsedFormatter_ElapsedPartHandler.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/format/CellElapsedFormatter_TimeSpec.hpp>
#include <org/apache/poi/ss/format/CellElapsedFormatter.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::format::CellElapsedFormatter_ElapsedPartHandler::CellElapsedFormatter_ElapsedPartHandler(CellElapsedFormatter *CellElapsedFormatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , CellElapsedFormatter_this(CellElapsedFormatter_this)
{
    clinit();
}

poi::ss::format::CellElapsedFormatter_ElapsedPartHandler::CellElapsedFormatter_ElapsedPartHandler(CellElapsedFormatter *CellElapsedFormatter_this)
    : CellElapsedFormatter_ElapsedPartHandler(CellElapsedFormatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::ss::format::CellElapsedFormatter_ElapsedPartHandler::handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc)
{
    auto pos = npc(desc)->length();
    auto firstCh = npc(part)->charAt(int32_t(0));
    {
        int32_t specLen;
        switch (firstCh) {
        case u'[':
            if(npc(part)->length() < 3)
                break;

            if(CellElapsedFormatter_this->topmost != nullptr)
                throw new ::java::lang::IllegalArgumentException(u"Duplicate '[' times in format"_j);

            part = npc(part)->toLowerCase(::java::util::Locale::ROOT());
            specLen = npc(part)->length() - int32_t(2);
            CellElapsedFormatter_this->topmost = CellElapsedFormatter_this->assignSpec(npc(part)->charAt(int32_t(1)), pos, specLen);
            return npc(part)->substring(1, int32_t(1) + specLen);
        case u'h':
        case u'm':
        case u's':
        case u'0':
            part = npc(part)->toLowerCase(::java::util::Locale::ROOT());
            CellElapsedFormatter_this->assignSpec(npc(part)->charAt(int32_t(0)), pos, npc(part)->length());
            return part;
        case u'\u000a':
            return u"%n"_j;
        case u'"':
            part = npc(part)->substring(1, npc(part)->length() - int32_t(1));
            break;
        case u'\\':
            part = npc(part)->substring(1);
            break;
        case u'*':
            if(npc(part)->length() > 1)
                part = CellFormatPart::expandChar(part);

            break;
        case u'_':
            return nullptr;
        }
    }

    return npc(npc(CellElapsedFormatter::PERCENTS())->matcher(part))->replaceAll(u"%%"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellElapsedFormatter_ElapsedPartHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellElapsedFormatter.ElapsedPartHandler", 64);
    return c;
}

java::lang::Class* poi::ss::format::CellElapsedFormatter_ElapsedPartHandler::getClass0()
{
    return class_();
}

