// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::logging::Level_KnownLevel final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* intToLevels_;

public: /* package */
    Level* levelObject {  };
    Level* mirroredLevel {  };

private:
    static ::java::util::Map* nameToLevels_;

protected:
    void ctor(Level* l);

public: /* package */
    static void add(Level* l);
    static Level_KnownLevel* findByLocalizedLevelName(::java::lang::String* name);
    static Level_KnownLevel* findByName(::java::lang::String* name);
    static Level_KnownLevel* findByValue(int32_t value);
    static Level_KnownLevel* matches(Level* l);

    // Generated
    Level_KnownLevel(Level* l);
protected:
    Level_KnownLevel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::Map*& intToLevels();
    static ::java::util::Map*& nameToLevels();
    virtual ::java::lang::Class* getClass0();
};
