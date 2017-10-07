// Generated from /POI/java/org/apache/poi/ddf/EscherOptRecord.java
#include <org/apache/poi/ddf/EscherOptRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/List.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherOptRecord::EscherOptRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherOptRecord::EscherOptRecord()
    : EscherOptRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& org::apache::poi::ddf::EscherOptRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherOptRecord::RECORD_DESCRIPTION_;

constexpr int16_t org::apache::poi::ddf::EscherOptRecord::RECORD_ID;

int16_t org::apache::poi::ddf::EscherOptRecord::getInstance()
{
    setInstance(static_cast< int16_t >(npc(getEscherProperties())->size()));
    return super::getInstance();
}

int16_t org::apache::poi::ddf::EscherOptRecord::getOptions()
{
    getInstance();
    getVersion();
    return super::getOptions();
}

java::lang::String* org::apache::poi::ddf::EscherOptRecord::getRecordName()
{
    return u"Opt"_j;
}

int16_t org::apache::poi::ddf::EscherOptRecord::getVersion()
{
    setVersion(static_cast< int16_t >(int32_t(3)));
    return super::getVersion();
}

void org::apache::poi::ddf::EscherOptRecord::setVersion(int16_t value)
{
    if(value != 3) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(RECORD_DESCRIPTION_)->append(u" can have only '0x3' version"_j)->toString());
    }
    super::setVersion(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherOptRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherOptRecord", 34);
    return c;
}

void org::apache::poi::ddf::EscherOptRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"msofbtOPT"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* org::apache::poi::ddf::EscherOptRecord::getClass0()
{
    return class_();
}

