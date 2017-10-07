// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::Logger_LoggerBundle final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* resourceBundleName {  };
    ::java::util::ResourceBundle* userBundle {  };

    /*void ctor(::java::lang::String* resourceBundleName, ::java::util::ResourceBundle* bundle); (private) */
    static Logger_LoggerBundle* get(::java::lang::String* name, ::java::util::ResourceBundle* bundle);
    bool isSystemBundle();

    // Generated

public:
    Logger_LoggerBundle();
protected:
    Logger_LoggerBundle(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
