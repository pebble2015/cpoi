// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java
#include <org/apache/poi/ss/util/CellReference_CellRefParts.hpp>

#include <java/lang/String.hpp>

poi::ss::util::CellReference_CellRefParts::CellReference_CellRefParts(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellReference_CellRefParts::CellReference_CellRefParts(::java::lang::String* sheetName, ::java::lang::String* rowRef, ::java::lang::String* colRef) 
    : CellReference_CellRefParts(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetName,rowRef,colRef);
}

void poi::ss::util::CellReference_CellRefParts::ctor(::java::lang::String* sheetName, ::java::lang::String* rowRef, ::java::lang::String* colRef)
{
    super::ctor();
    this->sheetName = sheetName;
    this->rowRef = (rowRef != nullptr) ? rowRef : u""_j;
    this->colRef = (colRef != nullptr) ? colRef : u""_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellReference_CellRefParts::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellReference.CellRefParts", 49);
    return c;
}

java::lang::Class* poi::ss::util::CellReference_CellRefParts::getClass0()
{
    return class_();
}

