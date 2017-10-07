// Generated from /POI/java/org/apache/poi/poifs/storage/PropertyBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/dev/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace dev
                {
typedef ::SubArray< ::org::apache::poi::poifs::dev::POIFSViewable, ::java::lang::ObjectArray > POIFSViewableArray;
                } // dev

                namespace property
                {
typedef ::SubArray< ::org::apache::poi::poifs::property::Child, ::java::lang::ObjectArray > ChildArray;
typedef ::SubArray< ::org::apache::poi::poifs::property::Property, ::java::lang::ObjectArray, ChildArray, ::org::apache::poi::poifs::dev::POIFSViewableArray > PropertyArray;
                } // property

                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::storage::PropertyBlock final
    : public BigBlock
{

public:
    typedef BigBlock super;

private:
    ::org::apache::poi::poifs::property::PropertyArray* _properties {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::property::PropertyArray* properties, int32_t offset);

public:
    static BlockWritableArray* createPropertyBlockArray_(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* properties);

public: /* package */
    void writeData(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated

private:
    PropertyBlock(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::org::apache::poi::poifs::property::PropertyArray* properties, int32_t offset);
protected:
    PropertyBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PropertyBlock_createPropertyBlockArray_1;
};
