// Generated from /POI/java/org/apache/poi/ddf/EscherPictBlip.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class poi::ddf::EscherPictBlip final
    : public EscherBlipRecord
{

public:
    typedef EscherBlipRecord super;

private:
    static ::poi::util::POILogger* log_;

public:
    static constexpr int16_t RECORD_ID_EMF { int16_t(-4070) };
    static constexpr int16_t RECORD_ID_WMF { int16_t(-4069) };
    static constexpr int16_t RECORD_ID_PICT { int16_t(-4068) };

private:
    static constexpr int32_t HEADER_SIZE { int32_t(8) };
    ::int8_tArray* field_1_UID {  };
    int32_t field_2_cb {  };
    int32_t field_3_rcBounds_x1 {  };
    int32_t field_3_rcBounds_y1 {  };
    int32_t field_3_rcBounds_x2 {  };
    int32_t field_3_rcBounds_y2 {  };
    int32_t field_4_ptSize_w {  };
    int32_t field_4_ptSize_h {  };
    int32_t field_5_cbSave {  };
    int8_t field_6_fCompression {  };
    int8_t field_7_fFilter {  };
    ::int8_tArray* raw_pictureData {  };

public:
    int32_t fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory) override;
    int32_t serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener) override;

private:
    static ::int8_tArray* inflatePictureData(::int8_tArray* data);

public:
    int32_t getRecordSize() override;
    ::int8_tArray* getUID();
    void setUID(::int8_tArray* uid);
    int32_t getUncompressedSize();
    void setUncompressedSize(int32_t uncompressedSize);
    ::java::awt::Rectangle* getBounds();
    void setBounds(::java::awt::Rectangle* bounds);
    ::java::awt::Dimension* getSizeEMU();
    void setSizeEMU(::java::awt::Dimension* sizeEMU);
    int32_t getCompressedSize();
    void setCompressedSize(int32_t compressedSize);
    bool isCompressed();
    void setCompressed(bool compressed);
    int8_t getFilter();
    void setFilter(int8_t filter);

public: /* protected */
    ::java::lang::ObjectArrayArray* getAttributeMap() override;

    // Generated

public:
    EscherPictBlip();
protected:
    void ctor();
    EscherPictBlip(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public: /* protected */
    virtual int32_t fillFields(::int8_tArray* data, EscherRecordFactory* f);

public:
    virtual ::int8_tArray* serialize();
    virtual int32_t serialize(int32_t offset, ::int8_tArray* data);

private:
    static ::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
};
