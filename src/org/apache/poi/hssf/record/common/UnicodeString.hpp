// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::common::UnicodeString
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* _logger_;
    int16_t field_1_charCount {  };
    int8_t field_2_optionflags {  };
    ::java::lang::String* field_3_string {  };
    ::java::util::List* field_4_format_runs {  };
    UnicodeString_ExtRst* field_5_ext_rst {  };
    static ::org::apache::poi::util::BitField* highByte_;
    static ::org::apache::poi::util::BitField* extBit_;
    static ::org::apache::poi::util::BitField* richText_;
protected:
    void ctor();
    void ctor(::java::lang::String* str);

public:
    int32_t hashCode() override;
    bool equals(::java::lang::Object* o) override;
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    virtual int32_t getCharCount();
    virtual int16_t getCharCountShort();
    virtual void setCharCount(int16_t cc);
    virtual int8_t getOptionFlags();
    virtual void setOptionFlags(int8_t of);
    virtual ::java::lang::String* getString();
    virtual void setString(::java::lang::String* string);
    virtual int32_t getFormatRunCount();
    virtual UnicodeString_FormatRun* getFormatRun(int32_t index);

private:
    int32_t findFormatRunAt(int32_t characterPos);

public:
    virtual void addFormatRun(UnicodeString_FormatRun* r);
    virtual ::java::util::Iterator* formatIterator();
    virtual void removeFormatRun(UnicodeString_FormatRun* r);
    virtual void clearFormatting();
    virtual UnicodeString_ExtRst* getExtendedRst();

public: /* package */
    virtual void setExtendedRst(UnicodeString_ExtRst* ext_rst);

public:
    virtual void swapFontUse(int16_t oldFontIndex, int16_t newFontIndex);
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* getDebugInfo();
    virtual void serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out);
    virtual int32_t compareTo(UnicodeString* str);

private:
    bool isRichText();
    bool isExtendedText();

public:
    ::java::lang::Object* clone() override;

    // Generated

private:
    UnicodeString();

public:
    UnicodeString(::java::lang::String* str);
    UnicodeString(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    UnicodeString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    static ::org::apache::poi::util::POILogger*& _logger();
    static ::org::apache::poi::util::BitField*& highByte();
    static ::org::apache::poi::util::BitField*& extBit();
    static ::org::apache::poi::util::BitField*& richText();
    virtual ::java::lang::Class* getClass0();
    friend class UnicodeString_FormatRun;
    friend class UnicodeString_ExtRst;
    friend class UnicodeString_PhRun;
};
