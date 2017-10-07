// Generated from /POI/java/org/apache/poi/hssf/util/LazilyConcatenatedByteArray.java
#include <org/apache/poi/hssf/util/LazilyConcatenatedByteArray_.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::LazilyConcatenatedByteArray_(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::LazilyConcatenatedByteArray_()
    : LazilyConcatenatedByteArray_(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::init()
{
    arrays = new ::java::util::ArrayList(int32_t(1));
}

void org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::clear()
{
    npc(arrays)->clear();
}

void org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::concatenate(::int8_tArray* array)
{
    if(array == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"array cannot be null"_j);
    }
    npc(arrays)->add(static_cast< ::java::lang::Object* >(array));
}

int8_tArray* org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::toArray_()
{
    if(npc(arrays)->isEmpty()) {
        return nullptr;
    } else if(npc(arrays)->size() > 1) {
        auto totalLength = int32_t(0);
        for (auto _i = npc(arrays)->iterator(); _i->hasNext(); ) {
            ::int8_tArray* array = java_cast< ::int8_tArray* >(_i->next());
            {
                totalLength += npc(array)->length;
            }
        }
        auto concatenated = new ::int8_tArray(totalLength);
        auto destPos = int32_t(0);
        for (auto _i = npc(arrays)->iterator(); _i->hasNext(); ) {
            ::int8_tArray* array = java_cast< ::int8_tArray* >(_i->next());
            {
                ::java::lang::System::arraycopy(array, 0, concatenated, destPos, npc(array)->length);
                destPos += npc(array)->length;
            }
        }
        npc(arrays)->clear();
        npc(arrays)->add(static_cast< ::java::lang::Object* >(concatenated));
    }
    return java_cast< ::int8_tArray* >(npc(arrays)->get(0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.util.LazilyConcatenatedByteArray", 52);
    return c;
}

java::lang::Class* org::apache::poi::hssf::util::LazilyConcatenatedByteArray_::getClass0()
{
    return class_();
}

