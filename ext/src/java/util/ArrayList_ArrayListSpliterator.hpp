// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::ArrayList_ArrayListSpliterator final
    : public virtual ::java::lang::Object
    , public Spliterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t expectedModCount {  };
    int32_t fence {  };
    int32_t index {  };
    ArrayList* list {  };

protected:
    void ctor(ArrayList* list, int32_t origin, int32_t fence, int32_t expectedModCount);

public:
    int32_t characteristics() override;
    int64_t estimateSize() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;
    /*int32_t getFence(); (private) */
    bool tryAdvance(::java::util::function::Consumer* action) override;
    ArrayList_ArrayListSpliterator* trySplit() override;

    // Generated

public: /* package */
    ArrayList_ArrayListSpliterator(ArrayList* list, int32_t origin, int32_t fence, int32_t expectedModCount);
protected:
    ArrayList_ArrayListSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
