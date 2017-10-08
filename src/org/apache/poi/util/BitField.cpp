// Generated from /POI/java/org/apache/poi/util/BitField.java
#include <org/apache/poi/util/BitField.hpp>

poi::util::BitField::BitField(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::BitField::BitField(int32_t mask) 
    : BitField(*static_cast< ::default_init_tag* >(0))
{
    ctor(mask);
}

void poi::util::BitField::ctor(int32_t mask)
{
    super::ctor();
    _mask = mask;
    auto count = int32_t(0);
    auto bit_pattern = mask;
    if(bit_pattern != 0) {
        while ((bit_pattern & int32_t(1)) == 0) {
            count++;
            bit_pattern >>= 1;
        }
    }
    _shift_count = count;
}

int32_t poi::util::BitField::getValue(int32_t holder)
{
    return static_cast<int32_t>(static_cast<uint32_t>(getRawValue(holder)) >> _shift_count);
}

int16_t poi::util::BitField::getShortValue(int16_t holder)
{
    return static_cast< int16_t >(getValue(holder));
}

int32_t poi::util::BitField::getRawValue(int32_t holder)
{
    return (holder & _mask);
}

int16_t poi::util::BitField::getShortRawValue(int16_t holder)
{
    return static_cast< int16_t >(getRawValue(holder));
}

bool poi::util::BitField::isSet(int32_t holder)
{
    return (holder & _mask) != 0;
}

bool poi::util::BitField::isAllSet(int32_t holder)
{
    return (holder & _mask) == _mask;
}

int32_t poi::util::BitField::setValue(int32_t holder, int32_t value)
{
    return (holder & ~_mask) | ((value << _shift_count) & _mask);
}

int16_t poi::util::BitField::setShortValue(int16_t holder, int16_t value)
{
    return static_cast< int16_t >(setValue(holder, value));
}

int32_t poi::util::BitField::clear(int32_t holder)
{
    return holder & ~_mask;
}

int16_t poi::util::BitField::clearShort(int16_t holder)
{
    return static_cast< int16_t >(clear(holder));
}

int8_t poi::util::BitField::clearByte(int8_t holder)
{
    return static_cast< int8_t >(clear(holder));
}

int32_t poi::util::BitField::set(int32_t holder)
{
    return holder | _mask;
}

int16_t poi::util::BitField::setShort(int16_t holder)
{
    return static_cast< int16_t >(set(holder));
}

int8_t poi::util::BitField::setByte(int8_t holder)
{
    return static_cast< int8_t >(set(holder));
}

int32_t poi::util::BitField::setBoolean(int32_t holder, bool flag)
{
    return flag ? set(holder) : clear(holder);
}

int16_t poi::util::BitField::setShortBoolean(int16_t holder, bool flag)
{
    return flag ? setShort(holder) : clearShort(holder);
}

int8_t poi::util::BitField::setByteBoolean(int8_t holder, bool flag)
{
    return flag ? setByte(holder) : clearByte(holder);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::BitField::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.BitField", 28);
    return c;
}

java::lang::Class* poi::util::BitField::getClass0()
{
    return class_();
}

