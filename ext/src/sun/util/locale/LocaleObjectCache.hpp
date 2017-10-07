// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/util/concurrent/fwd-POI.hpp>
#include <sun/util/locale/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::util::locale::LocaleObjectCache
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::concurrent::ConcurrentMap* map {  };
    ::java::lang::ref::ReferenceQueue* queue {  };

protected:
    void ctor();
    void ctor(int32_t arg0, float arg1, int32_t arg2);
    /*void cleanStaleEntries(); (private) */

public: /* protected */
    virtual ::java::lang::Object* createObject(::java::lang::Object* arg0) = 0;

public:
    virtual ::java::lang::Object* get(::java::lang::Object* arg0);

public: /* protected */
    virtual ::java::lang::Object* normalizeKey(::java::lang::Object* arg0);
    virtual ::java::lang::Object* put(::java::lang::Object* arg0, ::java::lang::Object* arg1);

    // Generated

public:
    LocaleObjectCache();
    LocaleObjectCache(int32_t arg0, float arg1, int32_t arg2);
protected:
    LocaleObjectCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
