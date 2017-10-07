// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::text::DecimalFormat_FastPathData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::char16_tArray* charsNegativePrefix {  };
    ::char16_tArray* charsNegativeSuffix {  };
    ::char16_tArray* charsPositivePrefix {  };
    ::char16_tArray* charsPositiveSuffix {  };
    ::char16_tArray* fastPathContainer {  };
    int32_t firstUsedIndex {  };
    int32_t fractionalFirstIndex {  };
    int32_t fractionalMaxIntBound {  };
    double fractionalScaleFactor {  };
    char16_t groupingChar {  };
    int32_t integralLastIndex {  };
    int32_t lastFreeIndex {  };
    bool negativeAffixesRequired {  };
    bool positiveAffixesRequired {  };
    int32_t zeroDelta {  };

    /*void ctor(); (private) */

    // Generated

public:
    DecimalFormat_FastPathData();
protected:
    DecimalFormat_FastPathData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
