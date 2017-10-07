// Generated from /POI/java/org/apache/poi/util/DefaultTempFileCreationStrategy.java
#include <org/apache/poi/util/DefaultTempFileCreationStrategy.hpp>

#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/security/SecureRandom.hpp>
#include <org/apache/poi/util/TempFile.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::DefaultTempFileCreationStrategy::DefaultTempFileCreationStrategy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::DefaultTempFileCreationStrategy::DefaultTempFileCreationStrategy() 
    : DefaultTempFileCreationStrategy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::DefaultTempFileCreationStrategy::DefaultTempFileCreationStrategy(::java::io::File* dir) 
    : DefaultTempFileCreationStrategy(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

java::lang::String*& org::apache::poi::util::DefaultTempFileCreationStrategy::JAVA_IO_TMPDIR()
{
    clinit();
    return JAVA_IO_TMPDIR_;
}
java::lang::String* org::apache::poi::util::DefaultTempFileCreationStrategy::JAVA_IO_TMPDIR_;

java::lang::String*& org::apache::poi::util::DefaultTempFileCreationStrategy::POIFILES()
{
    clinit();
    return POIFILES_;
}
java::lang::String* org::apache::poi::util::DefaultTempFileCreationStrategy::POIFILES_;

java::lang::String*& org::apache::poi::util::DefaultTempFileCreationStrategy::KEEP_FILES()
{
    clinit();
    return KEEP_FILES_;
}
java::lang::String* org::apache::poi::util::DefaultTempFileCreationStrategy::KEEP_FILES_;

java::security::SecureRandom*& org::apache::poi::util::DefaultTempFileCreationStrategy::random()
{
    clinit();
    return random_;
}
java::security::SecureRandom* org::apache::poi::util::DefaultTempFileCreationStrategy::random_;

void org::apache::poi::util::DefaultTempFileCreationStrategy::ctor()
{
    ctor(nullptr);
}

void org::apache::poi::util::DefaultTempFileCreationStrategy::ctor(::java::io::File* dir)
{
    super::ctor();
    this->dir = dir;
}

void org::apache::poi::util::DefaultTempFileCreationStrategy::createPOIFilesDirectory() /* throws(IOException) */
{
    if(dir == nullptr) {
        auto tmpDir = ::java::lang::System::getProperty(JAVA_IO_TMPDIR_);
        if(tmpDir == nullptr) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Systems temporary directory not defined - set the -D"_j)->append(JAVA_IO_TMPDIR_)
                ->append(u" jvm property!"_j)->toString());
        }
        dir = new ::java::io::File(tmpDir, POIFILES_);
    }
    createTempDirectory(dir);
}

void org::apache::poi::util::DefaultTempFileCreationStrategy::createTempDirectory(::java::io::File* directory) /* throws(IOException) */
{
    auto const dirExists = (npc(directory)->exists() || npc(directory)->mkdirs());
    if(!dirExists) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create temporary directory '"_j)->append(static_cast< ::java::lang::Object* >(directory))
            ->append(u"'"_j)->toString());
    } else if(!npc(directory)->isDirectory()) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create temporary directory. '"_j)->append(static_cast< ::java::lang::Object* >(directory))
            ->append(u"' exists but is not a directory."_j)->toString());
    }
}

java::io::File* org::apache::poi::util::DefaultTempFileCreationStrategy::createTempFile(::java::lang::String* prefix, ::java::lang::String* suffix) /* throws(IOException) */
{
    createPOIFilesDirectory();
    auto newFile = ::java::io::File::createTempFile(prefix, suffix, dir);
    if(::java::lang::System::getProperty(KEEP_FILES_) == nullptr) {
        npc(newFile)->deleteOnExit();
    }
    return newFile;
}

java::io::File* org::apache::poi::util::DefaultTempFileCreationStrategy::createTempDirectory(::java::lang::String* prefix) /* throws(IOException) */
{
    createPOIFilesDirectory();
    auto const n = npc(random_)->nextLong();
    auto newDirectory = new ::java::io::File(dir, ::java::lang::StringBuilder().append(prefix)->append(::java::lang::Long::toString(n))->toString());
    createTempDirectory(newDirectory);
    if(::java::lang::System::getProperty(KEEP_FILES_) == nullptr) {
        npc(newDirectory)->deleteOnExit();
    }
    return newDirectory;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::DefaultTempFileCreationStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.DefaultTempFileCreationStrategy", 51);
    return c;
}

void org::apache::poi::util::DefaultTempFileCreationStrategy::clinit()
{
struct string_init_ {
    string_init_() {
    JAVA_IO_TMPDIR_ = TempFile::JAVA_IO_TMPDIR();
    POIFILES_ = u"poifiles"_j;
    KEEP_FILES_ = u"poi.keep.tmp.files"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        random_ = new ::java::security::SecureRandom();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::DefaultTempFileCreationStrategy::getClass0()
{
    return class_();
}

