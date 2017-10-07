// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressBase.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase_CellPosition, ::java::lang::EnumArray > CellRangeAddressBase_CellPositionArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::util::CellRangeAddressBase_CellPosition final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CellRangeAddressBase_CellPosition *TOP;
    static CellRangeAddressBase_CellPosition *BOTTOM;
    static CellRangeAddressBase_CellPosition *LEFT;
    static CellRangeAddressBase_CellPosition *RIGHT;
    static CellRangeAddressBase_CellPosition *INSIDE;

    // Generated

public:
    CellRangeAddressBase_CellPosition(::java::lang::String* name, int ordinal);
protected:
    CellRangeAddressBase_CellPosition(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CellRangeAddressBase_CellPosition* valueOf(::java::lang::String* a0);
    static CellRangeAddressBase_CellPositionArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellRangeAddressBase;
};
