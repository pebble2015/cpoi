// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AttrPtg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::ss::formula::ptg::AttrPtg final
    : public ControlPtg
{

public:
    typedef ControlPtg super;
    static constexpr int8_t sid { int8_t(25) };

private:
    static constexpr int32_t SIZE { int32_t(4) };
    int8_t _options {  };
    int16_t _data {  };
    ::int32_tArray* _jumpTable {  };
    int32_t _chooseFuncOffset {  };
    static ::poi::util::BitField* semiVolatile_;
    static ::poi::util::BitField* optiIf_;
    static ::poi::util::BitField* optiChoose_;
    static ::poi::util::BitField* optiSkip_;
    static ::poi::util::BitField* optiSum_;
    static ::poi::util::BitField* baxcel_;
    static ::poi::util::BitField* space_;
    static AttrPtg* SUM_;
protected:
    void ctor(::poi::util::LittleEndianInput* in);
    void ctor(int32_t options, int32_t data, ::int32_tArray* jt, int32_t chooseFuncOffset);

public:
    static AttrPtg* createSpace(int32_t type, int32_t count);
    static AttrPtg* createIf(int32_t dist);
    static AttrPtg* createSkip(int32_t dist);
    static AttrPtg* getSumSingle();
    bool isSemiVolatile();
    bool isOptimizedIf();
    bool isOptimizedChoose();
    bool isSum();
    bool isSkip();

private:
    bool isBaxcel();

public:
    bool isSpace();
    int16_t getData();
    ::int32_tArray* getJumpTable();
    int32_t getChooseFuncOffset();
    ::java::lang::String* toString() override;
    void write(::poi::util::LittleEndianOutput* out) override;
    int32_t getSize() override;
    ::java::lang::String* toFormulaString(::java::lang::StringArray* operands);
    int32_t getNumberOfOperands();
    int32_t getType();
    ::java::lang::String* toFormulaString() override;

    // Generated
    AttrPtg(::poi::util::LittleEndianInput* in);

private:
    AttrPtg(int32_t options, int32_t data, ::int32_tArray* jt, int32_t chooseFuncOffset);
protected:
    AttrPtg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::BitField*& semiVolatile();
    static ::poi::util::BitField*& optiIf();
    static ::poi::util::BitField*& optiChoose();
    static ::poi::util::BitField*& optiSkip();
    static ::poi::util::BitField*& optiSum();
    static ::poi::util::BitField*& baxcel();
    static ::poi::util::BitField*& space();

public:
    static AttrPtg*& SUM();

private:
    virtual ::java::lang::Class* getClass0();
    friend class AttrPtg_SpaceType;
};
