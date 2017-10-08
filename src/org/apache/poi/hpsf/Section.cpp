// Generated from /POI/java/org/apache/poi/hpsf/Section.java
#include <org/apache/poi/hpsf/Section.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Date.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedHashMap.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/TreeMap.hpp>
#include <org/apache/commons/collections4/OrderedBidiMap.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/HPSFRuntimeException.hpp>
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>
#include <org/apache/poi/hpsf/MutableProperty.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
    } // hpsf
} // poi

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

poi::hpsf::Section::Section(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Section::Section() 
    : Section(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::Section::Section(Section* s) 
    : Section(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

poi::hpsf::Section::Section(::int8_tArray* src, int32_t offset)  /* throws(UnsupportedEncodingException) */
    : Section(*static_cast< ::default_init_tag* >(0))
{
    ctor(src,offset);
}

void poi::hpsf::Section::init()
{
    sectionBytes = new ::java::io::ByteArrayOutputStream();
    properties = new ::java::util::LinkedHashMap();
}

poi::util::POILogger*& poi::hpsf::Section::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::hpsf::Section::LOG_;

void poi::hpsf::Section::ctor()
{
    super::ctor();
    init();
    this->_offset = -int32_t(1);
}

void poi::hpsf::Section::ctor(Section* s)
{
    super::ctor();
    init();
    this->_offset = -int32_t(1);
    setFormatID(npc(s)->getFormatID());
    for (auto _i = npc(npc(npc(s)->properties)->values())->iterator(); _i->hasNext(); ) {
        Property* p = java_cast< Property* >(_i->next());
        {
            npc(properties)->put(::java::lang::Long::valueOf(npc(p)->getID()), new MutableProperty(p));
        }
    }
    setDictionary(npc(s)->getDictionary());
}

void poi::hpsf::Section::ctor(::int8_tArray* src, int32_t offset) /* throws(UnsupportedEncodingException) */
{
    super::ctor();
    init();
    formatID = new ClassID(src, offset);
    auto offFix = static_cast< int32_t >(::poi::util::LittleEndian::getUInt(src, offset + ClassID::LENGTH));
    if((*src)[offFix] == 0) {
        for (auto i = int32_t(0); i < 3 && (*src)[offFix] == 0; i++, offFix++) 
                        ;

        for (auto i = int32_t(0); i < 3 && ((*src)[offFix + int32_t(3)] != 0 || (*src)[offFix + int32_t(7)] != 0 || (*src)[offFix + int32_t(11)] != 0); i++, offFix--) 
                        ;

    }
    this->_offset = offFix;
    auto leis = new ::poi::util::LittleEndianByteArrayInputStream(src, offFix);
    auto size = static_cast< int32_t >(::java::lang::Math::min(npc(leis)->readUInt(), npc(src)->length - _offset));
    auto const propertyCount = static_cast< int32_t >(npc(leis)->readUInt());
    auto const offset2Id = new ::org::apache::commons::collections4::bidimap::TreeBidiMap();
    for (auto i = int32_t(0); i < propertyCount; i++) {
        int64_t id = static_cast< int32_t >(npc(leis)->readUInt());
        int64_t off = static_cast< int32_t >(npc(leis)->readUInt());
        npc(offset2Id)->put(::java::lang::Long::valueOf(off), ::java::lang::Long::valueOf(id));
    }
    auto cpOffset = java_cast< ::java::lang::Long* >(npc(offset2Id)->getKey(::java::lang::Long::valueOf(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE))));
    auto codepage = -int32_t(1);
    if(cpOffset != nullptr) {
        npc(leis)->setReadIndex(static_cast< int32_t >((this->_offset + (npc(cpOffset))->longValue())));
        auto const type = npc(leis)->readUInt();
        if(type != Variant::VT_I2) {
            throw new HPSFRuntimeException(::java::lang::StringBuilder().append(u"Value type of property ID 1 is not VT_I2 but "_j)->append(type)
                ->append(u"."_j)->toString());
        }
        codepage = npc(leis)->readUShort();
        setCodepage(codepage);
    }
    for (auto _i = npc(npc(offset2Id)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* me = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            int64_t off = (npc(java_cast< ::java::lang::Long* >(npc(me)->getKey())))->longValue();
            int64_t id = (npc(java_cast< ::java::lang::Long* >(npc(me)->getValue())))->longValue();
            if(id == ::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE) {
                continue;
            }
            auto pLen = propLen(offset2Id, ::java::lang::Long::valueOf(off), size);
            npc(leis)->setReadIndex(static_cast< int32_t >((this->_offset + off)));
            if(id == ::poi::hpsf::wellknown::PropertyIDMap::PID_DICTIONARY) {
                npc(leis)->mark(int32_t(100000));
                if(!readDictionary(leis, pLen, codepage)) {
                    npc(leis)->reset();
                    try {
                        id = ::java::lang::Math::max(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_MAX), (npc(java_cast< ::java::lang::Long* >(npc(npc(offset2Id)->inverseBidiMap())->lastKey())))->longValue()) + int32_t(1);
                        setProperty(new MutableProperty(id, leis, pLen, codepage));
                    } catch (::java::lang::RuntimeException* e) {
                        npc(LOG_)->log(::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Dictionary fallback failed - ignoring property"_j)}));
                    }
                }
                ;
            } else {
                setProperty(new MutableProperty(id, leis, pLen, codepage));
            }
        }
    }
    npc(sectionBytes)->write(src, static_cast< int32_t >(_offset), size);
    padSectionBytes();
}

int32_t poi::hpsf::Section::propLen(::org::apache::commons::collections4::bidimap::TreeBidiMap* offset2Id, ::java::lang::Long* entryOffset, int64_t maxSize)
{
    clinit();
    auto nextKey = java_cast< ::java::lang::Long* >(npc(offset2Id)->nextKey(static_cast< ::java::lang::Comparable* >(entryOffset)));
    int64_t begin = (npc(entryOffset))->longValue();
    auto end = (nextKey != nullptr) ? (npc(nextKey))->longValue() : maxSize;
    return static_cast< int32_t >((end - begin));
}

poi::hpsf::ClassID* poi::hpsf::Section::getFormatID()
{
    return formatID;
}

void poi::hpsf::Section::setFormatID(ClassID* formatID)
{
    this->formatID = formatID;
}

void poi::hpsf::Section::setFormatID(::int8_tArray* formatID)
{
    auto fid = getFormatID();
    if(fid == nullptr) {
        fid = new ClassID();
        setFormatID(fid);
    }
    npc(fid)->setBytes(formatID);
}

int64_t poi::hpsf::Section::getOffset()
{
    return _offset;
}

int32_t poi::hpsf::Section::getPropertyCount()
{
    return npc(properties)->size();
}

poi::hpsf::PropertyArray* poi::hpsf::Section::getProperties()
{
    return java_cast< PropertyArray* >(npc(npc(properties)->values())->toArray_(new PropertyArray(npc(properties)->size())));
}

void poi::hpsf::Section::setProperties(PropertyArray* properties)
{
    npc(java_cast< ::java::util::Map* >(this->properties))->clear();
    for(auto p : *npc(properties)) {
        setProperty(p);
    }
}

java::lang::Object* poi::hpsf::Section::getProperty(int64_t id)
{
    wasNull_ = !npc(properties)->containsKey(::java::lang::Long::valueOf(id));
    return (wasNull_) ? static_cast< ::java::lang::Object* >(nullptr) : npc(java_cast< Property* >(npc(properties)->get(::java::lang::Long::valueOf(id))))->getValue();
}

void poi::hpsf::Section::setProperty(int32_t id, ::java::lang::String* value)
{
    setProperty(id, Variant::VT_LPSTR, value);
}

void poi::hpsf::Section::setProperty(int32_t id, int32_t value)
{
    setProperty(id, Variant::VT_I4, ::java::lang::Integer::valueOf(value));
}

void poi::hpsf::Section::setProperty(int32_t id, int64_t value)
{
    setProperty(id, Variant::VT_I8, ::java::lang::Long::valueOf(value));
}

void poi::hpsf::Section::setProperty(int32_t id, bool value)
{
    setProperty(id, Variant::VT_BOOL, ::java::lang::Boolean::valueOf(value));
}

void poi::hpsf::Section::setProperty(int32_t id, int64_t variantType, ::java::lang::Object* value)
{
    setProperty(new MutableProperty(id, variantType, value));
}

void poi::hpsf::Section::setProperty(Property* p)
{
    auto old = java_cast< Property* >(npc(properties)->get(::java::lang::Long::valueOf(npc(p)->getID())));
    if(old == nullptr || !npc(old)->equals(static_cast< ::java::lang::Object* >(p))) {
        npc(properties)->put(::java::lang::Long::valueOf(npc(p)->getID()), p);
        npc(sectionBytes)->reset();
    }
}

void poi::hpsf::Section::setProperty(int32_t id, ::java::lang::Object* value)
{
    if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
        setProperty(id, java_cast< ::java::lang::String* >(value));
    } else if(dynamic_cast< ::java::lang::Long* >(value) != nullptr) {
        setProperty(id, npc((java_cast< ::java::lang::Long* >(value)))->longValue());
    } else if(dynamic_cast< ::java::lang::Integer* >(value) != nullptr) {
        setProperty(id, npc((java_cast< ::java::lang::Integer* >(value)))->intValue());
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        setProperty(id, npc((java_cast< ::java::lang::Short* >(value)))->intValue());
    } else if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        setProperty(id, npc((java_cast< ::java::lang::Boolean* >(value)))->booleanValue());
    } else if(dynamic_cast< ::java::util::Date* >(value) != nullptr) {
        setProperty(id, Variant::VT_FILETIME, value);
    } else {
        throw new HPSFRuntimeException(::java::lang::StringBuilder().append(u"HPSF does not support properties of type "_j)->append(npc(npc(value)->getClass())->getName())
            ->append(u"."_j)->toString());
    }
}

int32_t poi::hpsf::Section::getPropertyIntValue(int64_t id)
{
    ::java::lang::Number* i;
    auto const o = getProperty(id);
    if(o == nullptr) {
        return 0;
    }
    if(!(dynamic_cast< ::java::lang::Long* >(o) != nullptr || dynamic_cast< ::java::lang::Integer* >(o) != nullptr)) {
        throw new HPSFRuntimeException(::java::lang::StringBuilder().append(u"This property is not an integer type, but "_j)->append(npc(npc(o)->getClass())->getName())
            ->append(u"."_j)->toString());
    }
    i = java_cast< ::java::lang::Number* >(o);
    return npc(i)->intValue();
}

bool poi::hpsf::Section::getPropertyBooleanValue(int32_t id)
{
    auto const b = java_cast< ::java::lang::Boolean* >(getProperty(id));
    if(b == nullptr) {
        return false;
    }
    return npc(b)->booleanValue();
}

void poi::hpsf::Section::setPropertyBooleanValue(int32_t id, bool value)
{
    setProperty(id, Variant::VT_BOOL, ::java::lang::Boolean::valueOf(value));
}

int32_t poi::hpsf::Section::getSize()
{
    auto size = npc(sectionBytes)->size();
    if(size > 0) {
        return size;
    }
    try {
        return calcSize();
    } catch (HPSFRuntimeException* ex) {
        throw ex;
    } catch (::java::lang::Exception* ex) {
        throw new HPSFRuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

int32_t poi::hpsf::Section::calcSize() /* throws(WritingNotSupportedException, IOException) */
{
    npc(sectionBytes)->reset();
    write(sectionBytes);
    padSectionBytes();
    return npc(sectionBytes)->size();
}

void poi::hpsf::Section::padSectionBytes()
{
    auto padArray_ = (new ::int8_tArray({
        static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
    }));
    auto pad = (int32_t(4) - (npc(sectionBytes)->size() & int32_t(3))) & int32_t(3);
    npc(sectionBytes)->write(padArray_, int32_t(0), pad);
}

bool poi::hpsf::Section::wasNull()
{
    return wasNull_;
}

java::lang::String* poi::hpsf::Section::getPIDString(int64_t pid)
{
    ::java::lang::String* s = nullptr;
    auto dic = getDictionary();
    if(dic != nullptr) {
        s = java_cast< ::java::lang::String* >(npc(dic)->get(::java::lang::Long::valueOf(pid)));
    }
    if(s == nullptr) {
        s = ::poi::hpsf::wellknown::SectionIDMap::getPIDString(getFormatID(), pid);
    }
    return s;
}

void poi::hpsf::Section::clear()
{
    for(auto p : *npc(getProperties())) {
        removeProperty(npc(p)->getID());
    }
}

bool poi::hpsf::Section::equals(::java::lang::Object* o)
{
    if(!(dynamic_cast< Section* >(o) != nullptr)) {
        return false;
    }
    auto const s = java_cast< Section* >(o);
    if(!npc(npc(s)->getFormatID())->equals(static_cast< ::java::lang::Object* >(getFormatID()))) {
        return false;
    }
    ::java::util::Set* propIds = new ::java::util::HashSet(static_cast< ::java::util::Collection* >(npc(properties)->keySet()));
    npc(propIds)->addAll(static_cast< ::java::util::Collection* >(npc(npc(s)->properties)->keySet()));
    npc(propIds)->remove(::java::lang::Long::valueOf(int64_t(0LL)));
    npc(propIds)->remove(::java::lang::Long::valueOf(int64_t(1LL)));
    for (auto _i = npc(propIds)->iterator(); _i->hasNext(); ) {
        ::java::lang::Long* id = java_cast< ::java::lang::Long* >(_i->next());
        {
            auto p1 = java_cast< Property* >(npc(properties)->get(id));
            auto p2 = java_cast< Property* >(npc(npc(s)->properties)->get(id));
            if(p1 == nullptr || p2 == nullptr || !npc(p1)->equals(static_cast< ::java::lang::Object* >(p2))) {
                return false;
            }
        }
    }
    auto d1 = getDictionary();
    auto d2 = npc(s)->getDictionary();
    return (d1 == nullptr && d2 == nullptr) || (d1 != nullptr && d2 != nullptr && npc(d1)->equals(static_cast< ::java::lang::Object* >(d2)));
}

void poi::hpsf::Section::removeProperty(int64_t id)
{
    if(java_cast< Property* >(npc(properties)->remove(::java::lang::Long::valueOf(id))) != nullptr) {
        npc(sectionBytes)->reset();
    }
}

int32_t poi::hpsf::Section::write(::java::io::OutputStream* out) /* throws(WritingNotSupportedException, IOException) */
{
    if(npc(sectionBytes)->size() > 0) {
        npc(sectionBytes)->writeTo(out);
        return npc(sectionBytes)->size();
    }
    auto codepage = getCodepage();
    if(codepage == -int32_t(1)) {
        auto msg = ::java::lang::StringBuilder().append(u"The codepage property is not set although a dictionary is present. "_j)->append(u"Defaulting to ISO-8859-1."_j)->toString();
        npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(msg)}));
        codepage = Property::DEFAULT_CODEPAGE;
    }
    auto const propertyStream = new ::java::io::ByteArrayOutputStream();
    auto const propertyListStream = new ::java::io::ByteArrayOutputStream();
    auto position = int32_t(0);
    position += int32_t(2) * ::poi::util::LittleEndianConsts::INT_SIZE + getPropertyCount() * int32_t(2) * ::poi::util::LittleEndianConsts::INT_SIZE;
    for (auto _i = npc(npc(properties)->values())->iterator(); _i->hasNext(); ) {
        Property* p = java_cast< Property* >(_i->next());
        {
            auto const id = npc(p)->getID();
            ::poi::util::LittleEndian::putUInt(id, propertyListStream);
            ::poi::util::LittleEndian::putUInt(position, propertyListStream);
            if(id != 0) {
                position += npc(p)->write(propertyStream, codepage);
            } else {
                if(codepage == -int32_t(1)) {
                    throw new IllegalPropertySetDataException(u"Codepage (property 1) is undefined."_j);
                }
                position += writeDictionary(propertyStream, codepage);
            }
        }
    }
    auto streamLength = ::poi::util::LittleEndianConsts::INT_SIZE * int32_t(2) + npc(propertyListStream)->size() + npc(propertyStream)->size();
    ::poi::util::LittleEndian::putInt(streamLength, out);
    ::poi::util::LittleEndian::putInt(getPropertyCount(), out);
    npc(propertyListStream)->writeTo(out);
    npc(propertyStream)->writeTo(out);
    return streamLength;
}

bool poi::hpsf::Section::readDictionary(::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */
{
    ::java::util::Map* dic = new ::java::util::HashMap();
    auto const nrEntries = npc(leis)->readUInt();
    int64_t id = -int32_t(1);
    auto isCorrupted = false;
    for (auto i = int32_t(0); i < nrEntries; i++) {
        auto errMsg = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"The property set's dictionary contains bogus data. "_j)->append(u"All dictionary entries starting with the one with ID "_j)->toString())->append(id)
            ->append(u" will be ignored."_j)->toString();
        id = npc(leis)->readUInt();
        auto sLength = npc(leis)->readUInt();
        auto cp = (codepage == -int32_t(1)) ? Property::DEFAULT_CODEPAGE : codepage;
        auto nrBytes = static_cast< int32_t >(((sLength - int32_t(1)) * (cp == ::poi::util::CodePageUtil::CP_UNICODE ? int32_t(2) : int32_t(1))));
        if(nrBytes > 16777215) {
            npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(errMsg)}));
            isCorrupted = true;
            break;
        }
        try {
            auto buf = new ::int8_tArray(nrBytes);
            npc(leis)->readFully(buf, int32_t(0), nrBytes);
            auto const str = ::poi::util::CodePageUtil::getStringFromCodePage(buf, 0, nrBytes, cp);
            auto pad = int32_t(1);
            if(cp == ::poi::util::CodePageUtil::CP_UNICODE) {
                pad = int32_t(2) + ((int32_t(4) - ((nrBytes + int32_t(2)) & int32_t(3))) & int32_t(3));
            }
            npc(leis)->skip(static_cast< int64_t >(pad));
            npc(dic)->put(::java::lang::Long::valueOf(id), str);
        } catch (::java::lang::RuntimeException* ex) {
            npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(errMsg), static_cast< ::java::lang::Object* >(ex)}));
            isCorrupted = true;
            break;
        }
    }
    setDictionary(dic);
    return !isCorrupted;
}

int32_t poi::hpsf::Section::writeDictionary(::java::io::OutputStream* out, int32_t codepage) /* throws(IOException) */
{
    auto const padding = new ::int8_tArray(int32_t(4));
    auto dic = getDictionary();
    ::poi::util::LittleEndian::putUInt(npc(dic)->size(), out);
    auto length = ::poi::util::LittleEndianConsts::INT_SIZE;
    for (auto _i = npc(npc(dic)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* ls = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            ::poi::util::LittleEndian::putUInt((npc(java_cast< ::java::lang::Long* >(npc(ls)->getKey())))->longValue(), out);
            length += ::poi::util::LittleEndianConsts::INT_SIZE;
            auto value = ::java::lang::StringBuilder().append(java_cast< ::java::lang::String* >(npc(ls)->getValue()))->append(u"\0"_j)->toString();
            ::poi::util::LittleEndian::putUInt(npc(value)->length(), out);
            length += ::poi::util::LittleEndianConsts::INT_SIZE;
            auto bytes = ::poi::util::CodePageUtil::getBytesInCodePage(value, codepage);
            npc(out)->write(bytes);
            length += npc(bytes)->length;
            if(codepage == ::poi::util::CodePageUtil::CP_UNICODE) {
                auto pad = (int32_t(4) - (length & int32_t(3))) & int32_t(3);
                npc(out)->write(padding, 0, pad);
                length += pad;
            }
        }
    }
    auto pad = (int32_t(4) - (length & int32_t(3))) & int32_t(3);
    npc(out)->write(padding, 0, pad);
    length += pad;
    return length;
}

void poi::hpsf::Section::setDictionary(::java::util::Map* dictionary) /* throws(IllegalPropertySetDataException) */
{
    if(dictionary != nullptr) {
        if(java_cast< ::java::util::Map* >(this->dictionary) == nullptr) {
            this->dictionary = new ::java::util::TreeMap();
        }
        npc(java_cast< ::java::util::Map* >(this->dictionary))->putAll(dictionary);
        auto cp = getCodepage();
        if(cp == -int32_t(1)) {
            setCodepage(Property::DEFAULT_CODEPAGE);
        }
        setProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DICTIONARY, -int32_t(1), dictionary);
    } else {
        removeProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DICTIONARY);
        this->dictionary = nullptr;
    }
}

int32_t poi::hpsf::Section::hashCode()
{
    int64_t hashCode = int32_t(0);
    hashCode += npc(getFormatID())->hashCode();
    auto const pa = getProperties();
    for (auto i = int32_t(0); i < npc(pa)->length; i++) {
        hashCode += npc((*pa)[i])->hashCode();
    }
    auto const returnHashCode = static_cast< int32_t >((hashCode & int64_t(4294967295LL)));
    return returnHashCode;
}

java::lang::String* poi::hpsf::Section::toString()
{
    return toString(nullptr);
}

java::lang::String* poi::hpsf::Section::toString(::poi::hpsf::wellknown::PropertyIDMap* idMap)
{
    auto const b = new ::java::lang::StringBuffer();
    auto const pa = getProperties();
    npc(b)->append(u"\n\n\n"_j);
    npc(b)->append(npc(getClass())->getName());
    npc(b)->append(u'[');
    npc(b)->append(u"formatID: "_j);
    npc(b)->append(static_cast< ::java::lang::Object* >(getFormatID()));
    npc(b)->append(u", offset: "_j);
    npc(b)->append(getOffset());
    npc(b)->append(u", propertyCount: "_j);
    npc(b)->append(getPropertyCount());
    npc(b)->append(u", size: "_j);
    npc(b)->append(getSize());
    npc(b)->append(u", properties: [\n"_j);
    auto codepage = getCodepage();
    if(codepage == -int32_t(1)) {
        codepage = Property::DEFAULT_CODEPAGE;
    }
    for(auto p : *npc(pa)) {
        npc(b)->append(npc(p)->toString(codepage, idMap));
        npc(b)->append(u",\n"_j);
    }
    npc(b)->append(u']');
    npc(b)->append(u']');
    return npc(b)->toString();
}

java::util::Map* poi::hpsf::Section::getDictionary()
{
    if(dictionary == nullptr) {
        dictionary = java_cast< ::java::util::Map* >(getProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DICTIONARY));
    }
    return dictionary;
}

int32_t poi::hpsf::Section::getCodepage()
{
    auto const codepage = java_cast< ::java::lang::Integer* >(getProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE));
    return (codepage == nullptr) ? -int32_t(1) : npc(codepage)->intValue();
}

void poi::hpsf::Section::setCodepage(int32_t codepage)
{
    setProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE, Variant::VT_I2, ::java::lang::Integer::valueOf(codepage));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Section::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Section", 27);
    return c;
}

void poi::hpsf::Section::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(Section::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hpsf::Section::getClass0()
{
    return class_();
}

