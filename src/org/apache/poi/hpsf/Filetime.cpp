// Generated from /POI/java/org/apache/poi/hpsf/Filetime.java
#include <org/apache/poi/hpsf/Filetime.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::Filetime::Filetime(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Filetime::Filetime() 
    : Filetime(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::Filetime::Filetime(int32_t low, int32_t high) 
    : Filetime(*static_cast< ::default_init_tag* >(0))
{
    ctor(low,high);
}

poi::hpsf::Filetime::Filetime(::java::util::Date* date) 
    : Filetime(*static_cast< ::default_init_tag* >(0))
{
    ctor(date);
}

constexpr int64_t poi::hpsf::Filetime::EPOCH_DIFF;

constexpr int32_t poi::hpsf::Filetime::SIZE;

constexpr int64_t poi::hpsf::Filetime::UINT_MASK;

constexpr int64_t poi::hpsf::Filetime::NANO_100;

void poi::hpsf::Filetime::ctor()
{
    super::ctor();
}

void poi::hpsf::Filetime::ctor(int32_t low, int32_t high)
{
    super::ctor();
    _dwLowDateTime = low;
    _dwHighDateTime = high;
}

void poi::hpsf::Filetime::ctor(::java::util::Date* date)
{
    super::ctor();
    auto filetime = Filetime::dateToFileTime(date);
    _dwHighDateTime = static_cast< int32_t >(((static_cast<int64_t>(static_cast<uint64_t>(filetime) >> int32_t(32))) & UINT_MASK));
    _dwLowDateTime = static_cast< int32_t >((filetime & UINT_MASK));
}

void poi::hpsf::Filetime::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    _dwLowDateTime = npc(lei)->readInt();
    _dwHighDateTime = npc(lei)->readInt();
}

int64_t poi::hpsf::Filetime::getHigh()
{
    return _dwHighDateTime;
}

int64_t poi::hpsf::Filetime::getLow()
{
    return _dwLowDateTime;
}

int8_tArray* poi::hpsf::Filetime::toByteArray_()
{
    auto result = new ::int8_tArray(SIZE);
    ::poi::util::LittleEndian::putInt(result, int32_t(0) * ::poi::util::LittleEndianConsts::INT_SIZE, _dwLowDateTime);
    ::poi::util::LittleEndian::putInt(result, int32_t(1) * ::poi::util::LittleEndianConsts::INT_SIZE, _dwHighDateTime);
    return result;
}

int32_t poi::hpsf::Filetime::write(::java::io::OutputStream* out) /* throws(IOException) */
{
    ::poi::util::LittleEndian::putInt(_dwLowDateTime, out);
    ::poi::util::LittleEndian::putInt(_dwHighDateTime, out);
    return SIZE;
}

java::util::Date* poi::hpsf::Filetime::getJavaValue()
{
    auto l = ((static_cast< int64_t >(_dwHighDateTime)) << int32_t(32)) | (_dwLowDateTime & UINT_MASK);
    return filetimeToDate(l);
}

java::util::Date* poi::hpsf::Filetime::filetimeToDate(int64_t filetime)
{
    clinit();
    auto const ms_since_16010101 = filetime / NANO_100;
    auto const ms_since_19700101 = ms_since_16010101 + EPOCH_DIFF;
    return new ::java::util::Date(ms_since_19700101);
}

int64_t poi::hpsf::Filetime::dateToFileTime(::java::util::Date* date)
{
    clinit();
    auto ms_since_19700101 = npc(date)->getTime();
    auto ms_since_16010101 = ms_since_19700101 - EPOCH_DIFF;
    return ms_since_16010101 * NANO_100;
}

bool poi::hpsf::Filetime::isUndefined(::java::util::Date* date)
{
    clinit();
    return (date == nullptr || dateToFileTime(date) == 0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Filetime::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Filetime", 28);
    return c;
}

java::lang::Class* poi::hpsf::Filetime::getClass0()
{
    return class_();
}

