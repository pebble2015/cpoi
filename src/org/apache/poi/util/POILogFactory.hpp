// Generated from /POI/java/org/apache/poi/util/POILogFactory.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::POILogFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* _loggers_;
    static POILogger* _nullLogger_;
    static ::java::lang::String* _loggerClassName_;
protected:
    void ctor();

public:
    static POILogger* getLogger(::java::lang::Class* theclass);
    static POILogger* getLogger(::java::lang::String* cat);

    // Generated

private:
    POILogFactory();
protected:
    POILogFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& _loggers();
    static POILogger*& _nullLogger();

public: /* package */
    static ::java::lang::String*& _loggerClassName();

private:
    virtual ::java::lang::Class* getClass0();
};
