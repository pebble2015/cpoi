// Generated from /POI/java/org/apache/poi/hpsf/SummaryInformation.java
#include <org/apache/poi/hpsf/SummaryInformation.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/hpsf/Filetime.hpp>
#include <org/apache/poi/hpsf/Section.hpp>
#include <org/apache/poi/hpsf/Thumbnail.hpp>
#include <org/apache/poi/hpsf/UnexpectedPropertySetTypeException.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>
#include <Array.hpp>

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

org::apache::poi::hpsf::SummaryInformation::SummaryInformation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::SummaryInformation::SummaryInformation() 
    : SummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::SummaryInformation::SummaryInformation(PropertySet* ps)  /* throws(UnexpectedPropertySetTypeException) */
    : SummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(ps);
}

org::apache::poi::hpsf::SummaryInformation::SummaryInformation(::java::io::InputStream* stream)  /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
    : SummaryInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

java::lang::String*& org::apache::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME()
{
    clinit();
    return DEFAULT_STREAM_NAME_;
}
java::lang::String* org::apache::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME_;

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::SummaryInformation::getPropertySetIDMap()
{
    return ::org::apache::poi::hpsf::wellknown::PropertyIDMap::getSummaryInformationProperties();
}

void org::apache::poi::hpsf::SummaryInformation::ctor()
{
    super::ctor();
    npc(getFirstSection())->setFormatID(::org::apache::poi::hpsf::wellknown::SectionIDMap::SUMMARY_INFORMATION_ID());
}

void org::apache::poi::hpsf::SummaryInformation::ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */
{
    super::ctor(ps);
    if(!isSummaryInformation()) {
        throw new UnexpectedPropertySetTypeException(::java::lang::StringBuilder().append(u"Not a "_j)->append(npc(getClass())->getName())->toString());
    }
}

void org::apache::poi::hpsf::SummaryInformation::ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */
{
    super::ctor(stream);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getTitle()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TITLE);
}

void org::apache::poi::hpsf::SummaryInformation::setTitle(::java::lang::String* title)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TITLE), title);
}

void org::apache::poi::hpsf::SummaryInformation::removeTitle()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TITLE);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getSubject()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SUBJECT);
}

void org::apache::poi::hpsf::SummaryInformation::setSubject(::java::lang::String* subject)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SUBJECT), subject);
}

void org::apache::poi::hpsf::SummaryInformation::removeSubject()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SUBJECT);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getAuthor()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_AUTHOR);
}

void org::apache::poi::hpsf::SummaryInformation::setAuthor(::java::lang::String* author)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_AUTHOR), author);
}

void org::apache::poi::hpsf::SummaryInformation::removeAuthor()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_AUTHOR);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getKeywords()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_KEYWORDS);
}

void org::apache::poi::hpsf::SummaryInformation::setKeywords(::java::lang::String* keywords)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_KEYWORDS), keywords);
}

void org::apache::poi::hpsf::SummaryInformation::removeKeywords()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_KEYWORDS);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getComments()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_COMMENTS);
}

void org::apache::poi::hpsf::SummaryInformation::setComments(::java::lang::String* comments)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_COMMENTS), comments);
}

void org::apache::poi::hpsf::SummaryInformation::removeComments()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_COMMENTS);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getTemplate()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TEMPLATE);
}

void org::apache::poi::hpsf::SummaryInformation::setTemplate(::java::lang::String* template_)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TEMPLATE), template_);
}

void org::apache::poi::hpsf::SummaryInformation::removeTemplate()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TEMPLATE);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getLastAuthor()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTAUTHOR);
}

void org::apache::poi::hpsf::SummaryInformation::setLastAuthor(::java::lang::String* lastAuthor)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTAUTHOR), lastAuthor);
}

void org::apache::poi::hpsf::SummaryInformation::removeLastAuthor()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTAUTHOR);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getRevNumber()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_REVNUMBER);
}

void org::apache::poi::hpsf::SummaryInformation::setRevNumber(::java::lang::String* revNumber)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_REVNUMBER), revNumber);
}

void org::apache::poi::hpsf::SummaryInformation::removeRevNumber()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_REVNUMBER);
}

int64_t org::apache::poi::hpsf::SummaryInformation::getEditTime()
{
    auto const d = java_cast< ::java::util::Date* >(getProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_EDITTIME));
    if(d == nullptr) {
        return 0;
    }
    return Filetime::dateToFileTime(d);
}

void org::apache::poi::hpsf::SummaryInformation::setEditTime(int64_t time)
{
    auto const d = Filetime::filetimeToDate(time);
    npc(getFirstSection())->setProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_EDITTIME, Variant::VT_FILETIME, d);
}

void org::apache::poi::hpsf::SummaryInformation::removeEditTime()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_EDITTIME);
}

java::util::Date* org::apache::poi::hpsf::SummaryInformation::getLastPrinted()
{
    return java_cast< ::java::util::Date* >(getProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTPRINTED));
}

void org::apache::poi::hpsf::SummaryInformation::setLastPrinted(::java::util::Date* lastPrinted)
{
    npc(getFirstSection())->setProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTPRINTED, Variant::VT_FILETIME, lastPrinted);
}

void org::apache::poi::hpsf::SummaryInformation::removeLastPrinted()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTPRINTED);
}

java::util::Date* org::apache::poi::hpsf::SummaryInformation::getCreateDateTime()
{
    return java_cast< ::java::util::Date* >(getProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CREATE_DTM));
}

void org::apache::poi::hpsf::SummaryInformation::setCreateDateTime(::java::util::Date* createDateTime)
{
    npc(getFirstSection())->setProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CREATE_DTM, Variant::VT_FILETIME, createDateTime);
}

void org::apache::poi::hpsf::SummaryInformation::removeCreateDateTime()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CREATE_DTM);
}

java::util::Date* org::apache::poi::hpsf::SummaryInformation::getLastSaveDateTime()
{
    return java_cast< ::java::util::Date* >(getProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTSAVE_DTM));
}

void org::apache::poi::hpsf::SummaryInformation::setLastSaveDateTime(::java::util::Date* time)
{
    auto const s = getFirstSection();
    npc(s)->setProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTSAVE_DTM, Variant::VT_FILETIME, time);
}

void org::apache::poi::hpsf::SummaryInformation::removeLastSaveDateTime()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTSAVE_DTM);
}

int32_t org::apache::poi::hpsf::SummaryInformation::getPageCount()
{
    return getPropertyIntValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PAGECOUNT);
}

void org::apache::poi::hpsf::SummaryInformation::setPageCount(int32_t pageCount)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PAGECOUNT), pageCount);
}

void org::apache::poi::hpsf::SummaryInformation::removePageCount()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PAGECOUNT);
}

int32_t org::apache::poi::hpsf::SummaryInformation::getWordCount()
{
    return getPropertyIntValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_WORDCOUNT);
}

void org::apache::poi::hpsf::SummaryInformation::setWordCount(int32_t wordCount)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_WORDCOUNT), wordCount);
}

void org::apache::poi::hpsf::SummaryInformation::removeWordCount()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_WORDCOUNT);
}

int32_t org::apache::poi::hpsf::SummaryInformation::getCharCount()
{
    return getPropertyIntValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CHARCOUNT);
}

void org::apache::poi::hpsf::SummaryInformation::setCharCount(int32_t charCount)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CHARCOUNT), charCount);
}

void org::apache::poi::hpsf::SummaryInformation::removeCharCount()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CHARCOUNT);
}

int8_tArray* org::apache::poi::hpsf::SummaryInformation::getThumbnail()
{
    return java_cast< ::int8_tArray* >(getProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_THUMBNAIL));
}

org::apache::poi::hpsf::Thumbnail* org::apache::poi::hpsf::SummaryInformation::getThumbnailThumbnail()
{
    auto data = getThumbnail();
    if(data == nullptr)
        return nullptr;

    return new Thumbnail(data);
}

void org::apache::poi::hpsf::SummaryInformation::setThumbnail(::int8_tArray* thumbnail)
{
    npc(getFirstSection())->setProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_THUMBNAIL, Variant::VT_LPSTR, thumbnail);
}

void org::apache::poi::hpsf::SummaryInformation::removeThumbnail()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_THUMBNAIL);
}

java::lang::String* org::apache::poi::hpsf::SummaryInformation::getApplicationName()
{
    return getPropertyStringValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_APPNAME);
}

void org::apache::poi::hpsf::SummaryInformation::setApplicationName(::java::lang::String* applicationName)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_APPNAME), applicationName);
}

void org::apache::poi::hpsf::SummaryInformation::removeApplicationName()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_APPNAME);
}

int32_t org::apache::poi::hpsf::SummaryInformation::getSecurity()
{
    return getPropertyIntValue(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SECURITY);
}

void org::apache::poi::hpsf::SummaryInformation::setSecurity(int32_t security)
{
    set1stProperty(static_cast< int64_t >(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SECURITY), security);
}

void org::apache::poi::hpsf::SummaryInformation::removeSecurity()
{
    remove1stProperty(::org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SECURITY);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::SummaryInformation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.SummaryInformation", 38);
    return c;
}

void org::apache::poi::hpsf::SummaryInformation::clinit()
{
struct string_init_ {
    string_init_() {
    DEFAULT_STREAM_NAME_ = u"\005SummaryInformation"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* org::apache::poi::hpsf::SummaryInformation::getClass0()
{
    return class_();
}

