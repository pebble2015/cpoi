// Generated from /POI/java/org/apache/poi/sl/usermodel/Placeholder.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::Placeholder, ::java::lang::EnumArray > PlaceholderArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::sl::usermodel::Placeholder final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static Placeholder *NONE;
    static Placeholder *TITLE;
    static Placeholder *BODY;
    static Placeholder *CENTERED_TITLE;
    static Placeholder *SUBTITLE;
    static Placeholder *DATETIME;
    static Placeholder *SLIDE_NUMBER;
    static Placeholder *FOOTER;
    static Placeholder *HEADER;
    static Placeholder *CONTENT;
    static Placeholder *CHART;
    static Placeholder *TABLE;
    static Placeholder *CLIP_ART;
    static Placeholder *DGM;
    static Placeholder *MEDIA;
    static Placeholder *SLIDE_IMAGE;
    static Placeholder *PICTURE;
    static Placeholder *VERTICAL_OBJECT;
    static Placeholder *VERTICAL_TEXT_TITLE;
    static Placeholder *VERTICAL_TEXT_BODY;

public:
    int32_t nativeSlideId {  };
    int32_t nativeSlideMasterId {  };
    int32_t nativeNotesId {  };
    int32_t nativeNotesMasterId {  };
    int32_t ooxmlId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t nativeSlideId, int32_t nativeSlideMasterId, int32_t nativeNotesId, int32_t nativeNotesMasterId, int32_t ooxmlId);

public:
    static Placeholder* lookupNativeSlide(int32_t nativeId);
    static Placeholder* lookupNativeSlideMaster(int32_t nativeId);
    static Placeholder* lookupNativeNotes(int32_t nativeId);
    static Placeholder* lookupNativeNotesMaster(int32_t nativeId);

private:
    static Placeholder* lookupNative(int32_t nativeId, int32_t type);

public:
    static Placeholder* lookupOoxml(int32_t ooxmlId);

    // Generated

private:
    Placeholder(::java::lang::String* name, int ordinal, int32_t nativeSlideId, int32_t nativeSlideMasterId, int32_t nativeNotesId, int32_t nativeNotesMasterId, int32_t ooxmlId);
protected:
    Placeholder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Placeholder* valueOf(::java::lang::String* a0);
    static PlaceholderArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
