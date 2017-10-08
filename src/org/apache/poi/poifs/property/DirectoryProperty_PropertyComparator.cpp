// Generated from /POI/java/org/apache/poi/poifs/property/DirectoryProperty.java
#include <org/apache/poi/poifs/property/DirectoryProperty_PropertyComparator.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::property::DirectoryProperty_PropertyComparator::DirectoryProperty_PropertyComparator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::property::DirectoryProperty_PropertyComparator::DirectoryProperty_PropertyComparator()
    : DirectoryProperty_PropertyComparator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::poifs::property::DirectoryProperty_PropertyComparator::compare(Property* o1, Property* o2)
{
    auto VBA_PROJECT = u"_VBA_PROJECT"_j;
    auto name1 = npc(o1)->getName();
    auto name2 = npc(o2)->getName();
    auto result = npc(name1)->length() - npc(name2)->length();
    if(result == 0) {
        if(npc(name1)->compareTo(VBA_PROJECT) == 0)
            result = 1;
        else if(npc(name2)->compareTo(VBA_PROJECT) == 0)
            result = -int32_t(1);
        else {
            if(npc(name1)->startsWith(u"__"_j) && npc(name2)->startsWith(u"__"_j)) {
                result = npc(name1)->compareToIgnoreCase(name2);
            } else if(npc(name1)->startsWith(u"__"_j)) {
                result = 1;
            } else if(npc(name2)->startsWith(u"__"_j)) {
                result = -int32_t(1);
            } else
                result = npc(name1)->compareToIgnoreCase(name2);
        }
    }
    return result;
}

int32_t poi::poifs::property::DirectoryProperty_PropertyComparator::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< Property* >(o1), dynamic_cast< Property* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::property::DirectoryProperty_PropertyComparator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.DirectoryProperty.PropertyComparator", 66);
    return c;
}

bool poi::poifs::property::DirectoryProperty_PropertyComparator::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* poi::poifs::property::DirectoryProperty_PropertyComparator::getClass0()
{
    return class_();
}

