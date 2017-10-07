// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataFormat.java
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Vector.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/FormatRecord.hpp>
#include <org/apache/poi/ss/usermodel/BuiltinFormats.hpp>
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

org::apache::poi::hssf::usermodel::HSSFDataFormat::HSSFDataFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFDataFormat::HSSFDataFormat(::org::apache::poi::hssf::model::InternalWorkbook* workbook) 
    : HSSFDataFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook);
}

void org::apache::poi::hssf::usermodel::HSSFDataFormat::init()
{
    _formats = new ::java::util::Vector();
    _movedBuiltins = false;
}

java::lang::StringArray*& org::apache::poi::hssf::usermodel::HSSFDataFormat::_builtinFormats()
{
    clinit();
    return _builtinFormats_;
}
java::lang::StringArray* org::apache::poi::hssf::usermodel::HSSFDataFormat::_builtinFormats_;

void org::apache::poi::hssf::usermodel::HSSFDataFormat::ctor(::org::apache::poi::hssf::model::InternalWorkbook* workbook)
{
    super::ctor();
    init();
    _workbook = workbook;
    auto i = npc(npc(workbook)->getFormats())->iterator();
    while (npc(i)->hasNext()) {
        auto r = java_cast< ::org::apache::poi::hssf::record::FormatRecord* >(npc(i)->next());
        ensureFormatsSize(npc(r)->getIndexCode());
        npc(_formats)->set(npc(r)->getIndexCode(), static_cast< ::java::lang::Object* >(npc(r)->getFormatString()));
    }
}

java::util::List* org::apache::poi::hssf::usermodel::HSSFDataFormat::getBuiltinFormats()
{
    clinit();
    return ::java::util::Arrays::asList(_builtinFormats_);
}

int16_t org::apache::poi::hssf::usermodel::HSSFDataFormat::getBuiltinFormat(::java::lang::String* format)
{
    clinit();
    return static_cast< int16_t >(::org::apache::poi::ss::usermodel::BuiltinFormats::getBuiltinFormat(format));
}

int16_t org::apache::poi::hssf::usermodel::HSSFDataFormat::getFormat(::java::lang::String* pFormat)
{
    ::java::lang::String* format;
    if(npc(pFormat)->equalsIgnoreCase(u"TEXT"_j)) {
        format = u"@"_j;
    } else {
        format = pFormat;
    }
    if(!_movedBuiltins) {
        for (auto i = int32_t(0); i < npc(_builtinFormats_)->length; i++) {
            ensureFormatsSize(i);
            if(java_cast< ::java::lang::String* >(npc(_formats)->get(i)) == nullptr) {
                npc(_formats)->set(i, static_cast< ::java::lang::Object* >((*_builtinFormats_)[i]));
            } else {
            }
        }
        _movedBuiltins = true;
    }
    for (auto i = int32_t(0); i < npc(_formats)->size(); i++) {
        if(npc(format)->equals(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::String* >(npc(_formats)->get(i))))) {
            return static_cast< int16_t >(i);
        }
    }
    auto index = npc(_workbook)->getFormat(format, true);
    ensureFormatsSize(index);
    npc(_formats)->set(static_cast< int32_t >(index), static_cast< ::java::lang::Object* >(format));
    return index;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFDataFormat::getFormat(int16_t index)
{
    if(_movedBuiltins) {
        return java_cast< ::java::lang::String* >(npc(_formats)->get(static_cast< int32_t >(index)));
    }
    if(index == -int32_t(1)) {
        return nullptr;
    }
    auto fmt = npc(_formats)->size() > index ? java_cast< ::java::lang::String* >(npc(_formats)->get(static_cast< int32_t >(index))) : static_cast< ::java::lang::String* >(nullptr);
    if(npc(_builtinFormats_)->length > index && (*_builtinFormats_)[index] != nullptr) {
        if(fmt != nullptr) {
            return fmt;
        } else {
            return (*_builtinFormats_)[index];
        }
    }
    return fmt;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFDataFormat::getBuiltinFormat(int16_t index)
{
    clinit();
    return ::org::apache::poi::ss::usermodel::BuiltinFormats::getBuiltinFormat(static_cast< int32_t >(index));
}

int32_t org::apache::poi::hssf::usermodel::HSSFDataFormat::getNumberOfBuiltinBuiltinFormats()
{
    clinit();
    return npc(_builtinFormats_)->length;
}

void org::apache::poi::hssf::usermodel::HSSFDataFormat::ensureFormatsSize(int32_t index)
{
    if(npc(_formats)->size() <= index) {
        npc(_formats)->setSize(index + int32_t(1));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataFormat", 44);
    return c;
}

void org::apache::poi::hssf::usermodel::HSSFDataFormat::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _builtinFormats_ = ::org::apache::poi::ss::usermodel::BuiltinFormats::getAll();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataFormat::getClass0()
{
    return class_();
}

