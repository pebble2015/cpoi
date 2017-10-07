// Generated from /POI/java/org/apache/poi/poifs/property/DirectoryProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/Parent.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::property::DirectoryProperty
    : public Property
    , public virtual Parent
    , public virtual ::java::lang::Iterable
{

public:
    typedef Property super;

private:
    ::java::util::List* _children {  };
    ::java::util::Set* _children_names {  };
protected:
    void ctor(::java::lang::String* name);
    void ctor(int32_t index, ::int8_tArray* array, int32_t offset);

public:
    virtual bool changeName(Property* property, ::java::lang::String* newName);
    virtual bool deleteChild(Property* property);
    bool isDirectory() override;

public: /* protected */
    void preWrite() override;

public:
    ::java::util::Iterator* getChildren() override;
    ::java::util::Iterator* iterator() override;
    void addChild(Property* property) /* throws(IOException) */ override;

    // Generated
    DirectoryProperty(::java::lang::String* name);

public: /* protected */
    DirectoryProperty(int32_t index, ::int8_tArray* array, int32_t offset);
protected:
    DirectoryProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual Child* getNextChild();
    virtual Child* getPreviousChild();
    void setNextChild(Child* child);
    void setPreviousChild(Child* child);

private:
    virtual ::java::lang::Class* getClass0();
    friend class DirectoryProperty_PropertyComparator;
};
