// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFAnchor.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/ChildAnchor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFAnchor
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::ChildAnchor
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    bool _isHorizontallyFlipped {  };
    bool _isVerticallyFlipped {  };
protected:
    void ctor();
    void ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2);

public:
    static HSSFAnchor* createAnchorFromEscher(::org::apache::poi::ddf::EscherContainerRecord* container);
    virtual bool isHorizontallyFlipped() = 0;
    virtual bool isVerticallyFlipped() = 0;

public: /* protected */
    virtual ::org::apache::poi::ddf::EscherRecord* getEscherAnchor() = 0;
    virtual void createEscherAnchor() = 0;

    // Generated

public:
    HSSFAnchor();
    HSSFAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2);
protected:
    HSSFAnchor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
