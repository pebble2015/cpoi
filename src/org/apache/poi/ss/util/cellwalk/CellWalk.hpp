// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellWalk.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/cellwalk/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::cellwalk::CellWalk
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::usermodel::Sheet* sheet {  };
    ::poi::ss::util::CellRangeAddress* range {  };
    bool traverseEmptyCells {  };
protected:
    void ctor(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* range);

public:
    virtual bool isTraverseEmptyCells();
    virtual void setTraverseEmptyCells(bool traverseEmptyCells);
    virtual void traverse(CellHandler* handler);

private:
    bool isEmpty(::poi::ss::usermodel::Cell* cell);

    // Generated

public:
    CellWalk(::poi::ss::usermodel::Sheet* sheet, ::poi::ss::util::CellRangeAddress* range);
protected:
    CellWalk(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellWalk_SimpleCellWalkContext;
};
