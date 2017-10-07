// Generated from /POI/java/org/apache/poi/hssf/record/FeatRecord.java
#include <org/apache/poi/hssf/record/FeatRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/FeatHdrRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/common/FeatFormulaErr2.hpp>
#include <org/apache/poi/hssf/record/common/FeatProtection.hpp>
#include <org/apache/poi/hssf/record/common/FeatSmartTag.hpp>
#include <org/apache/poi/hssf/record/common/FtrHeader.hpp>
#include <org/apache/poi/hssf/record/common/SharedFeature.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::record::FeatRecord::FeatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FeatRecord::FeatRecord() 
    : FeatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::FeatRecord::FeatRecord(RecordInputStream* in) 
    : FeatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::FeatRecord::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::FeatRecord::logger_;

constexpr int16_t org::apache::poi::hssf::record::FeatRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::FeatRecord::v11_sid;

constexpr int16_t org::apache::poi::hssf::record::FeatRecord::v12_sid;

void org::apache::poi::hssf::record::FeatRecord::ctor()
{
    super::ctor();
    futureHeader = new ::org::apache::poi::hssf::record::common::FtrHeader();
    npc(futureHeader)->setRecordType(sid);
}

int16_t org::apache::poi::hssf::record::FeatRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::FeatRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    futureHeader = new ::org::apache::poi::hssf::record::common::FtrHeader(in);
    isf_sharedFeatureType = npc(in)->readShort();
    reserved1 = npc(in)->readByte();
    reserved2 = npc(in)->readInt();
    auto cref = npc(in)->readUShort();
    cbFeatData = npc(in)->readInt();
    reserved3 = npc(in)->readShort();
    cellRefs = new ::org::apache::poi::ss::util::CellRangeAddressArray(cref);
    for (auto i = int32_t(0); i < npc(cellRefs)->length; i++) {
        cellRefs->set(i, new ::org::apache::poi::ss::util::CellRangeAddress(in));
    }
    switch (isf_sharedFeatureType) {
    case FeatHdrRecord::SHAREDFEATURES_ISFPROTECTION:
        sharedFeature = new ::org::apache::poi::hssf::record::common::FeatProtection(in);
        break;
    case FeatHdrRecord::SHAREDFEATURES_ISFFEC2:
        sharedFeature = new ::org::apache::poi::hssf::record::common::FeatFormulaErr2(in);
        break;
    case FeatHdrRecord::SHAREDFEATURES_ISFFACTOID:
        sharedFeature = new ::org::apache::poi::hssf::record::common::FeatSmartTag(in);
        break;
    default:
        npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unknown Shared Feature "_j)->append(isf_sharedFeatureType)
            ->append(u" found!"_j)->toString())}));
    }

}

java::lang::String* org::apache::poi::hssf::record::FeatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SHARED FEATURE]\n"_j);
    npc(buffer)->append(u"[/SHARED FEATURE]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::FeatRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(futureHeader)->serialize(out);
    npc(out)->writeShort(isf_sharedFeatureType);
    npc(out)->writeByte(reserved1);
    npc(out)->writeInt(static_cast< int32_t >(reserved2));
    npc(out)->writeShort(npc(cellRefs)->length);
    npc(out)->writeInt(static_cast< int32_t >(cbFeatData));
    npc(out)->writeShort(reserved3);
    for (auto i = int32_t(0); i < npc(cellRefs)->length; i++) {
        npc((*cellRefs)[i])->serialize(out);
    }
    npc(sharedFeature)->serialize(out);
}

int32_t org::apache::poi::hssf::record::FeatRecord::getDataSize()
{
    return int32_t(12) + int32_t(2) + int32_t(1)+ int32_t(4)+ int32_t(2)+ int32_t(4)+ int32_t(2)+ (npc(cellRefs)->length * ::org::apache::poi::ss::util::CellRangeAddress::ENCODED_SIZE)+ npc(sharedFeature)->getDataSize();
}

int32_t org::apache::poi::hssf::record::FeatRecord::getIsf_sharedFeatureType()
{
    return isf_sharedFeatureType;
}

int64_t org::apache::poi::hssf::record::FeatRecord::getCbFeatData()
{
    return cbFeatData;
}

void org::apache::poi::hssf::record::FeatRecord::setCbFeatData(int64_t cbFeatData)
{
    this->cbFeatData = cbFeatData;
}

org::apache::poi::ss::util::CellRangeAddressArray* org::apache::poi::hssf::record::FeatRecord::getCellRefs()
{
    return cellRefs;
}

void org::apache::poi::hssf::record::FeatRecord::setCellRefs(::org::apache::poi::ss::util::CellRangeAddressArray* cellRefs)
{
    this->cellRefs = cellRefs;
}

org::apache::poi::hssf::record::common::SharedFeature* org::apache::poi::hssf::record::FeatRecord::getSharedFeature()
{
    return sharedFeature;
}

void org::apache::poi::hssf::record::FeatRecord::setSharedFeature(::org::apache::poi::hssf::record::common::SharedFeature* feature)
{
    this->sharedFeature = feature;
    if(dynamic_cast< ::org::apache::poi::hssf::record::common::FeatProtection* >(feature) != nullptr) {
        isf_sharedFeatureType = FeatHdrRecord::SHAREDFEATURES_ISFPROTECTION;
    }
    if(dynamic_cast< ::org::apache::poi::hssf::record::common::FeatFormulaErr2* >(feature) != nullptr) {
        isf_sharedFeatureType = FeatHdrRecord::SHAREDFEATURES_ISFFEC2;
    }
    if(dynamic_cast< ::org::apache::poi::hssf::record::common::FeatSmartTag* >(feature) != nullptr) {
        isf_sharedFeatureType = FeatHdrRecord::SHAREDFEATURES_ISFFACTOID;
    }
    if(isf_sharedFeatureType == FeatHdrRecord::SHAREDFEATURES_ISFFEC2) {
        cbFeatData = npc(sharedFeature)->getDataSize();
    } else {
        cbFeatData = 0;
    }
}

org::apache::poi::hssf::record::FeatRecord* org::apache::poi::hssf::record::FeatRecord::clone()
{
    return java_cast< FeatRecord* >(cloneViaReserialise());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FeatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FeatRecord", 37);
    return c;
}

void org::apache::poi::hssf::record::FeatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(FeatRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::FeatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::FeatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::FeatRecord::getClass0()
{
    return class_();
}

