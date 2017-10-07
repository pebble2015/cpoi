// Generated from /POI/java/org/apache/poi/ss/util/CellReference.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::ss::util::CellReference
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr char16_t ABSOLUTE_REFERENCE_MARKER { u'$' };
    static constexpr char16_t SHEET_NAME_DELIMITER { u'!' };
    static constexpr char16_t SPECIAL_NAME_DELIMITER { u'\'' };
    static ::java::util::regex::Pattern* CELL_REF_PATTERN_;
    static ::java::util::regex::Pattern* STRICTLY_CELL_REF_PATTERN_;
    static ::java::util::regex::Pattern* COLUMN_REF_PATTERN_;
    static ::java::util::regex::Pattern* ROW_REF_PATTERN_;
    static ::java::util::regex::Pattern* NAMED_RANGE_NAME_PATTERN_;
    ::java::lang::String* _sheetName {  };
    int32_t _rowIndex {  };
    int32_t _colIndex {  };
    bool _isRowAbs {  };
    bool _isColAbs {  };
protected:
    void ctor(::java::lang::String* cellRef);
    void ctor(int32_t pRow, int32_t pCol);
    void ctor(int32_t pRow, int16_t pCol);
    void ctor(::org::apache::poi::ss::usermodel::Cell* cell);
    void ctor(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
    void ctor(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);

public:
    virtual int32_t getRow();
    virtual int16_t getCol();
    virtual bool isRowAbsolute();
    virtual bool isColAbsolute();
    virtual ::java::lang::String* getSheetName();
    static bool isPartAbsolute(::java::lang::String* part);
    static int32_t convertColStringToIndex(::java::lang::String* ref);
    static CellReference_NameType* classifyCellReference(::java::lang::String* str, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

private:
    static CellReference_NameType* validateNamedRangeName(::java::lang::String* str, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

public:
    static bool cellReferenceIsWithinRange(::java::lang::String* colStr, ::java::lang::String* rowStr, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);
    static bool isColumnWithinRange(::java::lang::String* colStr, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);
    static bool isRowWithinRange(::java::lang::String* rowStr, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);
    static bool isRowWithinRange(int32_t rowNum, ::org::apache::poi::ss::SpreadsheetVersion* ssVersion);

private:
    static CellReference_CellRefParts* separateRefParts(::java::lang::String* reference);
    static ::java::lang::String* parseSheetName(::java::lang::String* reference, int32_t indexOfSheetNameDelimiter);

public:
    static ::java::lang::String* convertNumToColString(int32_t col);
    virtual ::java::lang::String* formatAsString();
    ::java::lang::String* toString() override;
    virtual ::java::lang::StringArray* getCellRefParts();

public: /* package */
    virtual void appendCellReference(::java::lang::StringBuffer* sb);

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;

    // Generated
    CellReference(::java::lang::String* cellRef);
    CellReference(int32_t pRow, int32_t pCol);
    CellReference(int32_t pRow, int16_t pCol);
    CellReference(::org::apache::poi::ss::usermodel::Cell* cell);
    CellReference(int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
    CellReference(::java::lang::String* pSheetName, int32_t pRow, int32_t pCol, bool pAbsRow, bool pAbsCol);
protected:
    CellReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::regex::Pattern*& CELL_REF_PATTERN();
    static ::java::util::regex::Pattern*& STRICTLY_CELL_REF_PATTERN();
    static ::java::util::regex::Pattern*& COLUMN_REF_PATTERN();
    static ::java::util::regex::Pattern*& ROW_REF_PATTERN();
    static ::java::util::regex::Pattern*& NAMED_RANGE_NAME_PATTERN();
    virtual ::java::lang::Class* getClass0();
    friend class CellReference_NameType;
    friend class CellReference_CellRefParts;
};
