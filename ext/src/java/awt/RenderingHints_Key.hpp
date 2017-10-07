// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::RenderingHints_Key
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::HashMap* identitymap_;
    int32_t privatekey {  };

protected:
    void ctor(int32_t privatekey);

public:
    bool equals(::java::lang::Object* o) override;
    /*::java::lang::String* getIdentity(); (private) */
    int32_t hashCode() override;

public: /* protected */
    int32_t intKey();

public:
    virtual bool isCompatibleValue(::java::lang::Object* val) = 0;
    /*static void recordIdentity(RenderingHints_Key* k); (private) */

    // Generated

public: /* protected */
    RenderingHints_Key(int32_t privatekey);
protected:
    RenderingHints_Key(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::HashMap*& identitymap();
    virtual ::java::lang::Class* getClass0();
};
