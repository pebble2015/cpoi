// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSDocumentPath.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::poifs::filesystem::POIFSDocumentPath
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::POILogger* log_;
    ::java::lang::StringArray* components {  };
    int32_t hashcode {  };
protected:
    void ctor(::java::lang::StringArray* components) /* throws(IllegalArgumentException) */;
    void ctor();
    void ctor(POIFSDocumentPath* path, ::java::lang::StringArray* components) /* throws(IllegalArgumentException) */;

public:
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;

private:
    int32_t computeHashCode();

public:
    virtual int32_t length();
    virtual ::java::lang::String* getComponent(int32_t n) /* throws(ArrayIndexOutOfBoundsException) */;
    virtual POIFSDocumentPath* getParent();
    virtual ::java::lang::String* getName();
    ::java::lang::String* toString() override;

    // Generated
    POIFSDocumentPath(::java::lang::StringArray* components);
    POIFSDocumentPath();
    POIFSDocumentPath(POIFSDocumentPath* path, ::java::lang::StringArray* components);
protected:
    POIFSDocumentPath(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::poi::util::POILogger*& log();
    virtual ::java::lang::Class* getClass0();
};
