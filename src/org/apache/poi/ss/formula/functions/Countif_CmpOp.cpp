// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_CmpOp.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Countif_CmpOp::Countif_CmpOp(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countif_CmpOp::Countif_CmpOp(::java::lang::String* representation, int32_t code) 
    : Countif_CmpOp(*static_cast< ::default_init_tag* >(0))
{
    ctor(representation,code);
}

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::NONE;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::EQ;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::NE;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::LE;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::LT;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::GT;

constexpr int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::GE;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_NONE()
{
    clinit();
    return OP_NONE_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_NONE_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_EQ()
{
    clinit();
    return OP_EQ_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_EQ_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_NE()
{
    clinit();
    return OP_NE_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_NE_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_LE()
{
    clinit();
    return OP_LE_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_LE_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_LT()
{
    clinit();
    return OP_LT_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_LT_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_GT()
{
    clinit();
    return OP_GT_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_GT_;

org::apache::poi::ss::formula::functions::Countif_CmpOp*& org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_GE()
{
    clinit();
    return OP_GE_;
}
org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::OP_GE_;

org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::op(::java::lang::String* rep, int32_t code)
{
    clinit();
    return new Countif_CmpOp(rep, code);
}

void org::apache::poi::ss::formula::functions::Countif_CmpOp::ctor(::java::lang::String* representation, int32_t code)
{
    super::ctor();
    _representation = representation;
    _code = code;
}

int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::getLength()
{
    return npc(_representation)->length();
}

int32_t org::apache::poi::ss::formula::functions::Countif_CmpOp::getCode()
{
    return _code;
}

org::apache::poi::ss::formula::functions::Countif_CmpOp* org::apache::poi::ss::formula::functions::Countif_CmpOp::getOperator(::java::lang::String* value)
{
    clinit();
    auto len = npc(value)->length();
    if(len < 1) {
        return OP_NONE_;
    }
    auto firstChar = npc(value)->charAt(int32_t(0));
    switch (firstChar) {
    case u'=':
        return OP_EQ_;
    case u'>':
        if(len > 1) {
            switch (npc(value)->charAt(int32_t(1))) {
            case u'=':
                return OP_GE_;
            }

        }
        return OP_GT_;
    case u'<':
        if(len > 1) {
            switch (npc(value)->charAt(int32_t(1))) {
            case u'=':
                return OP_LE_;
            case u'>':
                return OP_NE_;
            }

        }
        return OP_LT_;
    }

    return OP_NONE_;
}

bool org::apache::poi::ss::formula::functions::Countif_CmpOp::evaluate(bool cmpResult)
{
    switch (_code) {
    case NONE:
    case EQ:
        return cmpResult;
    case NE:
        return !cmpResult;
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Cannot call boolean evaluate on non-equality operator '"_j)->append(_representation)
        ->append(u"'"_j)->toString());
}

bool org::apache::poi::ss::formula::functions::Countif_CmpOp::evaluate(int32_t cmpResult)
{
    switch (_code) {
    case NONE:
    case EQ:
        return cmpResult == 0;
    case NE:
        return cmpResult != 0;
    case LT:
        return cmpResult < 0;
    case LE:
        return cmpResult <= 0;
    case GT:
        return cmpResult > 0;
    case GE:
        return cmpResult >= 0;
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Cannot call boolean evaluate on non-equality operator '"_j)->append(_representation)
        ->append(u"'"_j)->toString());
}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_CmpOp::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(sb)->append(npc(getClass())->getName());
    npc(npc(npc(sb)->append(u" ["_j))->append(_representation))->append(u"]"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_CmpOp::getRepresentation()
{
    return _representation;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_CmpOp::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.CmpOp", 49);
    return c;
}

void org::apache::poi::ss::formula::functions::Countif_CmpOp::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        OP_NONE_ = op(u""_j, NONE);
        OP_EQ_ = op(u"="_j, EQ);
        OP_NE_ = op(u"<>"_j, NE);
        OP_LE_ = op(u"<="_j, LE);
        OP_LT_ = op(u"<"_j, LT);
        OP_GT_ = op(u">"_j, GT);
        OP_GE_ = op(u">="_j, GE);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_CmpOp::getClass0()
{
    return class_();
}

