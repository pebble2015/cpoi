// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java
#include <org/apache/poi/poifs/macros/VBAMacroReader.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/zip/ZipEntry.hpp>
#include <java/util/zip/ZipInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OfficeXmlFileException.hpp>
#include <org/apache/poi/poifs/macros/VBAMacroReader_Module.hpp>
#include <org/apache/poi/poifs/macros/VBAMacroReader_ModuleMap.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/RLEDecompressingInputStream.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::poifs::macros::VBAMacroReader::VBAMacroReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::macros::VBAMacroReader::VBAMacroReader(::java::io::InputStream* rstream)  /* throws(IOException) */
    : VBAMacroReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(rstream);
}

org::apache::poi::poifs::macros::VBAMacroReader::VBAMacroReader(::java::io::File* file)  /* throws(IOException) */
    : VBAMacroReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(file);
}

org::apache::poi::poifs::macros::VBAMacroReader::VBAMacroReader(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) 
    : VBAMacroReader(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

java::lang::String*& org::apache::poi::poifs::macros::VBAMacroReader::VBA_PROJECT_OOXML()
{
    clinit();
    return VBA_PROJECT_OOXML_;
}
java::lang::String* org::apache::poi::poifs::macros::VBAMacroReader::VBA_PROJECT_OOXML_;

java::lang::String*& org::apache::poi::poifs::macros::VBAMacroReader::VBA_PROJECT_POIFS()
{
    clinit();
    return VBA_PROJECT_POIFS_;
}
java::lang::String* org::apache::poi::poifs::macros::VBAMacroReader::VBA_PROJECT_POIFS_;

java::nio::charset::Charset*& org::apache::poi::poifs::macros::VBAMacroReader::UTF_16LE()
{
    clinit();
    return UTF_16LE_;
}
java::nio::charset::Charset* org::apache::poi::poifs::macros::VBAMacroReader::UTF_16LE_;

void org::apache::poi::poifs::macros::VBAMacroReader::ctor(::java::io::InputStream* rstream) /* throws(IOException) */
{
    super::ctor();
    auto is = ::org::apache::poi::poifs::filesystem::FileMagic::prepareToCheckMagic(rstream);
    auto fm = ::org::apache::poi::poifs::filesystem::FileMagic::valueOf(is);
    if(fm == ::org::apache::poi::poifs::filesystem::FileMagic::OLE2) {
        fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(is);
    } else {
        openOOXML(is);
    }
}

void org::apache::poi::poifs::macros::VBAMacroReader::ctor(::java::io::File* file) /* throws(IOException) */
{
    super::ctor();
    try {
        this->fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(file);
    } catch (::org::apache::poi::poifs::filesystem::OfficeXmlFileException* e) {
        openOOXML(new ::java::io::FileInputStream(file));
    }
}

void org::apache::poi::poifs::macros::VBAMacroReader::ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    super::ctor();
    this->fs = fs;
}

void org::apache::poi::poifs::macros::VBAMacroReader::openOOXML(::java::io::InputStream* zipFile) /* throws(IOException) */
{
    auto zis = new ::java::util::zip::ZipInputStream(zipFile);
    ::java::util::zip::ZipEntry* zipEntry;
    while ((zipEntry = npc(zis)->getNextEntry()) != nullptr) {
        if(::org::apache::poi::util::StringUtil::endsWithIgnoreCase(npc(zipEntry)->getName(), VBA_PROJECT_OOXML_)) {
            try {
                this->fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(static_cast< ::java::io::InputStream* >(zis));
                return;
            } catch (::java::io::IOException* e) {
                npc(zis)->close();
                throw e;
            }
        }
    }
    npc(zis)->close();
    throw new ::java::lang::IllegalArgumentException(u"No VBA project found"_j);
}

void org::apache::poi::poifs::macros::VBAMacroReader::close() /* throws(IOException) */
{
    npc(fs)->close();
    fs = nullptr;
}

java::util::Map* org::apache::poi::poifs::macros::VBAMacroReader::readMacros() /* throws(IOException) */
{
    auto const modules = new VBAMacroReader_ModuleMap();
    findMacros(npc(fs)->getRoot(), modules);
    ::java::util::Map* moduleSources = new ::java::util::HashMap();
    for (auto _i = npc(npc(modules)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto module = java_cast< VBAMacroReader_Module* >(npc(entry)->getValue());
            if(npc(module)->buf != nullptr && npc(npc(module)->buf)->length > 0) {
                npc(moduleSources)->put(java_cast< ::java::lang::String* >(npc(entry)->getKey()), new ::java::lang::String(npc(module)->buf, npc(modules)->charset));
            }
        }
    }
    return moduleSources;
}

void org::apache::poi::poifs::macros::VBAMacroReader::findMacros(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */
{
    if(npc(VBA_PROJECT_POIFS_)->equalsIgnoreCase(npc(dir)->getName())) {
        readMacros(dir, modules);
    } else {
        for (auto _i = npc(dir)->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::poifs::filesystem::Entry* child = java_cast< ::org::apache::poi::poifs::filesystem::Entry* >(_i->next());
            {
                if(dynamic_cast< ::org::apache::poi::poifs::filesystem::DirectoryNode* >(child) != nullptr) {
                    findMacros(java_cast< ::org::apache::poi::poifs::filesystem::DirectoryNode* >(child), modules);
                }
            }
        }
    }
}

java::lang::String* org::apache::poi::poifs::macros::VBAMacroReader::readString(::java::io::InputStream* stream, int32_t length, ::java::nio::charset::Charset* charset) /* throws(IOException) */
{
    clinit();
    auto buffer = new ::int8_tArray(length);
    auto count = npc(stream)->read(buffer);
    return new ::java::lang::String(buffer, int32_t(0), count, charset);
}

void org::apache::poi::poifs::macros::VBAMacroReader::readModule(::org::apache::poi::util::RLEDecompressingInputStream* in, ::java::lang::String* streamName, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */
{
    clinit();
    auto moduleOffset = npc(in)->readInt();
    auto module = java_cast< VBAMacroReader_Module* >(npc(modules)->get(static_cast< ::java::lang::Object* >(streamName)));
    if(module == nullptr) {
        module = new VBAMacroReader_Module();
        npc(module)->offset = ::java::lang::Integer::valueOf(moduleOffset);
        npc(modules)->put(static_cast< ::java::lang::Object* >(streamName), static_cast< ::java::lang::Object* >(module));
    } else {
        ::java::io::InputStream* stream = new ::org::apache::poi::util::RLEDecompressingInputStream(new ::java::io::ByteArrayInputStream(npc(module)->buf, moduleOffset, npc(npc(module)->buf)->length - moduleOffset));
        npc(module)->read(stream);
        npc(stream)->close();
    }
}

void org::apache::poi::poifs::macros::VBAMacroReader::readModule(::org::apache::poi::poifs::filesystem::DocumentInputStream* dis, ::java::lang::String* name, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */
{
    clinit();
    auto module = java_cast< VBAMacroReader_Module* >(npc(modules)->get(static_cast< ::java::lang::Object* >(name)));
    if(module == nullptr) {
        module = new VBAMacroReader_Module();
        npc(modules)->put(static_cast< ::java::lang::Object* >(name), static_cast< ::java::lang::Object* >(module));
        npc(module)->read(dis);
    } else if(npc(module)->buf == nullptr) {
        if(npc(module)->offset == nullptr) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Module offset for '"_j)->append(name)
                ->append(u"' was never read."_j)->toString());
        }
        auto skippedBytes = npc(dis)->skip((npc(npc(module)->offset))->intValue());
        if(skippedBytes != (npc(npc(module)->offset))->intValue()) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"tried to skip "_j)->append(static_cast< ::java::lang::Object* >(npc(module)->offset))
                ->append(u" bytes, but actually skipped "_j)
                ->append(skippedBytes)
                ->append(u" bytes"_j)->toString());
        }
        ::java::io::InputStream* stream = new ::org::apache::poi::util::RLEDecompressingInputStream(dis);
        npc(module)->read(stream);
        npc(stream)->close();
    }
}

void org::apache::poi::poifs::macros::VBAMacroReader::trySkip(::java::io::InputStream* in, int64_t n) /* throws(IOException) */
{
    clinit();
    auto skippedBytes = npc(in)->skip(n);
    if(skippedBytes != n) {
        if(skippedBytes < 0) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Tried skipping "_j)->append(n)
                ->append(u" bytes, but no bytes were skipped. "_j)
                ->append(u"The end of the stream has been reached or the stream is closed."_j)->toString());
        } else {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Tried skipping "_j)->append(n)
                ->append(u" bytes, but only "_j)
                ->append(skippedBytes)
                ->append(u" bytes were skipped. "_j)
                ->append(u"This should never happen."_j)->toString());
        }
    }
}

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::EOF_;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::VERSION_INDEPENDENT_TERMINATOR;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::VERSION_DEPENDENT_TERMINATOR;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::PROJECTVERSION;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::PROJECTCODEPAGE;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::STREAMNAME;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULEOFFSET;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULETYPE_PROCEDURAL;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULETYPE_DOCUMENT_CLASS_OR_DESIGNER;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::PROJECTLCID;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULE_NAME;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULE_NAME_UNICODE;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::MODULE_DOC_STRING;

constexpr int32_t org::apache::poi::poifs::macros::VBAMacroReader::STREAMNAME_RESERVED;

void org::apache::poi::poifs::macros::VBAMacroReader::readMacros(::org::apache::poi::poifs::filesystem::DirectoryNode* macroDir, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */
{
    for (auto _i = npc(macroDir)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::poifs::filesystem::Entry* entry = java_cast< ::org::apache::poi::poifs::filesystem::Entry* >(_i->next());
        {
            if(!(dynamic_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(entry) != nullptr)) {
                continue;
            }
            auto name = npc(entry)->getName();
            auto document = java_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(entry);
            auto dis = new ::org::apache::poi::poifs::filesystem::DocumentInputStream(static_cast< ::org::apache::poi::poifs::filesystem::DocumentEntry* >(document));
            {
                auto finally0 = finally([&] {
                    npc(dis)->close();
                });
                {
                    if(npc(u"dir"_j)->equalsIgnoreCase(name)) {
                        auto in = new ::org::apache::poi::util::RLEDecompressingInputStream(dis);
                        ::java::lang::String* streamName = nullptr;
                        auto recordId = int32_t(0);
                        {
                            auto finally1 = finally([&] {
                                npc(in)->close();
                            });
                            try {
                                while (true) {
                                    recordId = npc(in)->readShort();
                                    if(EOF_ == recordId || VERSION_INDEPENDENT_TERMINATOR == recordId) {
                                        break;
                                    }
                                    auto recordLength = npc(in)->readInt();
                                    {
                                        int32_t codepage;
                                        int32_t reserved;
                                        int32_t unicodeNameRecordLength;
                                        switch (recordId) {
                                        case PROJECTVERSION:
                                            trySkip(in, 6);
                                            break;
                                        case PROJECTCODEPAGE:
                                            codepage = npc(in)->readShort();
                                            npc(modules)->charset = ::java::nio::charset::Charset::forName(::org::apache::poi::util::CodePageUtil::codepageToEncoding(codepage, true));
                                            break;
                                        case STREAMNAME:
                                            streamName = readString(in, recordLength, npc(modules)->charset);
                                            reserved = npc(in)->readShort();
                                            if(reserved != STREAMNAME_RESERVED) {
                                                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Expected x0032 after stream name before Unicode stream name, but found: "_j)->append(::java::lang::Integer::toHexString(reserved))->toString());
                                            }
                                            unicodeNameRecordLength = npc(in)->readInt();
                                            readUnicodeString(in, unicodeNameRecordLength);
                                            break;
                                        case MODULEOFFSET:
                                            readModule(in, streamName, modules);
                                            break;
                                        default:
                                            trySkip(in, recordLength);
                                            break;
                                        }
                                    }

                                }
                            } catch (::java::io::IOException* e) {
                                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Error occurred while reading macros at section id "_j)->append(recordId)
                                    ->append(u" ("_j)
                                    ->append(::org::apache::poi::util::HexDump::shortToHex(recordId))
                                    ->append(u")"_j)->toString(), e);
                            }
                        }
                    } else if(!::org::apache::poi::util::StringUtil::startsWithIgnoreCase(name, u"__SRP"_j) && !::org::apache::poi::util::StringUtil::startsWithIgnoreCase(name, u"_VBA_PROJECT"_j)) {
                        readModule(dis, name, modules);
                    }
                }
            }

        }
    }
}

java::lang::String* org::apache::poi::poifs::macros::VBAMacroReader::readUnicodeString(::org::apache::poi::util::RLEDecompressingInputStream* in, int32_t unicodeNameRecordLength) /* throws(IOException) */
{
    auto buffer = new ::int8_tArray(unicodeNameRecordLength);
    ::org::apache::poi::util::IOUtils::readFully(static_cast< ::java::io::InputStream* >(in), buffer);
    return new ::java::lang::String(buffer, UTF_16LE_);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.macros.VBAMacroReader", 42);
    return c;
}

void org::apache::poi::poifs::macros::VBAMacroReader::clinit()
{
struct string_init_ {
    string_init_() {
    VBA_PROJECT_OOXML_ = u"vbaProject.bin"_j;
    VBA_PROJECT_POIFS_ = u"VBA"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        UTF_16LE_ = ::java::nio::charset::Charset::forName(u"UTF-16LE"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroReader::getClass0()
{
    return class_();
}

