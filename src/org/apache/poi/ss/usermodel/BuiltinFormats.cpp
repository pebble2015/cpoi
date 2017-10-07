// Generated from /POI/java/org/apache/poi/ss/usermodel/BuiltinFormats.java
#include <org/apache/poi/ss/usermodel/BuiltinFormats.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
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

org::apache::poi::ss::usermodel::BuiltinFormats::BuiltinFormats(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::BuiltinFormats::BuiltinFormats()
    : BuiltinFormats(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::ss::usermodel::BuiltinFormats::FIRST_USER_DEFINED_FORMAT_INDEX;

java::lang::StringArray*& org::apache::poi::ss::usermodel::BuiltinFormats::_formats()
{
    clinit();
    return _formats_;
}
java::lang::StringArray* org::apache::poi::ss::usermodel::BuiltinFormats::_formats_;

java::lang::StringArray* org::apache::poi::ss::usermodel::BuiltinFormats::getAll()
{
    clinit();
    return npc(_formats_)->clone();
}

java::lang::String* org::apache::poi::ss::usermodel::BuiltinFormats::getBuiltinFormat(int32_t index)
{
    clinit();
    if(index < 0 || index >= npc(_formats_)->length) {
        return nullptr;
    }
    return (*_formats_)[index];
}

int32_t org::apache::poi::ss::usermodel::BuiltinFormats::getBuiltinFormat(::java::lang::String* pFmt)
{
    clinit();
    auto fmt = npc(u"TEXT"_j)->equalsIgnoreCase(pFmt) ? u"@"_j : pFmt;
    auto i = -int32_t(1);
    for(auto f : *npc(_formats_)) {
        i++;
        if(npc(f)->equals(static_cast< ::java::lang::Object* >(fmt))) {
            return i;
        }
    }
    return -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::BuiltinFormats::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.BuiltinFormats", 42);
    return c;
}

void org::apache::poi::ss::usermodel::BuiltinFormats::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _formats_ = (new ::java::lang::StringArray({
            u"General"_j
            , u"0"_j
            , u"0.00"_j
            , u"#,##0"_j
            , u"#,##0.00"_j
            , u"\"$\"#,##0_);(\"$\"#,##0)"_j
            , u"\"$\"#,##0_);[Red](\"$\"#,##0)"_j
            , u"\"$\"#,##0.00_);(\"$\"#,##0.00)"_j
            , u"\"$\"#,##0.00_);[Red](\"$\"#,##0.00)"_j
            , u"0%"_j
            , u"0.00%"_j
            , u"0.00E+00"_j
            , u"# ?/?"_j
            , u"# ??/??"_j
            , u"m/d/yy"_j
            , u"d-mmm-yy"_j
            , u"d-mmm"_j
            , u"mmm-yy"_j
            , u"h:mm AM/PM"_j
            , u"h:mm:ss AM/PM"_j
            , u"h:mm"_j
            , u"h:mm:ss"_j
            , u"m/d/yy h:mm"_j
            , u"reserved-0x17"_j
            , u"reserved-0x18"_j
            , u"reserved-0x19"_j
            , u"reserved-0x1A"_j
            , u"reserved-0x1B"_j
            , u"reserved-0x1C"_j
            , u"reserved-0x1D"_j
            , u"reserved-0x1E"_j
            , u"reserved-0x1F"_j
            , u"reserved-0x20"_j
            , u"reserved-0x21"_j
            , u"reserved-0x22"_j
            , u"reserved-0x23"_j
            , u"reserved-0x24"_j
            , u"#,##0_);(#,##0)"_j
            , u"#,##0_);[Red](#,##0)"_j
            , u"#,##0.00_);(#,##0.00)"_j
            , u"#,##0.00_);[Red](#,##0.00)"_j
            , u"_(* #,##0_);_(* (#,##0);_(* \"-\"_);_(@_)"_j
            , u"_(\"$\"* #,##0_);_(\"$\"* (#,##0);_(\"$\"* \"-\"_);_(@_)"_j
            , u"_(* #,##0.00_);_(* (#,##0.00);_(* \"-\"??_);_(@_)"_j
            , u"_(\"$\"* #,##0.00_);_(\"$\"* (#,##0.00);_(\"$\"* \"-\"??_);_(@_)"_j
            , u"mm:ss"_j
            , u"[h]:mm:ss"_j
            , u"mm:ss.0"_j
            , u"##0.0E+0"_j
            , u"@"_j
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::usermodel::BuiltinFormats::getClass0()
{
    return class_();
}

