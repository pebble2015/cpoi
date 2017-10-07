// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFHyperlink.java
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/common/usermodel/HyperlinkType.hpp>
#include <org/apache/poi/hssf/record/HyperlinkRecord.hpp>
#include <org/apache/poi/ss/usermodel/Hyperlink.hpp>

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

org::apache::poi::hssf::usermodel::HSSFHyperlink::HSSFHyperlink(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFHyperlink::HSSFHyperlink(::org::apache::poi::common::usermodel::HyperlinkType* type) 
    : HSSFHyperlink(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

org::apache::poi::hssf::usermodel::HSSFHyperlink::HSSFHyperlink(::org::apache::poi::hssf::record::HyperlinkRecord* record) 
    : HSSFHyperlink(*static_cast< ::default_init_tag* >(0))
{
    ctor(record);
}

org::apache::poi::hssf::usermodel::HSSFHyperlink::HSSFHyperlink(::org::apache::poi::ss::usermodel::Hyperlink* other) 
    : HSSFHyperlink(*static_cast< ::default_init_tag* >(0))
{
    ctor(other);
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::ctor(::org::apache::poi::common::usermodel::HyperlinkType* type)
{
    super::ctor();
    this->link_type = type;
    record = new ::org::apache::poi::hssf::record::HyperlinkRecord();
    {
        auto v = type;
        if((v == ::org::apache::poi::common::usermodel::HyperlinkType::URL) || (v == ::org::apache::poi::common::usermodel::HyperlinkType::EMAIL)) {
            npc(record)->newUrlLink();
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::common::usermodel::HyperlinkType::FILE)) {
            npc(record)->newFileLink();
            goto end_switch0;;
        }
        if((v == ::org::apache::poi::common::usermodel::HyperlinkType::DOCUMENT)) {
            npc(record)->newDocumentLink();
            goto end_switch0;;
        }
        if((((v != ::org::apache::poi::common::usermodel::HyperlinkType::URL) && (v != ::org::apache::poi::common::usermodel::HyperlinkType::EMAIL) && (v != ::org::apache::poi::common::usermodel::HyperlinkType::FILE) && (v != ::org::apache::poi::common::usermodel::HyperlinkType::DOCUMENT)))) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid type: "_j)->append(static_cast< ::java::lang::Object* >(type))->toString());
        }
end_switch0:;
    }

}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::ctor(::org::apache::poi::hssf::record::HyperlinkRecord* record)
{
    super::ctor();
    this->record = record;
    link_type = getType(record);
}

org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::hssf::usermodel::HSSFHyperlink::getType(::org::apache::poi::hssf::record::HyperlinkRecord* record)
{
    clinit();
    ::org::apache::poi::common::usermodel::HyperlinkType* link_type;
    if(npc(record)->isFileLink()) {
        link_type = ::org::apache::poi::common::usermodel::HyperlinkType::FILE;
    } else if(npc(record)->isDocumentLink()) {
        link_type = ::org::apache::poi::common::usermodel::HyperlinkType::DOCUMENT;
    } else {
        if(npc(record)->getAddress() != nullptr && npc(npc(record)->getAddress())->startsWith(u"mailto:"_j)) {
            link_type = ::org::apache::poi::common::usermodel::HyperlinkType::EMAIL;
        } else {
            link_type = ::org::apache::poi::common::usermodel::HyperlinkType::URL;
        }
    }
    return link_type;
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::ctor(::org::apache::poi::ss::usermodel::Hyperlink* other)
{
    super::ctor();
    if(dynamic_cast< HSSFHyperlink* >(other) != nullptr) {
        auto hlink = java_cast< HSSFHyperlink* >(other);
        record = npc(npc(hlink)->record)->clone();
        link_type = getType(record);
    } else {
        link_type = npc(other)->getTypeEnum();
        record = new ::org::apache::poi::hssf::record::HyperlinkRecord();
        setFirstRow(npc(other)->getFirstRow());
        setFirstColumn(npc(other)->getFirstColumn());
        setLastRow(npc(other)->getLastRow());
        setLastColumn(npc(other)->getLastColumn());
    }
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::getFirstRow()
{
    return npc(record)->getFirstRow();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setFirstRow(int32_t row)
{
    npc(record)->setFirstRow(row);
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::getLastRow()
{
    return npc(record)->getLastRow();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setLastRow(int32_t row)
{
    npc(record)->setLastRow(row);
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::getFirstColumn()
{
    return npc(record)->getFirstColumn();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setFirstColumn(int32_t col)
{
    npc(record)->setFirstColumn(static_cast< int16_t >(col));
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::getLastColumn()
{
    return npc(record)->getLastColumn();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setLastColumn(int32_t col)
{
    npc(record)->setLastColumn(static_cast< int16_t >(col));
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFHyperlink::getAddress()
{
    return npc(record)->getAddress();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFHyperlink::getTextMark()
{
    return npc(record)->getTextMark();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setTextMark(::java::lang::String* textMark)
{
    npc(record)->setTextMark(textMark);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFHyperlink::getShortFilename()
{
    return npc(record)->getShortFilename();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setShortFilename(::java::lang::String* shortFilename)
{
    npc(record)->setShortFilename(shortFilename);
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setAddress(::java::lang::String* address)
{
    npc(record)->setAddress(address);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFHyperlink::getLabel()
{
    return npc(record)->getLabel();
}

void org::apache::poi::hssf::usermodel::HSSFHyperlink::setLabel(::java::lang::String* label)
{
    npc(record)->setLabel(label);
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::getType()
{
    return npc(link_type)->getCode();
}

org::apache::poi::common::usermodel::HyperlinkType* org::apache::poi::hssf::usermodel::HSSFHyperlink::getTypeEnum()
{
    return link_type;
}

bool org::apache::poi::hssf::usermodel::HSSFHyperlink::equals(::java::lang::Object* other)
{
    if(static_cast< ::java::lang::Object* >(this) == other)
        return true;

    if(!(dynamic_cast< HSSFHyperlink* >(other) != nullptr))
        return false;

    auto otherLink = java_cast< HSSFHyperlink* >(other);
    return record == npc(otherLink)->record;
}

int32_t org::apache::poi::hssf::usermodel::HSSFHyperlink::hashCode()
{
    return npc(record)->hashCode();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFHyperlink::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFHyperlink", 43);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFHyperlink::getClass0()
{
    return class_();
}

