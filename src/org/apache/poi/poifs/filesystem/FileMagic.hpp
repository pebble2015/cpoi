// Generated from /POI/java/org/apache/poi/poifs/filesystem/FileMagic.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
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
            namespace poifs
            {
                namespace filesystem
                {
typedef ::SubArray< ::org::apache::poi::poifs::filesystem::FileMagic, ::java::lang::EnumArray > FileMagicArray;
                } // filesystem
            } // poifs
        } // poi
    } // apache
} // org

namespace 
{
typedef ::SubArray< ::int8_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int8_tArrayArray;
} // 

struct default_init_tag;

class org::apache::poi::poifs::filesystem::FileMagic final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static FileMagic *OLE2;
    static FileMagic *OOXML;
    static FileMagic *XML;
    static FileMagic *BIFF2;
    static FileMagic *BIFF3;
    static FileMagic *BIFF4;
    static FileMagic *MSWRITE;
    static FileMagic *RTF;
    static FileMagic *PDF;
    static FileMagic *UNKNOWN;
    ::int8_tArrayArray* magic {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int64_t magic);
    void ctor(::java::lang::String* name, int ordinal, ::int8_tArrayArray*/*...*/ magic);
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* magic);

public:
    static FileMagic* valueOf(::int8_tArray* magic);
    static FileMagic* valueOf(::java::io::InputStream* inp) /* throws(IOException) */;
    static ::java::io::InputStream* prepareToCheckMagic(::java::io::InputStream* stream);

    // Generated

private:
    FileMagic(::java::lang::String* name, int ordinal, int64_t magic);
    FileMagic(::java::lang::String* name, int ordinal, ::int8_tArrayArray* magic);
    FileMagic(::java::lang::String* name, int ordinal, ::java::lang::String* magic);
protected:
    FileMagic(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);
    static FileMagic* valueOf(::java::lang::String* a0);
    static FileMagicArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
