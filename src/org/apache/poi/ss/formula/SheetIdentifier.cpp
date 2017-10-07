// Generated from /POI/java/org/apache/poi/ss/formula/SheetIdentifier.java
#include <org/apache/poi/ss/formula/SheetIdentifier.hpp>

#include <java/lang/Class.hpp>
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

org::apache::poi::ss::formula::SheetIdentifier::SheetIdentifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::SheetIdentifier::SheetIdentifier(::java::lang::String* bookName, NameIdentifier* sheetIdentifier) 
    : SheetIdentifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookName,sheetIdentifier);
}

void org::apache::poi::ss::formula::SheetIdentifier::ctor(::java::lang::String* bookName, NameIdentifier* sheetIdentifier)
{
    super::ctor();
    _bookName = bookName;
    _sheetIdentifier = sheetIdentifier;
}

java::lang::String* org::apache::poi::ss::formula::SheetIdentifier::getBookName()
{
    return _bookName;
}

org::apache::poi::ss::formula::NameIdentifier* org::apache::poi::ss::formula::SheetIdentifier::getSheetIdentifier()
{
    return _sheetIdentifier;
}

void org::apache::poi::ss::formula::SheetIdentifier::asFormulaString(::java::lang::StringBuffer* sb)
{
    if(_bookName != nullptr) {
        npc(npc(npc(sb)->append(u" ["_j))->append(npc(_sheetIdentifier)->getName()))->append(u"]"_j);
    }
    if(npc(_sheetIdentifier)->isQuoted()) {
        npc(npc(npc(sb)->append(u"'"_j))->append(npc(_sheetIdentifier)->getName()))->append(u"'"_j);
    } else {
        npc(sb)->append(npc(_sheetIdentifier)->getName());
    }
}

java::lang::String* org::apache::poi::ss::formula::SheetIdentifier::asFormulaString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(32));
    asFormulaString(sb);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::formula::SheetIdentifier::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    asFormulaString(sb);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::SheetIdentifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SheetIdentifier", 41);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::SheetIdentifier::getClass0()
{
    return class_();
}

