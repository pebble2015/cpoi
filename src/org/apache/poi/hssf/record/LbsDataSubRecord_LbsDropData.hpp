// Generated from /POI/java/org/apache/poi/hssf/record/LbsDataSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::LbsDataSubRecord_LbsDropData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t STYLE_COMBO_DROPDOWN { int32_t(0) };
    static constexpr int32_t STYLE_COMBO_EDIT_DROPDOWN { int32_t(1) };
    static constexpr int32_t STYLE_COMBO_SIMPLE_DROPDOWN { int32_t(2) };

private:
    int32_t _wStyle {  };
    int32_t _cLine {  };
    int32_t _dxMin {  };
    ::java::lang::String* _str {  };
    ::java::lang::Byte* _unused {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    virtual void setStyle(int32_t style);
    virtual void setNumLines(int32_t num);
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    virtual int32_t getDataSize();
    ::java::lang::String* toString() override;

    // Generated
    LbsDataSubRecord_LbsDropData();
    LbsDataSubRecord_LbsDropData(::org::apache::poi::util::LittleEndianInput* in);
protected:
    LbsDataSubRecord_LbsDropData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LbsDataSubRecord;
};
