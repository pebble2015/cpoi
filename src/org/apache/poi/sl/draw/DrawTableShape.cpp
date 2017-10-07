// Generated from /POI/java/org/apache/poi/sl/draw/DrawTableShape.java
#include <org/apache/poi/sl/draw/DrawTableShape.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/geom/Line2D_Double.hpp>
#include <java/awt/geom/Line2D.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawGroupShape.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/draw/DrawTextShape.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/FillStyle.hpp>
#include <org/apache/poi/sl/usermodel/GroupShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineCompound.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineDash.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle.hpp>
#include <org/apache/poi/sl/usermodel/TableCell_BorderEdge.hpp>
#include <org/apache/poi/sl/usermodel/TableCell.hpp>
#include <org/apache/poi/sl/usermodel/TableShape.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge, ::java::lang::EnumArray > TableCell_BorderEdgeArray;
                } // usermodel
            } // sl
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

org::apache::poi::sl::draw::DrawTableShape::DrawTableShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawTableShape::DrawTableShape(::org::apache::poi::sl::usermodel::TableShape* shape) 
    : DrawTableShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

constexpr int32_t org::apache::poi::sl::draw::DrawTableShape::borderSize;

void org::apache::poi::sl::draw::DrawTableShape::ctor(::org::apache::poi::sl::usermodel::TableShape* shape)
{
    super::ctor(shape);
}

org::apache::poi::sl::draw::Drawable* org::apache::poi::sl::draw::DrawTableShape::getGroupShape(::java::awt::Graphics2D* graphics)
{
    if(dynamic_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(shape) != nullptr) {
        auto df = DrawFactory::getInstance(graphics);
        return npc(df)->getDrawable(static_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(java_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(shape)));
    }
    return nullptr;
}

void org::apache::poi::sl::draw::DrawTableShape::applyTransform(::java::awt::Graphics2D* graphics)
{
    auto d = getGroupShape(graphics);
    if(d != nullptr) {
        npc(d)->applyTransform(graphics);
    } else {
        super::applyTransform(graphics);
    }
}

void org::apache::poi::sl::draw::DrawTableShape::draw(::java::awt::Graphics2D* graphics)
{
    auto d = getGroupShape(graphics);
    if(d != nullptr) {
        npc(d)->draw(graphics);
        return;
    }
    auto ts = getShape();
    auto drawPaint = npc(DrawFactory::getInstance(graphics))->getPaint(ts);
    auto const rows = npc(ts)->getNumberOfRows();
    auto const cols = npc(ts)->getNumberOfColumns();
    for (auto row = int32_t(0); row < rows; row++) {
        for (auto col = int32_t(0); col < cols; col++) {
            auto tc = npc(ts)->getCell(row, col);
            if(tc == nullptr || npc(tc)->isMerged()) {
                continue;
            }
            auto fillPaint = npc(drawPaint)->getPaint(graphics, npc(npc(tc)->getFillStyle())->getPaint());
            npc(graphics)->setPaint(fillPaint);
            auto cellAnc = npc(tc)->getAnchor();
            npc(graphics)->fill(cellAnc);
            for(auto edge : *npc(::org::apache::poi::sl::usermodel::TableCell_BorderEdge::values())) {
                auto stroke = npc(tc)->getBorderStyle(edge);
                if(stroke == nullptr) {
                    continue;
                }
                npc(graphics)->setStroke(getStroke(stroke));
                auto linePaint = npc(drawPaint)->getPaint(graphics, npc(stroke)->getPaint());
                npc(graphics)->setPaint(linePaint);
                double x = npc(cellAnc)->getX(), y = npc(cellAnc)->getY(), w = npc(cellAnc)->getWidth(), h = npc(cellAnc)->getHeight();
                ::java::awt::geom::Line2D* line;
                {
                    auto v = edge;
                    if((v == ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::bottom)) {
                        line = new ::java::awt::geom::Line2D_Double(x - borderSize, y + h, x + w + borderSize, y + h);
                        goto end_switch0;;
                    }
                    if((v == ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::left)) {
                        line = new ::java::awt::geom::Line2D_Double(x, y, x, y + h + borderSize);
                        goto end_switch0;;
                    }
                    if((v == ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::right)) {
                        line = new ::java::awt::geom::Line2D_Double(x + w, y, x + w, y + h + borderSize);
                        goto end_switch0;;
                    }
                    if((v == ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::top)) {
                        line = new ::java::awt::geom::Line2D_Double(x - borderSize, y, x + w + borderSize, y);
                        goto end_switch0;;
                    }
end_switch0:;
                }

                npc(graphics)->draw(line);
            }
        }
    }
    drawContent(graphics);
}

void org::apache::poi::sl::draw::DrawTableShape::drawContent(::java::awt::Graphics2D* graphics)
{
    auto d = getGroupShape(graphics);
    if(d != nullptr) {
        npc(d)->drawContent(graphics);
        return;
    }
    auto ts = getShape();
    auto df = DrawFactory::getInstance(graphics);
    auto const rows = npc(ts)->getNumberOfRows();
    auto const cols = npc(ts)->getNumberOfColumns();
    for (auto row = int32_t(0); row < rows; row++) {
        for (auto col = int32_t(0); col < cols; col++) {
            auto tc = npc(ts)->getCell(row, col);
            if(tc != nullptr) {
                auto dts = npc(df)->getDrawable(static_cast< ::org::apache::poi::sl::usermodel::TextShape* >(tc));
                npc(dts)->drawContent(graphics);
            }
        }
    }
}

org::apache::poi::sl::usermodel::TableShape* org::apache::poi::sl::draw::DrawTableShape::getShape()
{
    return java_cast< ::org::apache::poi::sl::usermodel::TableShape* >(shape);
}

void org::apache::poi::sl::draw::DrawTableShape::setAllBorders(::java::lang::ObjectArray*/*...*/ args)
{
    auto table = getShape();
    auto const rows = npc(table)->getNumberOfRows();
    auto const cols = npc(table)->getNumberOfColumns();
    auto edges = (new ::org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray({
        ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::top
        , ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::left
        , static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr)
        , static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr)
    }));
    for (auto row = int32_t(0); row < rows; row++) {
        for (auto col = int32_t(0); col < cols; col++) {
            edges->set(int32_t(2), (col == cols - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::right : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            edges->set(int32_t(3), (row == rows - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::bottom : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            setEdges(npc(table)->getCell(row, col), edges, args);
        }
    }
}

void org::apache::poi::sl::draw::DrawTableShape::setOutsideBorders(::java::lang::ObjectArray*/*...*/ args)
{
    if(npc(args)->length == 0)
        return;

    auto table = getShape();
    auto const rows = npc(table)->getNumberOfRows();
    auto const cols = npc(table)->getNumberOfColumns();
    auto edges = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray(int32_t(4));
    for (auto row = int32_t(0); row < rows; row++) {
        for (auto col = int32_t(0); col < cols; col++) {
            edges->set(int32_t(0), (col == 0) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::left : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            edges->set(int32_t(1), (col == cols - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::right : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            edges->set(int32_t(2), (row == 0) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::top : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            edges->set(int32_t(3), (row == rows - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::bottom : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            setEdges(npc(table)->getCell(row, col), edges, args);
        }
    }
}

void org::apache::poi::sl::draw::DrawTableShape::setInsideBorders(::java::lang::ObjectArray*/*...*/ args)
{
    if(npc(args)->length == 0)
        return;

    auto table = getShape();
    auto const rows = npc(table)->getNumberOfRows();
    auto const cols = npc(table)->getNumberOfColumns();
    auto edges = new ::org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray(int32_t(2));
    for (auto row = int32_t(0); row < rows; row++) {
        for (auto col = int32_t(0); col < cols; col++) {
            edges->set(int32_t(0), (col > 0 && col < cols - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::right : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            edges->set(int32_t(1), (row > 0 && row < rows - int32_t(1)) ? ::org::apache::poi::sl::usermodel::TableCell_BorderEdge::bottom : static_cast< ::org::apache::poi::sl::usermodel::TableCell_BorderEdge* >(nullptr));
            setEdges(npc(table)->getCell(row, col), edges, args);
        }
    }
}

void org::apache::poi::sl::draw::DrawTableShape::setEdges(::org::apache::poi::sl::usermodel::TableCell* cell, ::org::apache::poi::sl::usermodel::TableCell_BorderEdgeArray* edges, ::java::lang::ObjectArray*/*...*/ args)
{
    clinit();
    if(cell == nullptr) {
        return;
    }
    for(auto be : *npc(edges)) {
        if(be != nullptr) {
            if(npc(args)->length == 0) {
                npc(cell)->removeBorder(be);
            } else {
                for(auto o : *npc(args)) {
                    if(dynamic_cast< ::java::lang::Double* >(o) != nullptr) {
                        npc(cell)->setBorderWidth(be, (npc(java_cast< ::java::lang::Double* >(o)))->doubleValue());
                    } else if(dynamic_cast< ::java::awt::Color* >(o) != nullptr) {
                        npc(cell)->setBorderColor(be, java_cast< ::java::awt::Color* >(o));
                    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::StrokeStyle_LineDash* >(o) != nullptr) {
                        npc(cell)->setBorderDash(be, java_cast< ::org::apache::poi::sl::usermodel::StrokeStyle_LineDash* >(o));
                    } else if(dynamic_cast< ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* >(o) != nullptr) {
                        npc(cell)->setBorderCompound(be, java_cast< ::org::apache::poi::sl::usermodel::StrokeStyle_LineCompound* >(o));
                    }
                }
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawTableShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTableShape", 37);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawTableShape::getClass0()
{
    return class_();
}

