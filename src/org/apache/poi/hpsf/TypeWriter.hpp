// Generated from /POI/java/org/apache/poi/hpsf/TypeWriter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
    } // hpsf
} // poi

struct default_init_tag;

class poi::hpsf::TypeWriter
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static int32_t writeToStream(::java::io::OutputStream* out, int16_t n) /* throws(IOException) */;
    static int32_t writeToStream(::java::io::OutputStream* out, int32_t n) /* throws(IOException) */;
    static int32_t writeToStream(::java::io::OutputStream* out, int64_t n) /* throws(IOException) */;
    static void writeUShortToStream(::java::io::OutputStream* out, int32_t n) /* throws(IOException) */;
    static int32_t writeUIntToStream(::java::io::OutputStream* out, int64_t n) /* throws(IOException) */;
    static int32_t writeToStream(::java::io::OutputStream* out, ClassID* n) /* throws(IOException) */;
    static void writeToStream(::java::io::OutputStream* out, PropertyArray* properties, int32_t codepage) /* throws(IOException, UnsupportedVariantTypeException) */;
    static int32_t writeToStream(::java::io::OutputStream* out, double n) /* throws(IOException) */;

    // Generated
    TypeWriter();
protected:
    TypeWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
