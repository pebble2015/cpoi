// Generated from /POI/java/org/apache/poi/sl/usermodel/AutoNumberingScheme.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::AutoNumberingScheme, ::java::lang::EnumArray > AutoNumberingSchemeArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::AutoNumberingScheme final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static AutoNumberingScheme *alphaLcParenBoth;
    static AutoNumberingScheme *alphaUcParenBoth;
    static AutoNumberingScheme *alphaLcParenRight;
    static AutoNumberingScheme *alphaUcParenRight;
    static AutoNumberingScheme *alphaLcPeriod;
    static AutoNumberingScheme *alphaUcPeriod;
    static AutoNumberingScheme *arabicParenBoth;
    static AutoNumberingScheme *arabicParenRight;
    static AutoNumberingScheme *arabicPeriod;
    static AutoNumberingScheme *arabicPlain;
    static AutoNumberingScheme *romanLcParenBoth;
    static AutoNumberingScheme *romanUcParenBoth;
    static AutoNumberingScheme *romanLcParenRight;
    static AutoNumberingScheme *romanUcParenRight;
    static AutoNumberingScheme *romanLcPeriod;
    static AutoNumberingScheme *romanUcPeriod;
    static AutoNumberingScheme *circleNumDbPlain;
    static AutoNumberingScheme *circleNumWdBlackPlain;
    static AutoNumberingScheme *circleNumWdWhitePlain;
    static AutoNumberingScheme *arabicDbPeriod;
    static AutoNumberingScheme *arabicDbPlain;
    static AutoNumberingScheme *ea1ChsPeriod;
    static AutoNumberingScheme *ea1ChsPlain;
    static AutoNumberingScheme *ea1ChtPeriod;
    static AutoNumberingScheme *ea1ChtPlain;
    static AutoNumberingScheme *ea1JpnChsDbPeriod;
    static AutoNumberingScheme *ea1JpnKorPlain;
    static AutoNumberingScheme *ea1JpnKorPeriod;
    static AutoNumberingScheme *arabic1Minus;
    static AutoNumberingScheme *arabic2Minus;
    static AutoNumberingScheme *hebrew2Minus;
    static AutoNumberingScheme *thaiAlphaPeriod;
    static AutoNumberingScheme *thaiAlphaParenRight;
    static AutoNumberingScheme *thaiAlphaParenBoth;
    static AutoNumberingScheme *thaiNumPeriod;
    static AutoNumberingScheme *thaiNumParenRight;
    static AutoNumberingScheme *thaiNumParenBoth;
    static AutoNumberingScheme *hindiAlphaPeriod;
    static AutoNumberingScheme *hindiNumPeriod;
    static AutoNumberingScheme *hindiNumParenRight;
    static AutoNumberingScheme *hindiAlpha1Period;

public:
    int32_t nativeId {  }, ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);

public:
    static AutoNumberingScheme* forNativeID(int32_t nativeId);
    static AutoNumberingScheme* forOoxmlID(int32_t ooxmlId);
    ::java::lang::String* getDescription();
    ::java::lang::String* format(int32_t value);

private:
    ::java::lang::String* formatSeperator(::java::lang::String* cased);
    ::java::lang::String* formatCase(::java::lang::String* index);
    static ::java::lang::String* ARABIC_LIST_;
    static ::java::lang::String* ALPHA_LIST_;
    static ::java::lang::String* WINGDINGS_WHITE_LIST_;
    static ::java::lang::String* WINGDINGS_BLACK_LIST_;
    static ::java::lang::String* CIRCLE_DB_LIST_;
    ::java::lang::String* formatIndex(int32_t value);
    static ::java::lang::String* getIndexedList(int32_t val, ::java::lang::String* list, bool oneBased);
    static void addIndexedChar(int32_t val, ::java::lang::String* list, bool oneBased, ::java::lang::StringBuilder* sb);
    ::java::lang::String* formatRomanIndex(int32_t value);

    // Generated
    AutoNumberingScheme(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId);
protected:
    AutoNumberingScheme(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& ARABIC_LIST();
    static ::java::lang::String*& ALPHA_LIST();
    static ::java::lang::String*& WINGDINGS_WHITE_LIST();
    static ::java::lang::String*& WINGDINGS_BLACK_LIST();
    static ::java::lang::String*& CIRCLE_DB_LIST();

public:
    static AutoNumberingScheme* valueOf(::java::lang::String* a0);
    static AutoNumberingSchemeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
