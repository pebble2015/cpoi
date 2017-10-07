// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_ZipPlusFourFormat.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/DecimalFormat.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

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

org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::DataFormatter_ZipPlusFourFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::DataFormatter_ZipPlusFourFormat() 
    : DataFormatter_ZipPlusFourFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::Format*& org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::instance()
{
    clinit();
    return instance_;
}
java::text::Format* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::instance_;

java::text::DecimalFormat*& org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::df()
{
    clinit();
    return df_;
}
java::text::DecimalFormat* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::df_;

void org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::ctor()
{
    super::ctor();
}

java::lang::String* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::format(::java::lang::Number* num)
{
    clinit();
    auto result = npc(df_)->format(num);
    return ::java::lang::StringBuilder().append(npc(result)->substring(0, 5))->append(u'-')
        ->append(npc(result)->substring(5, 9))->toString();
}

java::lang::StringBuffer* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    return npc(toAppendTo)->append(format(java_cast< ::java::lang::Number* >(obj)));
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    return npc(df_)->parseObject(source, pos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.ZipPlusFourFormat", 59);
    return c;
}

void org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new DataFormatter_ZipPlusFourFormat();
        df_ = DataFormatter::createIntegerOnlyFormat(u"000000000"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* org::apache::poi::ss::usermodel::DataFormatter_ZipPlusFourFormat::getClass0()
{
    return class_();
}
