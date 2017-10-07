// Generated from /POI/java/org/apache/poi/extractor/OLE2ExtractorFactory.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/extractor/fwd-POI.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/lang/Boolean.hpp>

struct default_init_tag;

class org::apache::poi::extractor::OLE2ExtractorFactory_1
    : public ::java::lang::ThreadLocal
{

public:
    typedef ::java::lang::ThreadLocal super;

public: /* protected */
    ::java::lang::Boolean* initialValue() override;

    // Generated

public:
    OLE2ExtractorFactory_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class OLE2ExtractorFactory;
};
