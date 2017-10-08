// Generated from /POI/java/org/apache/poi/ss/util/SheetUtil.java
#include <org/apache/poi/ss/util/SheetUtil.hpp>

#include <java/awt/Rectangle.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/font/FontRenderContext.hpp>
#include <java/awt/font/TextAttribute.hpp>
#include <java/awt/font/TextLayout.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/AttributedString.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/SheetUtil_1.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

poi::ss::util::SheetUtil::SheetUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::SheetUtil::SheetUtil()
    : SheetUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr char16_t poi::ss::util::SheetUtil::defaultChar;

constexpr double poi::ss::util::SheetUtil::fontHeightMultiple;

poi::ss::usermodel::FormulaEvaluator*& poi::ss::util::SheetUtil::dummyEvaluator()
{
    clinit();
    return dummyEvaluator_;
}
poi::ss::usermodel::FormulaEvaluator* poi::ss::util::SheetUtil::dummyEvaluator_;

java::awt::font::FontRenderContext*& poi::ss::util::SheetUtil::fontRenderContext()
{
    clinit();
    return fontRenderContext_;
}
java::awt::font::FontRenderContext* poi::ss::util::SheetUtil::fontRenderContext_;

double poi::ss::util::SheetUtil::getCellWidth(::poi::ss::usermodel::Cell* cell, int32_t defaultCharWidth, ::poi::ss::usermodel::DataFormatter* formatter, bool useMergedCells)
{
    clinit();
    auto sheet = npc(cell)->getSheet();
    auto wb = npc(sheet)->getWorkbook();
    auto row = npc(cell)->getRow();
    auto column = npc(cell)->getColumnIndex();
    auto colspan = int32_t(1);
    for (auto _i = npc(npc(sheet)->getMergedRegions())->iterator(); _i->hasNext(); ) {
        CellRangeAddress* region = java_cast< CellRangeAddress* >(_i->next());
        {
            if(npc(region)->isInRange(npc(row)->getRowNum(), column)) {
                if(!useMergedCells) {
                    return -int32_t(1);
                }
                cell = npc(row)->getCell(npc(region)->getFirstColumn());
                colspan = int32_t(1) + npc(region)->getLastColumn() - npc(region)->getFirstColumn();
            }
        }
    }
    auto style = npc(cell)->getCellStyle();
    auto cellType = npc(cell)->getCellTypeEnum();
    if(cellType == ::poi::ss::usermodel::CellType::FORMULA)
        cellType = npc(cell)->getCachedFormulaResultTypeEnum();

    auto font = npc(wb)->getFontAt(npc(style)->getFontIndex());
    double width = -int32_t(1);
    if(cellType == ::poi::ss::usermodel::CellType::STRING) {
        auto rt = npc(cell)->getRichStringCellValue();
        auto lines = npc(npc(rt)->getString())->split(u"\\n"_j);
        for(auto line : *npc(lines)) {
            auto txt = ::java::lang::StringBuilder().append(line)->append(defaultChar)->toString();
            auto str = new ::java::text::AttributedString(txt);
            copyAttributes(font, str, 0, npc(txt)->length());
            width = getCellWidth(defaultCharWidth, colspan, style, width, str);
        }
    } else {
        ::java::lang::String* sval = nullptr;
        if(cellType == ::poi::ss::usermodel::CellType::NUMERIC) {
            try {
                sval = npc(formatter)->formatCellValue(cell, dummyEvaluator_);
            } catch (::java::lang::Exception* e) {
                sval = ::java::lang::String::valueOf(npc(cell)->getNumericCellValue());
            }
        } else if(cellType == ::poi::ss::usermodel::CellType::BOOLEAN) {
            sval = npc(::java::lang::String::valueOf(npc(cell)->getBooleanCellValue()))->toUpperCase(::java::util::Locale::ROOT());
        }
        if(sval != nullptr) {
            auto txt = ::java::lang::StringBuilder().append(sval)->append(defaultChar)->toString();
            auto str = new ::java::text::AttributedString(txt);
            copyAttributes(font, str, 0, npc(txt)->length());
            width = getCellWidth(defaultCharWidth, colspan, style, width, str);
        }
    }
    return width;
}

double poi::ss::util::SheetUtil::getCellWidth(int32_t defaultCharWidth, int32_t colspan, ::poi::ss::usermodel::CellStyle* style, double minWidth, ::java::text::AttributedString* str)
{
    clinit();
    auto layout = new ::java::awt::font::TextLayout(npc(str)->getIterator(), fontRenderContext_);
    ::java::awt::geom::Rectangle2D* bounds;
    if(npc(style)->getRotation() != 0) {
        auto trans = new ::java::awt::geom::AffineTransform();
        npc(trans)->concatenate(::java::awt::geom::AffineTransform::getRotateInstance(npc(style)->getRotation() * 2.0 * ::java::lang::Math::PI / 360.0));
        npc(trans)->concatenate(::java::awt::geom::AffineTransform::getScaleInstance(1, fontHeightMultiple));
        bounds = npc(npc(layout)->getOutline(trans))->getBounds();
    } else {
        bounds = npc(layout)->getBounds();
    }
    auto const frameWidth = npc(bounds)->getX() + npc(bounds)->getWidth();
    return ::java::lang::Math::max(minWidth, ((frameWidth / colspan) / defaultCharWidth) + npc(style)->getIndention());
}

double poi::ss::util::SheetUtil::getColumnWidth(::poi::ss::usermodel::Sheet* sheet, int32_t column, bool useMergedCells)
{
    clinit();
    return getColumnWidth(sheet, column, useMergedCells, npc(sheet)->getFirstRowNum(), npc(sheet)->getLastRowNum());
}

double poi::ss::util::SheetUtil::getColumnWidth(::poi::ss::usermodel::Sheet* sheet, int32_t column, bool useMergedCells, int32_t firstRow, int32_t lastRow)
{
    clinit();
    auto formatter = new ::poi::ss::usermodel::DataFormatter();
    auto defaultCharWidth = getDefaultCharWidth(npc(sheet)->getWorkbook());
    double width = -int32_t(1);
    for (auto rowIdx = firstRow; rowIdx <= lastRow; ++rowIdx) {
        auto row = npc(sheet)->getRow(rowIdx);
        if(row != nullptr) {
            auto cellWidth = getColumnWidthForRow(row, column, defaultCharWidth, formatter, useMergedCells);
            width = ::java::lang::Math::max(width, cellWidth);
        }
    }
    return width;
}

int32_t poi::ss::util::SheetUtil::getDefaultCharWidth(::poi::ss::usermodel::Workbook* wb)
{
    clinit();
    auto defaultFont = npc(wb)->getFontAt(static_cast< int16_t >(int32_t(0)));
    auto str = new ::java::text::AttributedString(::java::lang::String::valueOf(defaultChar));
    copyAttributes(defaultFont, str, 0, 1);
    auto layout = new ::java::awt::font::TextLayout(npc(str)->getIterator(), fontRenderContext_);
    return static_cast< int32_t >(npc(layout)->getAdvance());
}

double poi::ss::util::SheetUtil::getColumnWidthForRow(::poi::ss::usermodel::Row* row, int32_t column, int32_t defaultCharWidth, ::poi::ss::usermodel::DataFormatter* formatter, bool useMergedCells)
{
    clinit();
    if(row == nullptr) {
        return -int32_t(1);
    }
    auto cell = npc(row)->getCell(column);
    if(cell == nullptr) {
        return -int32_t(1);
    }
    return getCellWidth(cell, defaultCharWidth, formatter, useMergedCells);
}

bool poi::ss::util::SheetUtil::canComputeColumnWidth(::poi::ss::usermodel::Font* font)
{
    clinit();
    auto str = new ::java::text::AttributedString(u"1w"_j);
    copyAttributes(font, str, 0, npc(u"1w"_j)->length());
    auto layout = new ::java::awt::font::TextLayout(npc(str)->getIterator(), fontRenderContext_);
    if(npc(npc(layout)->getBounds())->getWidth() > 0) {
        return true;
    }
    return false;
}

void poi::ss::util::SheetUtil::copyAttributes(::poi::ss::usermodel::Font* font, ::java::text::AttributedString* str, int32_t startIdx, int32_t endIdx)
{
    clinit();
    npc(str)->addAttribute(::java::awt::font::TextAttribute::FAMILY(), npc(font)->getFontName(), startIdx, endIdx);
    npc(str)->addAttribute(::java::awt::font::TextAttribute::SIZE(), ::java::lang::Float::valueOf(static_cast< float >(npc(font)->getFontHeightInPoints())));
    if(npc(font)->getBold())
        npc(str)->addAttribute(::java::awt::font::TextAttribute::WEIGHT(), ::java::awt::font::TextAttribute::WEIGHT_BOLD(), startIdx, endIdx);

    if(npc(font)->getItalic())
        npc(str)->addAttribute(::java::awt::font::TextAttribute::POSTURE(), ::java::awt::font::TextAttribute::POSTURE_OBLIQUE(), startIdx, endIdx);

    if(npc(font)->getUnderline() == ::poi::ss::usermodel::Font::U_SINGLE)
        npc(str)->addAttribute(::java::awt::font::TextAttribute::UNDERLINE(), ::java::awt::font::TextAttribute::UNDERLINE_ON(), startIdx, endIdx);

}

bool poi::ss::util::SheetUtil::containsCell(CellRangeAddress* cr, int32_t rowIx, int32_t colIx)
{
    clinit();
    return npc(cr)->isInRange(rowIx, colIx);
}

poi::ss::usermodel::Cell* poi::ss::util::SheetUtil::getCell(::poi::ss::usermodel::Sheet* sheet, int32_t rowIx, int32_t colIx)
{
    clinit();
    auto r = npc(sheet)->getRow(rowIx);
    if(r != nullptr) {
        return npc(r)->getCell(colIx);
    }
    return nullptr;
}

poi::ss::usermodel::Cell* poi::ss::util::SheetUtil::getCellWithMerges(::poi::ss::usermodel::Sheet* sheet, int32_t rowIx, int32_t colIx)
{
    clinit();
    auto const c = getCell(sheet, rowIx, colIx);
    if(c != nullptr)
        return c;

    for (auto _i = npc(npc(sheet)->getMergedRegions())->iterator(); _i->hasNext(); ) {
        CellRangeAddress* mergedRegion = java_cast< CellRangeAddress* >(_i->next());
        {
            if(npc(mergedRegion)->isInRange(rowIx, colIx)) {
                auto r = npc(sheet)->getRow(npc(mergedRegion)->getFirstRow());
                if(r != nullptr) {
                    return npc(r)->getCell(npc(mergedRegion)->getFirstColumn());
                }
            }
        }
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::SheetUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.SheetUtil", 32);
    return c;
}

void poi::ss::util::SheetUtil::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        dummyEvaluator_ = new SheetUtil_1();
        fontRenderContext_ = new ::java::awt::font::FontRenderContext(static_cast< ::java::awt::geom::AffineTransform* >(nullptr), true, true);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::SheetUtil::getClass0()
{
    return class_();
}

