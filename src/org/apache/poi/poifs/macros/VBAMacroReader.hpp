// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroReader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/macros/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

struct default_init_tag;

class org::apache::poi::poifs::macros::VBAMacroReader
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Closeable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* VBA_PROJECT_OOXML_;
    static ::java::lang::String* VBA_PROJECT_POIFS_;
    static ::java::nio::charset::Charset* UTF_16LE_;
    ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs {  };
protected:
    void ctor(::java::io::InputStream* rstream) /* throws(IOException) */;
    void ctor(::java::io::File* file) /* throws(IOException) */;
    void ctor(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);

private:
    void openOOXML(::java::io::InputStream* zipFile) /* throws(IOException) */;

public:
    void close() /* throws(IOException) */ override;
    virtual ::java::util::Map* readMacros() /* throws(IOException) */;

public: /* protected */
    virtual void findMacros(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */;

private:
    static ::java::lang::String* readString(::java::io::InputStream* stream, int32_t length, ::java::nio::charset::Charset* charset) /* throws(IOException) */;
    static void readModule(::org::apache::poi::util::RLEDecompressingInputStream* in, ::java::lang::String* streamName, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */;
    static void readModule(::org::apache::poi::poifs::filesystem::DocumentInputStream* dis, ::java::lang::String* name, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */;
    static void trySkip(::java::io::InputStream* in, int64_t n) /* throws(IOException) */;
    static constexpr int32_t EOF_ { int32_t(-1) };
    static constexpr int32_t VERSION_INDEPENDENT_TERMINATOR { int32_t(16) };
    static constexpr int32_t VERSION_DEPENDENT_TERMINATOR { int32_t(43) };
    static constexpr int32_t PROJECTVERSION { int32_t(9) };
    static constexpr int32_t PROJECTCODEPAGE { int32_t(3) };
    static constexpr int32_t STREAMNAME { int32_t(26) };
    static constexpr int32_t MODULEOFFSET { int32_t(49) };
    static constexpr int32_t MODULETYPE_PROCEDURAL { int32_t(33) };
    static constexpr int32_t MODULETYPE_DOCUMENT_CLASS_OR_DESIGNER { int32_t(34) };
    static constexpr int32_t PROJECTLCID { int32_t(2) };
    static constexpr int32_t MODULE_NAME { int32_t(25) };
    static constexpr int32_t MODULE_NAME_UNICODE { int32_t(71) };
    static constexpr int32_t MODULE_DOC_STRING { int32_t(28) };
    static constexpr int32_t STREAMNAME_RESERVED { int32_t(50) };

public: /* protected */
    virtual void readMacros(::org::apache::poi::poifs::filesystem::DirectoryNode* macroDir, VBAMacroReader_ModuleMap* modules) /* throws(IOException) */;

private:
    ::java::lang::String* readUnicodeString(::org::apache::poi::util::RLEDecompressingInputStream* in, int32_t unicodeNameRecordLength) /* throws(IOException) */;

    // Generated

public:
    VBAMacroReader(::java::io::InputStream* rstream);
    VBAMacroReader(::java::io::File* file);
    VBAMacroReader(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs);
protected:
    VBAMacroReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::java::lang::String*& VBA_PROJECT_OOXML();
    static ::java::lang::String*& VBA_PROJECT_POIFS();

private:
    static ::java::nio::charset::Charset*& UTF_16LE();
    virtual ::java::lang::Class* getClass0();
    friend class VBAMacroReader_Module;
    friend class VBAMacroReader_ModuleMap;
};
