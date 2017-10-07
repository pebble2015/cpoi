// Generated from /POI/java/org/apache/poi/hssf/model/RecordStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::model::RecordStream final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _list {  };
    int32_t _nextIndex {  };
    int32_t _countRead {  };
    int32_t _endIx {  };
protected:
    void ctor(::java::util::List* inputList, int32_t startIndex, int32_t endIx);
    void ctor(::java::util::List* records, int32_t startIx);

public:
    bool hasNext();
    ::org::apache::poi::hssf::record::Record* getNext();
    ::java::lang::Class* peekNextClass();
    int32_t peekNextSid();
    int32_t getCountRead();

    // Generated
    RecordStream(::java::util::List* inputList, int32_t startIndex, int32_t endIx);
    RecordStream(::java::util::List* records, int32_t startIx);
protected:
    RecordStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
