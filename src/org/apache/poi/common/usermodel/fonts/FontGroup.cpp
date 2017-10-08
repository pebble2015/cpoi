// Generated from /POI/java/org/apache/poi/common/usermodel/fonts/FontGroup.java
#include <org/apache/poi/common/usermodel/fonts/FontGroup.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/NavigableMap.hpp>
#include <java/util/TreeMap.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontGroup_FontGroupRange.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontGroup_Range.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace common
    {
        namespace usermodel
        {
            namespace fonts
            {
typedef ::SubArray< ::poi::common::usermodel::fonts::FontGroup, ::java::lang::EnumArray > FontGroupArray;
            } // fonts
        } // usermodel
    } // common
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

poi::common::usermodel::fonts::FontGroup::FontGroup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::common::usermodel::fonts::FontGroup::FontGroup(::java::lang::String* name, int ordinal)
    : FontGroup(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::LATIN = new ::poi::common::usermodel::fonts::FontGroup(u"LATIN"_j, 0);
poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::EAST_ASIAN = new ::poi::common::usermodel::fonts::FontGroup(u"EAST_ASIAN"_j, 1);
poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::SYMBOL = new ::poi::common::usermodel::fonts::FontGroup(u"SYMBOL"_j, 2);
poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::COMPLEX_SCRIPT = new ::poi::common::usermodel::fonts::FontGroup(u"COMPLEX_SCRIPT"_j, 3);
java::util::NavigableMap*& poi::common::usermodel::fonts::FontGroup::UCS_RANGES()
{
    clinit();
    return UCS_RANGES_;
}
java::util::NavigableMap* poi::common::usermodel::fonts::FontGroup::UCS_RANGES_;

java::util::List* poi::common::usermodel::fonts::FontGroup::getFontGroupRanges(::java::lang::String* runText)
{
    clinit();
    ::java::util::List* ttrList = new ::java::util::ArrayList();
    FontGroup_FontGroupRange* ttrLast = nullptr;
    auto const rlen = (runText != nullptr) ? npc(runText)->length() : int32_t(0);
    for (int32_t cp, i = int32_t(0), charCount; i < rlen; i += charCount) {
        cp = npc(runText)->codePointAt(i);
        charCount = ::java::lang::Character::charCount(cp);
        FontGroup* tt;
        if(ttrLast != nullptr && npc(u" \n\r"_j)->indexOf(cp) > -int32_t(1)) {
            tt = npc(ttrLast)->fontGroup;
        } else {
            tt = lookup(cp);
        }
        if(ttrLast == nullptr || npc(ttrLast)->fontGroup != tt) {
            ttrLast = new FontGroup_FontGroupRange();
            npc(ttrLast)->fontGroup = tt;
            npc(ttrList)->add(static_cast< ::java::lang::Object* >(ttrLast));
        }
        npc(ttrLast)->len += charCount;
    }
    return ttrList;
}

poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::getFontGroupFirst(::java::lang::String* runText)
{
    clinit();
    return (runText == nullptr || npc(runText)->isEmpty()) ? LATIN : lookup(npc(runText)->codePointAt(0));
}

poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::lookup(int32_t codepoint)
{
    clinit();
    auto entry = npc(UCS_RANGES_)->floorEntry(::java::lang::Integer::valueOf(codepoint));
    auto range = (entry != nullptr) ? java_cast< FontGroup_Range* >(npc(entry)->getValue()) : static_cast< FontGroup_Range* >(nullptr);
    return (range != nullptr && codepoint <= npc(range)->upper) ? npc(range)->fontGroup : EAST_ASIAN;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::common::usermodel::fonts::FontGroup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.common.usermodel.fonts.FontGroup", 47);
    return c;
}

void poi::common::usermodel::fonts::FontGroup::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            UCS_RANGES_ = new ::java::util::TreeMap();
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(0)), new FontGroup_Range(int32_t(127), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(128)), new FontGroup_Range(int32_t(166), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(169)), new FontGroup_Range(int32_t(175), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(178)), new FontGroup_Range(int32_t(179), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(181)), new FontGroup_Range(int32_t(214), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(216)), new FontGroup_Range(int32_t(246), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(248)), new FontGroup_Range(int32_t(1423), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(1424)), new FontGroup_Range(int32_t(1871), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(1920)), new FontGroup_Range(int32_t(1983), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(2304)), new FontGroup_Range(int32_t(4255), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(4256)), new FontGroup_Range(int32_t(4351), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(4608)), new FontGroup_Range(int32_t(4991), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(5024)), new FontGroup_Range(int32_t(6015), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(7424)), new FontGroup_Range(int32_t(7551), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(7680)), new FontGroup_Range(int32_t(8191), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(6016)), new FontGroup_Range(int32_t(6319), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8192)), new FontGroup_Range(int32_t(8203), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8204)), new FontGroup_Range(int32_t(8207), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8208)), new FontGroup_Range(int32_t(8233), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8234)), new FontGroup_Range(int32_t(8239), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8240)), new FontGroup_Range(int32_t(8262), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(8266)), new FontGroup_Range(int32_t(9311), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(9840)), new FontGroup_Range(int32_t(9841), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(10176)), new FontGroup_Range(int32_t(11263), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(12441)), new FontGroup_Range(int32_t(12442), EAST_ASIAN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(55349)), new FontGroup_Range(int32_t(55349), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(61440)), new FontGroup_Range(int32_t(61695), SYMBOL));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(64256)), new FontGroup_Range(int32_t(64279), LATIN));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(64285)), new FontGroup_Range(int32_t(64335), COMPLEX_SCRIPT));
            npc(UCS_RANGES_)->put(::java::lang::Integer::valueOf(int32_t(65104)), new FontGroup_Range(int32_t(65135), LATIN));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::common::usermodel::fonts::FontGroup* poi::common::usermodel::fonts::FontGroup::valueOf(::java::lang::String* a0)
{
    if(COMPLEX_SCRIPT->toString()->equals(a0))
        return COMPLEX_SCRIPT;
    if(EAST_ASIAN->toString()->equals(a0))
        return EAST_ASIAN;
    if(LATIN->toString()->equals(a0))
        return LATIN;
    if(SYMBOL->toString()->equals(a0))
        return SYMBOL;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::common::usermodel::fonts::FontGroupArray* poi::common::usermodel::fonts::FontGroup::values()
{
    return new poi::common::usermodel::fonts::FontGroupArray({
        COMPLEX_SCRIPT,
        EAST_ASIAN,
        LATIN,
        SYMBOL,
    });
}

java::lang::Class* poi::common::usermodel::fonts::FontGroup::getClass0()
{
    return class_();
}

