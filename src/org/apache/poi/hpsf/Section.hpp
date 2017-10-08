// Generated from /POI/java/org/apache/poi/hpsf/Section.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/collections4/bidimap/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
    } // hpsf
} // poi

struct default_init_tag;

class poi::hpsf::Section
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    ::java::util::Map* dictionary {  };
    ClassID* formatID {  };
    ::java::io::ByteArrayOutputStream* sectionBytes {  };
    int64_t _offset {  };
    ::java::util::Map* properties {  };
    bool wasNull_ {  };
protected:
    void ctor();
    void ctor(Section* s);
    void ctor(::int8_tArray* src, int32_t offset) /* throws(UnsupportedEncodingException) */;

private:
    static int32_t propLen(::org::apache::commons::collections4::bidimap::TreeBidiMap* offset2Id, ::java::lang::Long* entryOffset, int64_t maxSize);

public:
    virtual ClassID* getFormatID();
    virtual void setFormatID(ClassID* formatID);
    virtual void setFormatID(::int8_tArray* formatID);
    virtual int64_t getOffset();
    virtual int32_t getPropertyCount();
    virtual PropertyArray* getProperties();
    virtual void setProperties(PropertyArray* properties);
    virtual ::java::lang::Object* getProperty(int64_t id);
    virtual void setProperty(int32_t id, ::java::lang::String* value);
    virtual void setProperty(int32_t id, int32_t value);
    virtual void setProperty(int32_t id, int64_t value);
    virtual void setProperty(int32_t id, bool value);
    virtual void setProperty(int32_t id, int64_t variantType, ::java::lang::Object* value);
    virtual void setProperty(Property* p);
    virtual void setProperty(int32_t id, ::java::lang::Object* value);

public: /* protected */
    virtual int32_t getPropertyIntValue(int64_t id);
    virtual bool getPropertyBooleanValue(int32_t id);
    virtual void setPropertyBooleanValue(int32_t id, bool value);

public:
    virtual int32_t getSize();

private:
    int32_t calcSize() /* throws(WritingNotSupportedException, IOException) */;
    void padSectionBytes();

public:
    virtual bool wasNull();
    virtual ::java::lang::String* getPIDString(int64_t pid);
    virtual void clear();
    bool equals(::java::lang::Object* o) override;
    virtual void removeProperty(int64_t id);
    virtual int32_t write(::java::io::OutputStream* out) /* throws(WritingNotSupportedException, IOException) */;

private:
    bool readDictionary(::poi::util::LittleEndianByteArrayInputStream* leis, int32_t length, int32_t codepage) /* throws(UnsupportedEncodingException) */;
    int32_t writeDictionary(::java::io::OutputStream* out, int32_t codepage) /* throws(IOException) */;

public:
    virtual void setDictionary(::java::util::Map* dictionary) /* throws(IllegalPropertySetDataException) */;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* toString(::poi::hpsf::wellknown::PropertyIDMap* idMap);
    virtual ::java::util::Map* getDictionary();
    virtual int32_t getCodepage();
    virtual void setCodepage(int32_t codepage);

    // Generated
    Section();
    Section(Section* s);
    Section(::int8_tArray* src, int32_t offset);
protected:
    Section(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
