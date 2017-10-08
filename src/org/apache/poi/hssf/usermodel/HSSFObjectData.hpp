// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFObjectData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPicture.hpp>
#include <org/apache/poi/ss/usermodel/ObjectData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFObjectData final
    : public HSSFPicture
    , public ::poi::ss::usermodel::ObjectData
{

public:
    typedef HSSFPicture super;

private:
    ::poi::poifs::filesystem::DirectoryEntry* _root {  };
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::poifs::filesystem::DirectoryEntry* _root);

public:
    ::java::lang::String* getOLE2ClassName() override;
    ::poi::poifs::filesystem::DirectoryEntry* getDirectory() /* throws(IOException) */ override;
    ::int8_tArray* getObjectData() override;
    bool hasDirectoryEntry() override;

public: /* protected */
    ::poi::hssf::record::EmbeddedObjectRefSubRecord* findObjectRecord();
    ::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::poi::hssf::record::ObjRecord* createObjRecord() override;
    void afterRemove(HSSFPatriarch* patriarch) override;

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;

public: /* protected */
    HSSFShape* cloneShape() override;

    // Generated

public:
    HSSFObjectData(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::poifs::filesystem::DirectoryEntry* _root);
protected:
    HSSFObjectData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* getFileName();
    virtual HSSFPictureData* getPictureData();
    virtual HSSFAnchor* getAnchor();
    virtual HSSFShape* getParent();
    virtual ::java::lang::String* getShapeName();
    virtual bool isNoFill();
    virtual void setFillColor(int32_t red, int32_t green, int32_t blue);
    virtual void setLineStyleColor(int32_t red, int32_t green, int32_t blue);
    virtual void setNoFill(bool noFill);
    virtual int32_t getShapeId();
    virtual void setFillColor(int32_t fillColor);
    virtual void setLineStyleColor(int32_t lineStyleColor);

private:
    virtual ::java::lang::Class* getClass0();
};
