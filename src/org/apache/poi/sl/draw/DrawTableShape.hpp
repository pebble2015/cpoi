// Generated from /POI/java/org/apache/poi/sl/draw/DrawTableShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/usermodel/TableShape.hpp>

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

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::TableCell_BorderEdge, ::java::lang::EnumArray > TableCell_BorderEdgeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::draw::DrawTableShape
    : public DrawShape
{

public:
    typedef DrawShape super;
    static constexpr int32_t borderSize { int32_t(2) };
protected:
    void ctor(::poi::sl::usermodel::TableShape* shape);

public: /* protected */
    virtual Drawable* getGroupShape(::java::awt::Graphics2D* graphics);

public:
    void applyTransform(::java::awt::Graphics2D* graphics) override;
    void draw(::java::awt::Graphics2D* graphics) override;
    void drawContent(::java::awt::Graphics2D* graphics) override;

public: /* protected */
    ::poi::sl::usermodel::TableShape* getShape() override;

public:
    virtual void setAllBorders(::java::lang::ObjectArray*/*...*/ args);
    virtual void setOutsideBorders(::java::lang::ObjectArray*/*...*/ args);
    virtual void setInsideBorders(::java::lang::ObjectArray*/*...*/ args);

private:
    static void setEdges(::poi::sl::usermodel::TableCell* cell, ::poi::sl::usermodel::TableCell_BorderEdgeArray* edges, ::java::lang::ObjectArray*/*...*/ args);

    // Generated

public:
    DrawTableShape(::poi::sl::usermodel::TableShape* shape);
protected:
    DrawTableShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
