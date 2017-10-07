// Generated from /POI/java/org/apache/poi/hpsf/PropertySet.java
#include <org/apache/poi/hpsf/PropertySet.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/EmptyFileException.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/HPSFRuntimeException.hpp>
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>
#include <org/apache/poi/hpsf/MissingSectionException.hpp>
#include <org/apache/poi/hpsf/MutableSection.hpp>
#include <org/apache/poi/hpsf/NoFormatIDException.hpp>
#include <org/apache/poi/hpsf/NoPropertySetStreamException.hpp>
#include <org/apache/poi/hpsf/NoSingleSectionException.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/Section.hpp>
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
typedef ::SubArray< ::org::apache::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
            } // hpsf
        } // poi
    } // apache
} // org

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::hpsf::PropertySet::PropertySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::PropertySet::PropertySet() 
    : PropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::PropertySet::PropertySet(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : PropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

org::apache::poi::hpsf::PropertySet::PropertySet(::int8_tArray* stream, int32_t offset, int32_t length)  /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */
    : PropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,offset,length);
}

org::apache::poi::hpsf::PropertySet::PropertySet(::int8_tArray* stream)  /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */
    : PropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

org::apache::poi::hpsf::PropertySet::PropertySet(PropertySet* ps) 
    : PropertySet(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

void org::apache::poi::hpsf::PropertySet::init()
{
    sections = new ::java::util::ArrayList();
}

constexpr int32_t org::apache::poi::hpsf::PropertySet::OS_WIN16;

constexpr int32_t org::apache::poi::hpsf::PropertySet::OS_MACINTOSH;

constexpr int32_t org::apache::poi::hpsf::PropertySet::OS_WIN32;

constexpr int32_t org::apache::poi::hpsf::PropertySet::BYTE_ORDER_ASSERTION;

constexpr int32_t org::apache::poi::hpsf::PropertySet::FORMAT_ASSERTION;

constexpr int32_t org::apache::poi::hpsf::PropertySet::OFFSET_HEADER;

void org::apache::poi::hpsf::PropertySet::ctor()
{
    super::ctor();
    init();
    byteOrder = BYTE_ORDER_ASSERTION;
    format = FORMAT_ASSERTION;
    osVersion = (OS_WIN32 << int32_t(16)) | int32_t(2564);
    classID = new ClassID();
    addSection(new MutableSection());
}

void org::apache::poi::hpsf::PropertySet::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor();
    init();
    if(!isPropertySetStream(stream)) {
        throw new NoPropertySetStreamException();
    }
    auto const buffer = ::org::apache::poi::util::IOUtils::toByteArray_(stream);
    init_(buffer, 0, npc(buffer)->length);
}

void org::apache::poi::hpsf::PropertySet::ctor(::int8_tArray* stream, int32_t offset, int32_t length) /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */
{
    super::ctor();
    init();
    if(!isPropertySetStream(stream, offset, length)) {
        throw new NoPropertySetStreamException();
    }
    init_(stream, offset, length);
}

void org::apache::poi::hpsf::PropertySet::ctor(::int8_tArray* stream) /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */
{
    ctor(stream, int32_t(0), npc(stream)->length);
}

void org::apache::poi::hpsf::PropertySet::ctor(PropertySet* ps)
{
    super::ctor();
    init();
    setByteOrder(npc(ps)->getByteOrder());
    setFormat(npc(ps)->getFormat());
    setOSVersion(npc(ps)->getOSVersion());
    setClassID(npc(ps)->getClassID());
    for (auto _i = npc(npc(ps)->getSections())->iterator(); _i->hasNext(); ) {
        Section* section = java_cast< Section* >(_i->next());
        {
            npc(sections)->add(static_cast< ::java::lang::Object* >(new MutableSection(section)));
        }
    }
}

int32_t org::apache::poi::hpsf::PropertySet::getByteOrder()
{
    return byteOrder;
}

void org::apache::poi::hpsf::PropertySet::setByteOrder(int32_t byteOrder)
{
    this->byteOrder = byteOrder;
}

int32_t org::apache::poi::hpsf::PropertySet::getFormat()
{
    return format;
}

void org::apache::poi::hpsf::PropertySet::setFormat(int32_t format)
{
    this->format = format;
}

int32_t org::apache::poi::hpsf::PropertySet::getOSVersion()
{
    return osVersion;
}

void org::apache::poi::hpsf::PropertySet::setOSVersion(int32_t osVersion)
{
    this->osVersion = osVersion;
}

org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::PropertySet::getClassID()
{
    return classID;
}

void org::apache::poi::hpsf::PropertySet::setClassID(ClassID* classID)
{
    this->classID = classID;
}

int32_t org::apache::poi::hpsf::PropertySet::getSectionCount()
{
    return npc(sections)->size();
}

java::util::List* org::apache::poi::hpsf::PropertySet::getSections()
{
    return ::java::util::Collections::unmodifiableList(sections);
}

void org::apache::poi::hpsf::PropertySet::addSection(Section* section)
{
    npc(sections)->add(static_cast< ::java::lang::Object* >(section));
}

void org::apache::poi::hpsf::PropertySet::clearSections()
{
    npc(sections)->clear();
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::PropertySet::getPropertySetIDMap()
{
    return nullptr;
}

bool org::apache::poi::hpsf::PropertySet::isPropertySetStream(::java::io::InputStream* stream) /* throws(MarkUnsupportedException, IOException) */
{
    clinit();
    auto const BUFFER_SIZE = int32_t(50);
    try {
        auto const buffer = ::org::apache::poi::util::IOUtils::peekFirstNBytes(stream, BUFFER_SIZE);
        auto const isPropertySetStream = PropertySet::isPropertySetStream(buffer, 0, npc(buffer)->length);
        return isPropertySetStream;
    } catch (::org::apache::poi::EmptyFileException* e) {
        return false;
    }
}

bool org::apache::poi::hpsf::PropertySet::isPropertySetStream(::int8_tArray* src, int32_t offset, int32_t length)
{
    clinit();
    auto o = offset;
    auto const byteOrder = ::org::apache::poi::util::LittleEndian::getUShort(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    if(byteOrder != BYTE_ORDER_ASSERTION) {
        return false;
    }
    auto const format = ::org::apache::poi::util::LittleEndian::getUShort(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    if(format != FORMAT_ASSERTION) {
        return false;
    }
    o += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    o += ClassID::LENGTH;
    auto const sectionCount = ::org::apache::poi::util::LittleEndian::getUInt(src, o);
    return (sectionCount >= 0);
}

void org::apache::poi::hpsf::PropertySet::init_(::int8_tArray* src, int32_t offset, int32_t length) /* throws(UnsupportedEncodingException) */
{
    auto o = offset;
    byteOrder = ::org::apache::poi::util::LittleEndian::getUShort(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    format = ::org::apache::poi::util::LittleEndian::getUShort(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    osVersion = static_cast< int32_t >(::org::apache::poi::util::LittleEndian::getUInt(src, o));
    o += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    classID = new ClassID(src, o);
    o += ClassID::LENGTH;
    auto const sectionCount = ::org::apache::poi::util::LittleEndian::getInt(src, o);
    o += ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
    if(sectionCount < 0) {
        throw new HPSFRuntimeException(::java::lang::StringBuilder().append(u"Section count "_j)->append(sectionCount)
            ->append(u" is negative."_j)->toString());
    }
    for (auto i = int32_t(0); i < sectionCount; i++) {
        Section* const s = new MutableSection(src, o);
        o += ClassID::LENGTH + ::org::apache::poi::util::LittleEndianConsts::INT_SIZE;
        npc(sections)->add(static_cast< ::java::lang::Object* >(s));
    }
}

void org::apache::poi::hpsf::PropertySet::write(::java::io::OutputStream* out) /* throws(WritingNotSupportedException, IOException) */
{
    auto const nrSections = getSectionCount();
    ::org::apache::poi::util::LittleEndian::putShort(out, static_cast< int16_t >(getByteOrder()));
    ::org::apache::poi::util::LittleEndian::putShort(out, static_cast< int16_t >(getFormat()));
    ::org::apache::poi::util::LittleEndian::putInt(getOSVersion(), out);
    putClassId(out, getClassID());
    ::org::apache::poi::util::LittleEndian::putInt(nrSections, out);
    auto offset = PropertySet::OFFSET_HEADER;
    offset += nrSections * (ClassID::LENGTH + ::org::apache::poi::util::LittleEndianConsts::INT_SIZE);
    auto const sectionsBegin = offset;
    for (auto _i = npc(getSections())->iterator(); _i->hasNext(); ) {
        Section* section = java_cast< Section* >(_i->next());
        {
            auto const formatID = npc(section)->getFormatID();
            if(formatID == nullptr) {
                throw new NoFormatIDException();
            }
            putClassId(out, formatID);
            ::org::apache::poi::util::LittleEndian::putUInt(offset, out);
            try {
                offset += npc(section)->getSize();
            } catch (HPSFRuntimeException* ex) {
                auto const cause = npc(ex)->getReason();
                if(dynamic_cast< ::java::io::UnsupportedEncodingException* >(cause) != nullptr) {
                    throw new IllegalPropertySetDataException(cause);
                }
                throw ex;
            }
        }
    }
    offset = sectionsBegin;
    for (auto _i = npc(getSections())->iterator(); _i->hasNext(); ) {
        Section* section = java_cast< Section* >(_i->next());
        {
            offset += npc(section)->write(out);
        }
    }
    npc(out)->close();
}

void org::apache::poi::hpsf::PropertySet::write(::org::apache::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* name) /* throws(WritingNotSupportedException, IOException) */
{
    if(npc(dir)->hasEntry(name)) {
        auto const e = npc(dir)->getEntry(name);
        npc(e)->delete_();
    }
    npc(dir)->createDocument(name, toInputStream());
}

java::io::InputStream* org::apache::poi::hpsf::PropertySet::toInputStream() /* throws(IOException, WritingNotSupportedException) */
{
    auto const psStream = new ::java::io::ByteArrayOutputStream();
    {
        auto finally0 = finally([&] {
            npc(psStream)->close();
        });
        {
            write(psStream);
        }
    }

    auto const streamData = npc(psStream)->toByteArray_();
    return new ::java::io::ByteArrayInputStream(streamData);
}

java::lang::String* org::apache::poi::hpsf::PropertySet::getPropertyStringValue(int32_t propertyId)
{
    auto propertyValue = getProperty(propertyId);
    return getPropertyStringValue(propertyValue);
}

java::lang::String* org::apache::poi::hpsf::PropertySet::getPropertyStringValue(::java::lang::Object* propertyValue)
{
    clinit();
    if(propertyValue == nullptr) {
        return nullptr;
    }
    if(dynamic_cast< ::java::lang::String* >(propertyValue) != nullptr) {
        return java_cast< ::java::lang::String* >(propertyValue);
    }
    if(dynamic_cast< ::int8_tArray* >(propertyValue) != nullptr) {
        auto b = java_cast< ::int8_tArray* >(propertyValue);
        switch (npc(b)->length) {
        case int32_t(0):
            return u""_j;
        case int32_t(1):
            return ::java::lang::Byte::toString((*b)[int32_t(0)]);
        case int32_t(2):
            return ::java::lang::Integer::toString(::org::apache::poi::util::LittleEndian::getUShort(b));
        case int32_t(4):
            return ::java::lang::Long::toString(::org::apache::poi::util::LittleEndian::getUInt(b));
        default:
            try {
                return ::org::apache::poi::util::CodePageUtil::getStringFromCodePage(b, Property::DEFAULT_CODEPAGE);
            } catch (::java::io::UnsupportedEncodingException* e) {
                return u""_j;
            }
        }

    }
    return npc(propertyValue)->toString();
}

bool org::apache::poi::hpsf::PropertySet::isSummaryInformation()
{
    return !npc(sections)->isEmpty() && matchesSummary(npc(getFirstSection())->getFormatID(), new ClassIDArray({::org::apache::poi::hpsf::wellknown::SectionIDMap::SUMMARY_INFORMATION_ID()}));
}

bool org::apache::poi::hpsf::PropertySet::isDocumentSummaryInformation()
{
    return !npc(sections)->isEmpty() && matchesSummary(npc(getFirstSection())->getFormatID(), ::org::apache::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID());
}

bool org::apache::poi::hpsf::PropertySet::matchesSummary(ClassID* actual, ClassIDArray*/*...*/ expected)
{
    clinit();
    for(auto sum : *npc(expected)) {
        if(npc(sum)->equals(static_cast< ::java::lang::Object* >(actual)) || npc(sum)->equalsInverted(actual)) {
            return true;
        }
    }
    return false;
}

org::apache::poi::hpsf::PropertyArray* org::apache::poi::hpsf::PropertySet::getProperties() /* throws(NoSingleSectionException) */
{
    return npc(getFirstSection())->getProperties();
}

java::lang::Object* org::apache::poi::hpsf::PropertySet::getProperty(int32_t id) /* throws(NoSingleSectionException) */
{
    return npc(getFirstSection())->getProperty(id);
}

bool org::apache::poi::hpsf::PropertySet::getPropertyBooleanValue(int32_t id) /* throws(NoSingleSectionException) */
{
    return npc(getFirstSection())->getPropertyBooleanValue(id);
}

int32_t org::apache::poi::hpsf::PropertySet::getPropertyIntValue(int32_t id) /* throws(NoSingleSectionException) */
{
    return npc(getFirstSection())->getPropertyIntValue(id);
}

bool org::apache::poi::hpsf::PropertySet::wasNull() /* throws(NoSingleSectionException) */
{
    return npc(getFirstSection())->wasNull();
}

org::apache::poi::hpsf::Section* org::apache::poi::hpsf::PropertySet::getFirstSection()
{
    if(npc(sections)->isEmpty()) {
        throw new MissingSectionException(u"Property set does not contain any sections."_j);
    }
    return java_cast< Section* >(npc(sections)->get(0));
}

org::apache::poi::hpsf::Section* org::apache::poi::hpsf::PropertySet::getSingleSection()
{
    auto const sectionCount = getSectionCount();
    if(sectionCount != 1) {
        throw new NoSingleSectionException(::java::lang::StringBuilder().append(u"Property set contains "_j)->append(sectionCount)
            ->append(u" sections."_j)->toString());
    }
    return java_cast< Section* >(npc(sections)->get(0));
}

bool org::apache::poi::hpsf::PropertySet::equals(::java::lang::Object* o)
{
    if(o == nullptr || !(dynamic_cast< PropertySet* >(o) != nullptr)) {
        return false;
    }
    auto const ps = java_cast< PropertySet* >(o);
    auto byteOrder1 = npc(ps)->getByteOrder();
    auto byteOrder2 = getByteOrder();
    auto classID1 = npc(ps)->getClassID();
    auto classID2 = getClassID();
    auto format1 = npc(ps)->getFormat();
    auto format2 = getFormat();
    auto osVersion1 = npc(ps)->getOSVersion();
    auto osVersion2 = getOSVersion();
    auto sectionCount1 = npc(ps)->getSectionCount();
    auto sectionCount2 = getSectionCount();
    if(byteOrder1 != byteOrder2 || !npc(classID1)->equals(static_cast< ::java::lang::Object* >(classID2)) || format1 != format2 || osVersion1 != osVersion2 || sectionCount1 != sectionCount2) {
        return false;
    }
    return npc(getSections())->containsAll(static_cast< ::java::util::Collection* >(npc(ps)->getSections()));
}

int32_t org::apache::poi::hpsf::PropertySet::hashCode()
{
    throw new ::java::lang::UnsupportedOperationException(u"FIXME: Not yet implemented."_j);
}

java::lang::String* org::apache::poi::hpsf::PropertySet::toString()
{
    auto const b = new ::java::lang::StringBuilder();
    auto const sectionCount = getSectionCount();
    npc(b)->append(npc(getClass())->getName());
    npc(b)->append(u'[');
    npc(b)->append(u"byteOrder: "_j);
    npc(b)->append(getByteOrder());
    npc(b)->append(u", classID: "_j);
    npc(b)->append(static_cast< ::java::lang::Object* >(getClassID()));
    npc(b)->append(u", format: "_j);
    npc(b)->append(getFormat());
    npc(b)->append(u", OSVersion: "_j);
    npc(b)->append(getOSVersion());
    npc(b)->append(u", sectionCount: "_j);
    npc(b)->append(sectionCount);
    npc(b)->append(u", sections: [\n"_j);
    for (auto _i = npc(getSections())->iterator(); _i->hasNext(); ) {
        Section* section = java_cast< Section* >(_i->next());
        {
            npc(b)->append(npc(section)->toString(getPropertySetIDMap()));
        }
    }
    npc(b)->append(u']');
    npc(b)->append(u']');
    return npc(b)->toString();
}

void org::apache::poi::hpsf::PropertySet::remove1stProperty(int64_t id)
{
    npc(getFirstSection())->removeProperty(id);
}

void org::apache::poi::hpsf::PropertySet::set1stProperty(int64_t id, ::java::lang::String* value)
{
    npc(getFirstSection())->setProperty(static_cast< int32_t >(id), value);
}

void org::apache::poi::hpsf::PropertySet::set1stProperty(int64_t id, int32_t value)
{
    npc(getFirstSection())->setProperty(static_cast< int32_t >(id), value);
}

void org::apache::poi::hpsf::PropertySet::set1stProperty(int64_t id, bool value)
{
    npc(getFirstSection())->setProperty(static_cast< int32_t >(id), value);
}

void org::apache::poi::hpsf::PropertySet::set1stProperty(int64_t id, ::int8_tArray* value)
{
    npc(getFirstSection())->setProperty(static_cast< int32_t >(id), static_cast< ::java::lang::Object* >(value));
}

void org::apache::poi::hpsf::PropertySet::putClassId(::java::io::OutputStream* out, ClassID* n) /* throws(IOException) */
{
    clinit();
    auto b = new ::int8_tArray(int32_t(16));
    npc(n)->write(b, 0);
    npc(out)->write(b, 0, npc(b)->length);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::PropertySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.PropertySet", 31);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::PropertySet::getClass0()
{
    return class_();
}

