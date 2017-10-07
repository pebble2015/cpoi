// Generated from /POI/java/org/apache/poi/hssf/record/common/ExtendedColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::common::ExtendedColor final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t TYPE_AUTO { int32_t(0) };
    static constexpr int32_t TYPE_INDEXED { int32_t(1) };
    static constexpr int32_t TYPE_RGB { int32_t(2) };
    static constexpr int32_t TYPE_THEMED { int32_t(3) };
    static constexpr int32_t TYPE_UNSET { int32_t(4) };
    static constexpr int32_t THEME_DARK_1 { int32_t(0) };
    static constexpr int32_t THEME_LIGHT_1 { int32_t(1) };
    static constexpr int32_t THEME_DARK_2 { int32_t(2) };
    static constexpr int32_t THEME_LIGHT_2 { int32_t(3) };
    static constexpr int32_t THEME_ACCENT_1 { int32_t(4) };
    static constexpr int32_t THEME_ACCENT_2 { int32_t(5) };
    static constexpr int32_t THEME_ACCENT_3 { int32_t(6) };
    static constexpr int32_t THEME_ACCENT_4 { int32_t(7) };
    static constexpr int32_t THEME_ACCENT_5 { int32_t(8) };
    static constexpr int32_t THEME_ACCENT_6 { int32_t(9) };
    static constexpr int32_t THEME_HYPERLINK { int32_t(10) };
    static constexpr int32_t THEME_FOLLOWED_HYPERLINK { int32_t(11) };

private:
    int32_t type {  };
    int32_t colorIndex {  };
    ::int8_tArray* rgba {  };
    int32_t themeIndex {  };
    double tint {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    int32_t getType();
    void setType(int32_t type);
    int32_t getColorIndex();
    void setColorIndex(int32_t colorIndex);
    ::int8_tArray* getRGBA();
    void setRGBA(::int8_tArray* rgba);
    int32_t getThemeIndex();
    void setThemeIndex(int32_t themeIndex);
    double getTint();
    void setTint(double tint);
    ::java::lang::String* toString() override;
    ExtendedColor* clone() override;
    int32_t getDataLength();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    ExtendedColor();
    ExtendedColor(::org::apache::poi::util::LittleEndianInput* in);
protected:
    ExtendedColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
