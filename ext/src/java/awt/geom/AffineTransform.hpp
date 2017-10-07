// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class java::awt::geom::AffineTransform
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int32_t APPLY_IDENTITY { int32_t(0) };
    static constexpr int32_t APPLY_SCALE { int32_t(2) };
    static constexpr int32_t APPLY_SHEAR { int32_t(4) };
    static constexpr int32_t APPLY_TRANSLATE { int32_t(1) };

private:
    static constexpr int32_t HI_IDENTITY { int32_t(0) };
    static constexpr int32_t HI_SCALE { int32_t(16) };
    static constexpr int32_t HI_SHEAR { int32_t(32) };
    static constexpr int32_t HI_SHIFT { int32_t(3) };
    static constexpr int32_t HI_TRANSLATE { int32_t(8) };

public:
    static constexpr int32_t TYPE_FLIP { int32_t(64) };
    static constexpr int32_t TYPE_GENERAL_ROTATION { int32_t(16) };
    static constexpr int32_t TYPE_GENERAL_SCALE { int32_t(4) };
    static constexpr int32_t TYPE_GENERAL_TRANSFORM { int32_t(32) };
    static constexpr int32_t TYPE_IDENTITY { int32_t(0) };
    static constexpr int32_t TYPE_MASK_ROTATION { int32_t(24) };
    static constexpr int32_t TYPE_MASK_SCALE { int32_t(6) };
    static constexpr int32_t TYPE_QUADRANT_ROTATION { int32_t(8) };
    static constexpr int32_t TYPE_TRANSLATION { int32_t(1) };
    static constexpr int32_t TYPE_UNIFORM_SCALE { int32_t(2) };

private:
    static constexpr int32_t TYPE_UNKNOWN { int32_t(-1) };

public: /* package */
    double m00 {  };
    double m01 {  };
    double m02 {  };
    double m10 {  };
    double m11 {  };
    double m12 {  };

private:
    static ::int32_tArray* rot90conversion_;
    static constexpr int64_t serialVersionUID { int64_t(1330973210523860834LL) };

public: /* package */
    int32_t state {  };

private:
    int32_t type {  };

protected:
    void ctor();
    void ctor(AffineTransform* Tx);
    void ctor(::floatArray* flatmatrix);
    void ctor(::doubleArray* flatmatrix);
    void ctor(float m00, float m10, float m01, float m11, float m02, float m12);
    void ctor(double m00, double m10, double m01, double m11, double m02, double m12);
    /*void ctor(double m00, double m10, double m01, double m11, double m02, double m12, int32_t state); (private) */
    /*static double _matround(double matval); (private) */
    /*void calculateType(); (private) */

public:
    ::java::lang::Object* clone() override;
    virtual void concatenate(AffineTransform* Tx);
    virtual AffineTransform* createInverse();
    virtual ::java::awt::Shape* createTransformedShape(::java::awt::Shape* pSrc);
    virtual Point2D* deltaTransform(Point2D* ptSrc, Point2D* ptDst);
    virtual void deltaTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts);
    bool equals(::java::lang::Object* obj) override;
    virtual double getDeterminant();
    virtual void getMatrix(::doubleArray* flatmatrix);
    static AffineTransform* getQuadrantRotateInstance(int32_t numquadrants);
    static AffineTransform* getQuadrantRotateInstance(int32_t numquadrants, double anchorx, double anchory);
    static AffineTransform* getRotateInstance(double theta);
    static AffineTransform* getRotateInstance(double vecx, double vecy);
    static AffineTransform* getRotateInstance(double theta, double anchorx, double anchory);
    static AffineTransform* getRotateInstance(double vecx, double vecy, double anchorx, double anchory);
    static AffineTransform* getScaleInstance(double sx, double sy);
    virtual double getScaleX();
    virtual double getScaleY();
    static AffineTransform* getShearInstance(double shx, double shy);
    virtual double getShearX();
    virtual double getShearY();
    static AffineTransform* getTranslateInstance(double tx, double ty);
    virtual double getTranslateX();
    virtual double getTranslateY();
    virtual int32_t getType();
    int32_t hashCode() override;
    virtual Point2D* inverseTransform(Point2D* ptSrc, Point2D* ptDst);
    virtual void inverseTransform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts);
    virtual void invert();
    virtual bool isIdentity();
    virtual void preConcatenate(AffineTransform* Tx);
    virtual void quadrantRotate(int32_t numquadrants);
    virtual void quadrantRotate(int32_t numquadrants, double anchorx, double anchory);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual void rotate(double theta);
    virtual void rotate(double vecx, double vecy);
    virtual void rotate(double theta, double anchorx, double anchory);
    virtual void rotate(double vecx, double vecy, double anchorx, double anchory);
    /*void rotate180(); (private) */
    /*void rotate270(); (private) */
    /*void rotate90(); (private) */
    virtual void scale(double sx, double sy);
    virtual void setToIdentity();
    virtual void setToQuadrantRotation(int32_t numquadrants);
    virtual void setToQuadrantRotation(int32_t numquadrants, double anchorx, double anchory);
    virtual void setToRotation(double theta);
    virtual void setToRotation(double vecx, double vecy);
    virtual void setToRotation(double theta, double anchorx, double anchory);
    virtual void setToRotation(double vecx, double vecy, double anchorx, double anchory);
    virtual void setToScale(double sx, double sy);
    virtual void setToShear(double shx, double shy);
    virtual void setToTranslation(double tx, double ty);
    virtual void setTransform(AffineTransform* Tx);
    virtual void setTransform(double m00, double m10, double m01, double m11, double m02, double m12);
    virtual void shear(double shx, double shy);
    /*void stateError(); (private) */
    ::java::lang::String* toString() override;
    virtual Point2D* transform(Point2D* ptSrc, Point2D* ptDst);
    virtual void transform(Point2DArray* ptSrc, int32_t srcOff, Point2DArray* ptDst, int32_t dstOff, int32_t numPts);
    virtual void transform(::floatArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts);
    virtual void transform(::doubleArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts);
    virtual void transform(::floatArray* srcPts, int32_t srcOff, ::doubleArray* dstPts, int32_t dstOff, int32_t numPts);
    virtual void transform(::doubleArray* srcPts, int32_t srcOff, ::floatArray* dstPts, int32_t dstOff, int32_t numPts);
    virtual void translate(double tx, double ty);

public: /* package */
    virtual void updateState();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public:
    AffineTransform();
    AffineTransform(AffineTransform* Tx);
    AffineTransform(::floatArray* flatmatrix);
    AffineTransform(::doubleArray* flatmatrix);
    AffineTransform(float m00, float m10, float m01, float m11, float m02, float m12);
    AffineTransform(double m00, double m10, double m01, double m11, double m02, double m12);
protected:
    AffineTransform(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::int32_tArray*& rot90conversion();
    virtual ::java::lang::Class* getClass0();
};
