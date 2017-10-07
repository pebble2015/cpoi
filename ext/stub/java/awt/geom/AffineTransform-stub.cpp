// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/AffineTransform.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace awt
    {
        namespace geom
        {
typedef ::SubArray< ::java::awt::geom::Point2D, ::java::lang::ObjectArray, ::java::lang::CloneableArray > Point2DArray;
        } // geom
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::geom::AffineTransform::AffineTransform(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::AffineTransform::AffineTransform()
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::AffineTransform::AffineTransform(AffineTransform* Tx)
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor(Tx);
}

java::awt::geom::AffineTransform::AffineTransform(::floatArray* flatmatrix)
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor(flatmatrix);
}

java::awt::geom::AffineTransform::AffineTransform(::doubleArray* flatmatrix)
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor(flatmatrix);
}

java::awt::geom::AffineTransform::AffineTransform(float m00, float m10, float m01, float m11, float m02, float m12)
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor(m00, m10, m01, m11, m02, m12);
}

java::awt::geom::AffineTransform::AffineTransform(double m00, double m10, double m01, double m11, double m02, double m12)
    : AffineTransform(*static_cast< ::default_init_tag* >(0))
{
    ctor(m00, m10, m01, m11, m02, m12);
}

constexpr int32_t java::awt::geom::AffineTransform::APPLY_IDENTITY;
constexpr int32_t java::awt::geom::AffineTransform::APPLY_SCALE;
constexpr int32_t java::awt::geom::AffineTransform::APPLY_SHEAR;
constexpr int32_t java::awt::geom::AffineTransform::APPLY_TRANSLATE;
constexpr int32_t java::awt::geom::AffineTransform::HI_IDENTITY;
constexpr int32_t java::awt::geom::AffineTransform::HI_SCALE;
constexpr int32_t java::awt::geom::AffineTransform::HI_SHEAR;
constexpr int32_t java::awt::geom::AffineTransform::HI_SHIFT;
constexpr int32_t java::awt::geom::AffineTransform::HI_TRANSLATE;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_FLIP;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_GENERAL_ROTATION;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_GENERAL_SCALE;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_GENERAL_TRANSFORM;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_IDENTITY;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_MASK_ROTATION;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_MASK_SCALE;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_QUADRANT_ROTATION;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_TRANSLATION;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_UNIFORM_SCALE;
constexpr int32_t java::awt::geom::AffineTransform::TYPE_UNKNOWN;
int32_tArray*& java::awt::geom::AffineTransform::rot90conversion()
{
    clinit();
    return rot90conversion_;
}
int32_tArray* java::awt::geom::AffineTransform::rot90conversion_;
constexpr int64_t java::awt::geom::AffineTransform::serialVersionUID;

void ::java::awt::geom::AffineTransform::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor()");
}

void ::java::awt::geom::AffineTransform::ctor(AffineTransform* Tx)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor(AffineTransform* Tx)");
}

void ::java::awt::geom::AffineTransform::ctor(::floatArray* flatmatrix)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor(::floatArray* flatmatrix)");
}

void ::java::awt::geom::AffineTransform::ctor(::doubleArray* flatmatrix)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor(::doubleArray* flatmatrix)");
}

void ::java::awt::geom::AffineTransform::ctor(float m00, float m10, float m01, float m11, float m02, float m12)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor(float m00, float m10, float m01, float m11, float m02, float m12)");
}

void ::java::awt::geom::AffineTransform::ctor(double m00, double m10, double m01, double m11, double m02, double m12)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::AffineTransform::ctor(double m00, double m10, double m01, double m11, double m02, double m12)");
}

/* private: void ::java::awt::geom::AffineTransform::ctor(double m00, double m10, double m01, double m11, double m02, double m12, int32_t state) */
/* private: double java::awt::geom::AffineTransform::_matround(double matval) */
/* private: void java::awt::geom::AffineTransform::calculateType() */
java::lang::Object* java::awt::geom::AffineTransform::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::geom::AffineTransform::clone()");
    return 0;
}

void java::awt::geom::AffineTransform::concatenate(AffineTransform* Tx)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::concatenate(AffineTransform* Tx)");
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::createInverse()
{ /* stub */
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::createInverse()");
    return 0;
}

java::awt::Shape* java::awt::geom::AffineTransform::createTransformedShape(::java::awt::Shape* pSrc)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::geom::AffineTransform::createTransformedShape(::java::awt::Shape* pSrc)");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::AffineTransform::deltaTransform(Point2D* ptSrc, Point2D* ptDst)
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::AffineTransform::deltaTransform(Point2D* ptSrc, Point2D* ptDst)");
    return 0;
}

void java::awt::geom::AffineTransform::deltaTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::deltaTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)");
}

bool java::awt::geom::AffineTransform::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::AffineTransform::equals(::java::lang::Object* obj)");
    return 0;
}

double java::awt::geom::AffineTransform::getDeterminant()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getDeterminant()");
    return 0;
}

void java::awt::geom::AffineTransform::getMatrix(::doubleArray* flatmatrix)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::getMatrix(::doubleArray* flatmatrix)");
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getQuadrantRotateInstance(int32_t numquadrants)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getQuadrantRotateInstance(int32_t numquadrants)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getQuadrantRotateInstance(int32_t numquadrants, double anchorx, double anchory)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getQuadrantRotateInstance(int32_t numquadrants, double anchorx, double anchory)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double theta)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double theta)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double vecx, double vecy)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double vecx, double vecy)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double theta, double anchorx, double anchory)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double theta, double anchorx, double anchory)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double vecx, double vecy, double anchorx, double anchory)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getRotateInstance(double vecx, double vecy, double anchorx, double anchory)");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getScaleInstance(double sx, double sy)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getScaleInstance(double sx, double sy)");
    return 0;
}

double java::awt::geom::AffineTransform::getScaleX()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getScaleX()");
    return 0;
}

double java::awt::geom::AffineTransform::getScaleY()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getScaleY()");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getShearInstance(double shx, double shy)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getShearInstance(double shx, double shy)");
    return 0;
}

double java::awt::geom::AffineTransform::getShearX()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getShearX()");
    return 0;
}

double java::awt::geom::AffineTransform::getShearY()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getShearY()");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getTranslateInstance(double tx, double ty)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::geom::AffineTransform::getTranslateInstance(double tx, double ty)");
    return 0;
}

double java::awt::geom::AffineTransform::getTranslateX()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getTranslateX()");
    return 0;
}

double java::awt::geom::AffineTransform::getTranslateY()
{ /* stub */
    unimplemented_(u"double java::awt::geom::AffineTransform::getTranslateY()");
    return 0;
}

int32_t java::awt::geom::AffineTransform::getType()
{ /* stub */
return type ; /* getter */
}

int32_t java::awt::geom::AffineTransform::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::AffineTransform::hashCode()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::AffineTransform::inverseTransform(Point2D* ptSrc, Point2D* ptDst)
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::AffineTransform::inverseTransform(Point2D* ptSrc, Point2D* ptDst)");
    return 0;
}

void java::awt::geom::AffineTransform::inverseTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::inverseTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::invert()
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::invert()");
}

bool java::awt::geom::AffineTransform::isIdentity()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::AffineTransform::isIdentity()");
    return 0;
}

void java::awt::geom::AffineTransform::preConcatenate(AffineTransform* Tx)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::preConcatenate(AffineTransform* Tx)");
}

void java::awt::geom::AffineTransform::quadrantRotate(int32_t numquadrants)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::quadrantRotate(int32_t numquadrants)");
}

void java::awt::geom::AffineTransform::quadrantRotate(int32_t numquadrants, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::quadrantRotate(int32_t numquadrants, double anchorx, double anchory)");
}

/* private: void java::awt::geom::AffineTransform::readObject(::java::io::ObjectInputStream* s) */
void java::awt::geom::AffineTransform::rotate(double theta)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::rotate(double theta)");
}

void java::awt::geom::AffineTransform::rotate(double vecx, double vecy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::rotate(double vecx, double vecy)");
}

void java::awt::geom::AffineTransform::rotate(double theta, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::rotate(double theta, double anchorx, double anchory)");
}

void java::awt::geom::AffineTransform::rotate(double vecx, double vecy, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::rotate(double vecx, double vecy, double anchorx, double anchory)");
}

/* private: void java::awt::geom::AffineTransform::rotate180() */
/* private: void java::awt::geom::AffineTransform::rotate270() */
/* private: void java::awt::geom::AffineTransform::rotate90() */
void java::awt::geom::AffineTransform::scale(double sx, double sy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::scale(double sx, double sy)");
}

void java::awt::geom::AffineTransform::setToIdentity()
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToIdentity()");
}

void java::awt::geom::AffineTransform::setToQuadrantRotation(int32_t numquadrants)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToQuadrantRotation(int32_t numquadrants)");
}

void java::awt::geom::AffineTransform::setToQuadrantRotation(int32_t numquadrants, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToQuadrantRotation(int32_t numquadrants, double anchorx, double anchory)");
}

void java::awt::geom::AffineTransform::setToRotation(double theta)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToRotation(double theta)");
}

void java::awt::geom::AffineTransform::setToRotation(double vecx, double vecy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToRotation(double vecx, double vecy)");
}

void java::awt::geom::AffineTransform::setToRotation(double theta, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToRotation(double theta, double anchorx, double anchory)");
}

void java::awt::geom::AffineTransform::setToRotation(double vecx, double vecy, double anchorx, double anchory)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToRotation(double vecx, double vecy, double anchorx, double anchory)");
}

void java::awt::geom::AffineTransform::setToScale(double sx, double sy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToScale(double sx, double sy)");
}

void java::awt::geom::AffineTransform::setToShear(double shx, double shy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToShear(double shx, double shy)");
}

void java::awt::geom::AffineTransform::setToTranslation(double tx, double ty)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setToTranslation(double tx, double ty)");
}

void java::awt::geom::AffineTransform::setTransform(AffineTransform* Tx)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setTransform(AffineTransform* Tx)");
}

void java::awt::geom::AffineTransform::setTransform(double m00, double m10, double m01, double m11, double m02, double m12)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::setTransform(double m00, double m10, double m01, double m11, double m02, double m12)");
}

void java::awt::geom::AffineTransform::shear(double shx, double shy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::shear(double shx, double shy)");
}

/* private: void java::awt::geom::AffineTransform::stateError() */
java::lang::String* java::awt::geom::AffineTransform::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::geom::AffineTransform::toString()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::AffineTransform::transform(Point2D* ptSrc, Point2D* ptDst)
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::AffineTransform::transform(Point2D* ptSrc, Point2D* ptDst)");
    return 0;
}

void java::awt::geom::AffineTransform::transform(Point2DArray* ptSrc, int32_t srcOff, Point2DArray* ptDst, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::transform(Point2DArray* ptSrc, int32_t srcOff, Point2DArray* ptDst, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::transform(::floatArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::transform(::floatArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::transform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::transform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::transform(::floatArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::transform(::floatArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::transform(::doubleArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::transform(::doubleArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts)");
}

void java::awt::geom::AffineTransform::translate(double tx, double ty)
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::translate(double tx, double ty)");
}

void java::awt::geom::AffineTransform::updateState()
{ /* stub */
    unimplemented_(u"void java::awt::geom::AffineTransform::updateState()");
}

/* private: void java::awt::geom::AffineTransform::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::AffineTransform::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.AffineTransform", 29);
    return c;
}

java::lang::Class* java::awt::geom::AffineTransform::getClass0()
{
    return class_();
}

