// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellWalk.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/util/cellwalk/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/util/cellwalk/CellWalkContext.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::cellwalk::CellWalk_SimpleCellWalkContext
    : public virtual ::java::lang::Object
    , public virtual CellWalkContext
{

public:
    typedef ::java::lang::Object super;
    int64_t ordinalNumber {  };
    int32_t rowNumber {  };
    int32_t colNumber {  };
    int64_t getOrdinalNumber() override;
    int32_t getRowNumber() override;
    int32_t getColumnNumber() override;

    // Generated
    CellWalk_SimpleCellWalkContext();
protected:
    void ctor();
    CellWalk_SimpleCellWalkContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class CellWalk;
};
