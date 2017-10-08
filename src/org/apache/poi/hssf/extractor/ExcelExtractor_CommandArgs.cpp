// Generated from /POI/java/org/apache/poi/hssf/extractor/ExcelExtractor.java
#include <org/apache/poi/hssf/extractor/ExcelExtractor_CommandArgs.hpp>

#include <java/io/File.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/extractor/ExcelExtractor_CommandParseException.hpp>
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

poi::hssf::extractor::ExcelExtractor_CommandArgs::ExcelExtractor_CommandArgs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::extractor::ExcelExtractor_CommandArgs::ExcelExtractor_CommandArgs(::java::lang::StringArray* args)  /* throws(CommandParseException) */
    : ExcelExtractor_CommandArgs(*static_cast< ::default_init_tag* >(0))
{
    ctor(args);
}

void poi::hssf::extractor::ExcelExtractor_CommandArgs::ctor(::java::lang::StringArray* args) /* throws(CommandParseException) */
{
    super::ctor();
    auto nArgs = npc(args)->length;
    ::java::io::File* inputFile = nullptr;
    auto requestHelp = false;
    auto showSheetNames = true;
    auto evaluateFormulas = true;
    auto showCellComments = false;
    auto showBlankCells = false;
    auto headersFooters = true;
    for (auto i = int32_t(0); i < nArgs; i++) {
        auto arg = (*args)[i];
        if(npc(u"-help"_j)->equalsIgnoreCase(arg)) {
            requestHelp = true;
            break;
        }
        if(npc(u"-i"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            if(++i >= nArgs) {
                throw new ExcelExtractor_CommandParseException(u"Expected filename after '-i'"_j);
            }
            arg = (*args)[i];
            if(inputFile != nullptr) {
                throw new ExcelExtractor_CommandParseException(u"Only one input file can be supplied"_j);
            }
            inputFile = new ::java::io::File(arg);
            if(!npc(inputFile)->exists()) {
                throw new ExcelExtractor_CommandParseException(::java::lang::StringBuilder().append(u"Specified input file '"_j)->append(arg)
                    ->append(u"' does not exist"_j)->toString());
            }
            if(npc(inputFile)->isDirectory()) {
                throw new ExcelExtractor_CommandParseException(::java::lang::StringBuilder().append(u"Specified input file '"_j)->append(arg)
                    ->append(u"' is a directory"_j)->toString());
            }
            continue;
        }
        if(npc(u"--show-sheet-names"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            showSheetNames = parseBoolArg(args, ++i);
            continue;
        }
        if(npc(u"--evaluate-formulas"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            evaluateFormulas = parseBoolArg(args, ++i);
            continue;
        }
        if(npc(u"--show-comments"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            showCellComments = parseBoolArg(args, ++i);
            continue;
        }
        if(npc(u"--show-blanks"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            showBlankCells = parseBoolArg(args, ++i);
            continue;
        }
        if(npc(u"--headers-footers"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
            headersFooters = parseBoolArg(args, ++i);
            continue;
        }
        throw new ExcelExtractor_CommandParseException(::java::lang::StringBuilder().append(u"Invalid argument '"_j)->append(arg)
            ->append(u"'"_j)->toString());
    }
    _requestHelp = requestHelp;
    _inputFile = inputFile;
    _showSheetNames = showSheetNames;
    _evaluateFormulas = evaluateFormulas;
    _showCellComments = showCellComments;
    _showBlankCells = showBlankCells;
    _headersFooters = headersFooters;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::parseBoolArg(::java::lang::StringArray* args, int32_t i) /* throws(CommandParseException) */
{
    clinit();
    if(i >= npc(args)->length) {
        throw new ExcelExtractor_CommandParseException(::java::lang::StringBuilder().append(u"Expected value after '"_j)->append((*args)[i - int32_t(1)])
            ->append(u"'"_j)->toString());
    }
    auto value = npc((*args)[i])->toUpperCase(::java::util::Locale::ROOT());
    if(npc(u"Y"_j)->equals(static_cast< ::java::lang::Object* >(value)) || npc(u"YES"_j)->equals(static_cast< ::java::lang::Object* >(value)) || npc(u"ON"_j)->equals(static_cast< ::java::lang::Object* >(value))|| npc(u"TRUE"_j)->equals(static_cast< ::java::lang::Object* >(value))) {
        return true;
    }
    if(npc(u"N"_j)->equals(static_cast< ::java::lang::Object* >(value)) || npc(u"NO"_j)->equals(static_cast< ::java::lang::Object* >(value)) || npc(u"OFF"_j)->equals(static_cast< ::java::lang::Object* >(value))|| npc(u"FALSE"_j)->equals(static_cast< ::java::lang::Object* >(value))) {
        return false;
    }
    throw new ExcelExtractor_CommandParseException(::java::lang::StringBuilder().append(u"Invalid value '"_j)->append((*args)[i])
        ->append(u"' for '"_j)
        ->append((*args)[i - int32_t(1)])
        ->append(u"'. Expected 'Y' or 'N'"_j)->toString());
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::isRequestHelp()
{
    return _requestHelp;
}

java::io::File* poi::hssf::extractor::ExcelExtractor_CommandArgs::getInputFile()
{
    return _inputFile;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::shouldShowSheetNames()
{
    return _showSheetNames;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::shouldEvaluateFormulas()
{
    return _evaluateFormulas;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::shouldShowCellComments()
{
    return _showCellComments;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::shouldShowBlankCells()
{
    return _showBlankCells;
}

bool poi::hssf::extractor::ExcelExtractor_CommandArgs::shouldIncludeHeadersFooters()
{
    return _headersFooters;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::extractor::ExcelExtractor_CommandArgs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.extractor.ExcelExtractor.CommandArgs", 56);
    return c;
}

java::lang::Class* poi::hssf::extractor::ExcelExtractor_CommandArgs::getClass0()
{
    return class_();
}

