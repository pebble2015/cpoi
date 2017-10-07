// Generated from /POI/java/org/apache/poi/hssf/record/cf/ColorGradientFormatting.java
#include <org/apache/poi/hssf/record/cf/ColorGradientFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace cf
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::ColorGradientThreshold, ThresholdArray, ::java::lang::CloneableArray > ColorGradientThresholdArray;
                    } // cf

                    namespace common
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::common::ExtendedColor, ::java::lang::ObjectArray, ::java::lang::CloneableArray > ExtendedColorArray;
                    } // common
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cf::ColorGradientFormatting::ColorGradientFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::ColorGradientFormatting::ColorGradientFormatting() 
    : ColorGradientFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::ColorGradientFormatting::ColorGradientFormatting(::org::apache::poi::util::LittleEndianInput* in) 
    : ColorGradientFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::init()
{
    options = int32_t(0);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::cf::ColorGradientFormatting::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::cf::ColorGradientFormatting::log_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::ColorGradientFormatting::clamp()
{
    clinit();
    return clamp_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::ColorGradientFormatting::clamp_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::ColorGradientFormatting::background()
{
    clinit();
    return background_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::ColorGradientFormatting::background_;

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::ctor()
{
    super::ctor();
    init();
    options = 3;
    thresholds = new ColorGradientThresholdArray(int32_t(3));
    colors = new ::org::apache::poi::hssf::record::common::ExtendedColorArray(int32_t(3));
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    init();
    npc(in)->readShort();
    npc(in)->readByte();
    int32_t numI = npc(in)->readByte();
    int32_t numG = npc(in)->readByte();
    if(numI != numG) {
        npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Inconsistent Color Gradient defintion, found "_j)->append(numI)
            ->append(u" vs "_j)
            ->append(numG)
            ->append(u" entries"_j)->toString())}));
    }
    options = npc(in)->readByte();
    thresholds = new ColorGradientThresholdArray(numI);
    for (auto i = int32_t(0); i < npc(thresholds)->length; i++) {
        thresholds->set(i, new ColorGradientThreshold(in));
    }
    colors = new ::org::apache::poi::hssf::record::common::ExtendedColorArray(numG);
    for (auto i = int32_t(0); i < npc(colors)->length; i++) {
        npc(in)->readDouble();
        colors->set(i, new ::org::apache::poi::hssf::record::common::ExtendedColor(in));
    }
}

int32_t org::apache::poi::hssf::record::cf::ColorGradientFormatting::getNumControlPoints()
{
    return npc(thresholds)->length;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::setNumControlPoints(int32_t num)
{
    if(num != npc(thresholds)->length) {
        auto nt = new ColorGradientThresholdArray(num);
        auto nc = new ::org::apache::poi::hssf::record::common::ExtendedColorArray(num);
        auto copy = ::java::lang::Math::min(npc(thresholds)->length, num);
        ::java::lang::System::arraycopy(thresholds, 0, nt, 0, copy);
        ::java::lang::System::arraycopy(colors, 0, nc, 0, copy);
        this->thresholds = nt;
        this->colors = nc;
        updateThresholdPositions();
    }
}

org::apache::poi::hssf::record::cf::ColorGradientThresholdArray* org::apache::poi::hssf::record::cf::ColorGradientFormatting::getThresholds()
{
    return thresholds;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::setThresholds(ColorGradientThresholdArray* thresholds)
{
    this->thresholds = (thresholds == nullptr) ? static_cast< ColorGradientThresholdArray* >(nullptr) : npc(thresholds)->clone();
    updateThresholdPositions();
}

org::apache::poi::hssf::record::common::ExtendedColorArray* org::apache::poi::hssf::record::cf::ColorGradientFormatting::getColors()
{
    return colors;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::setColors(::org::apache::poi::hssf::record::common::ExtendedColorArray* colors)
{
    this->colors = (colors == nullptr) ? static_cast< ::org::apache::poi::hssf::record::common::ExtendedColorArray* >(nullptr) : npc(colors)->clone();
}

bool org::apache::poi::hssf::record::cf::ColorGradientFormatting::isClampToCurve()
{
    return getOptionFlag(clamp_);
}

bool org::apache::poi::hssf::record::cf::ColorGradientFormatting::isAppliesToBackground()
{
    return getOptionFlag(background_);
}

bool org::apache::poi::hssf::record::cf::ColorGradientFormatting::getOptionFlag(::org::apache::poi::util::BitField* field)
{
    auto value = npc(field)->getValue(options);
    return value == 0 ? false : true;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::updateThresholdPositions()
{
    auto step = 1.0 / (npc(thresholds)->length - int32_t(1));
    for (auto i = int32_t(0); i < npc(thresholds)->length; i++) {
        npc((*thresholds)[i])->setPosition(step * i);
    }
}

java::lang::String* org::apache::poi::hssf::record::cf::ColorGradientFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Color Gradient Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"          .clamp     = "_j))->append(isClampToCurve()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .background= "_j))->append(isAppliesToBackground()))->append(u"\n"_j);
    for(auto t : *npc(thresholds)) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(t));
    }
    for(auto c : *npc(colors)) {
        npc(buffer)->append(static_cast< ::java::lang::Object* >(c));
    }
    npc(buffer)->append(u"    [/Color Gradient Formatting]\n"_j);
    return npc(buffer)->toString();
}

java::lang::Object* org::apache::poi::hssf::record::cf::ColorGradientFormatting::clone()
{
    auto rec = new ColorGradientFormatting();
    npc(rec)->options = options;
    npc(rec)->thresholds = new ColorGradientThresholdArray(npc(thresholds)->length);
    npc(rec)->colors = new ::org::apache::poi::hssf::record::common::ExtendedColorArray(npc(colors)->length);
    ::java::lang::System::arraycopy(thresholds, 0, npc(rec)->thresholds, 0, npc(thresholds)->length);
    ::java::lang::System::arraycopy(colors, 0, npc(rec)->colors, 0, npc(colors)->length);
    return rec;
}

int32_t org::apache::poi::hssf::record::cf::ColorGradientFormatting::getDataLength()
{
    auto len = int32_t(6);
    for(auto t : *npc(thresholds)) {
        len += npc(t)->getDataLength();
    }
    for(auto c : *npc(colors)) {
        len += npc(c)->getDataLength();
        len += 8;
    }
    return len;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(0);
    npc(out)->writeByte(0);
    npc(out)->writeByte(npc(thresholds)->length);
    npc(out)->writeByte(npc(thresholds)->length);
    npc(out)->writeByte(options);
    for(auto t : *npc(thresholds)) {
        npc(t)->serialize(out);
    }
    auto step = 1.0 / (npc(colors)->length - int32_t(1));
    for (auto i = int32_t(0); i < npc(colors)->length; i++) {
        npc(out)->writeDouble(i * step);
        auto c = (*colors)[i];
        npc(c)->serialize(out);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::ColorGradientFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.ColorGradientFormatting", 53);
    return c;
}

void org::apache::poi::hssf::record::cf::ColorGradientFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(ColorGradientFormatting::class_()));
        clamp_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        background_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::cf::ColorGradientFormatting::getClass0()
{
    return class_();
}

