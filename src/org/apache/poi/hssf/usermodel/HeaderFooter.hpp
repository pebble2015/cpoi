// Generated from /POI/java/org/apache/poi/hssf/usermodel/HeaderFooter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/HeaderFooter.hpp>

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

class org::apache::poi::hssf::usermodel::HeaderFooter
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::HeaderFooter
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public: /* protected */
    virtual ::java::lang::String* getRawText() = 0;

private:
    ::java::lang::StringArray* splitParts();

public:
    ::java::lang::String* getLeft() override;
    void setLeft(::java::lang::String* newLeft) override;
    ::java::lang::String* getCenter() override;
    void setCenter(::java::lang::String* newCenter) override;
    ::java::lang::String* getRight() override;
    void setRight(::java::lang::String* newRight) override;

private:
    void updatePart(int32_t partIndex, ::java::lang::String* newValue);
    void updateHeaderFooterText(::java::lang::StringArray* parts);

public: /* protected */
    virtual void setHeaderFooterText(::java::lang::String* text) = 0;

public:
    static ::java::lang::String* fontSize(int16_t size);
    static ::java::lang::String* font(::java::lang::String* font, ::java::lang::String* style);
    static ::java::lang::String* page();
    static ::java::lang::String* numPages();
    static ::java::lang::String* date();
    static ::java::lang::String* time();
    static ::java::lang::String* file();
    static ::java::lang::String* tab();
    static ::java::lang::String* startBold();
    static ::java::lang::String* endBold();
    static ::java::lang::String* startUnderline();
    static ::java::lang::String* endUnderline();
    static ::java::lang::String* startDoubleUnderline();
    static ::java::lang::String* endDoubleUnderline();
    static ::java::lang::String* stripFields(::java::lang::String* pText);

    // Generated

public: /* protected */
    HeaderFooter();
protected:
    HeaderFooter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HeaderFooter_MarkupTag;
};
