// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFEventFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::eventusermodel::HSSFEventFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    virtual void processWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */;
    virtual void processWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */;
    virtual int16_t abortableProcessWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, HSSFUserException) */;
    virtual int16_t abortableProcessWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, HSSFUserException) */;
    virtual void processEvents(HSSFRequest* req, ::java::io::InputStream* in);
    virtual int16_t abortableProcessEvents(HSSFRequest* req, ::java::io::InputStream* in) /* throws(HSSFUserException) */;

private:
    int16_t genericProcessEvents(HSSFRequest* req, ::java::io::InputStream* in) /* throws(HSSFUserException) */;

    // Generated

public:
    HSSFEventFactory();
protected:
    HSSFEventFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
