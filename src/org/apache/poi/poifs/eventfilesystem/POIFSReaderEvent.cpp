// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReaderEvent.java
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderEvent.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>

poi::poifs::eventfilesystem::POIFSReaderEvent::POIFSReaderEvent(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::eventfilesystem::POIFSReaderEvent::POIFSReaderEvent(::poi::poifs::filesystem::DocumentInputStream* stream, ::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName) 
    : POIFSReaderEvent(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,path,documentName);
}

void poi::poifs::eventfilesystem::POIFSReaderEvent::ctor(::poi::poifs::filesystem::DocumentInputStream* stream, ::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName)
{
    super::ctor();
    this->stream = stream;
    this->path = path;
    this->documentName = documentName;
}

poi::poifs::filesystem::DocumentInputStream* poi::poifs::eventfilesystem::POIFSReaderEvent::getStream()
{
    return stream;
}

poi::poifs::filesystem::POIFSDocumentPath* poi::poifs::eventfilesystem::POIFSReaderEvent::getPath()
{
    return path;
}

java::lang::String* poi::poifs::eventfilesystem::POIFSReaderEvent::getName()
{
    return documentName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::eventfilesystem::POIFSReaderEvent::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.eventfilesystem.POIFSReaderEvent", 53);
    return c;
}

java::lang::Class* poi::poifs::eventfilesystem::POIFSReaderEvent::getClass0()
{
    return class_();
}

