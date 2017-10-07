// Generated from /POI/java/org/apache/poi/hpsf/wellknown/PropertyIDMap.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <java/lang/String.hpp>

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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::hpsf::wellknown::PropertyIDMap
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Map
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t PID_TITLE { int32_t(2) };
    static constexpr int32_t PID_SUBJECT { int32_t(3) };
    static constexpr int32_t PID_AUTHOR { int32_t(4) };
    static constexpr int32_t PID_KEYWORDS { int32_t(5) };
    static constexpr int32_t PID_COMMENTS { int32_t(6) };
    static constexpr int32_t PID_TEMPLATE { int32_t(7) };
    static constexpr int32_t PID_LASTAUTHOR { int32_t(8) };
    static constexpr int32_t PID_REVNUMBER { int32_t(9) };
    static constexpr int32_t PID_EDITTIME { int32_t(10) };
    static constexpr int32_t PID_LASTPRINTED { int32_t(11) };
    static constexpr int32_t PID_CREATE_DTM { int32_t(12) };
    static constexpr int32_t PID_LASTSAVE_DTM { int32_t(13) };
    static constexpr int32_t PID_PAGECOUNT { int32_t(14) };
    static constexpr int32_t PID_WORDCOUNT { int32_t(15) };
    static constexpr int32_t PID_CHARCOUNT { int32_t(16) };
    static constexpr int32_t PID_THUMBNAIL { int32_t(17) };
    static constexpr int32_t PID_APPNAME { int32_t(18) };
    static constexpr int32_t PID_SECURITY { int32_t(19) };
    static constexpr int32_t PID_DICTIONARY { int32_t(0) };
    static constexpr int32_t PID_CODEPAGE { int32_t(1) };
    static constexpr int32_t PID_CATEGORY { int32_t(2) };
    static constexpr int32_t PID_PRESFORMAT { int32_t(3) };
    static constexpr int32_t PID_BYTECOUNT { int32_t(4) };
    static constexpr int32_t PID_LINECOUNT { int32_t(5) };
    static constexpr int32_t PID_PARCOUNT { int32_t(6) };
    static constexpr int32_t PID_SLIDECOUNT { int32_t(7) };
    static constexpr int32_t PID_NOTECOUNT { int32_t(8) };
    static constexpr int32_t PID_HIDDENCOUNT { int32_t(9) };
    static constexpr int32_t PID_MMCLIPCOUNT { int32_t(10) };
    static constexpr int32_t PID_SCALE { int32_t(11) };
    static constexpr int32_t PID_HEADINGPAIR { int32_t(12) };
    static constexpr int32_t PID_DOCPARTS { int32_t(13) };
    static constexpr int32_t PID_MANAGER { int32_t(14) };
    static constexpr int32_t PID_COMPANY { int32_t(15) };
    static constexpr int32_t PID_LINKSDIRTY { int32_t(16) };
    static constexpr int32_t PID_CCHWITHSPACES { int32_t(17) };
    static constexpr int32_t PID_HYPERLINKSCHANGED { int32_t(22) };
    static constexpr int32_t PID_VERSION { int32_t(23) };
    static constexpr int32_t PID_DIGSIG { int32_t(24) };
    static constexpr int32_t PID_CONTENTTYPE { int32_t(26) };
    static constexpr int32_t PID_CONTENTSTATUS { int32_t(27) };
    static constexpr int32_t PID_LANGUAGE { int32_t(28) };
    static constexpr int32_t PID_DOCVERSION { int32_t(29) };
    static constexpr int32_t PID_MAX { int32_t(31) };
    static constexpr int32_t PID_LOCALE { int32_t(-0x7fffffff-1) };
    static constexpr int32_t PID_BEHAVIOUR { int32_t(-2147483645) };

private:
    static PropertyIDMap* summaryInformationProperties_;
    static ::java::lang::ObjectArrayArray* summaryInformationIdValues_;
    static PropertyIDMap* documentSummaryInformationProperties_;
    static ::java::lang::ObjectArrayArray* documentSummaryInformationIdValues_;
    static PropertyIDMap* fallbackProperties_;
    static ::java::lang::ObjectArrayArray* fallbackIdValues_;
    ::java::util::Map* idMap {  };
protected:
    void ctor(::java::lang::ObjectArrayArray* idValues);

public:
    static PropertyIDMap* getSummaryInformationProperties();
    static PropertyIDMap* getDocumentSummaryInformationProperties();
    static PropertyIDMap* getFallbackProperties();
    int32_t size() override;
    bool isEmpty() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::lang::String* get(::java::lang::Object* key) override;
    virtual ::java::lang::String* put(::java::lang::Long* key, ::java::lang::String* value);
    ::java::lang::String* remove(::java::lang::Object* key) override;
    void putAll(::java::util::Map* m) override;
    void clear() override;
    ::java::util::Set* keySet() override;
    ::java::util::Collection* values() override;
    ::java::util::Set* entrySet() override;
    static void main(::java::lang::StringArray* args);

    // Generated

private:
    PropertyIDMap(::java::lang::ObjectArrayArray* idValues);
protected:
    PropertyIDMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual bool equals(::java::lang::Object* o);
    virtual int32_t hashCode();
    virtual ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);

private:
    static PropertyIDMap*& summaryInformationProperties();
    static ::java::lang::ObjectArrayArray*& summaryInformationIdValues();
    static PropertyIDMap*& documentSummaryInformationProperties();
    static ::java::lang::ObjectArrayArray*& documentSummaryInformationIdValues();
    static PropertyIDMap*& fallbackProperties();
    static ::java::lang::ObjectArrayArray*& fallbackIdValues();
    virtual ::java::lang::Class* getClass0();
};
