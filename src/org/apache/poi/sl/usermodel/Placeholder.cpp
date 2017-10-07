// Generated from /POI/java/org/apache/poi/sl/usermodel/Placeholder.java
#include <org/apache/poi/sl/usermodel/Placeholder.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::usermodel::Placeholder::Placeholder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::Placeholder::Placeholder(::java::lang::String* name, int ordinal, int32_t nativeSlideId, int32_t nativeSlideMasterId, int32_t nativeNotesId, int32_t nativeNotesMasterId, int32_t ooxmlId) 
    : Placeholder(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeSlideId,nativeSlideMasterId,nativeNotesId,nativeNotesMasterId,ooxmlId);
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::NONE = new ::org::apache::poi::sl::usermodel::Placeholder(u"NONE"_j, 0, int32_t(0), int32_t(0), int32_t(0), int32_t(0), int32_t(0));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::TITLE = new ::org::apache::poi::sl::usermodel::Placeholder(u"TITLE"_j, 1, int32_t(13), int32_t(1), int32_t(1), int32_t(1), int32_t(1));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::BODY = new ::org::apache::poi::sl::usermodel::Placeholder(u"BODY"_j, 2, int32_t(14), int32_t(2), int32_t(12), int32_t(6), int32_t(2));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::CENTERED_TITLE = new ::org::apache::poi::sl::usermodel::Placeholder(u"CENTERED_TITLE"_j, 3, int32_t(15), int32_t(3), int32_t(3), int32_t(3), int32_t(3));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::SUBTITLE = new ::org::apache::poi::sl::usermodel::Placeholder(u"SUBTITLE"_j, 4, int32_t(16), int32_t(4), int32_t(4), int32_t(4), int32_t(4));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::DATETIME = new ::org::apache::poi::sl::usermodel::Placeholder(u"DATETIME"_j, 5, int32_t(7), int32_t(7), int32_t(7), int32_t(7), int32_t(5));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::SLIDE_NUMBER = new ::org::apache::poi::sl::usermodel::Placeholder(u"SLIDE_NUMBER"_j, 6, int32_t(8), int32_t(8), int32_t(8), int32_t(8), int32_t(6));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::FOOTER = new ::org::apache::poi::sl::usermodel::Placeholder(u"FOOTER"_j, 7, int32_t(9), int32_t(9), int32_t(9), int32_t(9), int32_t(7));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::HEADER = new ::org::apache::poi::sl::usermodel::Placeholder(u"HEADER"_j, 8, int32_t(10), int32_t(10), int32_t(10), int32_t(10), int32_t(8));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::CONTENT = new ::org::apache::poi::sl::usermodel::Placeholder(u"CONTENT"_j, 9, int32_t(19), int32_t(19), int32_t(19), int32_t(19), int32_t(9));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::CHART = new ::org::apache::poi::sl::usermodel::Placeholder(u"CHART"_j, 10, int32_t(20), int32_t(20), int32_t(20), int32_t(20), int32_t(10));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::TABLE = new ::org::apache::poi::sl::usermodel::Placeholder(u"TABLE"_j, 11, int32_t(21), int32_t(21), int32_t(21), int32_t(21), int32_t(11));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::CLIP_ART = new ::org::apache::poi::sl::usermodel::Placeholder(u"CLIP_ART"_j, 12, int32_t(22), int32_t(22), int32_t(22), int32_t(22), int32_t(12));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::DGM = new ::org::apache::poi::sl::usermodel::Placeholder(u"DGM"_j, 13, int32_t(23), int32_t(23), int32_t(23), int32_t(23), int32_t(13));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::MEDIA = new ::org::apache::poi::sl::usermodel::Placeholder(u"MEDIA"_j, 14, int32_t(24), int32_t(24), int32_t(24), int32_t(24), int32_t(14));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::SLIDE_IMAGE = new ::org::apache::poi::sl::usermodel::Placeholder(u"SLIDE_IMAGE"_j, 15, int32_t(11), int32_t(11), int32_t(11), int32_t(5), int32_t(15));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::PICTURE = new ::org::apache::poi::sl::usermodel::Placeholder(u"PICTURE"_j, 16, int32_t(26), int32_t(26), int32_t(26), int32_t(26), int32_t(16));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::VERTICAL_OBJECT = new ::org::apache::poi::sl::usermodel::Placeholder(u"VERTICAL_OBJECT"_j, 17, int32_t(25), int32_t(25), int32_t(25), int32_t(25), -int32_t(2));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::VERTICAL_TEXT_TITLE = new ::org::apache::poi::sl::usermodel::Placeholder(u"VERTICAL_TEXT_TITLE"_j, 18, int32_t(17), int32_t(17), int32_t(17), int32_t(17), -int32_t(2));
org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::VERTICAL_TEXT_BODY = new ::org::apache::poi::sl::usermodel::Placeholder(u"VERTICAL_TEXT_BODY"_j, 19, int32_t(18), int32_t(18), int32_t(18), int32_t(18), -int32_t(2));
void org::apache::poi::sl::usermodel::Placeholder::ctor(::java::lang::String* name, int ordinal, int32_t nativeSlideId, int32_t nativeSlideMasterId, int32_t nativeNotesId, int32_t nativeNotesMasterId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeSlideId = nativeSlideId;
    this->nativeSlideMasterId = nativeSlideMasterId;
    this->nativeNotesId = nativeNotesId;
    this->nativeNotesMasterId = nativeNotesMasterId;
    this->ooxmlId = ooxmlId;
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupNativeSlide(int32_t nativeId)
{
    clinit();
    return lookupNative(nativeId, 0);
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupNativeSlideMaster(int32_t nativeId)
{
    clinit();
    return lookupNative(nativeId, 1);
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupNativeNotes(int32_t nativeId)
{
    clinit();
    return lookupNative(nativeId, 2);
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupNativeNotesMaster(int32_t nativeId)
{
    clinit();
    return lookupNative(nativeId, 3);
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupNative(int32_t nativeId, int32_t type)
{
    clinit();
    for(auto ph : *npc(values())) {
        if(type == 0 && npc(ph)->nativeSlideId == nativeId || type == 1 && npc(ph)->nativeSlideMasterId == nativeId || type == 2 && npc(ph)->nativeNotesId == nativeId || type == 3 && npc(ph)->nativeNotesMasterId == nativeId) {
            return ph;
        }
    }
    return nullptr;
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::lookupOoxml(int32_t ooxmlId)
{
    clinit();
    for(auto ph : *npc(values())) {
        if(npc(ph)->ooxmlId == ooxmlId) {
            return ph;
        }
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::Placeholder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.Placeholder", 39);
    return c;
}

org::apache::poi::sl::usermodel::Placeholder* org::apache::poi::sl::usermodel::Placeholder::valueOf(::java::lang::String* a0)
{
    if(BODY->toString()->equals(a0))
        return BODY;
    if(CENTERED_TITLE->toString()->equals(a0))
        return CENTERED_TITLE;
    if(CHART->toString()->equals(a0))
        return CHART;
    if(CLIP_ART->toString()->equals(a0))
        return CLIP_ART;
    if(CONTENT->toString()->equals(a0))
        return CONTENT;
    if(DATETIME->toString()->equals(a0))
        return DATETIME;
    if(DGM->toString()->equals(a0))
        return DGM;
    if(FOOTER->toString()->equals(a0))
        return FOOTER;
    if(HEADER->toString()->equals(a0))
        return HEADER;
    if(MEDIA->toString()->equals(a0))
        return MEDIA;
    if(NONE->toString()->equals(a0))
        return NONE;
    if(PICTURE->toString()->equals(a0))
        return PICTURE;
    if(SLIDE_IMAGE->toString()->equals(a0))
        return SLIDE_IMAGE;
    if(SLIDE_NUMBER->toString()->equals(a0))
        return SLIDE_NUMBER;
    if(SUBTITLE->toString()->equals(a0))
        return SUBTITLE;
    if(TABLE->toString()->equals(a0))
        return TABLE;
    if(TITLE->toString()->equals(a0))
        return TITLE;
    if(VERTICAL_OBJECT->toString()->equals(a0))
        return VERTICAL_OBJECT;
    if(VERTICAL_TEXT_BODY->toString()->equals(a0))
        return VERTICAL_TEXT_BODY;
    if(VERTICAL_TEXT_TITLE->toString()->equals(a0))
        return VERTICAL_TEXT_TITLE;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::sl::usermodel::PlaceholderArray* org::apache::poi::sl::usermodel::Placeholder::values()
{
    return new org::apache::poi::sl::usermodel::PlaceholderArray({
        BODY,
        CENTERED_TITLE,
        CHART,
        CLIP_ART,
        CONTENT,
        DATETIME,
        DGM,
        FOOTER,
        HEADER,
        MEDIA,
        NONE,
        PICTURE,
        SLIDE_IMAGE,
        SLIDE_NUMBER,
        SUBTITLE,
        TABLE,
        TITLE,
        VERTICAL_OBJECT,
        VERTICAL_TEXT_BODY,
        VERTICAL_TEXT_TITLE,
    });
}

java::lang::Class* org::apache::poi::sl::usermodel::Placeholder::getClass0()
{
    return class_();
}

