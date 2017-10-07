// Generated from /POI/java/org/apache/poi/hssf/record/SupBookRecord.java
#include <org/apache/poi/hssf/record/SupBookRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::SupBookRecord::SupBookRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SupBookRecord::SupBookRecord(bool isAddInFuncs, int16_t numberOfSheets) 
    : SupBookRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(isAddInFuncs,numberOfSheets);
}

org::apache::poi::hssf::record::SupBookRecord::SupBookRecord(::java::lang::String* url, ::java::lang::StringArray* sheetNames) 
    : SupBookRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(url,sheetNames);
}

org::apache::poi::hssf::record::SupBookRecord::SupBookRecord(RecordInputStream* in) 
    : SupBookRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::SupBookRecord::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::SupBookRecord::logger_;

constexpr int16_t org::apache::poi::hssf::record::SupBookRecord::sid;

constexpr int16_t org::apache::poi::hssf::record::SupBookRecord::SMALL_RECORD_SIZE;

constexpr int16_t org::apache::poi::hssf::record::SupBookRecord::TAG_INTERNAL_REFERENCES;

constexpr int16_t org::apache::poi::hssf::record::SupBookRecord::TAG_ADD_IN_FUNCTIONS;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_VOLUME;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_SAME_VOLUME;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_DOWN_DIR;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_UP_DIR;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_LONG_VOLUME;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_STARTUP_DIR;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_ALT_STARTUP_DIR;

constexpr char16_t org::apache::poi::hssf::record::SupBookRecord::CH_LIB_DIR;

java::lang::String*& org::apache::poi::hssf::record::SupBookRecord::PATH_SEPERATOR()
{
    clinit();
    return PATH_SEPERATOR_;
}
java::lang::String* org::apache::poi::hssf::record::SupBookRecord::PATH_SEPERATOR_;

org::apache::poi::hssf::record::SupBookRecord* org::apache::poi::hssf::record::SupBookRecord::createInternalReferences(int16_t numberOfSheets)
{
    clinit();
    return new SupBookRecord(false, numberOfSheets);
}

org::apache::poi::hssf::record::SupBookRecord* org::apache::poi::hssf::record::SupBookRecord::createAddInFunctions()
{
    clinit();
    return new SupBookRecord(true, static_cast< int16_t >(int32_t(1)));
}

org::apache::poi::hssf::record::SupBookRecord* org::apache::poi::hssf::record::SupBookRecord::createExternalReferences(::java::lang::String* url, ::java::lang::StringArray* sheetNames)
{
    clinit();
    return new SupBookRecord(url, sheetNames);
}

void org::apache::poi::hssf::record::SupBookRecord::ctor(bool isAddInFuncs, int16_t numberOfSheets)
{
    super::ctor();
    field_1_number_of_sheets = numberOfSheets;
    field_2_encoded_url = nullptr;
    field_3_sheet_names = nullptr;
    _isAddInFunctions = isAddInFuncs;
}

void org::apache::poi::hssf::record::SupBookRecord::ctor(::java::lang::String* url, ::java::lang::StringArray* sheetNames)
{
    super::ctor();
    field_1_number_of_sheets = static_cast< int16_t >(npc(sheetNames)->length);
    field_2_encoded_url = url;
    field_3_sheet_names = sheetNames;
    _isAddInFunctions = false;
}

bool org::apache::poi::hssf::record::SupBookRecord::isExternalReferences()
{
    return field_3_sheet_names != nullptr;
}

bool org::apache::poi::hssf::record::SupBookRecord::isInternalReferences()
{
    return field_3_sheet_names == nullptr && !_isAddInFunctions;
}

bool org::apache::poi::hssf::record::SupBookRecord::isAddInFunctions()
{
    return field_3_sheet_names == nullptr && _isAddInFunctions;
}

void org::apache::poi::hssf::record::SupBookRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto recLen = npc(in)->remaining();
    field_1_number_of_sheets = npc(in)->readShort();
    if(recLen > SMALL_RECORD_SIZE) {
        _isAddInFunctions = false;
        field_2_encoded_url = npc(in)->readString();
        auto sheetNames = new ::java::lang::StringArray(field_1_number_of_sheets);
        for (auto i = int32_t(0); i < npc(sheetNames)->length; i++) {
            sheetNames->set(i, npc(in)->readString());
        }
        field_3_sheet_names = sheetNames;
        return;
    }
    field_2_encoded_url = nullptr;
    field_3_sheet_names = nullptr;
    auto nextShort = npc(in)->readShort();
    if(nextShort == TAG_INTERNAL_REFERENCES) {
        _isAddInFunctions = false;
    } else if(nextShort == TAG_ADD_IN_FUNCTIONS) {
        _isAddInFunctions = true;
        if(field_1_number_of_sheets != 1) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Expected 0x0001 for number of sheets field in 'Add-In Functions' but got ("_j)->append(field_1_number_of_sheets)
                ->append(u")"_j)->toString());
        }
    } else {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"invalid EXTERNALBOOK code ("_j)->append(::java::lang::Integer::toHexString(nextShort))
            ->append(u")"_j)->toString());
    }
}

java::lang::String* org::apache::poi::hssf::record::SupBookRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[SUPBOOK "_j);
    if(isExternalReferences()) {
        npc(sb)->append(u"External References]\n"_j);
        npc(npc(npc(sb)->append(u" .url     = "_j))->append(field_2_encoded_url))->append(u"\n"_j);
        npc(npc(npc(sb)->append(u" .nSheets = "_j))->append(static_cast< int32_t >(field_1_number_of_sheets)))->append(u"\n"_j);
        for(auto sheetname : *npc(field_3_sheet_names)) {
            npc(npc(npc(sb)->append(u"    .name = "_j))->append(sheetname))->append(u"\n"_j);
        }
        npc(sb)->append(u"[/SUPBOOK"_j);
    } else if(_isAddInFunctions) {
        npc(sb)->append(u"Add-In Functions"_j);
    } else {
        npc(sb)->append(u"Internal References"_j);
        npc(npc(sb)->append(u" nSheets="_j))->append(static_cast< int32_t >(field_1_number_of_sheets));
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int32_t org::apache::poi::hssf::record::SupBookRecord::getDataSize()
{
    if(!isExternalReferences()) {
        return SMALL_RECORD_SIZE;
    }
    auto sum = int32_t(2);
    sum += ::org::apache::poi::util::StringUtil::getEncodedSize(field_2_encoded_url);
    for (auto i = int32_t(0); i < npc(field_3_sheet_names)->length; i++) {
        sum += ::org::apache::poi::util::StringUtil::getEncodedSize((*field_3_sheet_names)[i]);
    }
    return sum;
}

void org::apache::poi::hssf::record::SupBookRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_number_of_sheets);
    if(isExternalReferences()) {
        ::org::apache::poi::util::StringUtil::writeUnicodeString(out, field_2_encoded_url);
        for (auto i = int32_t(0); i < npc(field_3_sheet_names)->length; i++) {
            ::org::apache::poi::util::StringUtil::writeUnicodeString(out, (*field_3_sheet_names)[i]);
        }
    } else {
        int32_t field2val = _isAddInFunctions ? TAG_ADD_IN_FUNCTIONS : TAG_INTERNAL_REFERENCES;
        npc(out)->writeShort(field2val);
    }
}

void org::apache::poi::hssf::record::SupBookRecord::setNumberOfSheets(int16_t number)
{
    field_1_number_of_sheets = number;
}

int16_t org::apache::poi::hssf::record::SupBookRecord::getNumberOfSheets()
{
    return field_1_number_of_sheets;
}

int16_t org::apache::poi::hssf::record::SupBookRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::SupBookRecord::getURL()
{
    auto encodedUrl = field_2_encoded_url;
    switch (npc(encodedUrl)->charAt(int32_t(0))) {
    case int32_t(0):
        return npc(encodedUrl)->substring(1);
    case int32_t(1):
        return decodeFileName(encodedUrl);
    case int32_t(2):
        return npc(encodedUrl)->substring(1);
    }

    return encodedUrl;
}

java::lang::String* org::apache::poi::hssf::record::SupBookRecord::decodeFileName(::java::lang::String* encodedUrl)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    for (auto i = int32_t(1); i < npc(encodedUrl)->length(); i++) {
        auto c = npc(encodedUrl)->charAt(i);
        {
            char16_t driveLetter;
            switch (c) {
            case CH_VOLUME:
                driveLetter = npc(encodedUrl)->charAt(++i);
                if(driveLetter == u'@') {
                    npc(sb)->append(u"\\\\"_j);
                } else {
                    npc(npc(sb)->append(driveLetter))->append(u":"_j);
                }
                break;
            case CH_SAME_VOLUME:
                npc(sb)->append(PATH_SEPERATOR_);
                break;
            case CH_DOWN_DIR:
                npc(sb)->append(PATH_SEPERATOR_);
                break;
            case CH_UP_DIR:
                npc(npc(sb)->append(u".."_j))->append(PATH_SEPERATOR_);
                break;
            case CH_LONG_VOLUME:
                npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Found unexpected key: ChLongVolume - IGNORING"_j)}));
                break;
            case CH_STARTUP_DIR:
            case CH_ALT_STARTUP_DIR:
            case CH_LIB_DIR:
                npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"EXCEL.EXE path unkown - using this directoy instead: ."_j)}));
                npc(npc(sb)->append(u"."_j))->append(PATH_SEPERATOR_);
                break;
            default:
                npc(sb)->append(c);
            }
        }

    }
    return npc(sb)->toString();
}

java::lang::StringArray* org::apache::poi::hssf::record::SupBookRecord::getSheetNames()
{
    return npc(field_3_sheet_names)->clone();
}

void org::apache::poi::hssf::record::SupBookRecord::setURL(::java::lang::String* pUrl)
{
    field_2_encoded_url = ::java::lang::StringBuilder().append(npc(field_2_encoded_url)->substring(0, 1))->append(pUrl)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SupBookRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SupBookRecord", 40);
    return c;
}

void org::apache::poi::hssf::record::SupBookRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(SupBookRecord::class_()));
        PATH_SEPERATOR_ = ::java::lang::System::getProperty(u"file.separator"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::SupBookRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::SupBookRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::SupBookRecord::getClass0()
{
    return class_();
}

