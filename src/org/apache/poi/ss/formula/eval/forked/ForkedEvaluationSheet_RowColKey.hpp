// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/forked/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey final
    : public virtual ::java::lang::Object
    , public ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _rowIndex {  };
    int32_t _columnIndex {  };
protected:
    void ctor(int32_t rowIndex, int32_t columnIndex);

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    int32_t compareTo(ForkedEvaluationSheet_RowColKey* o);
    int32_t getRowIndex();
    int32_t getColumnIndex();

    // Generated
    ForkedEvaluationSheet_RowColKey(int32_t rowIndex, int32_t columnIndex);
protected:
    ForkedEvaluationSheet_RowColKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class ForkedEvaluationSheet;
};
