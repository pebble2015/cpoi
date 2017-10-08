// Generated from /POI/java/org/apache/poi/sl/usermodel/PictureData.java

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

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::PictureData_PictureType, ::java::lang::EnumArray > PictureData_PictureTypeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::PictureData_PictureType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static PictureData_PictureType *EMF;
    static PictureData_PictureType *WMF;
    static PictureData_PictureType *PICT;
    static PictureData_PictureType *JPEG;
    static PictureData_PictureType *PNG;
    static PictureData_PictureType *DIB;
    static PictureData_PictureType *GIF;
    static PictureData_PictureType *TIFF;
    static PictureData_PictureType *EPS;
    static PictureData_PictureType *BMP;
    static PictureData_PictureType *WPG;
    static PictureData_PictureType *WDP;

public:
    int32_t nativeId {  }, ooxmlId {  };
    ::java::lang::String* contentType {  };
    ::java::lang::String* extension {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::java::lang::String* contentType, ::java::lang::String* extension);

public:
    static PictureData_PictureType* forNativeID(int32_t nativeId);
    static PictureData_PictureType* forOoxmlID(int32_t ooxmlId);

    // Generated

private:
    PictureData_PictureType(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId, ::java::lang::String* contentType, ::java::lang::String* extension);
protected:
    PictureData_PictureType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static PictureData_PictureType* valueOf(::java::lang::String* a0);
    static PictureData_PictureTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PictureData;
};
