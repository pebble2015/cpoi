// Generated from /POI/java/org/apache/poi/hpsf/DocumentSummaryInformation.java
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedList.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/CustomProperties.hpp>
#include <org/apache/poi/hpsf/CustomProperty.hpp>
#include <org/apache/poi/hpsf/HPSFRuntimeException.hpp>
#include <org/apache/poi/hpsf/MutableSection.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/Section.hpp>
#include <org/apache/poi/hpsf/UnexpectedPropertySetTypeException.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
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

poi::hpsf::DocumentSummaryInformation::DocumentSummaryInformation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::DocumentSummaryInformation::DocumentSummaryInformation() 
    : DocumentSummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::DocumentSummaryInformation::DocumentSummaryInformation(PropertySet* ps)  /* throws(UnexpectedPropertySetTypeException) */
    : DocumentSummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

poi::hpsf::DocumentSummaryInformation::DocumentSummaryInformation(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : DocumentSummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

java::lang::String*& poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME()
{
    clinit();
    return DEFAULT_STREAM_NAME_;
}
java::lang::String* poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME_;

poi::hpsf::wellknown::PropertyIDMap* poi::hpsf::DocumentSummaryInformation::getPropertySetIDMap()
{
    return ::poi::hpsf::wellknown::PropertyIDMap::getDocumentSummaryInformationProperties();
}

void poi::hpsf::DocumentSummaryInformation::ctor()
{
    super::ctor();
    npc(getFirstSection())->setFormatID((*::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID())[int32_t(0)]);
}

void poi::hpsf::DocumentSummaryInformation::ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */
{
    super::ctor(ps);
    if(!isDocumentSummaryInformation()) {
        throw new UnexpectedPropertySetTypeException(::java::lang::StringBuilder().append(u"Not a "_j)->append(npc(getClass())->getName())->toString());
    }
}

void poi::hpsf::DocumentSummaryInformation::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor(stream);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getCategory()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_CATEGORY);
}

void poi::hpsf::DocumentSummaryInformation::setCategory(::java::lang::String* category)
{
    npc(getFirstSection())->setProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CATEGORY, category);
}

void poi::hpsf::DocumentSummaryInformation::removeCategory()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CATEGORY);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getPresentationFormat()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_PRESFORMAT);
}

void poi::hpsf::DocumentSummaryInformation::setPresentationFormat(::java::lang::String* presentationFormat)
{
    npc(getFirstSection())->setProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_PRESFORMAT, presentationFormat);
}

void poi::hpsf::DocumentSummaryInformation::removePresentationFormat()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_PRESFORMAT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getByteCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_BYTECOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setByteCount(int32_t byteCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_BYTECOUNT), byteCount);
}

void poi::hpsf::DocumentSummaryInformation::removeByteCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_BYTECOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getLineCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_LINECOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setLineCount(int32_t lineCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_LINECOUNT), lineCount);
}

void poi::hpsf::DocumentSummaryInformation::removeLineCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_LINECOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getParCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_PARCOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setParCount(int32_t parCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_PARCOUNT), parCount);
}

void poi::hpsf::DocumentSummaryInformation::removeParCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_PARCOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getSlideCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_SLIDECOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setSlideCount(int32_t slideCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_SLIDECOUNT), slideCount);
}

void poi::hpsf::DocumentSummaryInformation::removeSlideCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_SLIDECOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getNoteCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_NOTECOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setNoteCount(int32_t noteCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_NOTECOUNT), noteCount);
}

void poi::hpsf::DocumentSummaryInformation::removeNoteCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_NOTECOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getHiddenCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_HIDDENCOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setHiddenCount(int32_t hiddenCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_HIDDENCOUNT), hiddenCount);
}

void poi::hpsf::DocumentSummaryInformation::removeHiddenCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_HIDDENCOUNT);
}

int32_t poi::hpsf::DocumentSummaryInformation::getMMClipCount()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_MMCLIPCOUNT);
}

void poi::hpsf::DocumentSummaryInformation::setMMClipCount(int32_t mmClipCount)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_MMCLIPCOUNT), mmClipCount);
}

void poi::hpsf::DocumentSummaryInformation::removeMMClipCount()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_MMCLIPCOUNT);
}

bool poi::hpsf::DocumentSummaryInformation::getScale()
{
    return getPropertyBooleanValue(::poi::hpsf::wellknown::PropertyIDMap::PID_SCALE);
}

void poi::hpsf::DocumentSummaryInformation::setScale(bool scale)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_SCALE), scale);
}

void poi::hpsf::DocumentSummaryInformation::removeScale()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_SCALE);
}

int8_tArray* poi::hpsf::DocumentSummaryInformation::getHeadingPair()
{
    notYetImplemented(u"Reading byte arrays "_j);
    return java_cast< ::int8_tArray* >(getProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_HEADINGPAIR));
}

void poi::hpsf::DocumentSummaryInformation::setHeadingPair(::int8_tArray* headingPair)
{
    notYetImplemented(u"Writing byte arrays "_j);
}

void poi::hpsf::DocumentSummaryInformation::removeHeadingPair()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_HEADINGPAIR);
}

int8_tArray* poi::hpsf::DocumentSummaryInformation::getDocparts()
{
    notYetImplemented(u"Reading byte arrays"_j);
    return java_cast< ::int8_tArray* >(getProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DOCPARTS));
}

void poi::hpsf::DocumentSummaryInformation::setDocparts(::int8_tArray* docparts)
{
    notYetImplemented(u"Writing byte arrays"_j);
}

void poi::hpsf::DocumentSummaryInformation::removeDocparts()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DOCPARTS);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getManager()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_MANAGER);
}

void poi::hpsf::DocumentSummaryInformation::setManager(::java::lang::String* manager)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_MANAGER), manager);
}

void poi::hpsf::DocumentSummaryInformation::removeManager()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_MANAGER);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getCompany()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_COMPANY);
}

void poi::hpsf::DocumentSummaryInformation::setCompany(::java::lang::String* company)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_COMPANY), company);
}

void poi::hpsf::DocumentSummaryInformation::removeCompany()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_COMPANY);
}

bool poi::hpsf::DocumentSummaryInformation::getLinksDirty()
{
    return getPropertyBooleanValue(::poi::hpsf::wellknown::PropertyIDMap::PID_LINKSDIRTY);
}

void poi::hpsf::DocumentSummaryInformation::setLinksDirty(bool linksDirty)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_LINKSDIRTY), linksDirty);
}

void poi::hpsf::DocumentSummaryInformation::removeLinksDirty()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_LINKSDIRTY);
}

int32_t poi::hpsf::DocumentSummaryInformation::getCharCountWithSpaces()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_CCHWITHSPACES);
}

void poi::hpsf::DocumentSummaryInformation::setCharCountWithSpaces(int32_t count)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_CCHWITHSPACES), count);
}

void poi::hpsf::DocumentSummaryInformation::removeCharCountWithSpaces()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CCHWITHSPACES);
}

bool poi::hpsf::DocumentSummaryInformation::getHyperlinksChanged()
{
    return getPropertyBooleanValue(::poi::hpsf::wellknown::PropertyIDMap::PID_HYPERLINKSCHANGED);
}

void poi::hpsf::DocumentSummaryInformation::setHyperlinksChanged(bool changed)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_HYPERLINKSCHANGED), changed);
}

void poi::hpsf::DocumentSummaryInformation::removeHyperlinksChanged()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_HYPERLINKSCHANGED);
}

int32_t poi::hpsf::DocumentSummaryInformation::getApplicationVersion()
{
    return getPropertyIntValue(::poi::hpsf::wellknown::PropertyIDMap::PID_VERSION);
}

void poi::hpsf::DocumentSummaryInformation::setApplicationVersion(int32_t version)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_VERSION), version);
}

void poi::hpsf::DocumentSummaryInformation::removeApplicationVersion()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_VERSION);
}

int8_tArray* poi::hpsf::DocumentSummaryInformation::getVBADigitalSignature()
{
    auto value = getProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DIGSIG);
    if(value != nullptr && dynamic_cast< ::int8_tArray* >(value) != nullptr) {
        return java_cast< ::int8_tArray* >(value);
    }
    return nullptr;
}

void poi::hpsf::DocumentSummaryInformation::setVBADigitalSignature(::int8_tArray* signature)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_DIGSIG), signature);
}

void poi::hpsf::DocumentSummaryInformation::removeVBADigitalSignature()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DIGSIG);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getContentType()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTTYPE);
}

void poi::hpsf::DocumentSummaryInformation::setContentType(::java::lang::String* type)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTTYPE), type);
}

void poi::hpsf::DocumentSummaryInformation::removeContentType()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTTYPE);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getContentStatus()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTSTATUS);
}

void poi::hpsf::DocumentSummaryInformation::setContentStatus(::java::lang::String* status)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTSTATUS), status);
}

void poi::hpsf::DocumentSummaryInformation::removeContentStatus()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTSTATUS);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getLanguage()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_LANGUAGE);
}

void poi::hpsf::DocumentSummaryInformation::setLanguage(::java::lang::String* language)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_LANGUAGE), language);
}

void poi::hpsf::DocumentSummaryInformation::removeLanguage()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_LANGUAGE);
}

java::lang::String* poi::hpsf::DocumentSummaryInformation::getDocumentVersion()
{
    return getPropertyStringValue(::poi::hpsf::wellknown::PropertyIDMap::PID_DOCVERSION);
}

void poi::hpsf::DocumentSummaryInformation::setDocumentVersion(::java::lang::String* version)
{
    set1stProperty(static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_DOCVERSION), version);
}

void poi::hpsf::DocumentSummaryInformation::removeDocumentVersion()
{
    remove1stProperty(::poi::hpsf::wellknown::PropertyIDMap::PID_DOCVERSION);
}

poi::hpsf::CustomProperties* poi::hpsf::DocumentSummaryInformation::getCustomProperties()
{
    CustomProperties* cps = nullptr;
    if(getSectionCount() >= 2) {
        cps = new CustomProperties();
        auto const section = java_cast< Section* >(npc(getSections())->get(1));
        auto const dictionary = npc(section)->getDictionary();
        auto const properties = npc(section)->getProperties();
        auto propertyCount = int32_t(0);
        for(auto p : *npc(properties)) {
            auto const id = npc(p)->getID();
            if(id == ::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE) {
                npc(cps)->setCodepage((npc(java_cast< ::java::lang::Integer* >(npc(p)->getValue())))->intValue());
            } else if(id > ::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE) {
                propertyCount++;
                auto const cp = new CustomProperty(p, java_cast< ::java::lang::String* >(npc(dictionary)->get(::java::lang::Long::valueOf(id))));
                npc(cps)->put(npc(cp)->getName(), cp);
            }
        }
        if(npc(cps)->size() != propertyCount) {
            npc(cps)->setPure(false);
        }
    }
    return cps;
}

void poi::hpsf::DocumentSummaryInformation::setCustomProperties(CustomProperties* customProperties)
{
    ensureSection2();
    auto const section = java_cast< Section* >(npc(getSections())->get(1));
    auto const dictionary = npc(customProperties)->getDictionary();
    auto cpCodepage = npc(customProperties)->getCodepage();
    if(cpCodepage < 0) {
        cpCodepage = npc(section)->getCodepage();
    }
    if(cpCodepage < 0) {
        cpCodepage = Property::DEFAULT_CODEPAGE;
    }
    npc(customProperties)->setCodepage(cpCodepage);
    npc(section)->setCodepage(cpCodepage);
    npc(section)->setDictionary(dictionary);
    for (auto _i = npc(npc(customProperties)->properties())->iterator(); _i->hasNext(); ) {
        CustomProperty* p = java_cast< CustomProperty* >(_i->next());
        {
            npc(section)->setProperty(p);
        }
    }
}

void poi::hpsf::DocumentSummaryInformation::ensureSection2()
{
    if(getSectionCount() < 2) {
        Section* s2 = new MutableSection();
        npc(s2)->setFormatID((*::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID())[int32_t(1)]);
        addSection(s2);
    }
}

void poi::hpsf::DocumentSummaryInformation::removeCustomProperties()
{
    if(getSectionCount() < 2) {
        throw new HPSFRuntimeException(u"Illegal internal format of Document SummaryInformation stream: second section is missing."_j);
    }
    ::java::util::List* l = new ::java::util::LinkedList(getSections());
    clearSections();
    auto idx = int32_t(0);
    for (auto _i = npc(l)->iterator(); _i->hasNext(); ) {
        Section* s = java_cast< Section* >(_i->next());
        {
            if(idx++ != 1) {
                addSection(s);
            }
        }
    }
}

void poi::hpsf::DocumentSummaryInformation::notYetImplemented(::java::lang::String* msg)
{
    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(msg)->append(u" is not yet implemented."_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::DocumentSummaryInformation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.DocumentSummaryInformation", 46);
    return c;
}

void poi::hpsf::DocumentSummaryInformation::clinit()
{
struct string_init_ {
    string_init_() {
    DEFAULT_STREAM_NAME_ = u"\005DocumentSummaryInformation"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::hpsf::DocumentSummaryInformation::getClass0()
{
    return class_();
}

