// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Offset_BaseRef final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstRowIndex {  };
    int32_t _firstColumnIndex {  };
    int32_t _width {  };
    int32_t _height {  };
    ::org::apache::poi::ss::formula::eval::RefEval* _refEval {  };
    ::org::apache::poi::ss::formula::eval::AreaEval* _areaEval {  };
protected:
    void ctor(::org::apache::poi::ss::formula::eval::RefEval* re);
    void ctor(::org::apache::poi::ss::formula::eval::AreaEval* ae);

public:
    int32_t getWidth();
    int32_t getHeight();
    int32_t getFirstRowIndex();
    int32_t getFirstColumnIndex();
    ::org::apache::poi::ss::formula::eval::AreaEval* offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx);

    // Generated
    Offset_BaseRef(::org::apache::poi::ss::formula::eval::RefEval* re);
    Offset_BaseRef(::org::apache::poi::ss::formula::eval::AreaEval* ae);
protected:
    Offset_BaseRef(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Offset;
    friend class Offset_LinearOffsetRange;
};
