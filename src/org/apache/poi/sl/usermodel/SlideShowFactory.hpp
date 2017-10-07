// Generated from /POI/java/org/apache/poi/sl/usermodel/SlideShowFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::usermodel::SlideShowFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static SlideShow* create(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */;
    static SlideShow* create(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs, ::java::lang::String* password) /* throws(IOException) */;
    static SlideShow* create(::java::io::InputStream* inp) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* create(::java::io::InputStream* inp, ::java::lang::String* password) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* create(::java::io::File* file) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* create(::java::io::File* file, ::java::lang::String* password) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* create(::java::io::File* file, ::java::lang::String* password, bool readOnly) /* throws(IOException, EncryptedDocumentException) */;

public: /* protected */
    static SlideShow* createHSLFSlideShow(::java::lang::ObjectArray*/*...*/ args) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* createXSLFSlideShow(::java::lang::ObjectArray*/*...*/ args) /* throws(IOException, EncryptedDocumentException) */;
    static SlideShow* createSlideShow(::java::lang::String* factoryClass, ::java::lang::ObjectArray* args) /* throws(IOException, EncryptedDocumentException) */;

    // Generated

public:
    SlideShowFactory();
protected:
    SlideShowFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
