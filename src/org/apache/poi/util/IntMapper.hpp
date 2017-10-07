// Generated from /POI/java/org/apache/poi/util/IntMapper.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::util::IntMapper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* elements {  };
    ::java::util::Map* valueKeyMap {  };
    static constexpr int32_t _default_size { int32_t(10) };
protected:
    void ctor();
    void ctor(int32_t initialCapacity);

public:
    virtual bool add(::java::lang::Object* value);
    virtual int32_t size();
    virtual ::java::lang::Object* get(int32_t index);
    virtual int32_t getIndex(::java::lang::Object* o);
    virtual ::java::util::Iterator* iterator();

    // Generated
    IntMapper();
    IntMapper(int32_t initialCapacity);
protected:
    IntMapper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
