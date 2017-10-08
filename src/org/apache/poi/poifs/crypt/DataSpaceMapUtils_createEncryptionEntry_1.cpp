// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_createEncryptionEntry_1.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::DataSpaceMapUtils_createEncryptionEntry_1::DataSpaceMapUtils_createEncryptionEntry_1(::int8_tArray* buf)
    : super(*static_cast< ::default_init_tag* >(0))
    , buf(buf)
{
    clinit();
    ctor();
}

void poi::poifs::crypt::DataSpaceMapUtils_createEncryptionEntry_1::processPOIFSWriterEvent(::poi::poifs::filesystem::POIFSWriterEvent* event)
{
    try {
        npc(npc(event)->getStream())->write(buf, int32_t(0), npc(event)->getLimit());
    } catch (::java::io::IOException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_createEncryptionEntry_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::poifs::crypt::DataSpaceMapUtils_createEncryptionEntry_1::getClass0()
{
    return class_();
}

