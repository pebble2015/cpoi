// Generated from /POI/java/org/apache/poi/util/TempFile.java
#include <org/apache/poi/util/TempFile.hpp>

#include <java/io/File.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/util/TempFile_DefaultTempFileCreationStrategy.hpp>
#include <org/apache/poi/util/TempFileCreationStrategy.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::TempFile::TempFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::TempFile::TempFile() 
    : TempFile(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::TempFileCreationStrategy*& poi::util::TempFile::strategy()
{
    clinit();
    return strategy_;
}
poi::util::TempFileCreationStrategy* poi::util::TempFile::strategy_;

java::lang::String*& poi::util::TempFile::JAVA_IO_TMPDIR()
{
    clinit();
    return JAVA_IO_TMPDIR_;
}
java::lang::String* poi::util::TempFile::JAVA_IO_TMPDIR_;

void poi::util::TempFile::ctor()
{
    super::ctor();
}

void poi::util::TempFile::setTempFileCreationStrategy(TempFileCreationStrategy* strategy)
{
    clinit();
    if(strategy == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"strategy == null"_j);
    }
    TempFile::strategy_ = strategy;
}

java::io::File* poi::util::TempFile::createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */
{
    clinit();
    return npc(strategy_)->createTempFile(prefix, suffix);
}

java::io::File* poi::util::TempFile::createTempDirectory(::java::lang::String* name) /* throws(IOException) */
{
    clinit();
    return npc(strategy_)->createTempDirectory(name);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::TempFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.TempFile", 28);
    return c;
}

void poi::util::TempFile::clinit()
{
struct string_init_ {
    string_init_() {
    JAVA_IO_TMPDIR_ = u"java.io.tmpdir"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        strategy_ = new TempFile_DefaultTempFileCreationStrategy();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::TempFile::getClass0()
{
    return class_();
}

