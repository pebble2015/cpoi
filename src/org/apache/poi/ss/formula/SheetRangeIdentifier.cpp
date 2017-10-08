// Generated from /POI/java/org/apache/poi/ss/formula/SheetRangeIdentifier.java
#include <org/apache/poi/ss/formula/SheetRangeIdentifier.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/NameIdentifier.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::SheetRangeIdentifier::SheetRangeIdentifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::SheetRangeIdentifier::SheetRangeIdentifier(::java::lang::String* bookName, NameIdentifier* firstSheetIdentifier, NameIdentifier* lastSheetIdentifier) 
    : SheetRangeIdentifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookName,firstSheetIdentifier,lastSheetIdentifier);
}

void poi::ss::formula::SheetRangeIdentifier::ctor(::java::lang::String* bookName, NameIdentifier* firstSheetIdentifier, NameIdentifier* lastSheetIdentifier)
{
    super::ctor(bookName, firstSheetIdentifier);
    _lastSheetIdentifier = lastSheetIdentifier;
}

poi::ss::formula::NameIdentifier* poi::ss::formula::SheetRangeIdentifier::getFirstSheetIdentifier()
{
    return super::getSheetIdentifier();
}

poi::ss::formula::NameIdentifier* poi::ss::formula::SheetRangeIdentifier::getLastSheetIdentifier()
{
    return _lastSheetIdentifier;
}

void poi::ss::formula::SheetRangeIdentifier::asFormulaString(::java::lang::StringBuffer* sb)
{
    super::asFormulaString(sb);
    npc(sb)->append(u':');
    if(npc(_lastSheetIdentifier)->isQuoted()) {
        npc(npc(npc(sb)->append(u"'"_j))->append(npc(_lastSheetIdentifier)->getName()))->append(u"'"_j);
    } else {
        npc(sb)->append(npc(_lastSheetIdentifier)->getName());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::SheetRangeIdentifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SheetRangeIdentifier", 46);
    return c;
}

java::lang::String* poi::ss::formula::SheetRangeIdentifier::asFormulaString()
{
    return super::asFormulaString();
}

java::lang::Class* poi::ss::formula::SheetRangeIdentifier::getClass0()
{
    return class_();
}

