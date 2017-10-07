// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java

#pragma once

#include <java/nio/charset/fwd-POI.hpp>
#include <org/apache/poi/poifs/macros/fwd-POI.hpp>
#include <java/util/HashMap.hpp>

struct default_init_tag;

class org::apache::poi::poifs::macros::VBAMacroReader_ModuleMap
    : public ::java::util::HashMap
{

public:
    typedef ::java::util::HashMap super;

public: /* package */
    ::java::nio::charset::Charset* charset {  };

    // Generated

public:
    VBAMacroReader_ModuleMap();
protected:
    void ctor();
    VBAMacroReader_ModuleMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class VBAMacroReader;
    friend class VBAMacroReader_Module;
};
