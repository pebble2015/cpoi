// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AttrPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::ptg::AttrPtg_SpaceType final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static constexpr int32_t SPACE_BEFORE { int32_t(0) };
    static constexpr int32_t CR_BEFORE { int32_t(1) };
    static constexpr int32_t SPACE_BEFORE_OPEN_PAREN { int32_t(2) };
    static constexpr int32_t CR_BEFORE_OPEN_PAREN { int32_t(3) };
    static constexpr int32_t SPACE_BEFORE_CLOSE_PAREN { int32_t(4) };
    static constexpr int32_t CR_BEFORE_CLOSE_PAREN { int32_t(5) };
    static constexpr int32_t SPACE_AFTER_EQUALITY { int32_t(6) };

    // Generated

private:
    AttrPtg_SpaceType();
protected:
    AttrPtg_SpaceType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AttrPtg;
};
