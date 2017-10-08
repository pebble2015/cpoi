// Generated from /POI/java/org/apache/poi/sl/draw/Drawable.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/awt/RenderingHints_Key.hpp>

struct default_init_tag;

class poi::sl::draw::Drawable_DrawableHint
    : public ::java::awt::RenderingHints_Key
{

public:
    typedef ::java::awt::RenderingHints_Key super;
protected:
    void ctor(int32_t id);

public:
    bool isCompatibleValue(::java::lang::Object* val) override;
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Drawable_DrawableHint(int32_t id);
protected:
    Drawable_DrawableHint(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Drawable;
};
