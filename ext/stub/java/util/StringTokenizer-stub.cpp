// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/StringTokenizer.hpp>

extern void unimplemented_(const char16_t* name);
java::util::StringTokenizer::StringTokenizer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* str)
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(str);
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* str, ::java::lang::String* delim)
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(str, delim);
}

java::util::StringTokenizer::StringTokenizer(::java::lang::String* str, ::java::lang::String* delim, bool returnDelims)
    : StringTokenizer(*static_cast< ::default_init_tag* >(0))
{
    ctor(str, delim, returnDelims);
}


void ::java::util::StringTokenizer::ctor(::java::lang::String* str)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::StringTokenizer::ctor(::java::lang::String* str)");
}

void ::java::util::StringTokenizer::ctor(::java::lang::String* str, ::java::lang::String* delim)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::StringTokenizer::ctor(::java::lang::String* str, ::java::lang::String* delim)");
}

void ::java::util::StringTokenizer::ctor(::java::lang::String* str, ::java::lang::String* delim, bool returnDelims)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::StringTokenizer::ctor(::java::lang::String* str, ::java::lang::String* delim, bool returnDelims)");
}

int32_t java::util::StringTokenizer::countTokens()
{ /* stub */
    unimplemented_(u"int32_t java::util::StringTokenizer::countTokens()");
    return 0;
}

bool java::util::StringTokenizer::hasMoreElements()
{ /* stub */
    unimplemented_(u"bool java::util::StringTokenizer::hasMoreElements()");
    return 0;
}

bool java::util::StringTokenizer::hasMoreTokens()
{ /* stub */
    unimplemented_(u"bool java::util::StringTokenizer::hasMoreTokens()");
    return 0;
}

/* private: bool java::util::StringTokenizer::isDelimiter(int32_t codePoint) */
java::lang::Object* java::util::StringTokenizer::nextElement()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::StringTokenizer::nextElement()");
    return 0;
}

java::lang::String* java::util::StringTokenizer::nextToken()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::StringTokenizer::nextToken()");
    return 0;
}

java::lang::String* java::util::StringTokenizer::nextToken(::java::lang::String* delim)
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::StringTokenizer::nextToken(::java::lang::String* delim)");
    return 0;
}

/* private: int32_t java::util::StringTokenizer::scanToken(int32_t startPos) */
/* private: void java::util::StringTokenizer::setMaxDelimCodePoint() */
/* private: int32_t java::util::StringTokenizer::skipDelimiters(int32_t startPos) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::StringTokenizer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.StringTokenizer", 25);
    return c;
}

java::lang::Class* java::util::StringTokenizer::getClass0()
{
    return class_();
}

