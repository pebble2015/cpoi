// Generated from /POI/java/org/apache/poi/ss/formula/PlainCellCache.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::PlainCellCache_Loc final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int64_t _bookSheetColumn {  };
    int32_t _rowIndex {  };
protected:
    void ctor(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);

public:
    static int64_t toBookSheetColumn(int32_t bookIndex, int32_t sheetIndex, int32_t columnIndex);
protected:
    void ctor(int64_t bookSheetColumn, int32_t rowIndex);

public:
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;
    int32_t getRowIndex();
    int32_t getColumnIndex();
    int32_t getSheetIndex();
    int32_t getBookIndex();

    // Generated
    PlainCellCache_Loc(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);
    PlainCellCache_Loc(int64_t bookSheetColumn, int32_t rowIndex);
protected:
    PlainCellCache_Loc(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PlainCellCache;
};
