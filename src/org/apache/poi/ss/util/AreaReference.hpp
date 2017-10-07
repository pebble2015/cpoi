// Generated from /POI/java/org/apache/poi/ss/util/AreaReference.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::AreaReference, ::java::lang::ObjectArray > AreaReferenceArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellReference, ::java::lang::ObjectArray > CellReferenceArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::util::AreaReference
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr char16_t SHEET_NAME_DELIMITER { u'!' };
    static constexpr char16_t CELL_DELIMITER { u':' };
    static constexpr char16_t SPECIAL_NAME_DELIMITER { u'\'' };
    static ::org::apache::poi::ss::SpreadsheetVersion* DEFAULT_SPREADSHEET_VERSION_;
    CellReference* _firstCell {  };
    CellReference* _lastCell {  };
    bool _isSingleCell {  };
    ::org::apache::poi::ss::SpreadsheetVersion* _version {  };
protected:
    void ctor(::java::lang::String* reference, ::org::apache::poi::ss::SpreadsheetVersion* version);

private:
    static bool isPlainColumn(::java::lang::String* refPart);
protected:
    void ctor(CellReference* topLeft, CellReference* botRight);
    void ctor(CellReference* topLeft, CellReference* botRight, ::org::apache::poi::ss::SpreadsheetVersion* version);

public:
    static bool isContiguous(::java::lang::String* reference);
    static AreaReference* getWholeRow(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* start, ::java::lang::String* end);
    static AreaReference* getWholeColumn(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* start, ::java::lang::String* end);
    static bool isWholeColumnReference(::org::apache::poi::ss::SpreadsheetVersion* version, CellReference* topLeft, CellReference* botRight);
    virtual bool isWholeColumnReference();
    static AreaReferenceArray* generateContiguous(::java::lang::String* reference);
    static AreaReferenceArray* generateContiguous(::org::apache::poi::ss::SpreadsheetVersion* version, ::java::lang::String* reference);
    virtual bool isSingleCell();
    virtual CellReference* getFirstCell();
    virtual CellReference* getLastCell();
    virtual CellReferenceArray* getAllReferencedCells();
    virtual ::java::lang::String* formatAsString();
    ::java::lang::String* toString() override;

private:
    static ::java::lang::StringArray* separateAreaRefs(::java::lang::String* reference);

    // Generated

public:
    AreaReference(::java::lang::String* reference, ::org::apache::poi::ss::SpreadsheetVersion* version);
    AreaReference(CellReference* topLeft, CellReference* botRight);
    AreaReference(CellReference* topLeft, CellReference* botRight, ::org::apache::poi::ss::SpreadsheetVersion* version);
protected:
    AreaReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::ss::SpreadsheetVersion*& DEFAULT_SPREADSHEET_VERSION();
    virtual ::java::lang::Class* getClass0();
};
