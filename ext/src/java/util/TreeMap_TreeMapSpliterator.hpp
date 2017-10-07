// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::TreeMap_TreeMapSpliterator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    TreeMap_Entry* current {  };
    int32_t est {  };
    int32_t expectedModCount {  };
    TreeMap_Entry* fence {  };
    int32_t side {  };
    TreeMap* tree {  };

protected:
    void ctor(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);

public:
    int64_t estimateSize();

public: /* package */
    int32_t getEstimate();

    // Generated
    TreeMap_TreeMapSpliterator(TreeMap* tree, TreeMap_Entry* origin, TreeMap_Entry* fence, int32_t side, int32_t est, int32_t expectedModCount);
protected:
    TreeMap_TreeMapSpliterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
