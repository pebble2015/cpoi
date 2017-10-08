// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_PhoneFormat.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
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

poi::ss::usermodel::DataFormatter_PhoneFormat::DataFormatter_PhoneFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataFormatter_PhoneFormat::DataFormatter_PhoneFormat() 
    : DataFormatter_PhoneFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::Format*& poi::ss::usermodel::DataFormatter_PhoneFormat::instance()
{
    clinit();
    return instance_;
}
java::text::Format* poi::ss::usermodel::DataFormatter_PhoneFormat::instance_;

java::text::DecimalFormat*& poi::ss::usermodel::DataFormatter_PhoneFormat::df()
{
    clinit();
    return df_;
}
java::text::DecimalFormat* poi::ss::usermodel::DataFormatter_PhoneFormat::df_;

void poi::ss::usermodel::DataFormatter_PhoneFormat::ctor()
{
    super::ctor();
}

java::lang::String* poi::ss::usermodel::DataFormatter_PhoneFormat::format(::java::lang::Number* num)
{
    clinit();
    auto result = npc(df_)->format(num);
    auto sb = new ::java::lang::StringBuilder();
    ::java::lang::String* seg1;
    ::java::lang::String* seg2;
    ::java::lang::String* seg3;
    auto len = npc(result)->length();
    if(len <= 4) {
        return result;
    }
    seg3 = npc(result)->substring(len - int32_t(4), len);
    seg2 = npc(result)->substring(::java::lang::Math::max(int32_t(0), len - int32_t(7)), len - int32_t(4));
    seg1 = npc(result)->substring(::java::lang::Math::max(int32_t(0), len - int32_t(10)), ::java::lang::Math::max(int32_t(0), len - int32_t(7)));
    if(npc(npc(seg1)->trim())->length() > 0) {
        npc(npc(npc(sb)->append(u'('))->append(seg1))->append(u") "_j);
    }
    if(npc(npc(seg2)->trim())->length() > 0) {
        npc(npc(sb)->append(seg2))->append(u'-');
    }
    npc(sb)->append(seg3);
    return npc(sb)->toString();
}

java::lang::StringBuffer* poi::ss::usermodel::DataFormatter_PhoneFormat::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos)
{
    return npc(toAppendTo)->append(format(java_cast< ::java::lang::Number* >(obj)));
}

java::lang::Object* poi::ss::usermodel::DataFormatter_PhoneFormat::parseObject(::java::lang::String* source, ::java::text::ParsePosition* pos)
{
    return npc(df_)->parseObject(source, pos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataFormatter_PhoneFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.PhoneFormat", 53);
    return c;
}

void poi::ss::usermodel::DataFormatter_PhoneFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new DataFormatter_PhoneFormat();
        df_ = DataFormatter::createIntegerOnlyFormat(u"##########"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::String* poi::ss::usermodel::DataFormatter_PhoneFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Object* poi::ss::usermodel::DataFormatter_PhoneFormat::parseObject(::java::lang::String* source)
{
    return super::parseObject(source);
}

java::lang::Class* poi::ss::usermodel::DataFormatter_PhoneFormat::getClass0()
{
    return class_();
}

