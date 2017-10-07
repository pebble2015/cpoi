// Generated from /POI/java/org/apache/poi/ss/usermodel/CellType.java

#pragma once

#include <fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::CellType, ::java::lang::EnumArray > CellTypeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::CellType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CellType *_NONE;
    static CellType *NUMERIC;
    static CellType *STRING;
    static CellType *FORMULA;
    static CellType *BLANK;
    static CellType *BOOLEAN;
    static CellType *ERROR;

private:
    int32_t code {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t code);

public:
    static CellType* forInt(int32_t code);
    int32_t getCode();

    // Generated

private:
    CellType(::java::lang::String* name, int ordinal, int32_t code);
protected:
    CellType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CellType* valueOf(::java::lang::String* a0);
    static CellTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
