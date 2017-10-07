// Generated from /POI/java/org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.java
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream_EncryptedPackageWriter.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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
org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter::ChunkedCipherOutputStream_EncryptedPackageWriter(ChunkedCipherOutputStream *ChunkedCipherOutputStream_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , ChunkedCipherOutputStream_this(ChunkedCipherOutputStream_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter::ChunkedCipherOutputStream_EncryptedPackageWriter(ChunkedCipherOutputStream *ChunkedCipherOutputStream_this)
    : ChunkedCipherOutputStream_EncryptedPackageWriter(ChunkedCipherOutputStream_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter::processPOIFSWriterEvent(::org::apache::poi::poifs::filesystem::POIFSWriterEvent* event)
{
    try {
        ::java::io::OutputStream* os = npc(event)->getStream();
        auto buf = new ::int8_tArray(::org::apache::poi::util::LittleEndianConsts::LONG_SIZE);
        ::org::apache::poi::util::LittleEndian::putLong(buf, 0, ChunkedCipherOutputStream_this->pos);
        npc(os)->write(buf);
        auto fis = new ::java::io::FileInputStream(ChunkedCipherOutputStream_this->fileOut);
        {
            auto finally0 = finally([&] {
                npc(fis)->close();
            });
            {
                ::org::apache::poi::util::IOUtils::copy(fis, os);
            }
        }

        npc(os)->close();
        if(!npc(ChunkedCipherOutputStream_this->fileOut)->delete_()) {
            npc(ChunkedCipherOutputStream::LOG())->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Can't delete temporary encryption file: "_j)->append(static_cast< ::java::lang::Object* >(ChunkedCipherOutputStream_this->fileOut))->toString())}));
        }
    } catch (::java::io::IOException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.ChunkedCipherOutputStream.EncryptedPackageWriter", 75);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::ChunkedCipherOutputStream_EncryptedPackageWriter::getClass0()
{
    return class_();
}

