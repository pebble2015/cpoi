// Generated from /POI/java/org/apache/poi/hpsf/DocumentSummaryInformation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <org/apache/poi/hpsf/SpecialPropertySet.hpp>

struct default_init_tag;

class poi::hpsf::DocumentSummaryInformation
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
    virtual ::java::lang::String* getCategory();
    virtual void setCategory(::java::lang::String* category);
    virtual void removeCategory();
    virtual ::java::lang::String* getPresentationFormat();
    virtual void setPresentationFormat(::java::lang::String* presentationFormat);
    virtual void removePresentationFormat();
    virtual int32_t getByteCount();
    virtual void setByteCount(int32_t byteCount);
    virtual void removeByteCount();
    virtual int32_t getLineCount();
    virtual void setLineCount(int32_t lineCount);
    virtual void removeLineCount();
    virtual int32_t getParCount();
    virtual void setParCount(int32_t parCount);
    virtual void removeParCount();
    virtual int32_t getSlideCount();
    virtual void setSlideCount(int32_t slideCount);
    virtual void removeSlideCount();
    virtual int32_t getNoteCount();
    virtual void setNoteCount(int32_t noteCount);
    virtual void removeNoteCount();
    virtual int32_t getHiddenCount();
    virtual void setHiddenCount(int32_t hiddenCount);
    virtual void removeHiddenCount();
    virtual int32_t getMMClipCount();
    virtual void setMMClipCount(int32_t mmClipCount);
    virtual void removeMMClipCount();
    virtual bool getScale();
    virtual void setScale(bool scale);
    virtual void removeScale();
    virtual ::int8_tArray* getHeadingPair();
    virtual void setHeadingPair(::int8_tArray* headingPair);
    virtual void removeHeadingPair();
    virtual ::int8_tArray* getDocparts();
    virtual void setDocparts(::int8_tArray* docparts);
    virtual void removeDocparts();
    virtual ::java::lang::String* getManager();
    virtual void setManager(::java::lang::String* manager);
    virtual void removeManager();
    virtual ::java::lang::String* getCompany();
    virtual void setCompany(::java::lang::String* company);
    virtual void removeCompany();
    virtual bool getLinksDirty();
    virtual void setLinksDirty(bool linksDirty);
    virtual void removeLinksDirty();
    virtual int32_t getCharCountWithSpaces();
    virtual void setCharCountWithSpaces(int32_t count);
    virtual void removeCharCountWithSpaces();
    virtual bool getHyperlinksChanged();
    virtual void setHyperlinksChanged(bool changed);
    virtual void removeHyperlinksChanged();
    virtual int32_t getApplicationVersion();
    virtual void setApplicationVersion(int32_t version);
    virtual void removeApplicationVersion();
    virtual ::int8_tArray* getVBADigitalSignature();
    virtual void setVBADigitalSignature(::int8_tArray* signature);
    virtual void removeVBADigitalSignature();
    virtual ::java::lang::String* getContentType();
    virtual void setContentType(::java::lang::String* type);
    virtual void removeContentType();
    virtual ::java::lang::String* getContentStatus();
    virtual void setContentStatus(::java::lang::String* status);
    virtual void removeContentStatus();
    virtual ::java::lang::String* getLanguage();
    virtual void setLanguage(::java::lang::String* language);
    virtual void removeLanguage();
    virtual ::java::lang::String* getDocumentVersion();
    virtual void setDocumentVersion(::java::lang::String* version);
    virtual void removeDocumentVersion();
    virtual CustomProperties* getCustomProperties();
    virtual void setCustomProperties(CustomProperties* customProperties);

private:
    void ensureSection2();

public:
    virtual void removeCustomProperties();

private:
    void notYetImplemented(::java::lang::String* msg);

    // Generated

public:
    DocumentSummaryInformation();
    DocumentSummaryInformation(PropertySet* ps);
    DocumentSummaryInformation(::java::io::InputStream* stream);
protected:
    DocumentSummaryInformation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& DEFAULT_STREAM_NAME();

private:
    virtual ::java::lang::Class* getClass0();
};
