// Generated from /POI/java/org/apache/poi/ss/formula/Formula.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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

class poi::ss::formula::Formula
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static Formula* EMPTY_;
    ::int8_tArray* _byteEncoding {  };
    int32_t _encodedTokenLen {  };
protected:
    void ctor(::int8_tArray* byteEncoding, int32_t encodedTokenLen);

public:
    static Formula* read(int32_t encodedTokenLen, ::poi::util::LittleEndianInput* in);
    static Formula* read(int32_t encodedTokenLen, ::poi::util::LittleEndianInput* in, int32_t totalEncodedLen);
    virtual ::poi::ss::formula::ptg::PtgArray* getTokens();
    virtual void serialize(::poi::util::LittleEndianOutput* out);
    virtual void serializeTokens(::poi::util::LittleEndianOutput* out);
    virtual void serializeArrayConstantData(::poi::util::LittleEndianOutput* out);
    virtual int32_t getEncodedSize();
    virtual int32_t getEncodedTokenSize();
    static Formula* create(::poi::ss::formula::ptg::PtgArray* ptgs);
    static ::poi::ss::formula::ptg::PtgArray* getTokens(Formula* formula);
    virtual Formula* copy();
    virtual ::poi::ss::util::CellReference* getExpReference();
    virtual bool isSame(Formula* other);

    // Generated

private:
    Formula(::int8_tArray* byteEncoding, int32_t encodedTokenLen);
protected:
    Formula(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static Formula*& EMPTY();
    virtual ::java::lang::Class* getClass0();
};
