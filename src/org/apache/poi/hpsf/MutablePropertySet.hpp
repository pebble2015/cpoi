// Generated from /POI/java/org/apache/poi/hpsf/MutablePropertySet.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/PropertySet.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::MutablePropertySet
    : public PropertySet
{

public:
    typedef PropertySet super;
protected:
    void ctor();
    void ctor(PropertySet* ps);
    void ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */;

    // Generated

public:
    MutablePropertySet();
    MutablePropertySet(PropertySet* ps);

public: /* package */
    MutablePropertySet(::java::io::InputStream* stream);
protected:
    MutablePropertySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
