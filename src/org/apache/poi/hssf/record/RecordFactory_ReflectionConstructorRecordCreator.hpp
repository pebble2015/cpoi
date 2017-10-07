// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactory.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/RecordFactory_I_RecordCreator.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator final
    : public virtual ::java::lang::Object
    , public RecordFactory_I_RecordCreator
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::reflect::Constructor* _c {  };
protected:
    void ctor(::java::lang::reflect::Constructor* c);

public:
    Record* create(RecordInputStream* in) override;
    ::java::lang::Class* getRecordClass() override;

    // Generated
    RecordFactory_ReflectionConstructorRecordCreator(::java::lang::reflect::Constructor* c);
protected:
    RecordFactory_ReflectionConstructorRecordCreator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RecordFactory;
    friend class RecordFactory_I_RecordCreator;
    friend class RecordFactory_ReflectionMethodRecordCreator;
};
