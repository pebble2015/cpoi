// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java
#include <org/apache/poi/ss/formula/functions/Offset_LinearOffsetRange.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::Offset_LinearOffsetRange(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::Offset_LinearOffsetRange(int32_t offset, int32_t length) 
    : Offset_LinearOffsetRange(*static_cast< ::default_init_tag* >(0))
{
    ctor(offset,length);
}

void org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::ctor(int32_t offset, int32_t length)
{
    super::ctor();
    if(length == 0) {
        throw new ::java::lang::RuntimeException(u"length may not be zero"_j);
    }
    _offset = offset;
    _length = length;
}

int16_t org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::getFirstIndex()
{
    return static_cast< int16_t >(_offset);
}

int16_t org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::getLastIndex()
{
    return static_cast< int16_t >((_offset + _length - int32_t(1)));
}

org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange* org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::normaliseAndTranslate(int32_t translationAmount)
{
    if(_length > 0) {
        if(translationAmount == 0) {
            return this;
        }
        return new Offset_LinearOffsetRange(translationAmount + _offset, _length);
    }
    return new Offset_LinearOffsetRange(translationAmount + _offset + _length+ int32_t(1), -_length);
}

bool org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::isOutOfBounds(int32_t lowValidIx, int32_t highValidIx)
{
    if(_offset < lowValidIx) {
        return true;
    }
    if(getLastIndex() > highValidIx) {
        return true;
    }
    return false;
}

java::lang::String* org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(npc(npc(sb)->append(_offset))->append(u"..."_j))->append(static_cast< int32_t >(getLastIndex()));
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Offset.LinearOffsetRange", 60);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Offset_LinearOffsetRange::getClass0()
{
    return class_();
}

