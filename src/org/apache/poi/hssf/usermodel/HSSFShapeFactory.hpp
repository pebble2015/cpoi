// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShapeFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFShapeFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void createShapeTree(::org::apache::poi::ddf::EscherContainerRecord* container, ::org::apache::poi::hssf::record::EscherAggregate* agg, HSSFShapeContainer* out, ::org::apache::poi::poifs::filesystem::DirectoryNode* root);

private:
    static bool isEmbeddedObject(::org::apache::poi::hssf::record::ObjRecord* obj);

    // Generated

public:
    HSSFShapeFactory();
protected:
    HSSFShapeFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
