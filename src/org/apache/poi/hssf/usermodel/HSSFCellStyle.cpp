// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCellStyle.java
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/ExtendedFormatRecord.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/record/StyleRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCellStyle_1.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorPredefined.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <org/apache/poi/ss/usermodel/BorderStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/FillPatternType.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>
#include <org/apache/poi/ss/usermodel/HorizontalAlignment.hpp>
#include <org/apache/poi/ss/usermodel/VerticalAlignment.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>

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

poi::hssf::usermodel::HSSFCellStyle::HSSFCellStyle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFCellStyle::HSSFCellStyle(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, HSSFWorkbook* workbook) 
    : HSSFCellStyle(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,rec,workbook);
}

poi::hssf::usermodel::HSSFCellStyle::HSSFCellStyle(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, ::poi::hssf::model::InternalWorkbook* workbook) 
    : HSSFCellStyle(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,rec,workbook);
}

void poi::hssf::usermodel::HSSFCellStyle::ctor(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, HSSFWorkbook* workbook)
{
    ctor(index, rec, npc(workbook)->getWorkbook());
}

void poi::hssf::usermodel::HSSFCellStyle::ctor(int16_t index, ::poi::hssf::record::ExtendedFormatRecord* rec, ::poi::hssf::model::InternalWorkbook* workbook)
{
    super::ctor();
    _workbook = workbook;
    _index = index;
    _format = rec;
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getIndex()
{
    return _index;
}

poi::hssf::usermodel::HSSFCellStyle* poi::hssf::usermodel::HSSFCellStyle::getParentStyle()
{
    auto parentIndex = npc(_format)->getParentIndex();
    if(parentIndex == 0 || parentIndex == 4095) {
        return nullptr;
    }
    return new HSSFCellStyle(parentIndex, npc(_workbook)->getExFormatAt(parentIndex), _workbook);
}

void poi::hssf::usermodel::HSSFCellStyle::setDataFormat(int16_t fmt)
{
    npc(_format)->setFormatIndex(fmt);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getDataFormat()
{
    return npc(_format)->getFormatIndex();
}

java::lang::ThreadLocal*& poi::hssf::usermodel::HSSFCellStyle::lastDateFormat()
{
    clinit();
    return lastDateFormat_;
}
java::lang::ThreadLocal* poi::hssf::usermodel::HSSFCellStyle::lastDateFormat_;

java::lang::ThreadLocal*& poi::hssf::usermodel::HSSFCellStyle::lastFormats()
{
    clinit();
    return lastFormats_;
}
java::lang::ThreadLocal* poi::hssf::usermodel::HSSFCellStyle::lastFormats_;

java::lang::ThreadLocal*& poi::hssf::usermodel::HSSFCellStyle::getDataFormatStringCache()
{
    clinit();
    return getDataFormatStringCache_;
}
java::lang::ThreadLocal* poi::hssf::usermodel::HSSFCellStyle::getDataFormatStringCache_;

java::lang::String* poi::hssf::usermodel::HSSFCellStyle::getDataFormatString()
{
    if(java_cast< ::java::lang::String* >(npc(getDataFormatStringCache_)->get()) != nullptr) {
        if((npc(java_cast< ::java::lang::Short* >(npc(lastDateFormat_)->get())))->shortValue() == getDataFormat() && npc(npc(_workbook)->getFormats())->equals(static_cast< ::java::lang::Object* >(java_cast< ::java::util::List* >(npc(lastFormats_)->get())))) {
            return java_cast< ::java::lang::String* >(npc(getDataFormatStringCache_)->get());
        }
    }
    npc(lastFormats_)->set(npc(_workbook)->getFormats());
    npc(lastDateFormat_)->set(::java::lang::Short::valueOf(getDataFormat()));
    npc(getDataFormatStringCache_)->set(getDataFormatString(_workbook));
    return java_cast< ::java::lang::String* >(npc(getDataFormatStringCache_)->get());
}

java::lang::String* poi::hssf::usermodel::HSSFCellStyle::getDataFormatString(::poi::ss::usermodel::Workbook* workbook)
{
    auto format = new HSSFDataFormat(npc((java_cast< HSSFWorkbook* >(workbook)))->getWorkbook());
    int32_t idx = getDataFormat();
    return idx == -int32_t(1) ? u"General"_j : npc(format)->getFormat(getDataFormat());
}

java::lang::String* poi::hssf::usermodel::HSSFCellStyle::getDataFormatString(::poi::hssf::model::InternalWorkbook* workbook)
{
    auto format = new HSSFDataFormat(workbook);
    return npc(format)->getFormat(getDataFormat());
}

void poi::hssf::usermodel::HSSFCellStyle::setFont(::poi::ss::usermodel::Font* font)
{
    setFont(java_cast< HSSFFont* >(font));
}

void poi::hssf::usermodel::HSSFCellStyle::setFont(HSSFFont* font)
{
    npc(_format)->setIndentNotParentFont(true);
    auto fontindex = npc(font)->getIndex();
    npc(_format)->setFontIndex(fontindex);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getFontIndex()
{
    return npc(_format)->getFontIndex();
}

poi::hssf::usermodel::HSSFFont* poi::hssf::usermodel::HSSFCellStyle::getFont(::poi::ss::usermodel::Workbook* parentWorkbook)
{
    return npc((java_cast< HSSFWorkbook* >(parentWorkbook)))->getFontAt(getFontIndex());
}

void poi::hssf::usermodel::HSSFCellStyle::setHidden(bool hidden)
{
    npc(_format)->setIndentNotParentCellOptions(true);
    npc(_format)->setHidden(hidden);
}

bool poi::hssf::usermodel::HSSFCellStyle::getHidden()
{
    return npc(_format)->isHidden();
}

void poi::hssf::usermodel::HSSFCellStyle::setLocked(bool locked)
{
    npc(_format)->setIndentNotParentCellOptions(true);
    npc(_format)->setLocked(locked);
}

bool poi::hssf::usermodel::HSSFCellStyle::getLocked()
{
    return npc(_format)->isLocked();
}

void poi::hssf::usermodel::HSSFCellStyle::setQuotePrefixed(bool quotePrefix)
{
    npc(_format)->set123Prefix(quotePrefix);
}

bool poi::hssf::usermodel::HSSFCellStyle::getQuotePrefixed()
{
    return npc(_format)->get123Prefix();
}

void poi::hssf::usermodel::HSSFCellStyle::setAlignment(::poi::ss::usermodel::HorizontalAlignment* align)
{
    npc(_format)->setIndentNotParentAlignment(true);
    npc(_format)->setAlignment(npc(align)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getAlignment()
{
    return npc(_format)->getAlignment();
}

poi::ss::usermodel::HorizontalAlignment* poi::hssf::usermodel::HSSFCellStyle::getAlignmentEnum()
{
    return ::poi::ss::usermodel::HorizontalAlignment::forInt(npc(_format)->getAlignment());
}

void poi::hssf::usermodel::HSSFCellStyle::setWrapText(bool wrapped)
{
    npc(_format)->setIndentNotParentAlignment(true);
    npc(_format)->setWrapText(wrapped);
}

bool poi::hssf::usermodel::HSSFCellStyle::getWrapText()
{
    return npc(_format)->getWrapText();
}

void poi::hssf::usermodel::HSSFCellStyle::setVerticalAlignment(::poi::ss::usermodel::VerticalAlignment* align)
{
    npc(_format)->setVerticalAlignment(npc(align)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getVerticalAlignment()
{
    return npc(_format)->getVerticalAlignment();
}

poi::ss::usermodel::VerticalAlignment* poi::hssf::usermodel::HSSFCellStyle::getVerticalAlignmentEnum()
{
    return ::poi::ss::usermodel::VerticalAlignment::forInt(npc(_format)->getVerticalAlignment());
}

void poi::hssf::usermodel::HSSFCellStyle::setRotation(int16_t rotation)
{
    if(rotation == 255) {
    } else if((rotation < 0) && (rotation >= -int32_t(90))) {
        rotation = static_cast< int16_t >((int32_t(90) - rotation));
    } else if(rotation > 90 && rotation <= 180) {
    } else if((rotation < -int32_t(90)) || (rotation > 90)) {
        throw new ::java::lang::IllegalArgumentException(u"The rotation must be between -90 and 90 degrees, or 0xff"_j);
    }
    npc(_format)->setRotation(rotation);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getRotation()
{
    auto rotation = npc(_format)->getRotation();
    if(rotation == 255) {
        return rotation;
    }
    if(rotation > 90) {
        rotation = static_cast< int16_t >((int32_t(90) - rotation));
    }
    return rotation;
}

void poi::hssf::usermodel::HSSFCellStyle::setIndention(int16_t indent)
{
    npc(_format)->setIndent(indent);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getIndention()
{
    return npc(_format)->getIndent();
}

void poi::hssf::usermodel::HSSFCellStyle::setBorderLeft(::poi::ss::usermodel::BorderStyle* border)
{
    npc(_format)->setIndentNotParentBorder(true);
    npc(_format)->setBorderLeft(npc(border)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getBorderLeft()
{
    return npc(_format)->getBorderLeft();
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFCellStyle::getBorderLeftEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(npc(_format)->getBorderLeft());
}

void poi::hssf::usermodel::HSSFCellStyle::setBorderRight(::poi::ss::usermodel::BorderStyle* border)
{
    npc(_format)->setIndentNotParentBorder(true);
    npc(_format)->setBorderRight(npc(border)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getBorderRight()
{
    return npc(_format)->getBorderRight();
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFCellStyle::getBorderRightEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(npc(_format)->getBorderRight());
}

void poi::hssf::usermodel::HSSFCellStyle::setBorderTop(::poi::ss::usermodel::BorderStyle* border)
{
    npc(_format)->setIndentNotParentBorder(true);
    npc(_format)->setBorderTop(npc(border)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getBorderTop()
{
    return npc(_format)->getBorderTop();
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFCellStyle::getBorderTopEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(npc(_format)->getBorderTop());
}

void poi::hssf::usermodel::HSSFCellStyle::setBorderBottom(::poi::ss::usermodel::BorderStyle* border)
{
    npc(_format)->setIndentNotParentBorder(true);
    npc(_format)->setBorderBottom(npc(border)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getBorderBottom()
{
    return npc(_format)->getBorderBottom();
}

poi::ss::usermodel::BorderStyle* poi::hssf::usermodel::HSSFCellStyle::getBorderBottomEnum()
{
    return ::poi::ss::usermodel::BorderStyle::valueOf(npc(_format)->getBorderBottom());
}

void poi::hssf::usermodel::HSSFCellStyle::setLeftBorderColor(int16_t color)
{
    npc(_format)->setLeftBorderPaletteIdx(color);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getLeftBorderColor()
{
    return npc(_format)->getLeftBorderPaletteIdx();
}

void poi::hssf::usermodel::HSSFCellStyle::setRightBorderColor(int16_t color)
{
    npc(_format)->setRightBorderPaletteIdx(color);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getRightBorderColor()
{
    return npc(_format)->getRightBorderPaletteIdx();
}

void poi::hssf::usermodel::HSSFCellStyle::setTopBorderColor(int16_t color)
{
    npc(_format)->setTopBorderPaletteIdx(color);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getTopBorderColor()
{
    return npc(_format)->getTopBorderPaletteIdx();
}

void poi::hssf::usermodel::HSSFCellStyle::setBottomBorderColor(int16_t color)
{
    npc(_format)->setBottomBorderPaletteIdx(color);
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getBottomBorderColor()
{
    return npc(_format)->getBottomBorderPaletteIdx();
}

void poi::hssf::usermodel::HSSFCellStyle::setFillPattern(::poi::ss::usermodel::FillPatternType* fp)
{
    npc(_format)->setAdtlFillPattern(npc(fp)->getCode());
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getFillPattern()
{
    return npc(getFillPatternEnum())->getCode();
}

poi::ss::usermodel::FillPatternType* poi::hssf::usermodel::HSSFCellStyle::getFillPatternEnum()
{
    return ::poi::ss::usermodel::FillPatternType::forInt(npc(_format)->getAdtlFillPattern());
}

void poi::hssf::usermodel::HSSFCellStyle::checkDefaultBackgroundFills()
{
    auto const autoIdx = npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getIndex();
    if(npc(_format)->getFillForeground() == autoIdx) {
        if(npc(_format)->getFillBackground() != autoIdx + int32_t(1)) {
            setFillBackgroundColor(static_cast< int16_t >((autoIdx + int32_t(1))));
        }
    } else if(npc(_format)->getFillBackground() == autoIdx + int32_t(1)) {
        if(npc(_format)->getFillForeground() != autoIdx) {
            setFillBackgroundColor(autoIdx);
        }
    }
}

void poi::hssf::usermodel::HSSFCellStyle::setFillBackgroundColor(int16_t bg)
{
    npc(_format)->setFillBackground(bg);
    checkDefaultBackgroundFills();
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getFillBackgroundColor()
{
    auto const autoIndex = npc(::poi::hssf::util::HSSFColor_HSSFColorPredefined::AUTOMATIC)->getIndex();
    auto result = npc(_format)->getFillBackground();
    if(result == autoIndex + int32_t(1)) {
        return autoIndex;
    }
    return result;
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFCellStyle::getFillBackgroundColorColor()
{
    auto pallette = new HSSFPalette(npc(_workbook)->getCustomPalette());
    return npc(pallette)->getColor(getFillBackgroundColor());
}

void poi::hssf::usermodel::HSSFCellStyle::setFillForegroundColor(int16_t bg)
{
    npc(_format)->setFillForeground(bg);
    checkDefaultBackgroundFills();
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getFillForegroundColor()
{
    return npc(_format)->getFillForeground();
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFCellStyle::getFillForegroundColorColor()
{
    auto pallette = new HSSFPalette(npc(_workbook)->getCustomPalette());
    return npc(pallette)->getColor(getFillForegroundColor());
}

java::lang::String* poi::hssf::usermodel::HSSFCellStyle::getUserStyleName()
{
    auto sr = npc(_workbook)->getStyleRecord(_index);
    if(sr == nullptr) {
        return nullptr;
    }
    if(npc(sr)->isBuiltin()) {
        return nullptr;
    }
    return npc(sr)->getName();
}

void poi::hssf::usermodel::HSSFCellStyle::setUserStyleName(::java::lang::String* styleName)
{
    auto sr = npc(_workbook)->getStyleRecord(_index);
    if(sr == nullptr) {
        sr = npc(_workbook)->createStyleRecord(_index);
    }
    if(npc(sr)->isBuiltin() && _index <= 20) {
        throw new ::java::lang::IllegalArgumentException(u"Unable to set user specified style names for built in styles!"_j);
    }
    npc(sr)->setName(styleName);
}

void poi::hssf::usermodel::HSSFCellStyle::setShrinkToFit(bool shrinkToFit)
{
    npc(_format)->setShrinkToFit(shrinkToFit);
}

bool poi::hssf::usermodel::HSSFCellStyle::getShrinkToFit()
{
    return npc(_format)->getShrinkToFit();
}

int16_t poi::hssf::usermodel::HSSFCellStyle::getReadingOrder()
{
    return npc(_format)->getReadingOrder();
}

void poi::hssf::usermodel::HSSFCellStyle::setReadingOrder(int16_t order)
{
    npc(_format)->setReadingOrder(order);
}

void poi::hssf::usermodel::HSSFCellStyle::verifyBelongsToWorkbook(HSSFWorkbook* wb)
{
    if(npc(wb)->getWorkbook() != _workbook) {
        throw new ::java::lang::IllegalArgumentException(u"This Style does not belong to the supplied Workbook. Are you trying to assign a style from one workbook to the cell of a differnt workbook?"_j);
    }
}

void poi::hssf::usermodel::HSSFCellStyle::cloneStyleFrom(::poi::ss::usermodel::CellStyle* source)
{
    if(dynamic_cast< HSSFCellStyle* >(source) != nullptr) {
        this->cloneStyleFrom(java_cast< HSSFCellStyle* >(source));
    } else {
        throw new ::java::lang::IllegalArgumentException(u"Can only clone from one HSSFCellStyle to another, not between HSSFCellStyle and XSSFCellStyle"_j);
    }
}

void poi::hssf::usermodel::HSSFCellStyle::cloneStyleFrom(HSSFCellStyle* source)
{
    npc(_format)->cloneStyleFrom(npc(source)->_format);
    if(_workbook != npc(source)->_workbook) {
        npc(lastDateFormat_)->set(::java::lang::Short::valueOf(::java::lang::Short::MIN_VALUE));
        npc(lastFormats_)->set(nullptr);
        npc(getDataFormatStringCache_)->set(nullptr);
        auto fmt = static_cast< int16_t >(npc(_workbook)->createFormat(npc(source)->getDataFormatString()));
        setDataFormat(fmt);
        auto fr = npc(_workbook)->createNewFont();
        npc(fr)->cloneStyleFrom(npc(npc(source)->_workbook)->getFontRecordAt(npc(source)->getFontIndex()));
        auto font = new HSSFFont(static_cast< int16_t >(npc(_workbook)->getFontIndex(fr)), fr);
        setFont(font);
    }
}

int32_t poi::hssf::usermodel::HSSFCellStyle::hashCode()
{
    auto const prime = int32_t(31);
    auto result = int32_t(1);
    result = prime * result + ((_format == nullptr) ? int32_t(0) : npc(_format)->hashCode());
    result = prime * result + _index;
    return result;
}

bool poi::hssf::usermodel::HSSFCellStyle::equals(::java::lang::Object* obj)
{
    if(static_cast< ::java::lang::Object* >(this) == obj) {
        return true;
    }
    if(obj == nullptr) {
        return false;
    }
    if(dynamic_cast< HSSFCellStyle* >(obj) != nullptr) {
        auto const other = java_cast< HSSFCellStyle* >(obj);
        if(_format == nullptr) {
            if(npc(other)->_format != nullptr) {
                return false;
            }
        } else if(!npc(_format)->equals(static_cast< ::java::lang::Object* >(npc(other)->_format))) {
            return false;
        }
        if(_index != npc(other)->_index) {
            return false;
        }
        return true;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFCellStyle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCellStyle", 43);
    return c;
}

void poi::hssf::usermodel::HSSFCellStyle::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        lastDateFormat_ = new HSSFCellStyle_1();
        lastFormats_ = new ::java::lang::ThreadLocal();
        getDataFormatStringCache_ = new ::java::lang::ThreadLocal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::usermodel::HSSFCellStyle::getClass0()
{
    return class_();
}

