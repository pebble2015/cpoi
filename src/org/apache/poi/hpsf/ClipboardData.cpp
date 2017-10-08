// Generated from /POI/java/org/apache/poi/hpsf/ClipboardData.java
#include <org/apache/poi/hpsf/ClipboardData.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::hpsf::ClipboardData::ClipboardData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::ClipboardData::ClipboardData() 
    : ClipboardData(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::ClipboardData::init()
{
    _format = int32_t(0);
}

poi::util::POILogger*& poi::hpsf::ClipboardData::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::hpsf::ClipboardData::LOG_;

void poi::hpsf::ClipboardData::ctor()
{
    super::ctor();
    init();
}

void poi::hpsf::ClipboardData::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    auto offset = npc(lei)->getReadIndex();
    auto size = npc(lei)->readInt();
    if(size < 4) {
        auto msg = ::java::lang::StringBuilder().append(u"ClipboardData at offset "_j)->append(offset)
            ->append(u" size less than 4 bytes "_j)
            ->append(u"(doesn't even have format field!). Setting to format == 0 and hope for the best"_j)->toString();
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
        _format = 0;
        _value = new ::int8_tArray(int32_t(0));
        return;
    }
    _format = npc(lei)->readInt();
    _value = new ::int8_tArray(size - ::poi::util::LittleEndianConsts::INT_SIZE);
    npc(lei)->readFully(_value);
}

int8_tArray* poi::hpsf::ClipboardData::getValue()
{
    return _value;
}

int8_tArray* poi::hpsf::ClipboardData::toByteArray_()
{
    auto result = new ::int8_tArray(::poi::util::LittleEndianConsts::INT_SIZE * int32_t(2) + npc(_value)->length);
    auto bos = new ::poi::util::LittleEndianByteArrayOutputStream(result, int32_t(0));
    {
        auto finally0 = finally([&] {
            ::poi::util::IOUtils::closeQuietly(bos);
        });
        {
            npc(bos)->writeInt(::poi::util::LittleEndianConsts::INT_SIZE + npc(_value)->length);
            npc(bos)->writeInt(_format);
            npc(bos)->write(_value);
            return result;
        }
    }

}

void poi::hpsf::ClipboardData::setValue(::int8_tArray* value)
{
    _value = npc(value)->clone();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::ClipboardData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.ClipboardData", 33);
    return c;
}

void poi::hpsf::ClipboardData::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ClipboardData::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hpsf::ClipboardData::getClass0()
{
    return class_();
}

