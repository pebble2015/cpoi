// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/FieldPosition.hpp>

extern void unimplemented_(const char16_t* name);
java::text::FieldPosition::FieldPosition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::FieldPosition::FieldPosition(int32_t field)
    : FieldPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(field);
}

java::text::FieldPosition::FieldPosition(Format_Field* attribute)
    : FieldPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(attribute);
}

java::text::FieldPosition::FieldPosition(Format_Field* attribute, int32_t fieldID)
    : FieldPosition(*static_cast< ::default_init_tag* >(0))
{
    ctor(attribute, fieldID);
}


void ::java::text::FieldPosition::ctor(int32_t field)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::FieldPosition::ctor(int32_t field)");
}

void ::java::text::FieldPosition::ctor(Format_Field* attribute)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::FieldPosition::ctor(Format_Field* attribute)");
}

void ::java::text::FieldPosition::ctor(Format_Field* attribute, int32_t fieldID)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::FieldPosition::ctor(Format_Field* attribute, int32_t fieldID)");
}

bool java::text::FieldPosition::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::FieldPosition::equals(::java::lang::Object* obj)");
    return 0;
}

int32_t java::text::FieldPosition::getBeginIndex()
{ /* stub */
return beginIndex ; /* getter */
}

int32_t java::text::FieldPosition::getEndIndex()
{ /* stub */
return endIndex ; /* getter */
}

int32_t java::text::FieldPosition::getField()
{ /* stub */
return field ; /* getter */
}

java::text::Format_Field* java::text::FieldPosition::getFieldAttribute()
{ /* stub */
    unimplemented_(u"java::text::Format_Field* java::text::FieldPosition::getFieldAttribute()");
    return 0;
}

java::text::Format_FieldDelegate* java::text::FieldPosition::getFieldDelegate()
{ /* stub */
    unimplemented_(u"java::text::Format_FieldDelegate* java::text::FieldPosition::getFieldDelegate()");
    return 0;
}

int32_t java::text::FieldPosition::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::FieldPosition::hashCode()");
    return 0;
}

/* private: bool java::text::FieldPosition::matchesField(Format_Field* attribute) */
/* private: bool java::text::FieldPosition::matchesField(Format_Field* attribute, int32_t field) */
void java::text::FieldPosition::setBeginIndex(int32_t bi)
{ /* stub */
    this->beginIndex = bi; /* setter */
}

void java::text::FieldPosition::setEndIndex(int32_t ei)
{ /* stub */
    this->endIndex = ei; /* setter */
}

java::lang::String* java::text::FieldPosition::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::FieldPosition::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::FieldPosition::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.FieldPosition", 23);
    return c;
}

java::lang::Class* java::text::FieldPosition::getClass0()
{
    return class_();
}

