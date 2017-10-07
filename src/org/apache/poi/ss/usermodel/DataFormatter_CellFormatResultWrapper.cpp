// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_CellFormatResultWrapper.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/format/CellFormatResult.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::DataFormatter_CellFormatResultWrapper(DataFormatter *DataFormatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataFormatter_this(DataFormatter_this)
{
    clinit();
}

org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::DataFormatter_CellFormatResultWrapper(DataFormatter *DataFormatter_this, ::org::apache::poi::ss::format::CellFormatResult* result) 
    : DataFormatter_CellFormatResultWrapper(DataFormatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(result);
}

void org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::ctor(::org::apache::poi::ss::format::CellFormatResult* result)
{
    super::ctor();
    this->result = result;
}

java::lang::StringBuffer* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    if(DataFormatter_this->emulateCSV) {
        return npc(toAppendTo)->append(npc(result)->text);
    } else {
        return npc(toAppendTo)->append(npc(npc(result)->text)->trim());
    }
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.CellFormatResultWrapper", 65);
    return c;
}

java::lang::String* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_CellFormatResultWrapper::getClass0()
{
    return class_();
}

