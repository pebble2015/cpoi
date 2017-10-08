// Generated from /POI/java/org/apache/poi/poifs/property/PropertyFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::property::PropertyFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public: /* package */
    static ::java::util::List* convertToProperties(::poi::poifs::storage::ListManagedBlockArray* blocks) /* throws(IOException) */;
    static void convertToProperties(::int8_tArray* data, ::java::util::List* properties) /* throws(IOException) */;

    // Generated

private:
    PropertyFactory();
protected:
    PropertyFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
