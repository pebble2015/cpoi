// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::FormulaParser_SimpleRangePart final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    FormulaParser_SimpleRangePart_Type* _type {  };
    ::java::lang::String* _rep {  };
protected:
    void ctor(::java::lang::String* rep, bool hasLetters, bool hasNumbers);

public:
    bool isCell();
    bool isRowOrColumn();
    ::poi::ss::util::CellReference* getCellReference();
    bool isColumn();
    bool isRow();
    ::java::lang::String* getRep();
    bool isCompatibleForArea(FormulaParser_SimpleRangePart* part2);
    ::java::lang::String* toString() override;

    // Generated
    FormulaParser_SimpleRangePart(::java::lang::String* rep, bool hasLetters, bool hasNumbers);
protected:
    FormulaParser_SimpleRangePart(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaParser;
    friend class FormulaParser_SimpleRangePart_Type;
};
