// Generated from /POI/java/org/apache/poi/util/BitFieldFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::util::BitFieldFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* instances_;

public:
    static BitField* getInstance(int32_t mask);

    // Generated
    BitFieldFactory();
protected:
    BitFieldFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& instances();
    virtual ::java::lang::Class* getClass0();
};
