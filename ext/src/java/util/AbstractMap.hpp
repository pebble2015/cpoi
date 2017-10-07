// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>

struct default_init_tag;

class java::util::AbstractMap
    : public virtual ::java::lang::Object
    , public virtual Map
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Set* keySet_ {  };
    Collection* values_ {  };

protected:
    void ctor();

public:
    void clear() override;

public: /* protected */
    ::java::lang::Object* clone() override;

public:
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    /*Set* entrySet(); (already declared) */
    /*static bool eq(::java::lang::Object* o1, ::java::lang::Object* o2); (private) */
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    int32_t hashCode() override;
    bool isEmpty() override;
    Set* keySet() override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* m) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    int32_t size() override;
    ::java::lang::String* toString() override;
    Collection* values() override;

    // Generated

public: /* protected */
    AbstractMap();
protected:
    AbstractMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    virtual ::java::lang::Class* getClass0();
};
