// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Countif_CmpOp final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t NONE { int32_t(0) };
    static constexpr int32_t EQ { int32_t(1) };
    static constexpr int32_t NE { int32_t(2) };
    static constexpr int32_t LE { int32_t(3) };
    static constexpr int32_t LT { int32_t(4) };
    static constexpr int32_t GT { int32_t(5) };
    static constexpr int32_t GE { int32_t(6) };

private:
    static Countif_CmpOp* OP_NONE_;
    static Countif_CmpOp* OP_EQ_;
    static Countif_CmpOp* OP_NE_;
    static Countif_CmpOp* OP_LE_;
    static Countif_CmpOp* OP_LT_;
    static Countif_CmpOp* OP_GT_;
    static Countif_CmpOp* OP_GE_;
    ::java::lang::String* _representation {  };
    int32_t _code {  };
    static Countif_CmpOp* op(::java::lang::String* rep, int32_t code);
protected:
    void ctor(::java::lang::String* representation, int32_t code);

public:
    int32_t getLength();
    int32_t getCode();
    static Countif_CmpOp* getOperator(::java::lang::String* value);
    bool evaluate(bool cmpResult);
    bool evaluate(int32_t cmpResult);
    ::java::lang::String* toString() override;
    ::java::lang::String* getRepresentation();

    // Generated

private:
    Countif_CmpOp(::java::lang::String* representation, int32_t code);
protected:
    Countif_CmpOp(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Countif_CmpOp*& OP_NONE();
    static Countif_CmpOp*& OP_EQ();
    static Countif_CmpOp*& OP_NE();
    static Countif_CmpOp*& OP_LE();
    static Countif_CmpOp*& OP_LT();
    static Countif_CmpOp*& OP_GT();
    static Countif_CmpOp*& OP_GE();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif;
    friend class Countif_MatcherBase;
    friend class Countif_NumberMatcher;
    friend class Countif_BooleanMatcher;
    friend class Countif_ErrorMatcher;
    friend class Countif_StringMatcher;
};
