// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Character_Subset
    : public virtual Object
{

public:
    typedef Object super;

private:
    String* name {  };

protected:
    void ctor(String* name);

public:
    bool equals(Object* obj) override;
    int32_t hashCode() override;
    String* toString() override;

    // Generated

public: /* protected */
    Character_Subset(String* name);
protected:
    Character_Subset(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
