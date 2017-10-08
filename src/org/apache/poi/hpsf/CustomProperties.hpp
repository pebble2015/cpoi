// Generated from /POI/java/org/apache/poi/hpsf/CustomProperties.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hpsf/CustomProperty.hpp>

struct default_init_tag;

class poi::hpsf::CustomProperties
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Map
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    ::java::util::HashMap* props {  };
    ::org::apache::commons::collections4::bidimap::TreeBidiMap* dictionary {  };
    bool isPure_ {  };
    int32_t codepage {  };

public:
    virtual CustomProperty* put(::java::lang::String* name, CustomProperty* cp);
    virtual ::java::lang::Object* put(::java::lang::String* key, ::java::lang::Object* value);
    ::java::lang::Object* get(::java::lang::Object* key) override;
    CustomProperty* remove(::java::lang::Object* key) override;
    int32_t size() override;
    bool isEmpty() override;
    void clear() override;
    int32_t hashCode() override;
    bool equals(::java::lang::Object* obj) override;
    void putAll(::java::util::Map* m) override;
    virtual ::java::util::List* properties();
    ::java::util::Collection* values() override;
    ::java::util::Set* entrySet() override;
    ::java::util::Set* keySet() override;
    virtual ::java::util::Set* nameSet();
    virtual ::java::util::Set* idSet();
    virtual void setCodepage(int32_t codepage);
    virtual int32_t getCodepage();

public: /* package */
    virtual ::java::util::Map* getDictionary();

public:
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    virtual bool isPure();
    virtual void setPure(bool isPure);

private:
    ::java::lang::Object* put(CustomProperty* customProperty) /* throws(ClassCastException) */;
    void checkCodePage(::java::lang::String* value);

    // Generated

public:
    CustomProperties();
protected:
    void ctor();
    CustomProperties(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
