// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Font, ::java::lang::ObjectArray, ::java::io::SerializableArray > FontArray;
typedef ::SubArray< ::java::awt::GraphicsDevice, ::java::lang::ObjectArray > GraphicsDeviceArray;
    } // awt

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::awt::GraphicsEnvironment
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::Boolean* defaultHeadless_;
    static ::java::lang::Boolean* headless_;
    static GraphicsEnvironment* localEnv_;

protected:
    void ctor();

public: /* package */
    static void checkHeadless();
    /*static GraphicsEnvironment* createGE(); (private) */

public:
    virtual Graphics2D* createGraphics(::java::awt::image::BufferedImage* img) = 0;
    virtual FontArray* getAllFonts() = 0;
    virtual ::java::lang::StringArray* getAvailableFontFamilyNames() = 0;
    virtual ::java::lang::StringArray* getAvailableFontFamilyNames(::java::util::Locale* l) = 0;
    virtual Point* getCenterPoint();
    virtual GraphicsDevice* getDefaultScreenDevice() = 0;

public: /* package */
    static ::java::lang::String* getHeadlessMessage();
    /*static bool getHeadlessProperty(); (private) */

public:
    static GraphicsEnvironment* getLocalGraphicsEnvironment();
    virtual Rectangle* getMaximumWindowBounds();
    virtual GraphicsDeviceArray* getScreenDevices() = 0;
    static bool isHeadless();
    virtual bool isHeadlessInstance();
    virtual void preferLocaleFonts();
    virtual void preferProportionalFonts();
    virtual bool registerFont(Font* font);

    // Generated

public: /* protected */
    GraphicsEnvironment();
protected:
    GraphicsEnvironment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::Boolean*& defaultHeadless();
    static ::java::lang::Boolean*& headless();
    static GraphicsEnvironment*& localEnv();
    virtual ::java::lang::Class* getClass0();
};
