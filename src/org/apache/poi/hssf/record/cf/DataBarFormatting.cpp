// Generated from /POI/java/org/apache/poi/hssf/record/cf/DataBarFormatting.java
#include <org/apache/poi/hssf/record/cf/DataBarFormatting.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarThreshold.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cf::DataBarFormatting::DataBarFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cf::DataBarFormatting::DataBarFormatting() 
    : DataBarFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::cf::DataBarFormatting::DataBarFormatting(::poi::util::LittleEndianInput* in) 
    : DataBarFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::cf::DataBarFormatting::init()
{
    options = int32_t(0);
    percentMin = int32_t(0);
    percentMax = int32_t(0);
}

poi::util::POILogger*& poi::hssf::record::cf::DataBarFormatting::log()
{
    clinit();
    return log_;
}
poi::util::POILogger* poi::hssf::record::cf::DataBarFormatting::log_;

poi::util::BitField*& poi::hssf::record::cf::DataBarFormatting::iconOnly()
{
    clinit();
    return iconOnly_;
}
poi::util::BitField* poi::hssf::record::cf::DataBarFormatting::iconOnly_;

poi::util::BitField*& poi::hssf::record::cf::DataBarFormatting::reversed()
{
    clinit();
    return reversed_;
}
poi::util::BitField* poi::hssf::record::cf::DataBarFormatting::reversed_;

void poi::hssf::record::cf::DataBarFormatting::ctor()
{
    super::ctor();
    init();
    options = 2;
}

void poi::hssf::record::cf::DataBarFormatting::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    init();
    npc(in)->readShort();
    npc(in)->readByte();
    options = npc(in)->readByte();
    percentMin = npc(in)->readByte();
    percentMax = npc(in)->readByte();
    if(percentMin < 0 || percentMin > 100)
        npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Inconsistent Minimum Percentage found "_j)->append(percentMin)->toString())}));

    if(percentMax < 0 || percentMax > 100)
        npc(log_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Inconsistent Minimum Percentage found "_j)->append(percentMin)->toString())}));

    color = new ::poi::hssf::record::common::ExtendedColor(in);
    thresholdMin = new DataBarThreshold(in);
    thresholdMax = new DataBarThreshold(in);
}

bool poi::hssf::record::cf::DataBarFormatting::isIconOnly()
{
    return getOptionFlag(iconOnly_);
}

void poi::hssf::record::cf::DataBarFormatting::setIconOnly(bool only)
{
    setOptionFlag(only, iconOnly_);
}

bool poi::hssf::record::cf::DataBarFormatting::isReversed()
{
    return getOptionFlag(reversed_);
}

void poi::hssf::record::cf::DataBarFormatting::setReversed(bool rev)
{
    setOptionFlag(rev, reversed_);
}

bool poi::hssf::record::cf::DataBarFormatting::getOptionFlag(::poi::util::BitField* field)
{
    auto value = npc(field)->getValue(options);
    return value == 0 ? false : true;
}

void poi::hssf::record::cf::DataBarFormatting::setOptionFlag(bool option, ::poi::util::BitField* field)
{
    options = npc(field)->setByteBoolean(options, option);
}

int8_t poi::hssf::record::cf::DataBarFormatting::getPercentMin()
{
    return percentMin;
}

void poi::hssf::record::cf::DataBarFormatting::setPercentMin(int8_t percentMin)
{
    this->percentMin = percentMin;
}

int8_t poi::hssf::record::cf::DataBarFormatting::getPercentMax()
{
    return percentMax;
}

void poi::hssf::record::cf::DataBarFormatting::setPercentMax(int8_t percentMax)
{
    this->percentMax = percentMax;
}

poi::hssf::record::common::ExtendedColor* poi::hssf::record::cf::DataBarFormatting::getColor()
{
    return color;
}

void poi::hssf::record::cf::DataBarFormatting::setColor(::poi::hssf::record::common::ExtendedColor* color)
{
    this->color = color;
}

poi::hssf::record::cf::DataBarThreshold* poi::hssf::record::cf::DataBarFormatting::getThresholdMin()
{
    return thresholdMin;
}

void poi::hssf::record::cf::DataBarFormatting::setThresholdMin(DataBarThreshold* thresholdMin)
{
    this->thresholdMin = thresholdMin;
}

poi::hssf::record::cf::DataBarThreshold* poi::hssf::record::cf::DataBarFormatting::getThresholdMax()
{
    return thresholdMax;
}

void poi::hssf::record::cf::DataBarFormatting::setThresholdMax(DataBarThreshold* thresholdMax)
{
    this->thresholdMax = thresholdMax;
}

java::lang::String* poi::hssf::record::cf::DataBarFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Data Bar Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"          .icon_only= "_j))->append(isIconOnly()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .reversed = "_j))->append(isReversed()))->append(u"\n"_j);
    npc(buffer)->append(static_cast< ::java::lang::Object* >(color));
    npc(buffer)->append(static_cast< ::java::lang::Object* >(thresholdMin));
    npc(buffer)->append(static_cast< ::java::lang::Object* >(thresholdMax));
    npc(buffer)->append(u"    [/Data Bar Formatting]\n"_j);
    return npc(buffer)->toString();
}

java::lang::Object* poi::hssf::record::cf::DataBarFormatting::clone()
{
    auto rec = new DataBarFormatting();
    npc(rec)->options = options;
    npc(rec)->percentMin = percentMin;
    npc(rec)->percentMax = percentMax;
    npc(rec)->color = npc(color)->clone();
    npc(rec)->thresholdMin = npc(thresholdMin)->clone();
    npc(rec)->thresholdMax = npc(thresholdMax)->clone();
    return rec;
}

int32_t poi::hssf::record::cf::DataBarFormatting::getDataLength()
{
    return int32_t(6) + npc(color)->getDataLength() + npc(thresholdMin)->getDataLength()+ npc(thresholdMax)->getDataLength();
}

void poi::hssf::record::cf::DataBarFormatting::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(0);
    npc(out)->writeByte(0);
    npc(out)->writeByte(options);
    npc(out)->writeByte(percentMin);
    npc(out)->writeByte(percentMax);
    npc(color)->serialize(out);
    npc(thresholdMin)->serialize(out);
    npc(thresholdMax)->serialize(out);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cf::DataBarFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.DataBarFormatting", 47);
    return c;
}

void poi::hssf::record::cf::DataBarFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DataBarFormatting::class_()));
        iconOnly_ = ::poi::util::BitFieldFactory::getInstance(1);
        reversed_ = ::poi::util::BitFieldFactory::getInstance(4);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::cf::DataBarFormatting::getClass0()
{
    return class_();
}

