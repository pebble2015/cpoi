// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java
#include <org/apache/poi/hssf/record/RecordInputStream_LeftoverDataException.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::RecordInputStream_LeftoverDataException::RecordInputStream_LeftoverDataException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::RecordInputStream_LeftoverDataException::RecordInputStream_LeftoverDataException(int32_t sid, int32_t remainingByteCount) 
    : RecordInputStream_LeftoverDataException(*static_cast< ::default_init_tag* >(0))
{
    ctor(sid,remainingByteCount);
}

void poi::hssf::record::RecordInputStream_LeftoverDataException::ctor(int32_t sid, int32_t remainingByteCount)
{
    super::ctor(::java::lang::StringBuilder().append(u"Initialisation of record 0x"_j)->append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))
        ->append(u"("_j)
        ->append(getRecordName(sid))
        ->append(u") left "_j)
        ->append(remainingByteCount)
        ->append(u" bytes remaining still to be read."_j)->toString());
}

java::lang::String* poi::hssf::record::RecordInputStream_LeftoverDataException::getRecordName(int32_t sid)
{
    clinit();
    auto recordClass = RecordFactory::getRecordClass(sid);
    if(recordClass == nullptr) {
        return nullptr;
    }
    return npc(recordClass)->getSimpleName();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::RecordInputStream_LeftoverDataException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordInputStream.LeftoverDataException", 66);
    return c;
}

java::lang::Class* poi::hssf::record::RecordInputStream_LeftoverDataException::getClass0()
{
    return class_();
}

