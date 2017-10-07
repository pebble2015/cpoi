// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_ConstantStringFormat.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/DecimalFormat.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::DataFormatter_ConstantStringFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::DataFormatter_ConstantStringFormat(::java::lang::String* s) 
    : DataFormatter_ConstantStringFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::text::DecimalFormat*& org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::df()
{
    clinit();
    return df_;
}
java::text::DecimalFormat* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::df_;

void org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::ctor(::java::lang::String* s)
{
    super::ctor();
    str = s;
}

java::lang::StringBuffer* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    return npc(toAppendTo)->append(str);
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    return npc(df_)->parseObject(source, pos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.ConstantStringFormat", 62);
    return c;
}

void org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        df_ = DataFormatter::createIntegerOnlyFormat(u"##########"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_ConstantStringFormat::getClass0()
{
    return class_();
}

