// Generated from /POI/java/org/apache/poi/ss/util/CellUtil.java
#include <org/apache/poi/ss/util/CellUtil.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CreationHelper.hpp>
#include <org/apache/poi/ss/usermodel/FillPatternType.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>
#include <org/apache/poi/ss/usermodel/HorizontalAlignment.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/VerticalAlignment.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellUtil_UnicodeMapping.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::util::CellUtil_UnicodeMapping, ::java::lang::ObjectArray > CellUtil_UnicodeMappingArray;
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

org::apache::poi::ss::util::CellUtil::CellUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::CellUtil::CellUtil() 
    : CellUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::util::CellUtil::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::util::CellUtil::log_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::ALIGNMENT()
{
    clinit();
    return ALIGNMENT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::ALIGNMENT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::BORDER_BOTTOM()
{
    clinit();
    return BORDER_BOTTOM_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::BORDER_BOTTOM_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::BORDER_LEFT()
{
    clinit();
    return BORDER_LEFT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::BORDER_LEFT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::BORDER_RIGHT()
{
    clinit();
    return BORDER_RIGHT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::BORDER_RIGHT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::BORDER_TOP()
{
    clinit();
    return BORDER_TOP_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::BORDER_TOP_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::BOTTOM_BORDER_COLOR()
{
    clinit();
    return BOTTOM_BORDER_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::BOTTOM_BORDER_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::LEFT_BORDER_COLOR()
{
    clinit();
    return LEFT_BORDER_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::LEFT_BORDER_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::RIGHT_BORDER_COLOR()
{
    clinit();
    return RIGHT_BORDER_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::RIGHT_BORDER_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::TOP_BORDER_COLOR()
{
    clinit();
    return TOP_BORDER_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::TOP_BORDER_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::DATA_FORMAT()
{
    clinit();
    return DATA_FORMAT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::DATA_FORMAT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::FILL_BACKGROUND_COLOR()
{
    clinit();
    return FILL_BACKGROUND_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::FILL_BACKGROUND_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::FILL_FOREGROUND_COLOR()
{
    clinit();
    return FILL_FOREGROUND_COLOR_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::FILL_FOREGROUND_COLOR_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::FILL_PATTERN()
{
    clinit();
    return FILL_PATTERN_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::FILL_PATTERN_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::FONT()
{
    clinit();
    return FONT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::FONT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::HIDDEN()
{
    clinit();
    return HIDDEN_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::HIDDEN_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::INDENTION()
{
    clinit();
    return INDENTION_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::INDENTION_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::LOCKED()
{
    clinit();
    return LOCKED_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::LOCKED_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::ROTATION()
{
    clinit();
    return ROTATION_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::ROTATION_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::VERTICAL_ALIGNMENT()
{
    clinit();
    return VERTICAL_ALIGNMENT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::VERTICAL_ALIGNMENT_;

java::lang::String*& org::apache::poi::ss::util::CellUtil::WRAP_TEXT()
{
    clinit();
    return WRAP_TEXT_;
}
java::lang::String* org::apache::poi::ss::util::CellUtil::WRAP_TEXT_;

java::util::Set*& org::apache::poi::ss::util::CellUtil::shortValues()
{
    clinit();
    return shortValues_;
}
java::util::Set* org::apache::poi::ss::util::CellUtil::shortValues_;

java::util::Set*& org::apache::poi::ss::util::CellUtil::booleanValues()
{
    clinit();
    return booleanValues_;
}
java::util::Set* org::apache::poi::ss::util::CellUtil::booleanValues_;

java::util::Set*& org::apache::poi::ss::util::CellUtil::borderTypeValues()
{
    clinit();
    return borderTypeValues_;
}
java::util::Set* org::apache::poi::ss::util::CellUtil::borderTypeValues_;

org::apache::poi::ss::util::CellUtil_UnicodeMappingArray*& org::apache::poi::ss::util::CellUtil::unicodeMappings()
{
    clinit();
    return unicodeMappings_;
}
org::apache::poi::ss::util::CellUtil_UnicodeMappingArray* org::apache::poi::ss::util::CellUtil::unicodeMappings_;

void org::apache::poi::ss::util::CellUtil::ctor()
{
    super::ctor();
}

org::apache::poi::ss::usermodel::Row* org::apache::poi::ss::util::CellUtil::getRow(int32_t rowIndex, ::org::apache::poi::ss::usermodel::Sheet* sheet)
{
    clinit();
    auto row = npc(sheet)->getRow(rowIndex);
    if(row == nullptr) {
        row = npc(sheet)->createRow(rowIndex);
    }
    return row;
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::CellUtil::getCell(::org::apache::poi::ss::usermodel::Row* row, int32_t columnIndex)
{
    clinit();
    auto cell = npc(row)->getCell(columnIndex);
    if(cell == nullptr) {
        cell = npc(row)->createCell(columnIndex);
    }
    return cell;
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::CellUtil::createCell(::org::apache::poi::ss::usermodel::Row* row, int32_t column, ::java::lang::String* value, ::org::apache::poi::ss::usermodel::CellStyle* style)
{
    clinit();
    auto cell = getCell(row, column);
    npc(cell)->setCellValue(npc(npc(npc(npc(npc(cell)->getRow())->getSheet())->getWorkbook())->getCreationHelper())->createRichTextString(value));
    if(style != nullptr) {
        npc(cell)->setCellStyle(style);
    }
    return cell;
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::CellUtil::createCell(::org::apache::poi::ss::usermodel::Row* row, int32_t column, ::java::lang::String* value)
{
    clinit();
    return createCell(row, column, value, nullptr);
}

void org::apache::poi::ss::util::CellUtil::setAlignment(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::HorizontalAlignment* align)
{
    clinit();
    setCellStyleProperty(cell, ALIGNMENT_, align);
}

void org::apache::poi::ss::util::CellUtil::setVerticalAlignment(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::VerticalAlignment* align)
{
    clinit();
    setCellStyleProperty(cell, VERTICAL_ALIGNMENT_, align);
}

void org::apache::poi::ss::util::CellUtil::setFont(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::Font* font)
{
    clinit();
    auto wb = npc(npc(cell)->getSheet())->getWorkbook();
    auto const fontIndex = npc(font)->getIndex();
    if(!npc(npc(wb)->getFontAt(fontIndex))->equals(font)) {
        throw new ::java::lang::IllegalArgumentException(u"Font does not belong to this workbook"_j);
    }
    setCellStyleProperty(cell, FONT_, ::java::lang::Short::valueOf(fontIndex));
}

void org::apache::poi::ss::util::CellUtil::setCellStyleProperties(::org::apache::poi::ss::usermodel::Cell* cell, ::java::util::Map* properties)
{
    clinit();
    auto workbook = npc(npc(cell)->getSheet())->getWorkbook();
    auto originalStyle = npc(cell)->getCellStyle();
    ::org::apache::poi::ss::usermodel::CellStyle* newStyle = nullptr;
    auto values = getFormatProperties(originalStyle);
    putAll(properties, values);
    auto numberCellStyles = npc(workbook)->getNumCellStyles();
    for (auto i = int32_t(0); i < numberCellStyles; i++) {
        auto wbStyle = npc(workbook)->getCellStyleAt(i);
        auto wbStyleMap = getFormatProperties(wbStyle);
        if(npc(wbStyleMap)->equals(static_cast< ::java::lang::Object* >(values))) {
            newStyle = wbStyle;
            break;
        }
    }
    if(newStyle == nullptr) {
        newStyle = npc(workbook)->createCellStyle();
        setFormatProperties(newStyle, workbook, values);
    }
    npc(cell)->setCellStyle(newStyle);
}

void org::apache::poi::ss::util::CellUtil::setCellStyleProperty(::org::apache::poi::ss::usermodel::Cell* cell, ::java::lang::String* propertyName, ::java::lang::Object* propertyValue)
{
    clinit();
    auto property = ::java::util::Collections::singletonMap(propertyName, propertyValue);
    setCellStyleProperties(cell, property);
}

java::util::Map* org::apache::poi::ss::util::CellUtil::getFormatProperties(::org::apache::poi::ss::usermodel::CellStyle* style)
{
    clinit();
    ::java::util::Map* properties = new ::java::util::HashMap();
    put(properties, ALIGNMENT_, npc(style)->getAlignmentEnum());
    put(properties, VERTICAL_ALIGNMENT_, npc(style)->getVerticalAlignmentEnum());
    put(properties, BORDER_BOTTOM_, npc(style)->getBorderBottomEnum());
    put(properties, BORDER_LEFT_, npc(style)->getBorderLeftEnum());
    put(properties, BORDER_RIGHT_, npc(style)->getBorderRightEnum());
    put(properties, BORDER_TOP_, npc(style)->getBorderTopEnum());
    put(properties, BOTTOM_BORDER_COLOR_, ::java::lang::Short::valueOf(npc(style)->getBottomBorderColor()));
    put(properties, DATA_FORMAT_, ::java::lang::Short::valueOf(npc(style)->getDataFormat()));
    put(properties, FILL_PATTERN_, npc(style)->getFillPatternEnum());
    put(properties, FILL_FOREGROUND_COLOR_, ::java::lang::Short::valueOf(npc(style)->getFillForegroundColor()));
    put(properties, FILL_BACKGROUND_COLOR_, ::java::lang::Short::valueOf(npc(style)->getFillBackgroundColor()));
    put(properties, FONT_, ::java::lang::Short::valueOf(npc(style)->getFontIndex()));
    put(properties, HIDDEN_, ::java::lang::Boolean::valueOf(npc(style)->getHidden()));
    put(properties, INDENTION_, ::java::lang::Short::valueOf(npc(style)->getIndention()));
    put(properties, LEFT_BORDER_COLOR_, ::java::lang::Short::valueOf(npc(style)->getLeftBorderColor()));
    put(properties, LOCKED_, ::java::lang::Boolean::valueOf(npc(style)->getLocked()));
    put(properties, RIGHT_BORDER_COLOR_, ::java::lang::Short::valueOf(npc(style)->getRightBorderColor()));
    put(properties, ROTATION_, ::java::lang::Short::valueOf(npc(style)->getRotation()));
    put(properties, TOP_BORDER_COLOR_, ::java::lang::Short::valueOf(npc(style)->getTopBorderColor()));
    put(properties, WRAP_TEXT_, ::java::lang::Boolean::valueOf(npc(style)->getWrapText()));
    return properties;
}

void org::apache::poi::ss::util::CellUtil::putAll(::java::util::Map* src, ::java::util::Map* dest)
{
    clinit();
    for (auto _i = npc(npc(src)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
        {
            if(npc(shortValues_)->contains(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, ::java::lang::Short::valueOf(getShort(src, key)));
            } else if(npc(booleanValues_)->contains(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, ::java::lang::Boolean::valueOf(getBoolean(src, key)));
            } else if(npc(borderTypeValues_)->contains(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, getBorderStyle(src, key));
            } else if(npc(ALIGNMENT_)->equals(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, getHorizontalAlignment(src, key));
            } else if(npc(VERTICAL_ALIGNMENT_)->equals(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, getVerticalAlignment(src, key));
            } else if(npc(FILL_PATTERN_)->equals(static_cast< ::java::lang::Object* >(key))) {
                npc(dest)->put(key, getFillPattern(src, key));
            } else {
                if(npc(log_)->check(::org::apache::poi::util::POILogger::INFO)) {
                    npc(log_)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Ignoring unrecognized CellUtil format properties key: "_j)->append(key)->toString())}));
                }
            }
        }
    }
}

void org::apache::poi::ss::util::CellUtil::setFormatProperties(::org::apache::poi::ss::usermodel::CellStyle* style, ::org::apache::poi::ss::usermodel::Workbook* workbook, ::java::util::Map* properties)
{
    clinit();
    npc(style)->setAlignment(getHorizontalAlignment(properties, ALIGNMENT_));
    npc(style)->setVerticalAlignment(getVerticalAlignment(properties, VERTICAL_ALIGNMENT_));
    npc(style)->setBorderBottom(getBorderStyle(properties, BORDER_BOTTOM_));
    npc(style)->setBorderLeft(getBorderStyle(properties, BORDER_LEFT_));
    npc(style)->setBorderRight(getBorderStyle(properties, BORDER_RIGHT_));
    npc(style)->setBorderTop(getBorderStyle(properties, BORDER_TOP_));
    npc(style)->setBottomBorderColor(getShort(properties, BOTTOM_BORDER_COLOR_));
    npc(style)->setDataFormat(getShort(properties, DATA_FORMAT_));
    npc(style)->setFillPattern(getFillPattern(properties, FILL_PATTERN_));
    npc(style)->setFillForegroundColor(getShort(properties, FILL_FOREGROUND_COLOR_));
    npc(style)->setFillBackgroundColor(getShort(properties, FILL_BACKGROUND_COLOR_));
    npc(style)->setFont(npc(workbook)->getFontAt(getShort(properties, FONT_)));
    npc(style)->setHidden(getBoolean(properties, HIDDEN_));
    npc(style)->setIndention(getShort(properties, INDENTION_));
    npc(style)->setLeftBorderColor(getShort(properties, LEFT_BORDER_COLOR_));
    npc(style)->setLocked(getBoolean(properties, LOCKED_));
    npc(style)->setRightBorderColor(getShort(properties, RIGHT_BORDER_COLOR_));
    npc(style)->setRotation(getShort(properties, ROTATION_));
    npc(style)->setTopBorderColor(getShort(properties, TOP_BORDER_COLOR_));
    npc(style)->setWrapText(getBoolean(properties, WRAP_TEXT_));
}

int16_t org::apache::poi::ss::util::CellUtil::getShort(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        return npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
    }
    return 0;
}

org::apache::poi::ss::usermodel::BorderStyle* org::apache::poi::ss::util::CellUtil::getBorderStyle(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    ::org::apache::poi::ss::usermodel::BorderStyle* border;
    if(dynamic_cast< ::org::apache::poi::ss::usermodel::BorderStyle* >(value) != nullptr) {
        border = java_cast< ::org::apache::poi::ss::usermodel::BorderStyle* >(value);
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        if(npc(log_)->check(::org::apache::poi::util::POILogger::WARN)) {
            npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Deprecation warning: CellUtil properties map uses Short values for "_j)->append(name)
                ->append(u". Should use BorderStyle enums instead."_j)->toString())}));
        }
        auto code = npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
        border = ::org::apache::poi::ss::usermodel::BorderStyle::valueOf(code);
    } else if(value == nullptr) {
        border = ::org::apache::poi::ss::usermodel::BorderStyle::NONE;
    } else {
        throw new ::java::lang::RuntimeException(u"Unexpected border style class. Must be BorderStyle or Short (deprecated)."_j);
    }
    return border;
}

org::apache::poi::ss::usermodel::FillPatternType* org::apache::poi::ss::util::CellUtil::getFillPattern(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    ::org::apache::poi::ss::usermodel::FillPatternType* pattern;
    if(dynamic_cast< ::org::apache::poi::ss::usermodel::FillPatternType* >(value) != nullptr) {
        pattern = java_cast< ::org::apache::poi::ss::usermodel::FillPatternType* >(value);
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        if(npc(log_)->check(::org::apache::poi::util::POILogger::WARN)) {
            npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Deprecation warning: CellUtil properties map uses Short values for "_j)->append(name)
                ->append(u". Should use FillPatternType enums instead."_j)->toString())}));
        }
        auto code = npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
        pattern = ::org::apache::poi::ss::usermodel::FillPatternType::forInt(code);
    } else if(value == nullptr) {
        pattern = ::org::apache::poi::ss::usermodel::FillPatternType::NO_FILL;
    } else {
        throw new ::java::lang::RuntimeException(u"Unexpected fill pattern style class. Must be FillPatternType or Short (deprecated)."_j);
    }
    return pattern;
}

org::apache::poi::ss::usermodel::HorizontalAlignment* org::apache::poi::ss::util::CellUtil::getHorizontalAlignment(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    ::org::apache::poi::ss::usermodel::HorizontalAlignment* align;
    if(dynamic_cast< ::org::apache::poi::ss::usermodel::HorizontalAlignment* >(value) != nullptr) {
        align = java_cast< ::org::apache::poi::ss::usermodel::HorizontalAlignment* >(value);
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        if(npc(log_)->check(::org::apache::poi::util::POILogger::WARN)) {
            npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Deprecation warning: CellUtil properties map used a Short value for "_j)->append(name)
                ->append(u". Should use HorizontalAlignment enums instead."_j)->toString())}));
        }
        auto code = npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
        align = ::org::apache::poi::ss::usermodel::HorizontalAlignment::forInt(code);
    } else if(value == nullptr) {
        align = ::org::apache::poi::ss::usermodel::HorizontalAlignment::GENERAL;
    } else {
        throw new ::java::lang::RuntimeException(u"Unexpected horizontal alignment style class. Must be HorizontalAlignment or Short (deprecated)."_j);
    }
    return align;
}

org::apache::poi::ss::usermodel::VerticalAlignment* org::apache::poi::ss::util::CellUtil::getVerticalAlignment(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    ::org::apache::poi::ss::usermodel::VerticalAlignment* align;
    if(dynamic_cast< ::org::apache::poi::ss::usermodel::VerticalAlignment* >(value) != nullptr) {
        align = java_cast< ::org::apache::poi::ss::usermodel::VerticalAlignment* >(value);
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        if(npc(log_)->check(::org::apache::poi::util::POILogger::WARN)) {
            npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Deprecation warning: CellUtil properties map used a Short value for "_j)->append(name)
                ->append(u". Should use VerticalAlignment enums instead."_j)->toString())}));
        }
        auto code = npc((java_cast< ::java::lang::Short* >(value)))->shortValue();
        align = ::org::apache::poi::ss::usermodel::VerticalAlignment::forInt(code);
    } else if(value == nullptr) {
        align = ::org::apache::poi::ss::usermodel::VerticalAlignment::BOTTOM;
    } else {
        throw new ::java::lang::RuntimeException(u"Unexpected vertical alignment style class. Must be VerticalAlignment or Short (deprecated)."_j);
    }
    return align;
}

bool org::apache::poi::ss::util::CellUtil::getBoolean(::java::util::Map* properties, ::java::lang::String* name)
{
    clinit();
    auto value = java_cast< ::java::lang::Object* >(npc(properties)->get(name));
    if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        return npc((java_cast< ::java::lang::Boolean* >(value)))->booleanValue();
    }
    return false;
}

void org::apache::poi::ss::util::CellUtil::put(::java::util::Map* properties, ::java::lang::String* name, ::java::lang::Object* value)
{
    clinit();
    npc(properties)->put(name, value);
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::CellUtil::translateUnicodeValues(::org::apache::poi::ss::usermodel::Cell* cell)
{
    clinit();
    auto s = npc(npc(cell)->getRichStringCellValue())->getString();
    auto foundUnicode = false;
    auto lowerCaseStr = npc(s)->toLowerCase(::java::util::Locale::ROOT());
    for(auto entry : *npc(unicodeMappings_)) {
        auto key = npc(entry)->entityName;
        if(npc(lowerCaseStr)->contains(key)) {
            s = npc(s)->replaceAll(key, npc(entry)->resolvedValue);
            foundUnicode = true;
        }
    }
    if(foundUnicode) {
        npc(cell)->setCellValue(npc(npc(npc(npc(npc(cell)->getRow())->getSheet())->getWorkbook())->getCreationHelper())->createRichTextString(s));
    }
    return cell;
}

org::apache::poi::ss::util::CellUtil_UnicodeMapping* org::apache::poi::ss::util::CellUtil::um(::java::lang::String* entityName, ::java::lang::String* resolvedValue)
{
    clinit();
    return new CellUtil_UnicodeMapping(entityName, resolvedValue);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::CellUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellUtil", 31);
    return c;
}

void org::apache::poi::ss::util::CellUtil::clinit()
{
struct string_init_ {
    string_init_() {
    ALIGNMENT_ = u"alignment"_j;
    BORDER_BOTTOM_ = u"borderBottom"_j;
    BORDER_LEFT_ = u"borderLeft"_j;
    BORDER_RIGHT_ = u"borderRight"_j;
    BORDER_TOP_ = u"borderTop"_j;
    BOTTOM_BORDER_COLOR_ = u"bottomBorderColor"_j;
    LEFT_BORDER_COLOR_ = u"leftBorderColor"_j;
    RIGHT_BORDER_COLOR_ = u"rightBorderColor"_j;
    TOP_BORDER_COLOR_ = u"topBorderColor"_j;
    DATA_FORMAT_ = u"dataFormat"_j;
    FILL_BACKGROUND_COLOR_ = u"fillBackgroundColor"_j;
    FILL_FOREGROUND_COLOR_ = u"fillForegroundColor"_j;
    FILL_PATTERN_ = u"fillPattern"_j;
    FONT_ = u"font"_j;
    HIDDEN_ = u"hidden"_j;
    INDENTION_ = u"indention"_j;
    LOCKED_ = u"locked"_j;
    ROTATION_ = u"rotation"_j;
    VERTICAL_ALIGNMENT_ = u"verticalAlignment"_j;
    WRAP_TEXT_ = u"wrapText"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CellUtil::class_()));
        shortValues_ = ::java::util::Collections::unmodifiableSet(new ::java::util::HashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(BOTTOM_BORDER_COLOR_), static_cast< ::java::lang::Object* >(LEFT_BORDER_COLOR_), static_cast< ::java::lang::Object* >(RIGHT_BORDER_COLOR_), static_cast< ::java::lang::Object* >(TOP_BORDER_COLOR_), static_cast< ::java::lang::Object* >(FILL_FOREGROUND_COLOR_), static_cast< ::java::lang::Object* >(FILL_BACKGROUND_COLOR_), static_cast< ::java::lang::Object* >(INDENTION_), static_cast< ::java::lang::Object* >(DATA_FORMAT_), static_cast< ::java::lang::Object* >(FONT_), static_cast< ::java::lang::Object* >(ROTATION_)})))));
        booleanValues_ = ::java::util::Collections::unmodifiableSet(new ::java::util::HashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(LOCKED_), static_cast< ::java::lang::Object* >(HIDDEN_), static_cast< ::java::lang::Object* >(WRAP_TEXT_)})))));
        borderTypeValues_ = ::java::util::Collections::unmodifiableSet(new ::java::util::HashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(BORDER_BOTTOM_), static_cast< ::java::lang::Object* >(BORDER_LEFT_), static_cast< ::java::lang::Object* >(BORDER_RIGHT_), static_cast< ::java::lang::Object* >(BORDER_TOP_)})))));
        {
            unicodeMappings_ = new CellUtil_UnicodeMappingArray({
                um(u"alpha"_j, u"\u03B1"_j)
                , um(u"beta"_j, u"\u03B2"_j)
                , um(u"gamma"_j, u"\u03B3"_j)
                , um(u"delta"_j, u"\u03B4"_j)
                , um(u"epsilon"_j, u"\u03B5"_j)
                , um(u"zeta"_j, u"\u03B6"_j)
                , um(u"eta"_j, u"\u03B7"_j)
                , um(u"theta"_j, u"\u03B8"_j)
                , um(u"iota"_j, u"\u03B9"_j)
                , um(u"kappa"_j, u"\u03BA"_j)
                , um(u"lambda"_j, u"\u03BB"_j)
                , um(u"mu"_j, u"\u03BC"_j)
                , um(u"nu"_j, u"\u03BD"_j)
                , um(u"xi"_j, u"\u03BE"_j)
                , um(u"omicron"_j, u"\u03BF"_j)
            });
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::util::CellUtil::getClass0()
{
    return class_();
}

