// Generated from /POI/java/org/apache/poi/hssf/record/SSTDeserializer.java
#include <org/apache/poi/hssf/record/SSTDeserializer.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/util/IntMapper.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::SSTDeserializer::SSTDeserializer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SSTDeserializer::SSTDeserializer(::org::apache::poi::util::IntMapper* strings) 
    : SSTDeserializer(*static_cast< ::default_init_tag* >(0))
{
    ctor(strings);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::SSTDeserializer::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::SSTDeserializer::logger_;

void org::apache::poi::hssf::record::SSTDeserializer::ctor(::org::apache::poi::util::IntMapper* strings)
{
    super::ctor();
    this->strings = strings;
}

void org::apache::poi::hssf::record::SSTDeserializer::manufactureStrings(int32_t stringCount, RecordInputStream* in)
{
    for (auto i = int32_t(0); i < stringCount; i++) {
        ::org::apache::poi::hssf::record::common::UnicodeString* str;
        if(npc(in)->available() == 0 && !npc(in)->hasNextRecord()) {
            npc(logger_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Ran out of data before creating all the strings! String at index "_j)->append(i)
                ->append(u""_j)->toString())}));
            str = new ::org::apache::poi::hssf::record::common::UnicodeString(u""_j);
        } else {
            str = new ::org::apache::poi::hssf::record::common::UnicodeString(in);
        }
        addToStringTable(strings, str);
    }
}

void org::apache::poi::hssf::record::SSTDeserializer::addToStringTable(::org::apache::poi::util::IntMapper* strings, ::org::apache::poi::hssf::record::common::UnicodeString* string)
{
    clinit();
    npc(strings)->add(string);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SSTDeserializer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SSTDeserializer", 42);
    return c;
}

void org::apache::poi::hssf::record::SSTDeserializer::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(SSTDeserializer::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::SSTDeserializer::getClass0()
{
    return class_();
}

