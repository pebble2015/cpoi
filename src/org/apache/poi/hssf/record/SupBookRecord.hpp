// Generated from /POI/java/org/apache/poi/hssf/record/SupBookRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

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

class poi::hssf::record::SupBookRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;

private:
    static ::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(430) };

private:
    static constexpr int16_t SMALL_RECORD_SIZE { int16_t(4) };
    static constexpr int16_t TAG_INTERNAL_REFERENCES { int16_t(1025) };
    static constexpr int16_t TAG_ADD_IN_FUNCTIONS { int16_t(14849) };
    int16_t field_1_number_of_sheets {  };
    ::java::lang::String* field_2_encoded_url {  };
    ::java::lang::StringArray* field_3_sheet_names {  };
    bool _isAddInFunctions {  };

public: /* protected */
    static constexpr char16_t CH_VOLUME { u'\u0001' };
    static constexpr char16_t CH_SAME_VOLUME { u'\u0002' };
    static constexpr char16_t CH_DOWN_DIR { u'\u0003' };
    static constexpr char16_t CH_UP_DIR { u'\u0004' };
    static constexpr char16_t CH_LONG_VOLUME { u'\u0005' };
    static constexpr char16_t CH_STARTUP_DIR { u'\u0006' };
    static constexpr char16_t CH_ALT_STARTUP_DIR { u'\u0007' };
    static constexpr char16_t CH_LIB_DIR { u'\u0008' };

private:
    static ::java::lang::String* PATH_SEPERATOR_;

public:
    static SupBookRecord* createInternalReferences(int16_t numberOfSheets);
    static SupBookRecord* createAddInFunctions();
    static SupBookRecord* createExternalReferences(::java::lang::String* url, ::java::lang::StringArray* sheetNames);
protected:
    void ctor(bool isAddInFuncs, int16_t numberOfSheets);
    void ctor(::java::lang::String* url, ::java::lang::StringArray* sheetNames);

public:
    bool isExternalReferences();
    bool isInternalReferences();
    bool isAddInFunctions();
protected:
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    void setNumberOfSheets(int16_t number);
    int16_t getNumberOfSheets();
    int16_t getSid() override;
    ::java::lang::String* getURL();

private:
    static ::java::lang::String* decodeFileName(::java::lang::String* encodedUrl);

public:
    ::java::lang::StringArray* getSheetNames();
    void setURL(::java::lang::String* pUrl);

    // Generated

private:
    SupBookRecord(bool isAddInFuncs, int16_t numberOfSheets);

public:
    SupBookRecord(::java::lang::String* url, ::java::lang::StringArray* sheetNames);
    SupBookRecord(RecordInputStream* in);
protected:
    SupBookRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::POILogger*& logger();

public: /* protected */
    static ::java::lang::String*& PATH_SEPERATOR();

private:
    virtual ::java::lang::Class* getClass0();
};
