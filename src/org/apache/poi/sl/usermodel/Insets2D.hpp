// Generated from /POI/java/org/apache/poi/sl/usermodel/Insets2D.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::sl::usermodel::Insets2D final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
    double top {  };
    double left {  };
    double bottom {  };
    double right {  };
protected:
    void ctor(double top, double left, double bottom, double right);

public:
    void set(double top, double left, double bottom, double right);
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    Insets2D* clone() override;

    // Generated
    Insets2D(double top, double left, double bottom, double right);
protected:
    Insets2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
