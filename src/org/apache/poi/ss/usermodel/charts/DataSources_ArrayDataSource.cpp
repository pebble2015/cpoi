// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/DataSources.java
#include <org/apache/poi/ss/usermodel/charts/DataSources_ArrayDataSource.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::DataSources_ArrayDataSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::DataSources_ArrayDataSource(::java::lang::ObjectArray* elements) 
    : DataSources_ArrayDataSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(elements);
}

void org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::ctor(::java::lang::ObjectArray* elements)
{
    super::ctor();
    this->elements = java_cast< ::java::lang::ObjectArray* >(npc(elements)->clone());
}

int32_t org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::getPointCount()
{
    return npc(elements)->length;
}

java::lang::Object* org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::getPointAt(int32_t index)
{
    return (*elements)[index];
}

bool org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::isReference()
{
    return false;
}

bool org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::isNumeric()
{
    auto arrayComponentType = npc(npc(elements)->getClass())->getComponentType();
    return (npc(::java::lang::Number::class_())->isAssignableFrom(arrayComponentType));
}

java::lang::String* org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::getFormulaString()
{
    throw new ::java::lang::UnsupportedOperationException(u"Literal data source can not be expressed by reference."_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.charts.DataSources.ArrayDataSource", 62);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::charts::DataSources_ArrayDataSource::getClass0()
{
    return class_();
}

