// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFHyperlink.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Hyperlink.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFHyperlink
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::Hyperlink
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::org::apache::poi::hssf::record::HyperlinkRecord* record {  };
    ::org::apache::poi::common::usermodel::HyperlinkType* link_type {  };
protected:
    void ctor(::org::apache::poi::common::usermodel::HyperlinkType* type);
    void ctor(::org::apache::poi::hssf::record::HyperlinkRecord* record);

private:
    static ::org::apache::poi::common::usermodel::HyperlinkType* getType(::org::apache::poi::hssf::record::HyperlinkRecord* record);
protected:
    void ctor(::org::apache::poi::ss::usermodel::Hyperlink* other);

public:
    int32_t getFirstRow() override;
    void setFirstRow(int32_t row) override;
    int32_t getLastRow() override;
    void setLastRow(int32_t row) override;
    int32_t getFirstColumn() override;
    void setFirstColumn(int32_t col) override;
    int32_t getLastColumn() override;
    void setLastColumn(int32_t col) override;
    ::java::lang::String* getAddress() override;
    virtual ::java::lang::String* getTextMark();
    virtual void setTextMark(::java::lang::String* textMark);
    virtual ::java::lang::String* getShortFilename();
    virtual void setShortFilename(::java::lang::String* shortFilename);
    void setAddress(::java::lang::String* address) override;
    ::java::lang::String* getLabel() override;
    void setLabel(::java::lang::String* label) override;
    int32_t getType() override;
    ::org::apache::poi::common::usermodel::HyperlinkType* getTypeEnum() override;
    bool equals(::java::lang::Object* other) override;
    int32_t hashCode() override;

    // Generated

public: /* protected */
    HSSFHyperlink(::org::apache::poi::common::usermodel::HyperlinkType* type);
    HSSFHyperlink(::org::apache::poi::hssf::record::HyperlinkRecord* record);
    HSSFHyperlink(::org::apache::poi::ss::usermodel::Hyperlink* other);
protected:
    HSSFHyperlink(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
