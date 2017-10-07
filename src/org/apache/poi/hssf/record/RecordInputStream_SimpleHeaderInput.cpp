// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java
#include <org/apache/poi/hssf/record/RecordInputStream_SimpleHeaderInput.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::RecordInputStream_SimpleHeaderInput(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::RecordInputStream_SimpleHeaderInput(::java::io::InputStream* in) 
    : RecordInputStream_SimpleHeaderInput(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::ctor(::java::io::InputStream* in)
{
    super::ctor();
    _lei = RecordInputStream::getLEI(in);
}

int32_t org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::available()
{
    return npc(_lei)->available();
}

int32_t org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::readDataSize()
{
    return npc(_lei)->readUShort();
}

int32_t org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::readRecordSID()
{
    return npc(_lei)->readUShort();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordInputStream.SimpleHeaderInput", 62);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::RecordInputStream_SimpleHeaderInput::getClass0()
{
    return class_();
}

