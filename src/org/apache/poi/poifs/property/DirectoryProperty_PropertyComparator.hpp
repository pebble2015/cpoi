// Generated from /POI/java/org/apache/poi/poifs/property/DirectoryProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::property::DirectoryProperty_PropertyComparator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Comparator
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(Property* o1, Property* o2);

    // Generated
    DirectoryProperty_PropertyComparator();
protected:
    DirectoryProperty_PropertyComparator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class DirectoryProperty;
};
