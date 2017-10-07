// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator final
    : public virtual ::java::lang::Object
    , public Spliterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Spliterator* s {  };

protected:
    void ctor(Spliterator* s);

public:
    int32_t characteristics() override;
    int64_t estimateSize() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;
    Comparator* getComparator() override;
    int64_t getExactSizeIfKnown() override;
    bool hasCharacteristics(int32_t characteristics) override;
    bool tryAdvance(::java::util::function::Consumer* action) override;
    Spliterator* trySplit() override;

    // Generated

public: /* package */
    Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator(Spliterator* s);
protected:
    Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntrySetSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
