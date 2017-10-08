// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10Native.java
#include <org/apache/poi/poifs/filesystem/Ole10Native.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/Ole10Native_EncodingMode.hpp>
#include <org/apache/poi/poifs/filesystem/Ole10NativeException.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianOutputStream.hpp>
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

poi::poifs::filesystem::Ole10Native::Ole10Native(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::filesystem::Ole10Native::Ole10Native(::java::lang::String* label, ::java::lang::String* filename, ::java::lang::String* command, ::int8_tArray* data) 
    : Ole10Native(*static_cast< ::default_init_tag* >(0))
{
    ctor(label,filename,command,data);
}

poi::poifs::filesystem::Ole10Native::Ole10Native(::int8_tArray* data, int32_t offset)  /* throws(Ole10NativeException) */
    : Ole10Native(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,offset);
}

void poi::poifs::filesystem::Ole10Native::init()
{
    flags1 = int32_t(2);
    flags2 = int32_t(0);
    unknown1 = int32_t(3);
    flags3 = int32_t(0);
}

java::lang::String*& poi::poifs::filesystem::Ole10Native::OLE10_NATIVE()
{
    clinit();
    return OLE10_NATIVE_;
}
java::lang::String* poi::poifs::filesystem::Ole10Native::OLE10_NATIVE_;

java::lang::String*& poi::poifs::filesystem::Ole10Native::ISO1()
{
    clinit();
    return ISO1_;
}
java::lang::String* poi::poifs::filesystem::Ole10Native::ISO1_;

poi::poifs::filesystem::Ole10Native* poi::poifs::filesystem::Ole10Native::createFromEmbeddedOleObject(POIFSFileSystem* poifs) /* throws(IOException, Ole10NativeException) */
{
    clinit();
    return createFromEmbeddedOleObject(npc(poifs)->getRoot());
}

poi::poifs::filesystem::Ole10Native* poi::poifs::filesystem::Ole10Native::createFromEmbeddedOleObject(DirectoryNode* directory) /* throws(IOException, Ole10NativeException) */
{
    clinit();
    auto nativeEntry = java_cast< DocumentEntry* >(npc(directory)->getEntry(OLE10_NATIVE_));
    auto data = new ::int8_tArray(npc(nativeEntry)->getSize());
    auto readBytes = npc(npc(directory)->createDocumentInputStream(static_cast< Entry* >(nativeEntry)))->read(data);
    /* assert((readBytes == npc(data)->length)) */ ;
    return new Ole10Native(data, int32_t(0));
}

void poi::poifs::filesystem::Ole10Native::ctor(::java::lang::String* label, ::java::lang::String* filename, ::java::lang::String* command, ::int8_tArray* data)
{
    super::ctor();
    init();
    setLabel(label);
    setFileName(filename);
    setCommand(command);
    setDataBuffer(data);
    mode = Ole10Native_EncodingMode::parsed;
}

void poi::poifs::filesystem::Ole10Native::ctor(::int8_tArray* data, int32_t offset) /* throws(Ole10NativeException) */
{
    super::ctor();
    init();
    auto ofs = offset;
    if(npc(data)->length < offset + int32_t(2)) {
        throw new Ole10NativeException(u"data is too small"_j);
    }
    totalSize = ::poi::util::LittleEndian::getInt(data, ofs);
    ofs += ::poi::util::LittleEndianConsts::INT_SIZE;
    mode = Ole10Native_EncodingMode::unparsed;
    if(::poi::util::LittleEndian::getShort(data, ofs) == 2) {
        if(::java::lang::Character::isISOControl(static_cast< int32_t >((*data)[ofs + ::poi::util::LittleEndianConsts::SHORT_SIZE]))) {
            mode = Ole10Native_EncodingMode::compact;
        } else {
            mode = Ole10Native_EncodingMode::parsed;
        }
    }
    int32_t dataSize;
    {
        auto v = mode;
        if((v == Ole10Native_EncodingMode::parsed)) {
{
                flags1 = ::poi::util::LittleEndian::getShort(data, ofs);
                ofs += ::poi::util::LittleEndianConsts::SHORT_SIZE;
                auto len = getStringLength(data, ofs);
                label = ::poi::util::StringUtil::getFromCompressedUnicode(data, ofs, len - int32_t(1));
                ofs += len;
                len = getStringLength(data, ofs);
                fileName = ::poi::util::StringUtil::getFromCompressedUnicode(data, ofs, len - int32_t(1));
                ofs += len;
                flags2 = ::poi::util::LittleEndian::getShort(data, ofs);
                ofs += ::poi::util::LittleEndianConsts::SHORT_SIZE;
                unknown1 = ::poi::util::LittleEndian::getShort(data, ofs);
                ofs += ::poi::util::LittleEndianConsts::SHORT_SIZE;
                len = ::poi::util::LittleEndian::getInt(data, ofs);
                ofs += ::poi::util::LittleEndianConsts::INT_SIZE;
                command = ::poi::util::StringUtil::getFromCompressedUnicode(data, ofs, len - int32_t(1));
                ofs += len;
                if(totalSize < ofs) {
                    throw new Ole10NativeException(u"Invalid Ole10Native"_j);
                }
                dataSize = ::poi::util::LittleEndian::getInt(data, ofs);
                ofs += ::poi::util::LittleEndianConsts::INT_SIZE;
                if(dataSize < 0 || totalSize - (ofs - ::poi::util::LittleEndianConsts::INT_SIZE) < dataSize) {
                    throw new Ole10NativeException(u"Invalid Ole10Native"_j);
                }
                goto end_switch0;;
            }        }
        if((v == Ole10Native_EncodingMode::parsed) || (v == Ole10Native_EncodingMode::compact)) {
            flags1 = ::poi::util::LittleEndian::getShort(data, ofs);
            ofs += ::poi::util::LittleEndianConsts::SHORT_SIZE;
            dataSize = totalSize - ::poi::util::LittleEndianConsts::SHORT_SIZE;
            goto end_switch0;;
        }
        if((v == Ole10Native_EncodingMode::unparsed)) {
            dataSize = totalSize;
            goto end_switch0;;
        }
end_switch0:;
    }

    if(static_cast< int64_t >(dataSize) + static_cast< int64_t >(ofs) > static_cast< int64_t >(npc(data)->length)) {
        throw new Ole10NativeException(u"Invalid Ole10Native: declared data length > available data"_j);
    }
    dataBuffer = new ::int8_tArray(dataSize);
    ::java::lang::System::arraycopy(data, ofs, dataBuffer, 0, dataSize);
    ofs += dataSize;
}

int32_t poi::poifs::filesystem::Ole10Native::getStringLength(::int8_tArray* data, int32_t ofs)
{
    clinit();
    auto len = int32_t(0);
    while (len + ofs < npc(data)->length && (*data)[ofs + len] != 0) {
        len++;
    }
    len++;
    return len;
}

int32_t poi::poifs::filesystem::Ole10Native::getTotalSize()
{
    return totalSize;
}

int16_t poi::poifs::filesystem::Ole10Native::getFlags1()
{
    return flags1;
}

java::lang::String* poi::poifs::filesystem::Ole10Native::getLabel()
{
    return label;
}

java::lang::String* poi::poifs::filesystem::Ole10Native::getFileName()
{
    return fileName;
}

int16_t poi::poifs::filesystem::Ole10Native::getFlags2()
{
    return flags2;
}

int16_t poi::poifs::filesystem::Ole10Native::getUnknown1()
{
    return unknown1;
}

java::lang::String* poi::poifs::filesystem::Ole10Native::getCommand()
{
    return command;
}

int32_t poi::poifs::filesystem::Ole10Native::getDataSize()
{
    return npc(dataBuffer)->length;
}

int8_tArray* poi::poifs::filesystem::Ole10Native::getDataBuffer()
{
    return dataBuffer;
}

int16_t poi::poifs::filesystem::Ole10Native::getFlags3()
{
    return flags3;
}

void poi::poifs::filesystem::Ole10Native::writeOut(::java::io::OutputStream* out) /* throws(IOException) */
{
    auto leosOut = new ::poi::util::LittleEndianOutputStream(out);
    {
        auto v = mode;
        if((v == Ole10Native_EncodingMode::parsed)) {
{
                auto bos = new ::java::io::ByteArrayOutputStream();
                auto leos = new ::poi::util::LittleEndianOutputStream(bos);
                npc(leos)->writeShort(static_cast< int32_t >(getFlags1()));
                npc(leos)->write(npc(getLabel())->getBytes(ISO1_));
                npc(leos)->write(int32_t(0));
                npc(leos)->write(npc(getFileName())->getBytes(ISO1_));
                npc(leos)->write(int32_t(0));
                npc(leos)->writeShort(static_cast< int32_t >(getFlags2()));
                npc(leos)->writeShort(static_cast< int32_t >(getUnknown1()));
                npc(leos)->writeInt(npc(getCommand())->length() + int32_t(1));
                npc(leos)->write(npc(getCommand())->getBytes(ISO1_));
                npc(leos)->write(int32_t(0));
                npc(leos)->writeInt(getDataSize());
                npc(leos)->write(getDataBuffer());
                npc(leos)->writeShort(static_cast< int32_t >(getFlags3()));
                npc(leos)->close();
                npc(leosOut)->writeInt(npc(bos)->size());
                npc(bos)->writeTo(out);
                goto end_switch1;;
            }        }
        if((v == Ole10Native_EncodingMode::parsed) || (v == Ole10Native_EncodingMode::compact)) {
            npc(leosOut)->writeInt(getDataSize() + ::poi::util::LittleEndianConsts::SHORT_SIZE);
            npc(leosOut)->writeShort(static_cast< int32_t >(getFlags1()));
            npc(out)->write(getDataBuffer());
            goto end_switch1;;
        }
        if((v == Ole10Native_EncodingMode::unparsed)) {
            npc(leosOut)->writeInt(getDataSize());
            npc(out)->write(getDataBuffer());
            goto end_switch1;;
        }
end_switch1:;
    }

}

void poi::poifs::filesystem::Ole10Native::setFlags1(int16_t flags1)
{
    this->flags1 = flags1;
}

void poi::poifs::filesystem::Ole10Native::setFlags2(int16_t flags2)
{
    this->flags2 = flags2;
}

void poi::poifs::filesystem::Ole10Native::setFlags3(int16_t flags3)
{
    this->flags3 = flags3;
}

void poi::poifs::filesystem::Ole10Native::setLabel(::java::lang::String* label)
{
    this->label = label;
}

void poi::poifs::filesystem::Ole10Native::setFileName(::java::lang::String* fileName)
{
    this->fileName = fileName;
}

void poi::poifs::filesystem::Ole10Native::setCommand(::java::lang::String* command)
{
    this->command = command;
}

void poi::poifs::filesystem::Ole10Native::setUnknown1(int16_t unknown1)
{
    this->unknown1 = unknown1;
}

void poi::poifs::filesystem::Ole10Native::setDataBuffer(::int8_tArray* dataBuffer)
{
    this->dataBuffer = npc(dataBuffer)->clone();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::Ole10Native::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.Ole10Native", 43);
    return c;
}

void poi::poifs::filesystem::Ole10Native::clinit()
{
struct string_init_ {
    string_init_() {
    OLE10_NATIVE_ = u"\u0001Ole10Native"_j;
    ISO1_ = u"ISO-8859-1"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::poifs::filesystem::Ole10Native::getClass0()
{
    return class_();
}

