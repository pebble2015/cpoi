// Generated from /POI/java/org/apache/poi/poifs/property/RootProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>

struct default_init_tag;

class org::apache::poi::poifs::property::RootProperty final
    : public DirectoryProperty
{

public:
    typedef DirectoryProperty super;

private:
    static ::java::lang::String* NAME_;
protected:
    void ctor();
    void ctor(int32_t index, ::int8_tArray* array, int32_t offset);

public:
    void setSize(int32_t size) override;
    ::java::lang::String* getName() override;

    // Generated

public: /* package */
    RootProperty();

public: /* protected */
    RootProperty(int32_t index, ::int8_tArray* array, int32_t offset);
protected:
    RootProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& NAME();
    virtual ::java::lang::Class* getClass0();
};
