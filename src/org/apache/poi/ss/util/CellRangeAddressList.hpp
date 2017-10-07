// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddressList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::util::CellRangeAddressList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* _list {  };
protected:
    void ctor();
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    virtual int32_t countRanges();
    virtual void addCellRangeAddress(int32_t firstRow, int32_t firstCol, int32_t lastRow, int32_t lastCol);
    virtual void addCellRangeAddress(CellRangeAddress* cra);
    virtual CellRangeAddress* remove(int32_t rangeIndex);
    virtual CellRangeAddress* getCellRangeAddress(int32_t index);
    virtual int32_t getSize();
    static int32_t getEncodedSize(int32_t numberOfRanges);
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    virtual CellRangeAddressList* copy();
    virtual CellRangeAddressArray* getCellRangeAddresses();

    // Generated
    CellRangeAddressList();
    CellRangeAddressList(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
    CellRangeAddressList(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    CellRangeAddressList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
