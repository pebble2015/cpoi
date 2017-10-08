// Generated from /POI/java/org/apache/poi/util/SystemOutLogger.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/util/POILogger.hpp>

struct default_init_tag;

class poi::util::SystemOutLogger
    : public POILogger
{

public:
    typedef POILogger super;

private:
    ::java::lang::String* _cat {  };

public:
    void initialize(::java::lang::String* cat) override;

public: /* protected */
    void _log(int32_t level, ::java::lang::Object* obj1) override;
    void _log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception) override;

public:
    bool check(int32_t level) override;

    // Generated
    SystemOutLogger();
protected:
    SystemOutLogger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
