// Generated from /POI/java/org/apache/poi/ss/util/SSCellRange.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>

struct default_init_tag;

class poi::ss::util::SSCellRange_ArrayIterator final
    : public virtual ::java::lang::Object
    , public ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::ObjectArray* _array {  };
    int32_t _index {  };
protected:
    void ctor(::java::lang::ObjectArray* array);

public:
    bool hasNext() override;
    ::java::lang::Object* next() override;
    void remove() override;

    // Generated
    SSCellRange_ArrayIterator(::java::lang::ObjectArray* array);
protected:
    SSCellRange_ArrayIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SSCellRange;
};
