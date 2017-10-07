// Generated from /POI/java/org/apache/poi/ss/usermodel/PageOrder.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::PageOrder, ::java::lang::EnumArray > PageOrderArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::PageOrder final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PageOrder *DOWN_THEN_OVER;
    static PageOrder *OVER_THEN_DOWN;

private:
    int32_t order {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t order);

public:
    int32_t getValue();

private:
    static PageOrderArray* _table_;

public:
    static PageOrder* valueOf(int32_t value);

    // Generated

private:
    PageOrder(::java::lang::String* name, int ordinal, int32_t order);
protected:
    PageOrder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static PageOrderArray*& _table();

public:
    static PageOrder* valueOf(::java::lang::String* a0);
    static PageOrderArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
