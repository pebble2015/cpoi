// Generated from /POI/java/org/apache/poi/hpsf/PropertySetFactory.java
#include <org/apache/poi/hpsf/PropertySetFactory.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>
#include <org/apache/poi/hpsf/MarkUnsupportedException.hpp>
#include <org/apache/poi/hpsf/NoPropertySetStreamException.hpp>
#include <org/apache/poi/hpsf/PropertySet.hpp>
#include <org/apache/poi/hpsf/SummaryInformation.hpp>
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/util/LittleEndianInputStream.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
    } // hpsf
} // poi

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
poi::hpsf::PropertySetFactory::PropertySetFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::PropertySetFactory::PropertySetFactory()
    : PropertySetFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hpsf::PropertySet* poi::hpsf::PropertySetFactory::create(::poi::poifs::filesystem::DirectoryEntry* dir, ::java::lang::String* name) /* throws(FileNotFoundException, NoPropertySetStreamException, IOException, UnsupportedEncodingException) */
{
    clinit();
    ::java::io::InputStream* inp = nullptr;
    {
        auto finally0 = finally([&] {
            if(inp != nullptr) {
                npc(inp)->close();
            }
        });
        {
            auto entry = java_cast< ::poi::poifs::filesystem::DocumentEntry* >(npc(dir)->getEntry(name));
            inp = new ::poi::poifs::filesystem::DocumentInputStream(entry);
            try {
                return create(inp);
            } catch (MarkUnsupportedException* e) {
                return nullptr;
            }
        }
    }

}

poi::hpsf::PropertySet* poi::hpsf::PropertySetFactory::create(::java::io::InputStream* stream) /* throws(NoPropertySetStreamException, MarkUnsupportedException, UnsupportedEncodingException, IOException) */
{
    clinit();
    npc(stream)->mark(PropertySet::OFFSET_HEADER + ClassID::LENGTH + int32_t(1));
    auto leis = new ::poi::util::LittleEndianInputStream(stream);
    auto byteOrder = npc(leis)->readUShort();
    auto format = npc(leis)->readUShort();
    auto osVersion = static_cast< int32_t >(npc(leis)->readUInt());
    auto clsIdBuf = new ::int8_tArray(ClassID::LENGTH);
    npc(leis)->readFully(clsIdBuf);
    auto sectionCount = static_cast< int32_t >(npc(leis)->readUInt());
    if(byteOrder != PropertySet::BYTE_ORDER_ASSERTION || format != PropertySet::FORMAT_ASSERTION || sectionCount < 0) {
        throw new NoPropertySetStreamException();
    }
    if(sectionCount > 0) {
        npc(leis)->readFully(clsIdBuf);
    }
    npc(stream)->reset();
    auto clsId = new ClassID(clsIdBuf, int32_t(0));
    if(sectionCount > 0 && PropertySet::matchesSummary(clsId, new ClassIDArray({::poi::hpsf::wellknown::SectionIDMap::SUMMARY_INFORMATION_ID()}))) {
        return new SummaryInformation(stream);
    } else if(sectionCount > 0 && PropertySet::matchesSummary(clsId, ::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID())) {
        return new DocumentSummaryInformation(stream);
    } else {
        return new PropertySet(stream);
    }
}

poi::hpsf::SummaryInformation* poi::hpsf::PropertySetFactory::newSummaryInformation()
{
    clinit();
    return new SummaryInformation();
}

poi::hpsf::DocumentSummaryInformation* poi::hpsf::PropertySetFactory::newDocumentSummaryInformation()
{
    clinit();
    return new DocumentSummaryInformation();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::PropertySetFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.PropertySetFactory", 38);
    return c;
}

java::lang::Class* poi::hpsf::PropertySetFactory::getClass0()
{
    return class_();
}

