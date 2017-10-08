// Generated from /POI/java/org/apache/poi/hpsf/PropertySet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
typedef ::SubArray< ::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
    } // hpsf
} // poi

struct default_init_tag;

class poi::hpsf::PropertySet
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t OS_WIN16 { int32_t(0) };
    static constexpr int32_t OS_MACINTOSH { int32_t(1) };
    static constexpr int32_t OS_WIN32 { int32_t(2) };

public: /* package */
    static constexpr int32_t BYTE_ORDER_ASSERTION { int32_t(65534) };
    static constexpr int32_t FORMAT_ASSERTION { int32_t(0) };
    static constexpr int32_t OFFSET_HEADER { int32_t(28) };

private:
    int32_t byteOrder {  };
    int32_t format {  };
    int32_t osVersion {  };
    ClassID* classID {  };
    ::java::util::List* sections {  };
protected:
    void ctor();
    void ctor(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, IOException, UnsupportedEncodingException) */;
    void ctor(::int8_tArray* stream, int32_t offset, int32_t length) /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */;
    void ctor(::int8_tArray* stream) /* throws(NoPropertySetStreamException, UnsupportedEncodingException) */;
    void ctor(PropertySet* ps);

public:
    virtual int32_t getByteOrder();
    virtual void setByteOrder(int32_t byteOrder);
    virtual int32_t getFormat();
    virtual void setFormat(int32_t format);
    virtual int32_t getOSVersion();
    virtual void setOSVersion(int32_t osVersion);
    virtual ClassID* getClassID();
    virtual void setClassID(ClassID* classID);
    virtual int32_t getSectionCount();
    virtual ::java::util::List* getSections();
    virtual void addSection(Section* section);
    virtual void clearSections();
    virtual ::poi::hpsf::wellknown::PropertyIDMap* getPropertySetIDMap();
    static bool isPropertySetStream(::java::io::InputStream* stream) /* throws(MarkUnsupportedException, IOException) */;
    static bool isPropertySetStream(::int8_tArray* src, int32_t offset, int32_t length);

private:
    void init_(::int8_tArray* src, int32_t offset, int32_t length) /* throws(UnsupportedEncodingException) */;

public:
    virtual void write(::java::io::OutputStream* out) /* throws(WritingNotSupportedException, IOException) */;
    virtual void write(::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* name) /* throws(WritingNotSupportedException, IOException) */;
    virtual ::java::io::InputStream* toInputStream() /* throws(IOException, WritingNotSupportedException) */;

public: /* protected */
    virtual ::java::lang::String* getPropertyStringValue(int32_t propertyId);

public:
    static ::java::lang::String* getPropertyStringValue(::java::lang::Object* propertyValue);
    virtual bool isSummaryInformation();
    virtual bool isDocumentSummaryInformation();

public: /* package */
    static bool matchesSummary(ClassID* actual, ClassIDArray*/*...*/ expected);

public:
    virtual PropertyArray* getProperties() /* throws(NoSingleSectionException) */;

public: /* protected */
    virtual ::java::lang::Object* getProperty(int32_t id) /* throws(NoSingleSectionException) */;
    virtual bool getPropertyBooleanValue(int32_t id) /* throws(NoSingleSectionException) */;
    virtual int32_t getPropertyIntValue(int32_t id) /* throws(NoSingleSectionException) */;

public:
    virtual bool wasNull() /* throws(NoSingleSectionException) */;
    virtual Section* getFirstSection();
    virtual Section* getSingleSection();
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

public: /* protected */
    virtual void remove1stProperty(int64_t id);
    virtual void set1stProperty(int64_t id, ::java::lang::String* value);
    virtual void set1stProperty(int64_t id, int32_t value);
    virtual void set1stProperty(int64_t id, bool value);
    virtual void set1stProperty(int64_t id, ::int8_tArray* value);

private:
    static void putClassId(::java::io::OutputStream* out, ClassID* n) /* throws(IOException) */;

    // Generated

public:
    PropertySet();
    PropertySet(::java::io::InputStream* stream);
    PropertySet(::int8_tArray* stream, int32_t offset, int32_t length);
    PropertySet(::int8_tArray* stream);
    PropertySet(PropertySet* ps);
protected:
    PropertySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
