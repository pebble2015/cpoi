// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/FileChannel_MapMode.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::channels::FileChannel_MapMode::FileChannel_MapMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::FileChannel_MapMode*& java::nio::channels::FileChannel_MapMode::PRIVATE()
{
    clinit();
    return PRIVATE_;
}
java::nio::channels::FileChannel_MapMode* java::nio::channels::FileChannel_MapMode::PRIVATE_;
java::nio::channels::FileChannel_MapMode*& java::nio::channels::FileChannel_MapMode::READ_ONLY()
{
    clinit();
    return READ_ONLY_;
}
java::nio::channels::FileChannel_MapMode* java::nio::channels::FileChannel_MapMode::READ_ONLY_;
java::nio::channels::FileChannel_MapMode*& java::nio::channels::FileChannel_MapMode::READ_WRITE()
{
    clinit();
    return READ_WRITE_;
}
java::nio::channels::FileChannel_MapMode* java::nio::channels::FileChannel_MapMode::READ_WRITE_;

/* private: void ::java::nio::channels::FileChannel_MapMode::ctor(::java::lang::String* name) */
java::lang::String* java::nio::channels::FileChannel_MapMode::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::channels::FileChannel_MapMode::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::FileChannel_MapMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.FileChannel.MapMode", 37);
    return c;
}

java::lang::Class* java::nio::channels::FileChannel_MapMode::getClass0()
{
    return class_();
}

