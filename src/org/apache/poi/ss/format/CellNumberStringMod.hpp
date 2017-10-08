// Generated from /POI/java/org/apache/poi/ss/format/CellNumberStringMod.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class poi::ss::format::CellNumberStringMod
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t BEFORE { int32_t(1) };
    static constexpr int32_t AFTER { int32_t(2) };
    static constexpr int32_t REPLACE { int32_t(3) };

private:
    CellNumberFormatter_Special* special {  };
    int32_t op {  };
    ::java::lang::CharSequence* toAdd {  };
    CellNumberFormatter_Special* end {  };
    bool startInclusive {  };
    bool endInclusive {  };
protected:
    void ctor(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t op);
    void ctor(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t toAdd);
    void ctor(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive);

public:
    virtual int32_t compareTo(CellNumberStringMod* that);
    bool equals(::java::lang::Object* that) override;
    int32_t hashCode() override;
    virtual CellNumberFormatter_Special* getSpecial();
    virtual int32_t getOp();
    virtual ::java::lang::CharSequence* getToAdd();
    virtual CellNumberFormatter_Special* getEnd();
    virtual bool isStartInclusive();
    virtual bool isEndInclusive();

    // Generated
    CellNumberStringMod(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t op);
    CellNumberStringMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t toAdd);
    CellNumberStringMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive);
protected:
    CellNumberStringMod(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
