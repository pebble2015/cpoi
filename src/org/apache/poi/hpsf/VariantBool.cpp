// Generated from /POI/java/org/apache/poi/hpsf/VariantBool.java
#include <org/apache/poi/hpsf/VariantBool.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::VariantBool::VariantBool(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::VariantBool::VariantBool() 
    : VariantBool(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::hpsf::VariantBool::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::hpsf::VariantBool::LOG_;

constexpr int32_t poi::hpsf::VariantBool::SIZE;

void poi::hpsf::VariantBool::ctor()
{
    super::ctor();
}

void poi::hpsf::VariantBool::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    auto value = npc(lei)->readShort();
    switch (value) {
    case int32_t(0):
        _value = false;
        break;
    case -int32_t(1):
        _value = true;
        break;
    default:
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"VARIANT_BOOL value '"_j)->append(value)
            ->append(u"' is incorrect"_j)->toString())}));
        _value = true;
        break;
    }

}

bool poi::hpsf::VariantBool::getValue()
{
    return _value;
}

void poi::hpsf::VariantBool::setValue(bool value)
{
    this->_value = value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::VariantBool::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.VariantBool", 31);
    return c;
}

void poi::hpsf::VariantBool::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(VariantBool::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hpsf::VariantBool::getClass0()
{
    return class_();
}

