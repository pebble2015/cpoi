// Generated from /POI/java/org/apache/poi/util/NullLogger.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/util/POILogger.hpp>

struct default_init_tag;

class org::apache::poi::util::NullLogger
    : public POILogger
{

public:
    typedef POILogger super;
    void initialize(::java::lang::String* cat) override;

public: /* protected */
    void _log(int32_t level, ::java::lang::Object* obj1) override;
    void _log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception) override;

public:
    void log(int32_t level, ::java::lang::ObjectArray*/*...*/ objs) override;
    bool check(int32_t level) override;

    // Generated
    NullLogger();
protected:
    NullLogger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
