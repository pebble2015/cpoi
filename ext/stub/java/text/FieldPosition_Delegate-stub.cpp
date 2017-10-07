// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/FieldPosition_Delegate.hpp>

#include <java/text/FieldPosition.hpp>

extern void unimplemented_(const char16_t* name);
java::text::FieldPosition_Delegate::FieldPosition_Delegate(FieldPosition *FieldPosition_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , FieldPosition_this(FieldPosition_this)
{
    clinit();
}


/* private: void ::java::text::FieldPosition_Delegate::ctor() */
void java::text::FieldPosition_Delegate::formatted(Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer)
{ /* stub */
    unimplemented_(u"void java::text::FieldPosition_Delegate::formatted(Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer)");
}

void java::text::FieldPosition_Delegate::formatted(int32_t fieldID, Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer)
{ /* stub */
    unimplemented_(u"void java::text::FieldPosition_Delegate::formatted(int32_t fieldID, Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::FieldPosition_Delegate::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.FieldPosition.Delegate", 32);
    return c;
}

java::lang::Class* java::text::FieldPosition_Delegate::getClass0()
{
    return class_();
}

