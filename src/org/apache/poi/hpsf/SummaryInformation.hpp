// Generated from /POI/java/org/apache/poi/hpsf/SummaryInformation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <org/apache/poi/hpsf/SpecialPropertySet.hpp>

struct default_init_tag;

class poi::hpsf::SummaryInformation final
    : public SpecialPropertySet
{

public:
    typedef SpecialPropertySet super;

private:
    static ::java::lang::String* DEFAULT_STREAM_NAME_;

public:
    ::poi::hpsf::wellknown::PropertyIDMap* getPropertySetIDMap() override;
protected:
    void ctor();
    void ctor(PropertySet* ps) /* throws(UnexpectedPropertySetTypeException) */;
    void ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */;

public:
    ::java::lang::String* getTitle();
    void setTitle(::java::lang::String* title);
    void removeTitle();
    ::java::lang::String* getSubject();
    void setSubject(::java::lang::String* subject);
    void removeSubject();
    ::java::lang::String* getAuthor();
    void setAuthor(::java::lang::String* author);
    void removeAuthor();
    ::java::lang::String* getKeywords();
    void setKeywords(::java::lang::String* keywords);
    void removeKeywords();
    ::java::lang::String* getComments();
    void setComments(::java::lang::String* comments);
    void removeComments();
    ::java::lang::String* getTemplate();
    void setTemplate(::java::lang::String* template_);
    void removeTemplate();
    ::java::lang::String* getLastAuthor();
    void setLastAuthor(::java::lang::String* lastAuthor);
    void removeLastAuthor();
    ::java::lang::String* getRevNumber();
    void setRevNumber(::java::lang::String* revNumber);
    void removeRevNumber();
    int64_t getEditTime();
    void setEditTime(int64_t time);
    void removeEditTime();
    ::java::util::Date* getLastPrinted();
    void setLastPrinted(::java::util::Date* lastPrinted);
    void removeLastPrinted();
    ::java::util::Date* getCreateDateTime();
    void setCreateDateTime(::java::util::Date* createDateTime);
    void removeCreateDateTime();
    ::java::util::Date* getLastSaveDateTime();
    void setLastSaveDateTime(::java::util::Date* time);
    void removeLastSaveDateTime();
    int32_t getPageCount();
    void setPageCount(int32_t pageCount);
    void removePageCount();
    int32_t getWordCount();
    void setWordCount(int32_t wordCount);
    void removeWordCount();
    int32_t getCharCount();
    void setCharCount(int32_t charCount);
    void removeCharCount();
    ::int8_tArray* getThumbnail();
    Thumbnail* getThumbnailThumbnail();
    void setThumbnail(::int8_tArray* thumbnail);
    void removeThumbnail();
    ::java::lang::String* getApplicationName();
    void setApplicationName(::java::lang::String* applicationName);
    void removeApplicationName();
    int32_t getSecurity();
    void setSecurity(int32_t security);
    void removeSecurity();

    // Generated
    SummaryInformation();
    SummaryInformation(PropertySet* ps);
    SummaryInformation(::java::io::InputStream* stream);
protected:
    SummaryInformation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& DEFAULT_STREAM_NAME();

private:
    virtual ::java::lang::Class* getClass0();
};
