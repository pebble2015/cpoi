// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class poi::hssf::record::common::UnicodeString_FormatRun
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int16_t _character {  };
    int16_t _fontIndex {  };
protected:
    void ctor(int16_t character, int16_t fontIndex);
    void ctor(::poi::util::LittleEndianInput* in);

public:
    virtual int16_t getCharacterPos();
    virtual int16_t getFontIndex();
    bool equals(::java::lang::Object* o) override;
    virtual int32_t compareTo(UnicodeString_FormatRun* r);
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    virtual void serialize(::poi::util::LittleEndianOutput* out);

    // Generated
    UnicodeString_FormatRun(int16_t character, int16_t fontIndex);
    UnicodeString_FormatRun(::poi::util::LittleEndianInput* in);
protected:
    UnicodeString_FormatRun(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class UnicodeString;
    friend class UnicodeString_ExtRst;
    friend class UnicodeString_PhRun;
};
