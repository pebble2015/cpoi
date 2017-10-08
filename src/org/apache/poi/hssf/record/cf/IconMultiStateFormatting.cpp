// Generated from /POI/java/org/apache/poi/hssf/record/cf/IconMultiStateFormatting.java
#include <org/apache/poi/hssf/record/cf/IconMultiStateFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/ss/usermodel/IconMultiStateFormatting_IconSet.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace cf
            {
typedef ::SubArray< ::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
            } // cf
        } // record
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cf::IconMultiStateFormatting::IconMultiStateFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cf::IconMultiStateFormatting::IconMultiStateFormatting() 
    : IconMultiStateFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::cf::IconMultiStateFormatting::IconMultiStateFormatting(::poi::util::LittleEndianInput* in) 
    : IconMultiStateFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::util::POILogger*& poi::hssf::record::cf::IconMultiStateFormatting::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::hssf::record::cf::IconMultiStateFormatting::log_;

poi::util::BitField*& poi::hssf::record::cf::IconMultiStateFormatting::iconOnly()
{
    clinit();
    return iconOnly_;
}
poi::util::BitField* poi::hssf::record::cf::IconMultiStateFormatting::iconOnly_;

poi::util::BitField*& poi::hssf::record::cf::IconMultiStateFormatting::reversed()
{
    clinit();
    return reversed_;
}
poi::util::BitField* poi::hssf::record::cf::IconMultiStateFormatting::reversed_;

void poi::hssf::record::cf::IconMultiStateFormatting::ctor()
{
    super::ctor();
    iconSet = ::poi::ss::usermodel::IconMultiStateFormatting_IconSet::GYR_3_TRAFFIC_LIGHTS;
    options = 0;
    thresholds = new ThresholdArray(npc(iconSet)->num);
}

void poi::hssf::record::cf::IconMultiStateFormatting::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    npc(in)->readShort();
    npc(in)->readByte();
    int32_t num = npc(in)->readByte();
    int32_t set = npc(in)->readByte();
    iconSet = ::poi::ss::usermodel::IconMultiStateFormatting_IconSet::byId(set);
    if(npc(iconSet)->num != num) {
        npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Inconsistent Icon Set defintion, found "_j)->append(static_cast< ::java::lang::Object* >(iconSet))
            ->append(u" but defined as "_j)
            ->append(num)
            ->append(u" entries"_j)->toString())}));
    }
    options = npc(in)->readByte();
    thresholds = new ThresholdArray(npc(iconSet)->num);
    for (auto i = int32_t(0); i < npc(thresholds)->length; i++) {
        thresholds->set(i, new IconMultiStateThreshold(in));
    }
}

poi::ss::usermodel::IconMultiStateFormatting_IconSet* poi::hssf::record::cf::IconMultiStateFormatting::getIconSet()
{
    return iconSet;
}

void poi::hssf::record::cf::IconMultiStateFormatting::setIconSet(::poi::ss::usermodel::IconMultiStateFormatting_IconSet* set)
{
    this->iconSet = set;
}

poi::hssf::record::cf::ThresholdArray* poi::hssf::record::cf::IconMultiStateFormatting::getThresholds()
{
    return thresholds;
}

void poi::hssf::record::cf::IconMultiStateFormatting::setThresholds(ThresholdArray* thresholds)
{
    this->thresholds = (thresholds == nullptr) ? static_cast< ThresholdArray* >(nullptr) : npc(thresholds)->clone();
}

bool poi::hssf::record::cf::IconMultiStateFormatting::isIconOnly()
{
    return getOptionFlag(iconOnly_);
}

void poi::hssf::record::cf::IconMultiStateFormatting::setIconOnly(bool only)
{
    setOptionFlag(only, iconOnly_);
}

bool poi::hssf::record::cf::IconMultiStateFormatting::isReversed()
{
    return getOptionFlag(reversed_);
}

void poi::hssf::record::cf::IconMultiStateFormatting::setReversed(bool rev)
{
    setOptionFlag(rev, reversed_);
}

bool poi::hssf::record::cf::IconMultiStateFormatting::getOptionFlag(::poi::util::BitField* field)
{
    auto value = npc(field)->getValue(options);
    return value == 0 ? false : true;
}

void poi::hssf::record::cf::IconMultiStateFormatting::setOptionFlag(bool option, ::poi::util::BitField* field)
{
    options = npc(field)->setByteBoolean(options, option);
}

java::lang::String* poi::hssf::record::cf::IconMultiStateFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Icon Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"          .icon_set = "_j))->append(static_cast< ::java::lang::Object* >(iconSet)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .icon_only= "_j))->append(isIconOnly()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .reversed = "_j))->append(isReversed()))->append(u"\n"_j);
    for(auto t : *npc(thresholds)) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(t));
    }
    npc(buffer)->append(u"    [/Icon Formatting]\n"_j);
    return npc(buffer)->toString();
}

java::lang::Object* poi::hssf::record::cf::IconMultiStateFormatting::clone()
{
    auto rec = new IconMultiStateFormatting();
    npc(rec)->iconSet = iconSet;
    npc(rec)->options = options;
    npc(rec)->thresholds = new ThresholdArray(npc(thresholds)->length);
    ::java::lang::System::arraycopy(thresholds, 0, npc(rec)->thresholds, 0, npc(thresholds)->length);
    return rec;
}

int32_t poi::hssf::record::cf::IconMultiStateFormatting::getDataLength()
{
    auto len = int32_t(6);
    for(auto t : *npc(thresholds)) {
        len += npc(t)->getDataLength();
    }
    return len;
}

void poi::hssf::record::cf::IconMultiStateFormatting::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(0);
    npc(out)->writeByte(0);
    npc(out)->writeByte(npc(iconSet)->num);
    npc(out)->writeByte(npc(iconSet)->id);
    npc(out)->writeByte(options);
    for(auto t : *npc(thresholds)) {
        npc(t)->serialize(out);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cf::IconMultiStateFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.IconMultiStateFormatting", 54);
    return c;
}

void poi::hssf::record::cf::IconMultiStateFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(IconMultiStateFormatting::class_()));
        iconOnly_ = ::poi::util::BitFieldFactory::getInstance(1);
        reversed_ = ::poi::util::BitFieldFactory::getInstance(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::cf::IconMultiStateFormatting::getClass0()
{
    return class_();
}

