// Generated from /POI/java/org/apache/poi/hpsf/SpecialPropertySet.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/MutablePropertySet.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::SpecialPropertySet
    : public MutablePropertySet
{

public:
    typedef MutablePropertySet super;
protected:
    void ctor();
    void ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */;
    void ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */;

    // Generated

public:
    SpecialPropertySet();
    SpecialPropertySet(PropertySet* ps);

public: /* package */
    SpecialPropertySet(::java::io::InputStream* stream);
protected:
    SpecialPropertySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
