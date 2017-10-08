// Generated from /POI/java/org/apache/poi/ss/usermodel/PaperSize.java
#include <org/apache/poi/ss/usermodel/PaperSize.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::PaperSize, ::java::lang::EnumArray > PaperSizeArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::PaperSize::PaperSize(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::PaperSize::PaperSize(::java::lang::String* name, int ordinal)
    : PaperSize(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::LETTER_PAPER = new ::poi::ss::usermodel::PaperSize(u"LETTER_PAPER"_j, 0);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::LETTER_SMALL_PAPER = new ::poi::ss::usermodel::PaperSize(u"LETTER_SMALL_PAPER"_j, 1);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::TABLOID_PAPER = new ::poi::ss::usermodel::PaperSize(u"TABLOID_PAPER"_j, 2);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::LEDGER_PAPER = new ::poi::ss::usermodel::PaperSize(u"LEDGER_PAPER"_j, 3);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::LEGAL_PAPER = new ::poi::ss::usermodel::PaperSize(u"LEGAL_PAPER"_j, 4);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::STATEMENT_PAPER = new ::poi::ss::usermodel::PaperSize(u"STATEMENT_PAPER"_j, 5);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::EXECUTIVE_PAPER = new ::poi::ss::usermodel::PaperSize(u"EXECUTIVE_PAPER"_j, 6);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::A3_PAPER = new ::poi::ss::usermodel::PaperSize(u"A3_PAPER"_j, 7);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::A4_PAPER = new ::poi::ss::usermodel::PaperSize(u"A4_PAPER"_j, 8);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::A4_SMALL_PAPER = new ::poi::ss::usermodel::PaperSize(u"A4_SMALL_PAPER"_j, 9);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::A5_PAPER = new ::poi::ss::usermodel::PaperSize(u"A5_PAPER"_j, 10);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::B4_PAPER = new ::poi::ss::usermodel::PaperSize(u"B4_PAPER"_j, 11);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::B5_PAPER = new ::poi::ss::usermodel::PaperSize(u"B5_PAPER"_j, 12);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::FOLIO_PAPER = new ::poi::ss::usermodel::PaperSize(u"FOLIO_PAPER"_j, 13);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::QUARTO_PAPER = new ::poi::ss::usermodel::PaperSize(u"QUARTO_PAPER"_j, 14);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::STANDARD_PAPER_10_14 = new ::poi::ss::usermodel::PaperSize(u"STANDARD_PAPER_10_14"_j, 15);
poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::STANDARD_PAPER_11_17 = new ::poi::ss::usermodel::PaperSize(u"STANDARD_PAPER_11_17"_j, 16);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::PaperSize::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.PaperSize", 37);
    return c;
}

poi::ss::usermodel::PaperSize* poi::ss::usermodel::PaperSize::valueOf(::java::lang::String* a0)
{
    if(A3_PAPER->toString()->equals(a0))
        return A3_PAPER;
    if(A4_PAPER->toString()->equals(a0))
        return A4_PAPER;
    if(A4_SMALL_PAPER->toString()->equals(a0))
        return A4_SMALL_PAPER;
    if(A5_PAPER->toString()->equals(a0))
        return A5_PAPER;
    if(B4_PAPER->toString()->equals(a0))
        return B4_PAPER;
    if(B5_PAPER->toString()->equals(a0))
        return B5_PAPER;
    if(EXECUTIVE_PAPER->toString()->equals(a0))
        return EXECUTIVE_PAPER;
    if(FOLIO_PAPER->toString()->equals(a0))
        return FOLIO_PAPER;
    if(LEDGER_PAPER->toString()->equals(a0))
        return LEDGER_PAPER;
    if(LEGAL_PAPER->toString()->equals(a0))
        return LEGAL_PAPER;
    if(LETTER_PAPER->toString()->equals(a0))
        return LETTER_PAPER;
    if(LETTER_SMALL_PAPER->toString()->equals(a0))
        return LETTER_SMALL_PAPER;
    if(QUARTO_PAPER->toString()->equals(a0))
        return QUARTO_PAPER;
    if(STANDARD_PAPER_10_14->toString()->equals(a0))
        return STANDARD_PAPER_10_14;
    if(STANDARD_PAPER_11_17->toString()->equals(a0))
        return STANDARD_PAPER_11_17;
    if(STATEMENT_PAPER->toString()->equals(a0))
        return STATEMENT_PAPER;
    if(TABLOID_PAPER->toString()->equals(a0))
        return TABLOID_PAPER;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::PaperSizeArray* poi::ss::usermodel::PaperSize::values()
{
    return new poi::ss::usermodel::PaperSizeArray({
        A3_PAPER,
        A4_PAPER,
        A4_SMALL_PAPER,
        A5_PAPER,
        B4_PAPER,
        B5_PAPER,
        EXECUTIVE_PAPER,
        FOLIO_PAPER,
        LEDGER_PAPER,
        LEGAL_PAPER,
        LETTER_PAPER,
        LETTER_SMALL_PAPER,
        QUARTO_PAPER,
        STANDARD_PAPER_10_14,
        STANDARD_PAPER_11_17,
        STATEMENT_PAPER,
        TABLOID_PAPER,
    });
}

java::lang::Class* poi::ss::usermodel::PaperSize::getClass0()
{
    return class_();
}

