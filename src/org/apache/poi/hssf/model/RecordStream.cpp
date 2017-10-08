// Generated from /POI/java/org/apache/poi/hssf/model/RecordStream.java
#include <org/apache/poi/hssf/model/RecordStream.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

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

poi::hssf::model::RecordStream::RecordStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::RecordStream::RecordStream(::java::util::List* inputList, int32_t startIndex, int32_t endIx) 
    : RecordStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(inputList,startIndex,endIx);
}

poi::hssf::model::RecordStream::RecordStream(::java::util::List* records, int32_t startIx) 
    : RecordStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(records,startIx);
}

void poi::hssf::model::RecordStream::ctor(::java::util::List* inputList, int32_t startIndex, int32_t endIx)
{
    super::ctor();
    _list = inputList;
    _nextIndex = startIndex;
    _endIx = endIx;
    _countRead = 0;
}

void poi::hssf::model::RecordStream::ctor(::java::util::List* records, int32_t startIx)
{
    ctor(records, startIx, npc(records)->size());
}

bool poi::hssf::model::RecordStream::hasNext()
{
    return _nextIndex < _endIx;
}

poi::hssf::record::Record* poi::hssf::model::RecordStream::getNext()
{
    if(!hasNext()) {
        throw new ::java::lang::RuntimeException(u"Attempt to read past end of record stream"_j);
    }
    _countRead++;
    return java_cast< ::poi::hssf::record::Record* >(npc(_list)->get(_nextIndex++));
}

java::lang::Class* poi::hssf::model::RecordStream::peekNextClass()
{
    if(!hasNext()) {
        return nullptr;
    }
    return npc(java_cast< ::poi::hssf::record::Record* >(npc(_list)->get(_nextIndex)))->getClass();
}

int32_t poi::hssf::model::RecordStream::peekNextSid()
{
    if(!hasNext()) {
        return -int32_t(1);
    }
    return npc(java_cast< ::poi::hssf::record::Record* >(npc(_list)->get(_nextIndex)))->getSid();
}

int32_t poi::hssf::model::RecordStream::getCountRead()
{
    return _countRead;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::RecordStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.RecordStream", 38);
    return c;
}

java::lang::Class* poi::hssf::model::RecordStream::getClass0()
{
    return class_();
}

