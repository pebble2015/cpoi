// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <javax/imageio/spi/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace javax
{
    namespace imageio
    {
typedef ::SubArray< ::javax::imageio::ImageIO_SpiInfo, ::java::lang::EnumArray > ImageIO_SpiInfoArray;
    } // imageio
} // javax

struct default_init_tag;

class javax::imageio::ImageIO_SpiInfo
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static ImageIO_SpiInfoArray* $VALUES_;

public:
    static ImageIO_SpiInfo* FILE_SUFFIXES;
    static ImageIO_SpiInfo* FORMAT_NAMES;
    static ImageIO_SpiInfo* MIME_TYPES;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */

public: /* package */
    virtual ::java::lang::StringArray* info(::javax::imageio::spi::ImageReaderWriterSpi* spi) = 0;

public:
    static ImageIO_SpiInfo* valueOf(::java::lang::String* arg0);
    static ImageIO_SpiInfoArray* values();

    // Generated
    ImageIO_SpiInfo(::java::lang::String* name, int ordinal);
protected:
    ImageIO_SpiInfo(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static ImageIO_SpiInfoArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
