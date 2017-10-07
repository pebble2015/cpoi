// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Spliterator_OfDouble.hpp>

struct default_init_tag;

class java::util::Random_RandomDoublesSpliterator final
    : public virtual ::java::lang::Object
    , public Spliterator_OfDouble
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    double bound {  };
    int64_t fence {  };
    int64_t index {  };
    double origin {  };
    Random* rng {  };

protected:
    void ctor(Random* rng, int64_t index, int64_t fence, double origin, double bound);

public:
    int32_t characteristics() override;
    int64_t estimateSize() override;
    void forEachRemaining(::java::util::function::DoubleConsumer* consumer) override;
    bool tryAdvance(::java::util::function::DoubleConsumer* consumer) override;
    Random_RandomDoublesSpliterator* trySplit() override;

    // Generated

public: /* package */
    Random_RandomDoublesSpliterator(Random* rng, int64_t index, int64_t fence, double origin, double bound);
protected:
    Random_RandomDoublesSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void forEachRemaining(::java::lang::Object* action) override;
    virtual bool tryAdvance(::java::lang::Object* action) override;
    void forEachRemaining(::java::util::function::Consumer* action);
    bool tryAdvance(::java::util::function::Consumer* action);

private:
    virtual ::java::lang::Class* getClass0();
};
