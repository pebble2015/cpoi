// Generated from /POI/java/org/apache/poi/ss/formula/eval/RelationalOperationEval.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/RelationalOperationEval.hpp>

struct default_init_tag;

class poi::ss::formula::eval::RelationalOperationEval_3
    : public RelationalOperationEval
{

public:
    typedef RelationalOperationEval super;

public: /* protected */
    bool convertComparisonResult(int32_t cmpResult) override;

    // Generated

public:
    RelationalOperationEval_3();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RelationalOperationEval;
    friend class RelationalOperationEval_1;
    friend class RelationalOperationEval_2;
    friend class RelationalOperationEval_4;
    friend class RelationalOperationEval_5;
    friend class RelationalOperationEval_6;
};
