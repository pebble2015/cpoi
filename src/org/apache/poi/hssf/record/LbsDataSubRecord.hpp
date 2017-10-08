// Generated from /POI/java/org/apache/poi/hssf/record/LbsDataSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::hssf::record::LbsDataSubRecord
    : public SubRecord
{

public:
    typedef SubRecord super;
    static constexpr int32_t sid { int32_t(19) };

private:
    int32_t _cbFContinued {  };
    int32_t _unknownPreFormulaInt {  };
    ::poi::ss::formula::ptg::Ptg* _linkPtg {  };
    ::java::lang::Byte* _unknownPostFormulaByte {  };
    int32_t _cLines {  };
    int32_t _iSel {  };
    int32_t _flags {  };
    int32_t _idEdit {  };
    LbsDataSubRecord_LbsDropData* _dropData {  };
    ::java::lang::StringArray* _rgLines {  };
    ::boolArray* _bsels {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in, int32_t cbFContinued, int32_t cmoOt);
    void ctor();

public:
    static LbsDataSubRecord* newAutoFilterInstance();
    bool isTerminating() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    LbsDataSubRecord* clone() override;
    ::java::lang::String* toString() override;
    virtual ::poi::ss::formula::ptg::Ptg* getFormula();
    virtual int32_t getNumberOfItems();

    // Generated
    LbsDataSubRecord(::poi::util::LittleEndianInput* in, int32_t cbFContinued, int32_t cmoOt);

public: /* package */
    LbsDataSubRecord();
protected:
    LbsDataSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LbsDataSubRecord_LbsDropData;
};
