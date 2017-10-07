// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/TreeMap_TreeMapSpliterator.hpp>
#include <java/util/Spliterator.hpp>

struct default_init_tag;

class java::util::TreeMap_EntrySpliterator final
    : public TreeMap_TreeMapSpliterator
    , public Spliterator
{

public:
    typedef TreeMap_TreeMapSpliterator super;

protected:
    void ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);

public:
    int32_t characteristics() override;
    void forEachRemaining(::java::util::function::Consumer* action) override;
    Comparator* getComparator() override;
    bool tryAdvance(::java::util::function::Consumer* action) override;
    TreeMap_EntrySpliterator* trySplit() override;

    // Generated

public: /* package */
    TreeMap_EntrySpliterator(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);
protected:
    TreeMap_EntrySpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int64_t estimateSize();

private:
    virtual ::java::lang::Class* getClass0();
};
