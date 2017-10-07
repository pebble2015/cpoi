// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/macros/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::macros::VBAMacroReader_Module
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::Integer* offset {  };
    ::int8_tArray* buf {  };
    virtual void read(::java::io::InputStream* in) /* throws(IOException) */;

    // Generated

public:
    VBAMacroReader_Module();
protected:
    VBAMacroReader_Module(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class VBAMacroReader;
    friend class VBAMacroReader_ModuleMap;
};
