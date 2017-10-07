// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace common
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::common::UnicodeString_PhRun, ::java::lang::ObjectArray > UnicodeString_PhRunArray;
                    } // common
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::common::UnicodeString_ExtRst
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t reserved {  };
    int16_t formattingFontIndex {  };
    int16_t formattingOptions {  };
    int32_t numberOfRuns {  };
    ::java::lang::String* phoneticText {  };
    UnicodeString_PhRunArray* phRuns {  };
    ::int8_tArray* extraData {  };
    void populateEmpty();
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t expectedLength);

public: /* protected */
    virtual int32_t getDataSize();
    virtual void serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out);

public:
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t compareTo(UnicodeString_ExtRst* o);
    int32_t hashCode() override;

public: /* protected */
    UnicodeString_ExtRst* clone() override;

public:
    virtual int16_t getFormattingFontIndex();
    virtual int16_t getFormattingOptions();
    virtual int32_t getNumberOfRuns();
    virtual ::java::lang::String* getPhoneticText();
    virtual UnicodeString_PhRunArray* getPhRuns();

    // Generated

public: /* protected */
    UnicodeString_ExtRst();
    UnicodeString_ExtRst(::org::apache::poi::util::LittleEndianInput* in, int32_t expectedLength);
protected:
    UnicodeString_ExtRst(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
    friend class UnicodeString;
    friend class UnicodeString_FormatRun;
    friend class UnicodeString_PhRun;
};
