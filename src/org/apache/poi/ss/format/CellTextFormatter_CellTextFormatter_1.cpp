// Generated from /POI/java/org/apache/poi/ss/format/CellTextFormatter.java
#include <org/apache/poi/ss/format/CellTextFormatter_CellTextFormatter_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/format/CellTextFormatter.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::format::CellTextFormatter_CellTextFormatter_1::CellTextFormatter_CellTextFormatter_1(CellTextFormatter *CellTextFormatter_this, ::int32_tArray* numPlaces)
    : super(*static_cast< ::default_init_tag* >(0))
    , CellTextFormatter_this(CellTextFormatter_this)
    , numPlaces(numPlaces)
{
    clinit();
    ctor();
}

java::lang::String* poi::ss::format::CellTextFormatter_CellTextFormatter_1::handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc)
{
    if(npc(part)->equals(static_cast< ::java::lang::Object* >(u"@"_j))) {
        (*numPlaces)[int32_t(0)]++;
        return u"\u0000"_j;
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellTextFormatter_CellTextFormatter_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::format::CellTextFormatter_CellTextFormatter_1::getClass0()
{
    return class_();
}

