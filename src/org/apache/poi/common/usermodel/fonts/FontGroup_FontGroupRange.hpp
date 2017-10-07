// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::common::usermodel::fonts::FontGroup_FontGroupRange
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t len {  };
    FontGroup* fontGroup {  };

public:
    virtual int32_t getLength();
    virtual FontGroup* getFontGroup();

    // Generated
    FontGroup_FontGroupRange();
protected:
    FontGroup_FontGroupRange(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FontGroup;
    friend class FontGroup_Range;
};
