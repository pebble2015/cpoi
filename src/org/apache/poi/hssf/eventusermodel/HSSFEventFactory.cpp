// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/HSSFEventFactory.java
#include <org/apache/poi/hssf/eventusermodel/HSSFEventFactory.hpp>

#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFRequest.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFUserException.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordFactoryInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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
org::apache::poi::hssf::eventusermodel::HSSFEventFactory::HSSFEventFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::eventusermodel::HSSFEventFactory::HSSFEventFactory() 
    : HSSFEventFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::eventusermodel::HSSFEventFactory::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::eventusermodel::HSSFEventFactory::processWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */
{
    processWorkbookEvents(req, npc(fs)->getRoot());
}

void org::apache::poi::hssf::eventusermodel::HSSFEventFactory::processWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ::java::lang::String* name = nullptr;
    auto entryNames = npc(dir)->getEntryNames();
    for(auto potentialName : *npc(::org::apache::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())) {
        if(npc(entryNames)->contains(static_cast< ::java::lang::Object* >(potentialName))) {
            name = potentialName;
            break;
        }
    }
    if(name == nullptr) {
        name = (*::org::apache::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())[int32_t(0)];
    }
    ::java::io::InputStream* in = npc(dir)->createDocumentInputStream(name);
    {
        auto finally0 = finally([&] {
            npc(in)->close();
        });
        {
            processEvents(req, in);
        }
    }

}

int16_t org::apache::poi::hssf::eventusermodel::HSSFEventFactory::abortableProcessWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, HSSFUserException) */
{
    return abortableProcessWorkbookEvents(req, npc(fs)->getRoot());
}

int16_t org::apache::poi::hssf::eventusermodel::HSSFEventFactory::abortableProcessWorkbookEvents(HSSFRequest* req, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, HSSFUserException) */
{
    ::java::io::InputStream* in = npc(dir)->createDocumentInputStream(u"Workbook"_j);
    {
        auto finally1 = finally([&] {
            npc(in)->close();
        });
        {
            return abortableProcessEvents(req, in);
        }
    }

}

void org::apache::poi::hssf::eventusermodel::HSSFEventFactory::processEvents(HSSFRequest* req, ::java::io::InputStream* in)
{
    try {
        genericProcessEvents(req, in);
    } catch (HSSFUserException* hue) {
    }
}

int16_t org::apache::poi::hssf::eventusermodel::HSSFEventFactory::abortableProcessEvents(HSSFRequest* req, ::java::io::InputStream* in) /* throws(HSSFUserException) */
{
    return genericProcessEvents(req, in);
}

int16_t org::apache::poi::hssf::eventusermodel::HSSFEventFactory::genericProcessEvents(HSSFRequest* req, ::java::io::InputStream* in) /* throws(HSSFUserException) */
{
    int16_t userCode = int32_t(0);
    auto recordStream = new ::org::apache::poi::hssf::record::RecordFactoryInputStream(in, false);
    while (true) {
        auto r = npc(recordStream)->nextRecord();
        if(r == nullptr) {
            break;
        }
        userCode = npc(req)->processRecord(r);
        if(userCode != 0) {
            break;
        }
    }
    return userCode;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::eventusermodel::HSSFEventFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.HSSFEventFactory", 51);
    return c;
}

java::lang::Class* org::apache::poi::hssf::eventusermodel::HSSFEventFactory::getClass0()
{
    return class_();
}

