// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map_Entry.hpp>

struct default_init_tag;

class java::util::TreeMap_Entry final
    : public virtual ::java::lang::Object
    , public Map_Entry
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    bool color {  };
    ::java::lang::Object* key {  };
    TreeMap_Entry* left {  };
    TreeMap_Entry* parent {  };
    TreeMap_Entry* right {  };
    ::java::lang::Object* value {  };

protected:
    void ctor(::java::lang::Object* key, ::java::lang::Object* value, TreeMap_Entry* parent);

public:
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* getKey() override;
    ::java::lang::Object* getValue() override;
    int32_t hashCode() override;
    ::java::lang::Object* setValue(::java::lang::Object* value) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    TreeMap_Entry(::java::lang::Object* key, ::java::lang::Object* value, TreeMap_Entry* parent);
protected:
    TreeMap_Entry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
