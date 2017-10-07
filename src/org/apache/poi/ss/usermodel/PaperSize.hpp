// Generated from /POI/java/org/apache/poi/ss/usermodel/PaperSize.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
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
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::PaperSize, ::java::lang::EnumArray > PaperSizeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::PaperSize final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PaperSize *LETTER_PAPER;
    static PaperSize *LETTER_SMALL_PAPER;
    static PaperSize *TABLOID_PAPER;
    static PaperSize *LEDGER_PAPER;
    static PaperSize *LEGAL_PAPER;
    static PaperSize *STATEMENT_PAPER;
    static PaperSize *EXECUTIVE_PAPER;
    static PaperSize *A3_PAPER;
    static PaperSize *A4_PAPER;
    static PaperSize *A4_SMALL_PAPER;
    static PaperSize *A5_PAPER;
    static PaperSize *B4_PAPER;
    static PaperSize *B5_PAPER;
    static PaperSize *FOLIO_PAPER;
    static PaperSize *QUARTO_PAPER;
    static PaperSize *STANDARD_PAPER_10_14;
    static PaperSize *STANDARD_PAPER_11_17;

    // Generated

public:
    PaperSize(::java::lang::String* name, int ordinal);
protected:
    PaperSize(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static PaperSize* valueOf(::java::lang::String* a0);
    static PaperSizeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
