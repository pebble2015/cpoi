// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/regex/Pattern_SliceI.hpp>

extern void unimplemented_(const char16_t* name);
java::util::regex::Pattern_SliceI::Pattern_SliceI(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::regex::Pattern_SliceI::Pattern_SliceI(::int32_tArray* buf)
    : Pattern_SliceI(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf);
}


void ::java::util::regex::Pattern_SliceI::ctor(::int32_tArray* buf)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::regex::Pattern_SliceI::ctor(::int32_tArray* buf)");
}

bool java::util::regex::Pattern_SliceI::match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq)
{ /* stub */
    unimplemented_(u"bool java::util::regex::Pattern_SliceI::match(Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::regex::Pattern_SliceI::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.regex.Pattern.SliceI", 30);
    return c;
}

java::lang::Class* java::util::regex::Pattern_SliceI::getClass0()
{
    return class_();
}

