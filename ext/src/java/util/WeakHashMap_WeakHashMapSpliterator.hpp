// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::WeakHashMap_WeakHashMapSpliterator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    WeakHashMap_Entry* current {  };
    int32_t est {  };
    int32_t expectedModCount {  };
    int32_t fence {  };
    int32_t index {  };
    WeakHashMap* map {  };

protected:
    void ctor(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);

public:
    int64_t estimateSize();

public: /* package */
    int32_t getFence();

    // Generated
    WeakHashMap_WeakHashMapSpliterator(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
protected:
    WeakHashMap_WeakHashMapSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
