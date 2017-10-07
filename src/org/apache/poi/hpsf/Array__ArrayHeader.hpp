// Generated from /POI/java/org/apache/poi/hpsf/Array.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::Array__ArrayDimension, ::java::lang::ObjectArray > Array__ArrayDimensionArray;
            } // hpsf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hpsf::Array__ArrayHeader
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Array__ArrayDimensionArray* _dimensions {  };
    int32_t _type {  };

public: /* package */
    virtual void read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual int64_t getNumberOfScalarValues();
    virtual int32_t getType();

    // Generated

public:
    Array__ArrayHeader();
protected:
    Array__ArrayHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Array_;
    friend class Array__ArrayDimension;
};
