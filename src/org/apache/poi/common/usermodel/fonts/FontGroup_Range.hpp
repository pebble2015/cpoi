// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::common::usermodel::fonts::FontGroup_Range
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t upper {  };
    FontGroup* fontGroup {  };
protected:
    void ctor(int32_t upper, FontGroup* fontGroup);

    // Generated

public: /* package */
    FontGroup_Range(int32_t upper, FontGroup* fontGroup);
protected:
    FontGroup_Range(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FontGroup;
    friend class FontGroup_FontGroupRange;
};
