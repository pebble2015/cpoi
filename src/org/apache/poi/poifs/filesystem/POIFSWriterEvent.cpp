// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSWriterEvent.java
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>

poi::poifs::filesystem::POIFSWriterEvent::POIFSWriterEvent(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::POIFSWriterEvent::POIFSWriterEvent(DocumentOutputStream* stream, POIFSDocumentPath* path, ::java::lang::String* documentName, int32_t limit) 
    : POIFSWriterEvent(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,path,documentName,limit);
}

void poi::poifs::filesystem::POIFSWriterEvent::ctor(DocumentOutputStream* stream, POIFSDocumentPath* path, ::java::lang::String* documentName, int32_t limit)
{
    super::ctor();
    this->stream = stream;
    this->path = path;
    this->documentName = documentName;
    this->limit = limit;
}

poi::poifs::filesystem::DocumentOutputStream* poi::poifs::filesystem::POIFSWriterEvent::getStream()
{
    return stream;
}

poi::poifs::filesystem::POIFSDocumentPath* poi::poifs::filesystem::POIFSWriterEvent::getPath()
{
    return path;
}

java::lang::String* poi::poifs::filesystem::POIFSWriterEvent::getName()
{
    return documentName;
}

int32_t poi::poifs::filesystem::POIFSWriterEvent::getLimit()
{
    return limit;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::POIFSWriterEvent::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.POIFSWriterEvent", 48);
    return c;
}

java::lang::Class* poi::poifs::filesystem::POIFSWriterEvent::getClass0()
{
    return class_();
}

