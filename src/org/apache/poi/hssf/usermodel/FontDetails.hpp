// Generated from /POI/java/org/apache/poi/hssf/usermodel/FontDetails.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::hssf::usermodel::FontDetails
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _fontName {  };
    int32_t _height {  };
    ::java::util::Map* charWidths {  };
protected:
    void ctor(::java::lang::String* fontName, int32_t height);

public:
    virtual ::java::lang::String* getFontName();
    virtual int32_t getHeight();
    virtual void addChar(char16_t c, int32_t width);
    virtual int32_t getCharWidth(char16_t c);
    virtual void addChars(::char16_tArray* characters, ::int32_tArray* widths);

public: /* protected */
    static ::java::lang::String* buildFontHeightProperty(::java::lang::String* fontName);
    static ::java::lang::String* buildFontWidthsProperty(::java::lang::String* fontName);
    static ::java::lang::String* buildFontCharactersProperty(::java::lang::String* fontName);

public:
    static FontDetails* create(::java::lang::String* fontName, ::java::util::Properties* fontMetricsProps);
    virtual int32_t getStringWidth(::java::lang::String* str);

private:
    static ::java::lang::StringArray* split(::java::lang::String* text, ::java::lang::String* separator, int32_t max);

    // Generated

public:
    FontDetails(::java::lang::String* fontName, int32_t height);
protected:
    FontDetails(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
