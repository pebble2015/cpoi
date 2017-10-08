// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTEmbeddedWAVAudioFile.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTEmbeddedWAVAudioFile
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::String* embed {  };
    ::java::lang::String* name {  };
    ::java::lang::Boolean* builtIn {  };

public:
    virtual ::java::lang::String* getEmbed();
    virtual void setEmbed(::java::lang::String* value);
    virtual bool isSetEmbed();
    virtual ::java::lang::String* getName();
    virtual void setName(::java::lang::String* value);
    virtual bool isSetName();
    virtual bool isBuiltIn();
    virtual void setBuiltIn(bool value);
    virtual bool isSetBuiltIn();
    virtual void unsetBuiltIn();

    // Generated
    CTEmbeddedWAVAudioFile();
protected:
    CTEmbeddedWAVAudioFile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
