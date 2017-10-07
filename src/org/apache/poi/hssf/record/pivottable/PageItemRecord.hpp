// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/PageItemRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

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
                    namespace pivottable
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::pivottable::PageItemRecord_FieldInfo, ::java::lang::ObjectArray > PageItemRecord_FieldInfoArray;
                    } // pivottable
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::pivottable::PageItemRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(182) };

private:
    PageItemRecord_FieldInfoArray* _fieldInfos {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    PageItemRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    PageItemRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PageItemRecord_FieldInfo;
};
