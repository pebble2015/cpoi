// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::AbstractMap_SimpleEntry
    : public virtual ::java::lang::Object
    , public virtual Map_Entry
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Object* key {  };
    static constexpr int64_t serialVersionUID { int64_t(-8499721149061103585LL) };
    ::java::lang::Object* value {  };

protected:
    void ctor(Map_Entry* entry);
    void ctor(::java::lang::Object* key, ::java::lang::Object* value);

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    ::java::lang::String* toString() override;

    // Generated
    AbstractMap_SimpleEntry(Map_Entry* entry);
    AbstractMap_SimpleEntry(::java::lang::Object* key, ::java::lang::Object* value);
protected:
    AbstractMap_SimpleEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
