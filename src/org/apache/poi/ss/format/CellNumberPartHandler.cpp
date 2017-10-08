// Generated from /POI/java/org/apache/poi/ss/format/CellNumberPartHandler.java
#include <org/apache/poi/ss/format/CellNumberPartHandler.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <org/apache/poi/ss/format/CellNumberFormatter_Special.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::format::CellNumberPartHandler::CellNumberPartHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellNumberPartHandler::CellNumberPartHandler()
    : CellNumberPartHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::format::CellNumberPartHandler::ctor()
{
    super::ctor();
    init();
}

void poi::ss::format::CellNumberPartHandler::init()
{
    scale = int32_t(1);
    specials = new ::java::util::LinkedList();
}

java::lang::String* poi::ss::format::CellNumberPartHandler::handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* descBuf)
{
    auto pos = npc(descBuf)->length();
    auto firstCh = npc(part)->charAt(int32_t(0));
    switch (firstCh) {
    case u'e':
    case u'E':
        if(exponent == nullptr && npc(specials)->size() > 0) {
            exponent = new CellNumberFormatter_Special(u'.', pos);
            npc(specials)->add(static_cast< ::java::lang::Object* >(exponent));
            insertSignForExponent = npc(part)->charAt(int32_t(1));
            return npc(part)->substring(0, 1);
        }
        break;
    case u'0':
    case u'?':
    case u'#':
        if(insertSignForExponent != char16_t(0x0000)) {
            npc(specials)->add(static_cast< ::java::lang::Object* >(new CellNumberFormatter_Special(insertSignForExponent, pos)));
            npc(descBuf)->append(insertSignForExponent);
            insertSignForExponent = char16_t(0x0000);
            pos++;
        }
        for (auto i = int32_t(0); i < npc(part)->length(); i++) {
            auto ch = npc(part)->charAt(i);
            npc(specials)->add(static_cast< ::java::lang::Object* >(new CellNumberFormatter_Special(ch, pos + i)));
        }
        break;
    case u'.':
        if(decimalPoint == nullptr && npc(specials)->size() > 0) {
            decimalPoint = new CellNumberFormatter_Special(u'.', pos);
            npc(specials)->add(static_cast< ::java::lang::Object* >(decimalPoint));
        }
        break;
    case u'/':
        if(slash == nullptr && npc(specials)->size() > 0) {
            numerator = previousNumber();
            improperFraction |= (numerator == firstDigit(specials));
            slash = new CellNumberFormatter_Special(u'.', pos);
            npc(specials)->add(static_cast< ::java::lang::Object* >(slash));
        }
        break;
    case u'%':
        scale *= 100;
        break;
    default:
        return nullptr;
    }

    return part;
}

double poi::ss::format::CellNumberPartHandler::getScale()
{
    return scale;
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::getDecimalPoint()
{
    return decimalPoint;
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::getSlash()
{
    return slash;
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::getExponent()
{
    return exponent;
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::getNumerator()
{
    return numerator;
}

java::util::List* poi::ss::format::CellNumberPartHandler::getSpecials()
{
    return specials;
}

bool poi::ss::format::CellNumberPartHandler::isImproperFraction()
{
    return improperFraction;
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::previousNumber()
{
    auto it = npc(specials)->listIterator(npc(specials)->size());
    while (npc(it)->hasPrevious()) {
        auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->previous());
        if(isDigitFmt(s)) {
            auto last = s;
            while (npc(it)->hasPrevious()) {
                s = java_cast< CellNumberFormatter_Special* >(npc(it)->previous());
                if(npc(last)->pos - npc(s)->pos > 1 || !isDigitFmt(s)) {
                    break;
                }
                last = s;
            }
            return last;
        }
    }
    return nullptr;
}

bool poi::ss::format::CellNumberPartHandler::isDigitFmt(CellNumberFormatter_Special* s)
{
    clinit();
    return npc(s)->ch == u'0' || npc(s)->ch == u'?' || npc(s)->ch == u'#';
}

poi::ss::format::CellNumberFormatter_Special* poi::ss::format::CellNumberPartHandler::firstDigit(::java::util::List* specials)
{
    clinit();
    for (auto _i = npc(specials)->iterator(); _i->hasNext(); ) {
        CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
        {
            if(isDigitFmt(s)) {
                return s;
            }
        }
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellNumberPartHandler::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellNumberPartHandler", 46);
    return c;
}

java::lang::Class* poi::ss::format::CellNumberPartHandler::getClass0()
{
    return class_();
}

