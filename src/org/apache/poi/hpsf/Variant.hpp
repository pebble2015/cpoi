// Generated from /POI/java/org/apache/poi/hpsf/Variant.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::hpsf::Variant
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t VT_EMPTY { int32_t(0) };
    static constexpr int32_t VT_NULL { int32_t(1) };
    static constexpr int32_t VT_I2 { int32_t(2) };
    static constexpr int32_t VT_I4 { int32_t(3) };
    static constexpr int32_t VT_R4 { int32_t(4) };
    static constexpr int32_t VT_R8 { int32_t(5) };
    static constexpr int32_t VT_CY { int32_t(6) };
    static constexpr int32_t VT_DATE { int32_t(7) };
    static constexpr int32_t VT_BSTR { int32_t(8) };
    static constexpr int32_t VT_DISPATCH { int32_t(9) };
    static constexpr int32_t VT_ERROR { int32_t(10) };
    static constexpr int32_t VT_BOOL { int32_t(11) };
    static constexpr int32_t VT_VARIANT { int32_t(12) };
    static constexpr int32_t VT_UNKNOWN { int32_t(13) };
    static constexpr int32_t VT_DECIMAL { int32_t(14) };
    static constexpr int32_t VT_I1 { int32_t(16) };
    static constexpr int32_t VT_UI1 { int32_t(17) };
    static constexpr int32_t VT_UI2 { int32_t(18) };
    static constexpr int32_t VT_UI4 { int32_t(19) };
    static constexpr int32_t VT_I8 { int32_t(20) };
    static constexpr int32_t VT_UI8 { int32_t(21) };
    static constexpr int32_t VT_INT { int32_t(22) };
    static constexpr int32_t VT_UINT { int32_t(23) };
    static constexpr int32_t VT_VOID { int32_t(24) };
    static constexpr int32_t VT_HRESULT { int32_t(25) };
    static constexpr int32_t VT_PTR { int32_t(26) };
    static constexpr int32_t VT_SAFEARRAY { int32_t(27) };
    static constexpr int32_t VT_CARRAY { int32_t(28) };
    static constexpr int32_t VT_USERDEFINED { int32_t(29) };
    static constexpr int32_t VT_LPSTR { int32_t(30) };
    static constexpr int32_t VT_LPWSTR { int32_t(31) };
    static constexpr int32_t VT_FILETIME { int32_t(64) };
    static constexpr int32_t VT_BLOB { int32_t(65) };
    static constexpr int32_t VT_STREAM { int32_t(66) };
    static constexpr int32_t VT_STORAGE { int32_t(67) };
    static constexpr int32_t VT_STREAMED_OBJECT { int32_t(68) };
    static constexpr int32_t VT_STORED_OBJECT { int32_t(69) };
    static constexpr int32_t VT_BLOB_OBJECT { int32_t(70) };
    static constexpr int32_t VT_CF { int32_t(71) };
    static constexpr int32_t VT_CLSID { int32_t(72) };
    static constexpr int32_t VT_VERSIONED_STREAM { int32_t(73) };
    static constexpr int32_t VT_VECTOR { int32_t(4096) };
    static constexpr int32_t VT_ARRAY { int32_t(8192) };
    static constexpr int32_t VT_BYREF { int32_t(16384) };
    static constexpr int32_t VT_RESERVED { int32_t(32768) };
    static constexpr int32_t VT_ILLEGAL { int32_t(65535) };
    static constexpr int32_t VT_ILLEGALMASKED { int32_t(4095) };
    static constexpr int32_t VT_TYPEMASK { int32_t(4095) };

private:
    static ::java::util::Map* numberToName_;
    static ::java::util::Map* numberToLength_;
    static ::java::lang::Integer* LENGTH_UNKNOWN_;
    static ::java::lang::Integer* LENGTH_VARIABLE_;
    static ::java::lang::Integer* LENGTH_0_;
    static ::java::lang::Integer* LENGTH_2_;
    static ::java::lang::Integer* LENGTH_4_;
    static ::java::lang::Integer* LENGTH_8_;
    static ::java::lang::ObjectArrayArray* NUMBER_TO_NAME_LIST_;

public:
    static ::java::lang::String* getVariantName(int64_t variantType);
    static int32_t getVariantLength(int64_t variantType);

    // Generated
    Variant();
protected:
    Variant(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& numberToName();
    static ::java::util::Map*& numberToLength();

public:
    static ::java::lang::Integer*& LENGTH_UNKNOWN();
    static ::java::lang::Integer*& LENGTH_VARIABLE();
    static ::java::lang::Integer*& LENGTH_0();
    static ::java::lang::Integer*& LENGTH_2();
    static ::java::lang::Integer*& LENGTH_4();
    static ::java::lang::Integer*& LENGTH_8();

private:
    static ::java::lang::ObjectArrayArray*& NUMBER_TO_NAME_LIST();
    virtual ::java::lang::Class* getClass0();
};
