// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::math::MathContext final
    : public virtual ::java::lang::Object
    , public ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static MathContext* DECIMAL128_;
    static MathContext* DECIMAL32_;
    static MathContext* DECIMAL64_;
    static constexpr int32_t DEFAULT_DIGITS { int32_t(9) };
    static RoundingMode* DEFAULT_ROUNDINGMODE_;
    static constexpr int32_t MIN_DIGITS { int32_t(0) };
    static MathContext* UNLIMITED_;

public: /* package */
    int32_t precision {  };
    RoundingMode* roundingMode {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(5579720004786848255LL) };

protected:
    void ctor(int32_t setPrecision);
    void ctor(::java::lang::String* val);
    void ctor(int32_t setPrecision, RoundingMode* setRoundingMode);

public:
    bool equals(::java::lang::Object* x) override;
    int32_t getPrecision();
    RoundingMode* getRoundingMode();
    int32_t hashCode() override;
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::String* toString() override;

    // Generated
    MathContext(int32_t setPrecision);
    MathContext(::java::lang::String* val);
    MathContext(int32_t setPrecision, RoundingMode* setRoundingMode);
protected:
    MathContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static MathContext*& DECIMAL128();
    static MathContext*& DECIMAL32();
    static MathContext*& DECIMAL64();

private:
    static RoundingMode*& DEFAULT_ROUNDINGMODE();

public:
    static MathContext*& UNLIMITED();

private:
    virtual ::java::lang::Class* getClass0();
};
