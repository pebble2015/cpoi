// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractCollection.hpp>

struct default_init_tag;

class java::util::EnumMap_Values
    : public AbstractCollection
{

public:
    typedef AbstractCollection super;

public: /* package */
    EnumMap* this$0 {  };

    /*void ctor(); (private) */

public:
    void clear() override;
    bool contains(::java::lang::Object* o) override;
    Iterator* iterator() override;
    bool remove(::java::lang::Object* o) override;
    int32_t size() override;

    // Generated
    EnumMap_Values(EnumMap *EnumMap_this);
protected:
    EnumMap_Values(EnumMap *EnumMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    EnumMap *EnumMap_this;

private:
    virtual ::java::lang::Class* getClass0();
};
