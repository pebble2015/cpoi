// Generated from /POI/java/org/apache/poi/ss/formula/eval/NotImplementedException.java
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>

poi::ss::formula::eval::NotImplementedException::NotImplementedException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::NotImplementedException::NotImplementedException(::java::lang::String* message) 
    : NotImplementedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

poi::ss::formula::eval::NotImplementedException::NotImplementedException(::java::lang::String* message, NotImplementedException* cause) 
    : NotImplementedException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}


void poi::ss::formula::eval::NotImplementedException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

void poi::ss::formula::eval::NotImplementedException::ctor(::java::lang::String* message, NotImplementedException* cause)
{
    super::ctor(message, cause);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::NotImplementedException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.NotImplementedException", 54);
    return c;
}

java::lang::Class* poi::ss::formula::eval::NotImplementedException::getClass0()
{
    return class_();
}

