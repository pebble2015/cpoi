// Generated from /POI/java/org/apache/poi/EncryptedDocumentException.java
#include <org/apache/poi/EncryptedDocumentException.hpp>

poi::EncryptedDocumentException::EncryptedDocumentException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::EncryptedDocumentException::EncryptedDocumentException(::java::lang::String* s) 
    : EncryptedDocumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

poi::EncryptedDocumentException::EncryptedDocumentException(::java::lang::String* message, ::java::lang::Throwable* cause) 
    : EncryptedDocumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

poi::EncryptedDocumentException::EncryptedDocumentException(::java::lang::Throwable* cause) 
    : EncryptedDocumentException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}


void poi::EncryptedDocumentException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

void poi::EncryptedDocumentException::ctor(::java::lang::String* message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void poi::EncryptedDocumentException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::EncryptedDocumentException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.EncryptedDocumentException", 41);
    return c;
}

java::lang::Class* poi::EncryptedDocumentException::getClass0()
{
    return class_();
}

