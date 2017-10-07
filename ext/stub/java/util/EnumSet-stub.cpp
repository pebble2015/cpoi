// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/EnumSet.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
java::util::EnumSet::EnumSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::EnumSet::EnumSet(::java::lang::Class* elementType, ::java::lang::EnumArray* universe)
    : EnumSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(elementType, universe);
}

java::lang::EnumArray*& java::util::EnumSet::ZERO_LENGTH_ENUM_ARRAY()
{
    clinit();
    return ZERO_LENGTH_ENUM_ARRAY_;
}
java::lang::EnumArray* java::util::EnumSet::ZERO_LENGTH_ENUM_ARRAY_;

void ::java::util::EnumSet::ctor(::java::lang::Class* elementType, ::java::lang::EnumArray* universe)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::EnumSet::ctor(::java::lang::Class* elementType, ::java::lang::EnumArray* universe)");
}

java::util::EnumSet* java::util::EnumSet::allOf(::java::lang::Class* elementType)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::allOf(::java::lang::Class* elementType)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::clone()
{ /* stub */
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::clone()");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::complementOf(EnumSet* s)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::complementOf(EnumSet* s)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::copyOf(EnumSet* s)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::copyOf(EnumSet* s)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::copyOf(Collection* c)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::copyOf(Collection* c)");
    return 0;
}

/* private: java::lang::EnumArray* java::util::EnumSet::getUniverse(::java::lang::Class* elementType) */
java::util::EnumSet* java::util::EnumSet::noneOf(::java::lang::Class* elementType)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::noneOf(::java::lang::Class* elementType)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* first, ::java::lang::EnumArray* rest)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* first, ::java::lang::EnumArray* rest)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4, ::java::lang::Enum* e5)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4, ::java::lang::Enum* e5)");
    return 0;
}

java::util::EnumSet* java::util::EnumSet::range(::java::lang::Enum* from, ::java::lang::Enum* to)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::EnumSet* java::util::EnumSet::range(::java::lang::Enum* from, ::java::lang::Enum* to)");
    return 0;
}

/* private: void java::util::EnumSet::readObject(::java::io::ObjectInputStream* stream) */
void java::util::EnumSet::typeCheck(::java::lang::Enum* e)
{ /* stub */
    unimplemented_(u"void java::util::EnumSet::typeCheck(::java::lang::Enum* e)");
}

java::lang::Object* java::util::EnumSet::writeReplace()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::EnumSet::writeReplace()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::EnumSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumSet", 17);
    return c;
}

java::lang::Class* java::util::EnumSet::getClass0()
{
    return class_();
}

