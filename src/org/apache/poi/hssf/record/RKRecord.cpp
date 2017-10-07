// Generated from /POI/java/org/apache/poi/hssf/record/RKRecord.java
#include <org/apache/poi/hssf/record/RKRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/util/RKUtil.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::RKRecord::RKRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RKRecord::RKRecord() 
    : RKRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::RKRecord::RKRecord(RecordInputStream* in) 
    : RKRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::RKRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::RKRecord::RK_IEEE_NUMBER;

constexpr int16_t org::apache::poi::hssf::record::RKRecord::RK_IEEE_NUMBER_TIMES_100;

constexpr int16_t org::apache::poi::hssf::record::RKRecord::RK_INTEGER;

constexpr int16_t org::apache::poi::hssf::record::RKRecord::RK_INTEGER_TIMES_100;

void org::apache::poi::hssf::record::RKRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::RKRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
    field_4_rk_number = npc(in)->readInt();
}

double org::apache::poi::hssf::record::RKRecord::getRKNumber()
{
    return ::org::apache::poi::hssf::util::RKUtil::decodeNumber(field_4_rk_number);
}

java::lang::String* org::apache::poi::hssf::record::RKRecord::getRecordName()
{
    return u"RK"_j;
}

void org::apache::poi::hssf::record::RKRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(npc(sb)->append(u"  .value= "_j))->append(getRKNumber());
}

void org::apache::poi::hssf::record::RKRecord::serializeValue(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_4_rk_number);
}

int32_t org::apache::poi::hssf::record::RKRecord::getValueDataSize()
{
    return 4;
}

int16_t org::apache::poi::hssf::record::RKRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::RKRecord::clone()
{
    auto rec = new RKRecord();
    copyBaseFields(rec);
    npc(rec)->field_4_rk_number = field_4_rk_number;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RKRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RKRecord", 35);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::RKRecord::getClass0()
{
    return class_();
}

