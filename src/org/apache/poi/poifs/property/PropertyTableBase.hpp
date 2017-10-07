// Generated from /POI/java/org/apache/poi/poifs/property/PropertyTableBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/BATManaged.hpp>

struct default_init_tag;

class org::apache::poi::poifs::property::PropertyTableBase
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::poifs::filesystem::BATManaged
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* _logger_;
    ::org::apache::poi::poifs::storage::HeaderBlock* _header_block {  };

public: /* protected */
    ::java::util::List* _properties {  };
protected:
    void ctor(::org::apache::poi::poifs::storage::HeaderBlock* header_block);
    void ctor(::org::apache::poi::poifs::storage::HeaderBlock* header_block, ::java::util::List* properties) /* throws(IOException) */;

public:
    virtual void addProperty(Property* property);
    virtual void removeProperty(Property* property);
    virtual RootProperty* getRoot();

private:
    void populatePropertyTree(DirectoryProperty* root) /* throws(IOException) */;

public: /* protected */
    virtual bool isValidIndex(int32_t index);

public:
    virtual int32_t getStartBlock();
    void setStartBlock(int32_t index) override;

    // Generated
    PropertyTableBase(::org::apache::poi::poifs::storage::HeaderBlock* header_block);
    PropertyTableBase(::org::apache::poi::poifs::storage::HeaderBlock* header_block, ::java::util::List* properties);
protected:
    PropertyTableBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& _logger();
    virtual ::java::lang::Class* getClass0();
};
