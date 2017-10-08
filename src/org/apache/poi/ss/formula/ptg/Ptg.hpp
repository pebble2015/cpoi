// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ptg.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::ptg::Ptg
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static PtgArray* EMPTY_PTG_ARRAY_;

public:
    static PtgArray* readTokens(int32_t size, ::poi::util::LittleEndianInput* in);
    static Ptg* createPtg(::poi::util::LittleEndianInput* in);

private:
    static Ptg* createClassifiedPtg(int8_t id, ::poi::util::LittleEndianInput* in);
    static Ptg* createBasePtg(int8_t id, ::poi::util::LittleEndianInput* in);
    static PtgArray* toPtgArray_(::java::util::List* l);

public:
    static int32_t getEncodedSize(PtgArray* ptgs);
    static int32_t getEncodedSizeWithoutArrayData(PtgArray* ptgs);
    static int32_t serializePtgs(PtgArray* ptgs, ::int8_tArray* array, int32_t offset);
    virtual int32_t getSize() = 0;
    virtual void write(::poi::util::LittleEndianOutput* out) = 0;
    virtual ::java::lang::String* toFormulaString() = 0;
    ::java::lang::String* toString() override;
    static constexpr int8_t CLASS_REF { int8_t(0) };
    static constexpr int8_t CLASS_VALUE { int8_t(32) };
    static constexpr int8_t CLASS_ARRAY { int8_t(64) };

private:
    int8_t ptgClass {  };

public:
    void setClass(int8_t thePtgClass);
    int8_t getPtgClass();
    char16_t getRVAType();
    virtual int8_t getDefaultOperandClass() = 0;
    virtual bool isBaseToken() = 0;
    static bool doesFormulaReferToDeletedCell(PtgArray* ptgs);

private:
    static bool isDeletedCellRef(Ptg* ptg);

    // Generated

public:
    Ptg();
protected:
    void ctor();
    Ptg(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    static PtgArray*& EMPTY_PTG_ARRAY();

private:
    virtual ::java::lang::Class* getClass0();
};
