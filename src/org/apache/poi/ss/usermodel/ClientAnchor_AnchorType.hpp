// Generated from /POI/java/org/apache/poi/ss/usermodel/ClientAnchor.java

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
typedef ::SubArray< ::org::apache::poi::ss::usermodel::ClientAnchor_AnchorType, ::java::lang::EnumArray > ClientAnchor_AnchorTypeArray;
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::usermodel::ClientAnchor_AnchorType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ClientAnchor_AnchorType *MOVE_AND_RESIZE;
    static ClientAnchor_AnchorType *DONT_MOVE_DO_RESIZE;
    static ClientAnchor_AnchorType *MOVE_DONT_RESIZE;
    static ClientAnchor_AnchorType *DONT_MOVE_AND_RESIZE;

public:
    int16_t value {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t value);

public:
    static ClientAnchor_AnchorType* byId(int32_t value);

    // Generated

private:
    ClientAnchor_AnchorType(::java::lang::String* name, int ordinal, int32_t value);
protected:
    ClientAnchor_AnchorType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ClientAnchor_AnchorType* valueOf(::java::lang::String* a0);
    static ClientAnchor_AnchorTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ClientAnchor;
};
