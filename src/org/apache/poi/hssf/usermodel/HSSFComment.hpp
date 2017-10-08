// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFComment.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>
#include <org/apache/poi/ss/usermodel/Comment.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFComment
    : public HSSFTextbox
    , public virtual ::poi::ss::usermodel::Comment
{

public:
    typedef HSSFTextbox super;

private:
    static constexpr int32_t FILL_TYPE_SOLID { int32_t(0) };
    static constexpr int32_t FILL_TYPE_PICTURE { int32_t(3) };
    static constexpr int32_t GROUP_SHAPE_PROPERTY_DEFAULT_VALUE { int32_t(655362) };
    static constexpr int32_t GROUP_SHAPE_HIDDEN_MASK { int32_t(16777218) };
    static constexpr int32_t GROUP_SHAPE_NOT_HIDDEN_MASK { int32_t(-16777219) };
    ::poi::hssf::record::NoteRecord* _note {  };
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord, ::poi::hssf::record::NoteRecord* note);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor, ::poi::hssf::record::NoteRecord* note);
    void ctor(::poi::hssf::record::NoteRecord* note, ::poi::hssf::record::TextObjectRecord* txo);

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;

public: /* protected */
    ::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::poi::hssf::record::ObjRecord* createObjRecord() override;

private:
    static ::poi::hssf::record::NoteRecord* createNoteRecord();

public: /* package */
    void setShapeId(int32_t shapeId) override;

public:
    void setVisible(bool visible) override;
    bool isVisible() override;
    ::poi::ss::util::CellAddress* getAddress() override;
    void setAddress(::poi::ss::util::CellAddress* address) override;
    void setAddress(int32_t row, int32_t col) override;
    int32_t getRow() override;
    void setRow(int32_t row) override;
    int32_t getColumn() override;
    void setColumn(int32_t col) override;
    ::java::lang::String* getAuthor() override;
    void setAuthor(::java::lang::String* author) override;

public: /* protected */
    virtual ::poi::hssf::record::NoteRecord* getNoteRecord();

public:
    virtual bool hasPosition();
    ::poi::ss::usermodel::ClientAnchor* getClientAnchor() override;
    void setShapeType(int32_t shapeType) override;
    void afterRemove(HSSFPatriarch* patriarch) override;

public: /* protected */
    HSSFShape* cloneShape() override;

public:
    virtual void setBackgroundImage(int32_t pictureIndex);
    virtual void resetBackgroundImage();
    virtual int32_t getBackgroundImageId();

private:
    void setHidden(bool value);

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;

    // Generated
    HSSFComment(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord, ::poi::hssf::record::NoteRecord* note);
    HSSFComment(HSSFShape* parent, HSSFAnchor* anchor);

private:
    HSSFComment(HSSFShape* parent, HSSFAnchor* anchor, ::poi::hssf::record::NoteRecord* note);

public: /* protected */
    HSSFComment(::poi::hssf::record::NoteRecord* note, ::poi::hssf::record::TextObjectRecord* txo);
protected:
    HSSFComment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual HSSFRichTextString* getString();
    virtual void setString(::poi::ss::usermodel::RichTextString* string);

private:
    virtual ::java::lang::Class* getClass0();
};
