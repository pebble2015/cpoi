// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/regex/Pattern_Script.hpp>

extern void unimplemented_(const char16_t* name);
java::util::regex::Pattern_Script::Pattern_Script(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::regex::Pattern_Script::Pattern_Script(::java::lang::Character_UnicodeScript* script)
    : Pattern_Script(*static_cast< ::default_init_tag* >(0))
{
    ctor(script);
}


void ::java::util::regex::Pattern_Script::ctor(::java::lang::Character_UnicodeScript* script)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::regex::Pattern_Script::ctor(::java::lang::Character_UnicodeScript* script)");
}

bool java::util::regex::Pattern_Script::isSatisfiedBy(int32_t ch)
{ /* stub */
    unimplemented_(u"bool java::util::regex::Pattern_Script::isSatisfiedBy(int32_t ch)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::regex::Pattern_Script::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.regex.Pattern.Script", 30);
    return c;
}

java::lang::Class* java::util::regex::Pattern_Script::getClass0()
{
    return class_();
}

