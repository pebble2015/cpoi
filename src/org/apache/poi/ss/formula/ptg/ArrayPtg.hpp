// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ArrayPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

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

class poi::ss::formula::ptg::ArrayPtg final
    : public Ptg
{

public:
    typedef Ptg super;
    static constexpr int8_t sid { int8_t(32) };

private:
    static constexpr int32_t RESERVED_FIELD_LEN { int32_t(7) };

public:
    static constexpr int32_t PLAIN_TOKEN_SIZE { int32_t(8) };

private:
    int32_t _reserved0Int {  };
    int32_t _reserved1Short {  };
    int32_t _reserved2Byte {  };
    int32_t _nColumns {  };
    int32_t _nRows {  };
    ::java::lang::ObjectArray* _arrayValues {  };
protected:
    void ctor(int32_t reserved0, int32_t reserved1, int32_t reserved2, int32_t nColumns, int32_t nRows, ::java::lang::ObjectArray* arrayValues);
    void ctor(::java::lang::ObjectArrayArray* values2d);

public:
    ::java::lang::ObjectArrayArray* getTokenArrayValues();
    bool isBaseToken() override;
    ::java::lang::String* toString() override;

public: /* package */
    int32_t getValueIndex(int32_t colIx, int32_t rowIx);

public:
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t writeTokenValueBytes(::poi::util::LittleEndianOutput* out);
    int32_t getRowCount();
    int32_t getColumnCount();
    int32_t getSize() override;
    ::java::lang::String* toFormulaString() override;

private:
    static ::java::lang::String* getConstantText(::java::lang::Object* o);

public:
    int8_t getDefaultOperandClass() override;

    // Generated

public: /* package */
    ArrayPtg(int32_t reserved0, int32_t reserved1, int32_t reserved2, int32_t nColumns, int32_t nRows, ::java::lang::ObjectArray* arrayValues);

public:
    ArrayPtg(::java::lang::ObjectArrayArray* values2d);
protected:
    ArrayPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ArrayPtg_Initial;
};
