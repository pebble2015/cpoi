// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadataReader.java
#include <org/apache/poi/ss/formula/function/FunctionMetadataReader.hpp>

#include <java/io/BufferedReader.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/InputStreamReader.hpp>
#include <java/io/Serializable.hpp>
#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/function/FunctionDataBuilder.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <Array.hpp>
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
poi::ss::formula::function::FunctionMetadataReader::FunctionMetadataReader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::function::FunctionMetadataReader::FunctionMetadataReader()
    : FunctionMetadataReader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& poi::ss::formula::function::FunctionMetadataReader::METADATA_FILE_NAME()
{
    clinit();
    return METADATA_FILE_NAME_;
}
java::lang::String* poi::ss::formula::function::FunctionMetadataReader::METADATA_FILE_NAME_;

java::lang::String*& poi::ss::formula::function::FunctionMetadataReader::ELLIPSIS()
{
    clinit();
    return ELLIPSIS_;
}
java::lang::String* poi::ss::formula::function::FunctionMetadataReader::ELLIPSIS_;

java::util::regex::Pattern*& poi::ss::formula::function::FunctionMetadataReader::TAB_DELIM_PATTERN()
{
    clinit();
    return TAB_DELIM_PATTERN_;
}
java::util::regex::Pattern* poi::ss::formula::function::FunctionMetadataReader::TAB_DELIM_PATTERN_;

java::util::regex::Pattern*& poi::ss::formula::function::FunctionMetadataReader::SPACE_DELIM_PATTERN()
{
    clinit();
    return SPACE_DELIM_PATTERN_;
}
java::util::regex::Pattern* poi::ss::formula::function::FunctionMetadataReader::SPACE_DELIM_PATTERN_;

int8_tArray*& poi::ss::formula::function::FunctionMetadataReader::EMPTY_BYTE_ARRAY()
{
    clinit();
    return EMPTY_BYTE_ARRAY_;
}
int8_tArray* poi::ss::formula::function::FunctionMetadataReader::EMPTY_BYTE_ARRAY_;

java::lang::StringArray*& poi::ss::formula::function::FunctionMetadataReader::DIGIT_ENDING_FUNCTION_NAMES()
{
    clinit();
    return DIGIT_ENDING_FUNCTION_NAMES_;
}
java::lang::StringArray* poi::ss::formula::function::FunctionMetadataReader::DIGIT_ENDING_FUNCTION_NAMES_;

java::util::Set*& poi::ss::formula::function::FunctionMetadataReader::DIGIT_ENDING_FUNCTION_NAMES_SET()
{
    clinit();
    return DIGIT_ENDING_FUNCTION_NAMES_SET_;
}
java::util::Set* poi::ss::formula::function::FunctionMetadataReader::DIGIT_ENDING_FUNCTION_NAMES_SET_;

poi::ss::formula::function::FunctionMetadataRegistry* poi::ss::formula::function::FunctionMetadataReader::createRegistry()
{
    clinit();
    try {
        auto is = npc(FunctionMetadataReader::class_())->getResourceAsStream(METADATA_FILE_NAME_);
        if(is == nullptr) {
            throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"resource '"_j)->append(METADATA_FILE_NAME_)
                ->append(u"' not found"_j)->toString());
        }
        {
            auto finally0 = finally([&] {
                npc(is)->close();
            });
            {
                ::java::io::BufferedReader* br;
                try {
                    br = new ::java::io::BufferedReader(new ::java::io::InputStreamReader(is, u"UTF-8"_j));
                } catch (::java::io::UnsupportedEncodingException* e) {
                    throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
                }
                {
                    auto finally1 = finally([&] {
                        npc(br)->close();
                    });
                    {
                        auto fdb = new FunctionDataBuilder(int32_t(400));
                        while (true) {
                            auto line = npc(br)->readLine();
                            if(line == nullptr) {
                                break;
                            }
                            if(npc(line)->length() < 1 || npc(line)->charAt(int32_t(0)) == u'#') {
                                continue;
                            }
                            auto trimLine = npc(line)->trim();
                            if(npc(trimLine)->length() < 1) {
                                continue;
                            }
                            processLine(fdb, line);
                        }
                        return npc(fdb)->build();
                    }
                }

            }
        }

    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void poi::ss::formula::function::FunctionMetadataReader::processLine(FunctionDataBuilder* fdb, ::java::lang::String* line)
{
    clinit();
    auto parts = npc(TAB_DELIM_PATTERN_)->split(line, -int32_t(2));
    if(npc(parts)->length != 8) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Bad line format '"_j)->append(line)
            ->append(u"' - expected 8 data fields"_j)->toString());
    }
    auto functionIndex = parseInt((*parts)[int32_t(0)]);
    auto functionName = (*parts)[int32_t(1)];
    auto minParams = parseInt((*parts)[int32_t(2)]);
    auto maxParams = parseInt((*parts)[int32_t(3)]);
    auto returnClassCode = parseReturnTypeCode((*parts)[int32_t(4)]);
    auto parameterClassCodes = parseOperandTypeCodes((*parts)[int32_t(5)]);
    auto hasNote = npc((*parts)[int32_t(7)])->length() > 0;
    validateFunctionName(functionName);
    npc(fdb)->add(functionIndex, functionName, minParams, maxParams, returnClassCode, parameterClassCodes, hasNote);
}

int8_t poi::ss::formula::function::FunctionMetadataReader::parseReturnTypeCode(::java::lang::String* code)
{
    clinit();
    if(npc(code)->length() == 0) {
        return ::poi::ss::formula::ptg::Ptg::CLASS_REF;
    }
    return parseOperandTypeCode(code);
}

int8_tArray* poi::ss::formula::function::FunctionMetadataReader::parseOperandTypeCodes(::java::lang::String* codes)
{
    clinit();
    if(npc(codes)->length() < 1) {
        return EMPTY_BYTE_ARRAY_;
    }
    if(isDash(codes)) {
        return EMPTY_BYTE_ARRAY_;
    }
    auto array = npc(SPACE_DELIM_PATTERN_)->split(codes);
    auto nItems = npc(array)->length;
    if(npc(ELLIPSIS_)->equals(static_cast< ::java::lang::Object* >((*array)[nItems - int32_t(1)]))) {
        nItems--;
    }
    auto result = new ::int8_tArray(nItems);
    for (auto i = int32_t(0); i < nItems; i++) {
        (*result)[i] = parseOperandTypeCode((*array)[i]);
    }
    return result;
}

bool poi::ss::formula::function::FunctionMetadataReader::isDash(::java::lang::String* codes)
{
    clinit();
    if(npc(codes)->length() == 1) {
        switch (npc(codes)->charAt(int32_t(0))) {
        case u'-':
            return true;
        }

    }
    return false;
}

int8_t poi::ss::formula::function::FunctionMetadataReader::parseOperandTypeCode(::java::lang::String* code)
{
    clinit();
    if(npc(code)->length() != 1) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Bad operand type code format '"_j)->append(code)
            ->append(u"' expected single char"_j)->toString());
    }
    switch (npc(code)->charAt(int32_t(0))) {
    case u'V':
        return ::poi::ss::formula::ptg::Ptg::CLASS_VALUE;
    case u'R':
        return ::poi::ss::formula::ptg::Ptg::CLASS_REF;
    case u'A':
        return ::poi::ss::formula::ptg::Ptg::CLASS_ARRAY;
    }

    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected operand type code '"_j)->append(code)
        ->append(u"' ("_j)
        ->append(static_cast< int32_t >(npc(code)->charAt(int32_t(0))))
        ->append(u")"_j)->toString());
}

void poi::ss::formula::function::FunctionMetadataReader::validateFunctionName(::java::lang::String* functionName)
{
    clinit();
    auto len = npc(functionName)->length();
    auto ix = len - int32_t(1);
    if(!::java::lang::Character::isDigit(npc(functionName)->charAt(ix))) {
        return;
    }
    while (ix >= 0) {
        if(!::java::lang::Character::isDigit(npc(functionName)->charAt(ix))) {
            break;
        }
        ix--;
    }
    if(npc(DIGIT_ENDING_FUNCTION_NAMES_SET_)->contains(static_cast< ::java::lang::Object* >(functionName))) {
        return;
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Invalid function name '"_j)->append(functionName)
        ->append(u"' (is footnote number incorrectly appended)"_j)->toString());
}

int32_t poi::ss::formula::function::FunctionMetadataReader::parseInt(::java::lang::String* valStr)
{
    clinit();
    try {
        return ::java::lang::Integer::parseInt(valStr);
    } catch (::java::lang::NumberFormatException* e) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Value '"_j)->append(valStr)
            ->append(u"' could not be parsed as an integer"_j)->toString());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::function::FunctionMetadataReader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.function.FunctionMetadataReader", 57);
    return c;
}

void poi::ss::formula::function::FunctionMetadataReader::clinit()
{
struct string_init_ {
    string_init_() {
    METADATA_FILE_NAME_ = u"functionMetadata.txt"_j;
    ELLIPSIS_ = u"..."_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TAB_DELIM_PATTERN_ = ::java::util::regex::Pattern::compile(u"\t"_j);
        SPACE_DELIM_PATTERN_ = ::java::util::regex::Pattern::compile(u" "_j);
        EMPTY_BYTE_ARRAY_ = (new ::int8_tArray({}));
        DIGIT_ENDING_FUNCTION_NAMES_ = (new ::java::lang::StringArray({
            u"LOG10"_j
            , u"ATAN2"_j
            , u"DAYS360"_j
            , u"SUMXMY2"_j
            , u"SUMX2MY2"_j
            , u"SUMX2PY2"_j
        }));
        DIGIT_ENDING_FUNCTION_NAMES_SET_ = new ::java::util::HashSet(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(DIGIT_ENDING_FUNCTION_NAMES_)));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::function::FunctionMetadataReader::getClass0()
{
    return class_();
}

