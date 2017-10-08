// Generated from /POI/java/org/apache/poi/ss/usermodel/PrintCellComments.java

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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::PrintCellComments, ::java::lang::EnumArray > PrintCellCommentsArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::PrintCellComments final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PrintCellComments *NONE;
    static PrintCellComments *AS_DISPLAYED;
    static PrintCellComments *AT_END;

private:
    int32_t comments {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t comments);

public:
    int32_t getValue();

private:
    static PrintCellCommentsArray* _table_;

public:
    static PrintCellComments* valueOf(int32_t value);

    // Generated

private:
    PrintCellComments(::java::lang::String* name, int ordinal, int32_t comments);
protected:
    PrintCellComments(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static PrintCellCommentsArray*& _table();

public:
    static PrintCellComments* valueOf(::java::lang::String* a0);
    static PrintCellCommentsArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
