// Generated from /POI/java/org/apache/poi/hssf/record/HyperlinkRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::HyperlinkRecord_GUID final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t TEXT_FORMAT_LENGTH { int32_t(36) };

public:
    static constexpr int32_t ENCODED_SIZE { int32_t(16) };

private:
    int32_t _d1 {  };
    int32_t _d2 {  };
    int32_t _d3 {  };
    int64_t _d4 {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* in);
    void ctor(int32_t d1, int32_t d2, int32_t d3, int64_t d4);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    int32_t getD1();
    int32_t getD2();
    int32_t getD3();
    int64_t getD4();
    ::java::lang::String* formatAsString();
    ::java::lang::String* toString() override;
    static HyperlinkRecord_GUID* parse(::java::lang::String* rep);

private:
    static int64_t parseLELong(::char16_tArray* cc, int32_t startIndex);
    static int32_t parseShort(::char16_tArray* cc, int32_t startIndex);
    static int32_t parseHexChar(char16_t c);

    // Generated

public:
    HyperlinkRecord_GUID(::org::apache::poi::util::LittleEndianInput* in);
    HyperlinkRecord_GUID(int32_t d1, int32_t d2, int32_t d3, int64_t d4);
protected:
    HyperlinkRecord_GUID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HyperlinkRecord;
};
