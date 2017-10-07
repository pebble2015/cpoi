// Generated from /POI/java/org/apache/poi/hssf/record/ExternalNameRecord.java
#include <org/apache/poi/hssf/record/ExternalNameRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/constant/ConstantValueParser.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::ExternalNameRecord::ExternalNameRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::ExternalNameRecord::ExternalNameRecord() 
    : ExternalNameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::ExternalNameRecord::ExternalNameRecord(RecordInputStream* in) 
    : ExternalNameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::ExternalNameRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_BUILTIN_NAME;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_AUTOMATIC_LINK;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_PICTURE_LINK;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_STD_DOCUMENT_NAME;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_OLE_LINK;

constexpr int32_t org::apache::poi::hssf::record::ExternalNameRecord::OPT_ICONIFIED_PICTURE_LINK;

bool org::apache::poi::hssf::record::ExternalNameRecord::isBuiltInName()
{
    return (field_1_option_flag & OPT_BUILTIN_NAME) != 0;
}

bool org::apache::poi::hssf::record::ExternalNameRecord::isAutomaticLink()
{
    return (field_1_option_flag & OPT_AUTOMATIC_LINK) != 0;
}

bool org::apache::poi::hssf::record::ExternalNameRecord::isPicureLink()
{
    return (field_1_option_flag & OPT_PICTURE_LINK) != 0;
}

bool org::apache::poi::hssf::record::ExternalNameRecord::isStdDocumentNameIdentifier()
{
    return (field_1_option_flag & OPT_STD_DOCUMENT_NAME) != 0;
}

bool org::apache::poi::hssf::record::ExternalNameRecord::isOLELink()
{
    return (field_1_option_flag & OPT_OLE_LINK) != 0;
}

bool org::apache::poi::hssf::record::ExternalNameRecord::isIconifiedPictureLink()
{
    return (field_1_option_flag & OPT_ICONIFIED_PICTURE_LINK) != 0;
}

java::lang::String* org::apache::poi::hssf::record::ExternalNameRecord::getText()
{
    return field_4_name;
}

void org::apache::poi::hssf::record::ExternalNameRecord::setText(::java::lang::String* str)
{
    field_4_name = str;
}

int16_t org::apache::poi::hssf::record::ExternalNameRecord::getIx()
{
    return field_2_ixals;
}

void org::apache::poi::hssf::record::ExternalNameRecord::setIx(int16_t ix)
{
    field_2_ixals = ix;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::ExternalNameRecord::getParsedExpression()
{
    return ::org::apache::poi::ss::formula::Formula::getTokens(field_5_name_definition);
}

void org::apache::poi::hssf::record::ExternalNameRecord::setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    field_5_name_definition = ::org::apache::poi::ss::formula::Formula::create(ptgs);
}

int32_t org::apache::poi::hssf::record::ExternalNameRecord::getDataSize()
{
    auto result = int32_t(2) + int32_t(4);
    result += ::org::apache::poi::util::StringUtil::getEncodedSize(field_4_name) - int32_t(1);
    if(!isOLELink() && !isStdDocumentNameIdentifier()) {
        if(isAutomaticLink()) {
            if(_ddeValues != nullptr) {
                result += 3;
                result += ::org::apache::poi::ss::formula::constant::ConstantValueParser::getEncodedSize(_ddeValues);
            }
        } else {
            result += npc(field_5_name_definition)->getEncodedSize();
        }
    }
    return result;
}

void org::apache::poi::hssf::record::ExternalNameRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_option_flag);
    npc(out)->writeShort(field_2_ixals);
    npc(out)->writeShort(field_3_not_used);
    npc(out)->writeByte(npc(field_4_name)->length());
    ::org::apache::poi::util::StringUtil::writeUnicodeStringFlagAndData(out, field_4_name);
    if(!isOLELink() && !isStdDocumentNameIdentifier()) {
        if(isAutomaticLink()) {
            if(_ddeValues != nullptr) {
                npc(out)->writeByte(_nColumns - int32_t(1));
                npc(out)->writeShort(_nRows - int32_t(1));
                ::org::apache::poi::ss::formula::constant::ConstantValueParser::encode(out, _ddeValues);
            }
        } else {
            npc(field_5_name_definition)->serialize(out);
        }
    }
}

void org::apache::poi::hssf::record::ExternalNameRecord::ctor()
{
    super::ctor();
    field_2_ixals = 0;
}

void org::apache::poi::hssf::record::ExternalNameRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_option_flag = npc(in)->readShort();
    field_2_ixals = npc(in)->readShort();
    field_3_not_used = npc(in)->readShort();
    auto numChars = npc(in)->readUByte();
    field_4_name = ::org::apache::poi::util::StringUtil::readUnicodeString(in, numChars);
    if(!isOLELink() && !isStdDocumentNameIdentifier()) {
        if(isAutomaticLink()) {
            if(npc(in)->available() > 0) {
                auto nColumns = npc(in)->readUByte() + int32_t(1);
                auto nRows = npc(in)->readShort() + int32_t(1);
                auto totalCount = nRows * nColumns;
                _ddeValues = ::org::apache::poi::ss::formula::constant::ConstantValueParser::parse(in, totalCount);
                _nColumns = nColumns;
                _nRows = nRows;
            }
        } else {
            auto formulaLen = npc(in)->readUShort();
            field_5_name_definition = ::org::apache::poi::ss::formula::Formula::read(formulaLen, in);
        }
    }
}

int16_t org::apache::poi::hssf::record::ExternalNameRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::ExternalNameRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"[EXTERNALNAME]\n"_j);
    npc(npc(npc(sb)->append(u"    .options = "_j))->append(static_cast< int32_t >(field_1_option_flag)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .ix      = "_j))->append(static_cast< int32_t >(field_2_ixals)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .name    = "_j))->append(field_4_name))->append(u"\n"_j);
    if(field_5_name_definition != nullptr) {
        auto ptgs = npc(field_5_name_definition)->getTokens();
        for(auto ptg : *npc(ptgs)) {
            npc(npc(npc(npc(sb)->append(u"    .namedef = "_j))->append(static_cast< ::java::lang::Object* >(ptg)))->append(npc(ptg)->getRVAType()))->append(u"\n"_j);
        }
    }
    npc(sb)->append(u"[/EXTERNALNAME]\n"_j);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::ExternalNameRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExternalNameRecord", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::ExternalNameRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::ExternalNameRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::ExternalNameRecord::getClass0()
{
    return class_();
}

