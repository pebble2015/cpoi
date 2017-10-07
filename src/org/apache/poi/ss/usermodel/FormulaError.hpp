// Generated from /POI/java/org/apache/poi/ss/usermodel/FormulaError.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FormulaError, ::java::lang::EnumArray > FormulaErrorArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::FormulaError final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FormulaError *_NO_ERROR;
    static FormulaError *NULL_;
    static FormulaError *DIV0;
    static FormulaError *VALUE;
    static FormulaError *REF;
    static FormulaError *NAME;
    static FormulaError *NUM;
    static FormulaError *NA;
    static FormulaError *CIRCULAR_REF;
    static FormulaError *FUNCTION_NOT_IMPLEMENTED;

private:
    int8_t type {  };
    int32_t longType {  };
    ::java::lang::String* repr {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t type, ::java::lang::String* repr);

public:
    int8_t getCode();
    int32_t getLongCode();
    ::java::lang::String* getString();

private:
    static ::java::util::Map* smap_;
    static ::java::util::Map* bmap_;
    static ::java::util::Map* imap_;

public:
    static bool isValidCode(int32_t errorCode);
    static FormulaError* forInt(int8_t type) /* throws(IllegalArgumentException) */;
    static FormulaError* forInt(int32_t type) /* throws(IllegalArgumentException) */;
    static FormulaError* forString(::java::lang::String* code) /* throws(IllegalArgumentException) */;

    // Generated

private:
    FormulaError(::java::lang::String* name, int ordinal, int32_t type, ::java::lang::String* repr);
protected:
    FormulaError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& smap();
    static ::java::util::Map*& bmap();
    static ::java::util::Map*& imap();

public:
    static FormulaError* valueOf(::java::lang::String* a0);
    static FormulaErrorArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
