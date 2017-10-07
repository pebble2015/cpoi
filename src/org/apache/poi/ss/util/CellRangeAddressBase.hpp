// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::CellRangeAddressBase
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstRow {  };
    int32_t _firstCol {  };
    int32_t _lastRow {  };
    int32_t _lastCol {  };
protected:
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);

public:
    virtual void validate(::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

private:
    static void validateRow(int32_t row, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);
    static void validateColumn(int32_t column, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

public:
    bool isFullColumnRange();
    bool isFullRowRange();
    int32_t getFirstColumn();
    int32_t getFirstRow();
    int32_t getLastColumn();
    int32_t getLastRow();
    virtual bool isInRange(int32_t rowInd, int32_t colInd);
    virtual bool isInRange(CellReference* ref);
    virtual bool isInRange(::org::apache::poi::ss::usermodel::Cell* cell);
    virtual bool containsRow(int32_t rowInd);
    virtual bool containsColumn(int32_t colInd);
    virtual bool intersects(CellRangeAddressBase* other);
    virtual ::java::util::Set* getPosition(int32_t rowInd, int32_t colInd);
    void setFirstColumn(int32_t firstCol);
    void setFirstRow(int32_t firstRow);
    void setLastColumn(int32_t lastCol);
    void setLastRow(int32_t lastRow);
    virtual int32_t getNumberOfCells();
    ::java::lang::String* toString() override;

public: /* protected */
    virtual int32_t getMinRow();
    virtual int32_t getMaxRow();
    virtual int32_t getMinColumn();
    virtual int32_t getMaxColumn();

public:
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* protected */
    CellRangeAddressBase(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
protected:
    CellRangeAddressBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellRangeAddressBase_CellPosition;
};
