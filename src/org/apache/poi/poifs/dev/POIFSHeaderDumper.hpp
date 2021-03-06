// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSHeaderDumper.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/dev/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::poifs::dev::POIFSHeaderDumper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void main(::java::lang::StringArray* args) /* throws(Exception) */;
    static void viewFile(::java::lang::String* filename) /* throws(Exception) */;
    static void displayHeader(::poi::poifs::storage::HeaderBlock* header_block) /* throws(Exception) */;
    static void displayRawBlocksSummary(::poi::poifs::storage::RawDataBlockList* data_blocks) /* throws(Exception) */;
    static void displayBATReader(::java::lang::String* type, ::poi::poifs::storage::BlockAllocationTableReader* batReader) /* throws(Exception) */;
    static void displayPropertiesSummary(::poi::poifs::property::PropertyTable* properties);
    static void displayProperties(::poi::poifs::property::DirectoryProperty* prop, ::java::lang::String* indent);

    // Generated
    POIFSHeaderDumper();
protected:
    POIFSHeaderDumper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
