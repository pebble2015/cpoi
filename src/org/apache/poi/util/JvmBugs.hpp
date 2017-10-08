// Generated from /POI/java/org/apache/poi/util/JvmBugs.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::JvmBugs
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* LOG_;

public:
    static bool hasLineBreakMeasurerBug();

    // Generated
    JvmBugs();
protected:
    JvmBugs(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
