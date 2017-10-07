// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/Composite.hpp>

struct default_init_tag;

class java::awt::AlphaComposite final
    : public virtual ::java::lang::Object
    , public Composite
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t CLEAR { int32_t(1) };

private:
    static AlphaComposite* Clear_;

public:
    static constexpr int32_t DST { int32_t(9) };
    static constexpr int32_t DST_ATOP { int32_t(11) };
    static constexpr int32_t DST_IN { int32_t(6) };
    static constexpr int32_t DST_OUT { int32_t(8) };
    static constexpr int32_t DST_OVER { int32_t(4) };

private:
    static AlphaComposite* Dst_;
    static AlphaComposite* DstAtop_;
    static AlphaComposite* DstIn_;
    static AlphaComposite* DstOut_;
    static AlphaComposite* DstOver_;
    static constexpr int32_t MAX_RULE { int32_t(12) };
    static constexpr int32_t MIN_RULE { int32_t(1) };

public:
    static constexpr int32_t SRC { int32_t(2) };
    static constexpr int32_t SRC_ATOP { int32_t(10) };
    static constexpr int32_t SRC_IN { int32_t(5) };
    static constexpr int32_t SRC_OUT { int32_t(7) };
    static constexpr int32_t SRC_OVER { int32_t(3) };

private:
    static AlphaComposite* Src_;
    static AlphaComposite* SrcAtop_;
    static AlphaComposite* SrcIn_;
    static AlphaComposite* SrcOut_;
    static AlphaComposite* SrcOver_;

public:
    static constexpr int32_t XOR { int32_t(12) };

private:
    static AlphaComposite* Xor_;

public: /* package */
    float extraAlpha {  };
    int32_t rule {  };

    /*void ctor(int32_t rule); (private) */
    /*void ctor(int32_t rule, float alpha); (private) */

public:
    CompositeContext* createContext(::java::awt::image::ColorModel* srcColorModel, ::java::awt::image::ColorModel* dstColorModel, RenderingHints* hints) override;
    AlphaComposite* derive(int32_t rule);
    AlphaComposite* derive(float alpha);
    bool equals(::java::lang::Object* obj) override;
    float getAlpha();
    static AlphaComposite* getInstance(int32_t rule);
    static AlphaComposite* getInstance(int32_t rule, float alpha);
    int32_t getRule();
    int32_t hashCode() override;

    // Generated
    AlphaComposite();
protected:
    AlphaComposite(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static AlphaComposite*& Clear();
    static AlphaComposite*& Dst();
    static AlphaComposite*& DstAtop();
    static AlphaComposite*& DstIn();
    static AlphaComposite*& DstOut();
    static AlphaComposite*& DstOver();
    static AlphaComposite*& Src();
    static AlphaComposite*& SrcAtop();
    static AlphaComposite*& SrcIn();
    static AlphaComposite*& SrcOut();
    static AlphaComposite*& SrcOver();
    static AlphaComposite*& Xor();

private:
    virtual ::java::lang::Class* getClass0();
};
