// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFChildAnchor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFChildAnchor final
    : public HSSFAnchor
{

public:
    typedef HSSFAnchor super;

private:
    ::org::apache::poi::ddf::EscherChildAnchorRecord* _escherChildAnchor {  };
protected:
    void ctor(::org::apache::poi::ddf::EscherChildAnchorRecord* escherChildAnchorRecord);
    void ctor();
    void ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2);

public:
    int32_t getDx1() override;
    void setDx1(int32_t dx1) override;
    int32_t getDy1() override;
    void setDy1(int32_t dy1) override;
    int32_t getDy2() override;
    void setDy2(int32_t dy2) override;
    int32_t getDx2() override;
    void setDx2(int32_t dx2) override;
    void setAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2);
    bool isHorizontallyFlipped() override;
    bool isVerticallyFlipped() override;

public: /* protected */
    ::org::apache::poi::ddf::EscherRecord* getEscherAnchor() override;
    void createEscherAnchor() override;

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

    // Generated
    HSSFChildAnchor(::org::apache::poi::ddf::EscherChildAnchorRecord* escherChildAnchorRecord);
    HSSFChildAnchor();
    HSSFChildAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2);
protected:
    HSSFChildAnchor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
