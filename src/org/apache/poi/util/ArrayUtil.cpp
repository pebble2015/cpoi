// Generated from /POI/java/org/apache/poi/util/ArrayUtil.java
#include <org/apache/poi/util/ArrayUtil.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::ArrayUtil::ArrayUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::ArrayUtil::ArrayUtil()
    : ArrayUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::util::ArrayUtil::arraycopy(::int8_tArray* src, int32_t src_position, ::int8_tArray* dst, int32_t dst_position, int32_t length)
{
    clinit();
    if(src_position < 0)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"src_position was less than 0.  Actual value "_j)->append(src_position)->toString());

    if(src_position >= npc(src)->length)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"src_position was greater than src array size.  Tried to write starting at position "_j)->append(src_position)
            ->append(u" but the array length is "_j)
            ->append(npc(src)->length)->toString());

    if(src_position + length > npc(src)->length)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"src_position + length would overrun the src array.  Expected end at "_j)->append((src_position + length))
            ->append(u" actual end at "_j)
            ->append(npc(src)->length)->toString());

    if(dst_position < 0)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"dst_position was less than 0.  Actual value "_j)->append(dst_position)->toString());

    if(dst_position >= npc(dst)->length)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"dst_position was greater than dst array size.  Tried to write starting at position "_j)->append(dst_position)
            ->append(u" but the array length is "_j)
            ->append(npc(dst)->length)->toString());

    if(dst_position + length > npc(dst)->length)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"dst_position + length would overrun the dst array.  Expected end at "_j)->append((dst_position + length))
            ->append(u" actual end at "_j)
            ->append(npc(dst)->length)->toString());

    ::java::lang::System::arraycopy(src, src_position, dst, dst_position, length);
}

void org::apache::poi::util::ArrayUtil::arrayMoveWithin(::java::lang::ObjectArray* array, int32_t moveFrom, int32_t moveTo, int32_t numToMove)
{
    clinit();
    if(numToMove <= 0) {
        return;
    }
    if(moveFrom == moveTo) {
        return;
    }
    if(moveFrom < 0 || moveFrom >= npc(array)->length) {
        throw new ::java::lang::IllegalArgumentException(u"The moveFrom must be a valid array index"_j);
    }
    if(moveTo < 0 || moveTo >= npc(array)->length) {
        throw new ::java::lang::IllegalArgumentException(u"The moveTo must be a valid array index"_j);
    }
    if(moveFrom + numToMove > npc(array)->length) {
        throw new ::java::lang::IllegalArgumentException(u"Asked to move more entries than the array has"_j);
    }
    if(moveTo + numToMove > npc(array)->length) {
        throw new ::java::lang::IllegalArgumentException(u"Asked to move to a position that doesn't have enough space"_j);
    }
    auto toMove = new ::java::lang::ObjectArray(numToMove);
    ::java::lang::System::arraycopy(array, moveFrom, toMove, 0, numToMove);
    ::java::lang::ObjectArray* toShift;
    int32_t shiftTo;
    if(moveFrom > moveTo) {
        toShift = new ::java::lang::ObjectArray((moveFrom - moveTo));
        ::java::lang::System::arraycopy(array, moveTo, toShift, 0, npc(toShift)->length);
        shiftTo = moveTo + numToMove;
    } else {
        toShift = new ::java::lang::ObjectArray((moveTo - moveFrom));
        ::java::lang::System::arraycopy(array, moveFrom + numToMove, toShift, 0, npc(toShift)->length);
        shiftTo = moveFrom;
    }
    ::java::lang::System::arraycopy(toMove, 0, array, moveTo, npc(toMove)->length);
    ::java::lang::System::arraycopy(toShift, 0, array, shiftTo, npc(toShift)->length);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::ArrayUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.ArrayUtil", 29);
    return c;
}

java::lang::Class* org::apache::poi::util::ArrayUtil::getClass0()
{
    return class_();
}

