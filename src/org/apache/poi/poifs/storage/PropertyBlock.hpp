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
namespace poi
{
    namespace poifs
    {
        namespace dev
        {
typedef ::SubArray< ::poi::poifs::dev::POIFSViewable, ::java::lang::ObjectArray > POIFSViewableArray;
        } // dev

        namespace property
        {
typedef ::SubArray< ::poi::poifs::property::Child, ::java::lang::ObjectArray > ChildArray;
typedef ::SubArray< ::poi::poifs::property::Property, ::java::lang::ObjectArray, ChildArray, ::poi::poifs::dev::POIFSViewableArray > PropertyArray;
        } // property

        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::storage::PropertyBlock final
    : public BigBlock
{

public:
    typedef BigBlock super;

private:
    ::poi::poifs::property::PropertyArray* _properties {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::property::PropertyArray* properties, int32_t offset);

public:
    static BlockWritableArray* createPropertyBlockArray_(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* properties);

public: /* package */
    void writeData(::java::io::OutputStream* stream) /* throws(IOException) */ override;

    // Generated

private:
    PropertyBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::property::PropertyArray* properties, int32_t offset);
protected:
    PropertyBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PropertyBlock_createPropertyBlockArray_1;
};
