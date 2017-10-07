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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::Formula
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
    static Formula* read(int32_t encodedTokenLen, ::org::apache::poi::util::LittleEndianInput* in);
    static Formula* read(int32_t encodedTokenLen, ::org::apache::poi::util::LittleEndianInput* in, int32_t totalEncodedLen);
    virtual ::org::apache::poi::ss::formula::ptg::PtgArray* getTokens();
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    virtual void serializeTokens(::org::apache::poi::util::LittleEndianOutput* out);
    virtual void serializeArrayConstantData(::org::apache::poi::util::LittleEndianOutput* out);
    virtual int32_t getEncodedSize();
    virtual int32_t getEncodedTokenSize();
    static Formula* create(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    static ::org::apache::poi::ss::formula::ptg::PtgArray* getTokens(Formula* formula);
    virtual Formula* copy();
    virtual ::org::apache::poi::ss::util::CellReference* getExpReference();
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
