// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/HashMap_Node.hpp>

struct default_init_tag;

class java::util::LinkedHashMap_Entry
    : public HashMap_Node
{

public:
    typedef HashMap_Node super;

public: /* package */
    LinkedHashMap_Entry* after {  };
    LinkedHashMap_Entry* before {  };

protected:
    void ctor(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);

    // Generated

public: /* package */
    LinkedHashMap_Entry(int32_t hash, ::java::lang::Object* key, ::java::lang::Object* value, HashMap_Node* next);
protected:
    LinkedHashMap_Entry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
