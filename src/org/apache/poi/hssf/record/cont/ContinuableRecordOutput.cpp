// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordOutput.java
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput_1.hpp>
#include <org/apache/poi/hssf/record/cont/UnknownLengthRecordOutput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::cont::ContinuableRecordOutput::ContinuableRecordOutput(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::cont::ContinuableRecordOutput::ContinuableRecordOutput(::poi::util::LittleEndianOutput* out, int32_t sid) 
    : ContinuableRecordOutput(*static_cast< ::default_init_tag* >(0))
{
    ctor(out,sid);
}

void poi::hssf::record::cont::ContinuableRecordOutput::ctor(::poi::util::LittleEndianOutput* out, int32_t sid)
{
    super::ctor();
    _ulrOutput = new UnknownLengthRecordOutput(out, sid);
    _out = out;
    _totalPreviousRecordsSize = 0;
}

poi::hssf::record::cont::ContinuableRecordOutput* poi::hssf::record::cont::ContinuableRecordOutput::createForCountingOnly()
{
    clinit();
    return new ContinuableRecordOutput(NOPOutput_, -int32_t(777));
}

int32_t poi::hssf::record::cont::ContinuableRecordOutput::getTotalSize()
{
    return _totalPreviousRecordsSize + npc(_ulrOutput)->getTotalSize();
}

void poi::hssf::record::cont::ContinuableRecordOutput::terminate()
{
    npc(_ulrOutput)->terminate();
}

int32_t poi::hssf::record::cont::ContinuableRecordOutput::getAvailableSpace()
{
    return npc(_ulrOutput)->getAvailableSpace();
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeContinue()
{
    npc(_ulrOutput)->terminate();
    _totalPreviousRecordsSize += npc(_ulrOutput)->getTotalSize();
    _ulrOutput = new UnknownLengthRecordOutput(_out, ::poi::hssf::record::ContinueRecord::sid);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeContinueIfRequired(int32_t requiredContinuousSize)
{
    if(npc(_ulrOutput)->getAvailableSpace() < requiredContinuousSize) {
        writeContinue();
    }
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeStringData(::java::lang::String* text)
{
    auto is16bitEncoded = ::poi::util::StringUtil::hasMultibyte(text);
    auto keepTogetherSize = int32_t(1) + int32_t(1);
    auto optionFlags = int32_t(0);
    if(is16bitEncoded) {
        optionFlags |= 1;
        keepTogetherSize += 1;
    }
    writeContinueIfRequired(keepTogetherSize);
    writeByte(optionFlags);
    writeCharacterData(text, is16bitEncoded);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeString(::java::lang::String* text, int32_t numberOfRichTextRuns, int32_t extendedDataSize)
{
    auto is16bitEncoded = ::poi::util::StringUtil::hasMultibyte(text);
    auto keepTogetherSize = int32_t(2) + int32_t(1) + int32_t(1);
    auto optionFlags = int32_t(0);
    if(is16bitEncoded) {
        optionFlags |= 1;
        keepTogetherSize += 1;
    }
    if(numberOfRichTextRuns > 0) {
        optionFlags |= 8;
        keepTogetherSize += 2;
    }
    if(extendedDataSize > 0) {
        optionFlags |= 4;
        keepTogetherSize += 4;
    }
    writeContinueIfRequired(keepTogetherSize);
    writeShort(npc(text)->length());
    writeByte(optionFlags);
    if(numberOfRichTextRuns > 0) {
        writeShort(numberOfRichTextRuns);
    }
    if(extendedDataSize > 0) {
        writeInt(extendedDataSize);
    }
    writeCharacterData(text, is16bitEncoded);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeCharacterData(::java::lang::String* text, bool is16bitEncoded)
{
    auto nChars = npc(text)->length();
    auto i = int32_t(0);
    if(is16bitEncoded) {
        while (true) {
            auto nWritableChars = ::java::lang::Math::min(nChars - i, npc(_ulrOutput)->getAvailableSpace() / int32_t(2));
            for (; nWritableChars > 0; nWritableChars--) {
                npc(_ulrOutput)->writeShort(static_cast< int32_t >(npc(text)->charAt(i++)));
            }
            if(i >= nChars) {
                break;
            }
            writeContinue();
            writeByte(int32_t(1));
        }
    } else {
        while (true) {
            auto nWritableChars = ::java::lang::Math::min(nChars - i, npc(_ulrOutput)->getAvailableSpace() / int32_t(1));
            for (; nWritableChars > 0; nWritableChars--) {
                npc(_ulrOutput)->writeByte(static_cast< int32_t >(npc(text)->charAt(i++)));
            }
            if(i >= nChars) {
                break;
            }
            writeContinue();
            writeByte(int32_t(0));
        }
    }
}

void poi::hssf::record::cont::ContinuableRecordOutput::write(::int8_tArray* b)
{
    writeContinueIfRequired(npc(b)->length);
    npc(_ulrOutput)->write(b);
}

void poi::hssf::record::cont::ContinuableRecordOutput::write(::int8_tArray* b, int32_t offset, int32_t len)
{
    auto i = int32_t(0);
    while (true) {
        auto nWritableChars = ::java::lang::Math::min(len - i, npc(_ulrOutput)->getAvailableSpace() / int32_t(1));
        for (; nWritableChars > 0; nWritableChars--) {
            npc(_ulrOutput)->writeByte(static_cast< int32_t >((*b)[offset + i++]));
        }
        if(i >= len) {
            break;
        }
        writeContinue();
    }
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeByte(int32_t v)
{
    writeContinueIfRequired(1);
    npc(_ulrOutput)->writeByte(v);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeDouble(double v)
{
    writeContinueIfRequired(8);
    npc(_ulrOutput)->writeDouble(v);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeInt(int32_t v)
{
    writeContinueIfRequired(4);
    npc(_ulrOutput)->writeInt(v);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeLong(int64_t v)
{
    writeContinueIfRequired(8);
    npc(_ulrOutput)->writeLong(v);
}

void poi::hssf::record::cont::ContinuableRecordOutput::writeShort(int32_t v)
{
    writeContinueIfRequired(2);
    npc(_ulrOutput)->writeShort(v);
}

poi::util::LittleEndianOutput*& poi::hssf::record::cont::ContinuableRecordOutput::NOPOutput()
{
    clinit();
    return NOPOutput_;
}
poi::util::LittleEndianOutput* poi::hssf::record::cont::ContinuableRecordOutput::NOPOutput_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::cont::ContinuableRecordOutput::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cont.ContinuableRecordOutput", 55);
    return c;
}

void poi::hssf::record::cont::ContinuableRecordOutput::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NOPOutput_ = new ContinuableRecordOutput_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::cont::ContinuableRecordOutput::getClass0()
{
    return class_();
}

