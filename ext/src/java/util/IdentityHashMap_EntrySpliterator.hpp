// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/IdentityHashMap_IdentityHashMapSpliterator.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::IdentityHashMap_EntrySpliterator final
    : public IdentityHashMap_IdentityHashMapSpliterator
    , public Spliterator
{

public:
    typedef IdentityHashMap_IdentityHashMapSpliterator super;

protected:
    void ctor(IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);

public:
    int32_t characteristics() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;
    bool tryAdvance(::java::util::function::Consumer* action) override;
    IdentityHashMap_EntrySpliterator* trySplit() override;

    // Generated

public: /* package */
    IdentityHashMap_EntrySpliterator(IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
protected:
    IdentityHashMap_EntrySpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int64_t estimateSize();

private:
    virtual ::java::lang::Class* getClass0();
};
