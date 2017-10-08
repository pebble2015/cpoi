// Generated from /POI/java/org/apache/poi/hssf/extractor/OldExcelExtractor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/extractor/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::hssf::extractor::OldExcelExtractor
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Closeable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t FILE_PASS_RECORD_SID { int32_t(47) };
    ::poi::hssf::record::RecordInputStream* ris {  };
    ::java::io::Closeable* toClose {  };
    int32_t biffVersion {  };
    int32_t fileType {  };
protected:
    void ctor(::java::io::InputStream* input) /* throws(IOException) */;
    void ctor(::java::io::File* f) /* throws(IOException) */;
    void ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    void ctor(::poi::poifs::filesystem::DirectoryNode* directory) /* throws(IOException) */;

private:
    void open(::java::io::InputStream* biffStream) /* throws(IOException) */;
    void open(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    void open(::poi::poifs::filesystem::DirectoryNode* directory) /* throws(IOException) */;

public:
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

private:
    void prepare();

public:
    virtual int32_t getBiffVersion();
    virtual int32_t getFileType();
    virtual ::java::lang::String* getText();
    void close() override;

public: /* protected */
    virtual void handleNumericCell(::java::lang::StringBuffer* text, double value);

    // Generated

public:
    OldExcelExtractor(::java::io::InputStream* input);
    OldExcelExtractor(::java::io::File* f);
    OldExcelExtractor(::poi::poifs::filesystem::NPOIFSFileSystem* fs);
    OldExcelExtractor(::poi::poifs::filesystem::DirectoryNode* directory);
protected:
    OldExcelExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
