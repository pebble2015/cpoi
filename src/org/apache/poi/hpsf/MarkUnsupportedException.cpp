// Generated from /POI/java/org/apache/poi/hpsf/MarkUnsupportedException.java
#include <org/apache/poi/hpsf/MarkUnsupportedException.hpp>

poi::hpsf::MarkUnsupportedException::MarkUnsupportedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::MarkUnsupportedException::MarkUnsupportedException() 
    : MarkUnsupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::MarkUnsupportedException::MarkUnsupportedException(::java::lang::String* msg) 
    : MarkUnsupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

poi::hpsf::MarkUnsupportedException::MarkUnsupportedException(::java::lang::Throwable* reason) 
    : MarkUnsupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(reason);
}

poi::hpsf::MarkUnsupportedException::MarkUnsupportedException(::java::lang::String* msg, ::java::lang::Throwable* reason) 
    : MarkUnsupportedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg,reason);
}

void poi::hpsf::MarkUnsupportedException::ctor()
{
    super::ctor();
}

void poi::hpsf::MarkUnsupportedException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

void poi::hpsf::MarkUnsupportedException::ctor(::java::lang::Throwable* reason)
{
    super::ctor(reason);
}

void poi::hpsf::MarkUnsupportedException::ctor(::java::lang::String* msg, ::java::lang::Throwable* reason)
{
    super::ctor(msg, reason);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::MarkUnsupportedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.MarkUnsupportedException", 44);
    return c;
}

java::lang::Class* poi::hpsf::MarkUnsupportedException::getClass0()
{
    return class_();
}

