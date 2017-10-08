// Generated from /POI/java/org/apache/poi/hssf/record/CommonObjectDataSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::CommonObjectDataSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(21) };

private:
    static ::poi::util::BitField* locked_;
    static ::poi::util::BitField* printable_;
    static ::poi::util::BitField* autofill_;
    static ::poi::util::BitField* autoline_;

public:
    static constexpr int16_t OBJECT_TYPE_GROUP { int16_t(0) };
    static constexpr int16_t OBJECT_TYPE_LINE { int16_t(1) };
    static constexpr int16_t OBJECT_TYPE_RECTANGLE { int16_t(2) };
    static constexpr int16_t OBJECT_TYPE_OVAL { int16_t(3) };
    static constexpr int16_t OBJECT_TYPE_ARC { int16_t(4) };
    static constexpr int16_t OBJECT_TYPE_CHART { int16_t(5) };
    static constexpr int16_t OBJECT_TYPE_TEXT { int16_t(6) };
    static constexpr int16_t OBJECT_TYPE_BUTTON { int16_t(7) };
    static constexpr int16_t OBJECT_TYPE_PICTURE { int16_t(8) };
    static constexpr int16_t OBJECT_TYPE_POLYGON { int16_t(9) };
    static constexpr int16_t OBJECT_TYPE_RESERVED1 { int16_t(10) };
    static constexpr int16_t OBJECT_TYPE_CHECKBOX { int16_t(11) };
    static constexpr int16_t OBJECT_TYPE_OPTION_BUTTON { int16_t(12) };
    static constexpr int16_t OBJECT_TYPE_EDIT_BOX { int16_t(13) };
    static constexpr int16_t OBJECT_TYPE_LABEL { int16_t(14) };
    static constexpr int16_t OBJECT_TYPE_DIALOG_BOX { int16_t(15) };
    static constexpr int16_t OBJECT_TYPE_SPINNER { int16_t(16) };
    static constexpr int16_t OBJECT_TYPE_SCROLL_BAR { int16_t(17) };
    static constexpr int16_t OBJECT_TYPE_LIST_BOX { int16_t(18) };
    static constexpr int16_t OBJECT_TYPE_GROUP_BOX { int16_t(19) };
    static constexpr int16_t OBJECT_TYPE_COMBO_BOX { int16_t(20) };
    static constexpr int16_t OBJECT_TYPE_RESERVED2 { int16_t(21) };
    static constexpr int16_t OBJECT_TYPE_RESERVED3 { int16_t(22) };
    static constexpr int16_t OBJECT_TYPE_RESERVED4 { int16_t(23) };
    static constexpr int16_t OBJECT_TYPE_RESERVED5 { int16_t(24) };
    static constexpr int16_t OBJECT_TYPE_COMMENT { int16_t(25) };
    static constexpr int16_t OBJECT_TYPE_RESERVED6 { int16_t(26) };
    static constexpr int16_t OBJECT_TYPE_RESERVED7 { int16_t(27) };
    static constexpr int16_t OBJECT_TYPE_RESERVED8 { int16_t(28) };
    static constexpr int16_t OBJECT_TYPE_RESERVED9 { int16_t(29) };
    static constexpr int16_t OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING { int16_t(30) };

private:
    int16_t field_1_objectType {  };
    int32_t field_2_objectId {  };
    int16_t field_3_option {  };
    int32_t field_4_reserved1 {  };
    int32_t field_5_reserved2 {  };
    int32_t field_6_reserved3 {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    CommonObjectDataSubRecord* clone() override;
    int16_t getObjectType();
    void setObjectType(int16_t field_1_objectType);
    int32_t getObjectId();
    void setObjectId(int32_t field_2_objectId);
    int16_t getOption();
    void setOption(int16_t field_3_option);
    int32_t getReserved1();
    void setReserved1(int32_t field_4_reserved1);
    int32_t getReserved2();
    void setReserved2(int32_t field_5_reserved2);
    int32_t getReserved3();
    void setReserved3(int32_t field_6_reserved3);
    void setLocked(bool value);
    bool isLocked();
    void setPrintable(bool value);
    bool isPrintable();
    void setAutofill(bool value);
    bool isAutofill();
    void setAutoline(bool value);
    bool isAutoline();

    // Generated
    CommonObjectDataSubRecord();
    CommonObjectDataSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    CommonObjectDataSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& locked();
    static ::poi::util::BitField*& printable();
    static ::poi::util::BitField*& autofill();
    static ::poi::util::BitField*& autoline();
    virtual ::java::lang::Class* getClass0();
};
