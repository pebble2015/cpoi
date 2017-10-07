// Generated from /POI/java/org/apache/poi/hssf/dev/FormulaViewer.java
#include <org/apache/poi/hssf/dev/FormulaViewer.hpp>

#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/record/FormulaRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordFactory.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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
org::apache::poi::hssf::dev::FormulaViewer::FormulaViewer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::dev::FormulaViewer::FormulaViewer() 
    : FormulaViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::dev::FormulaViewer::init()
{
    list = false;
}

void org::apache::poi::hssf::dev::FormulaViewer::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::hssf::dev::FormulaViewer::run() /* throws(IOException) */
{
    auto fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(file), true);
    {
        auto finally0 = finally([&] {
            npc(fs)->close();
        });
        {
            auto is = BiffViewer::getPOIFSInputStream(fs);
            {
                auto finally1 = finally([&] {
                    npc(is)->close();
                });
                {
                    auto records = ::org::apache::poi::hssf::record::RecordFactory::createRecords(is);
                    for (auto _i = npc(records)->iterator(); _i->hasNext(); ) {
                        ::org::apache::poi::hssf::record::Record* record = java_cast< ::org::apache::poi::hssf::record::Record* >(_i->next());
                        {
                            if(npc(record)->getSid() == ::org::apache::poi::hssf::record::FormulaRecord::sid) {
                                if(list) {
                                    listFormula(java_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(record));
                                } else {
                                    parseFormulaRecord(java_cast< ::org::apache::poi::hssf::record::FormulaRecord* >(record));
                                }
                            }
                        }
                    }
                }
            }

        }
    }

}

void org::apache::poi::hssf::dev::FormulaViewer::listFormula(::org::apache::poi::hssf::record::FormulaRecord* record)
{
    auto sep = u"~"_j;
    auto tokens = npc(record)->getParsedExpression();
    ::org::apache::poi::ss::formula::ptg::Ptg* token;
    auto numptgs = npc(tokens)->length;
    ::java::lang::String* numArg;
    token = (*tokens)[numptgs - int32_t(1)];
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::FuncPtg* >(token) != nullptr) {
        numArg = ::java::lang::String::valueOf(numptgs - int32_t(1));
    } else {
        numArg = ::java::lang::String::valueOf(-int32_t(1));
    }
    auto buf = new ::java::lang::StringBuilder();
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::ExpPtg* >(token) != nullptr)
        return;

    npc(buf)->append(npc(token)->toFormulaString());
    npc(buf)->append(sep);
    switch (npc(token)->getPtgClass()) {
    case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_REF:
        npc(buf)->append(u"REF"_j);
        break;
    case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
        npc(buf)->append(u"VALUE"_j);
        break;
    case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
        npc(buf)->append(u"ARRAY"_j);
        break;
    default:
        throwInvalidRVAToken(token);
    }

    npc(buf)->append(sep);
    if(numptgs > 1) {
        token = (*tokens)[numptgs - int32_t(2)];
        switch (npc(token)->getPtgClass()) {
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_REF:
            npc(buf)->append(u"REF"_j);
            break;
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
            npc(buf)->append(u"VALUE"_j);
            break;
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
            npc(buf)->append(u"ARRAY"_j);
            break;
        default:
            throwInvalidRVAToken(token);
        }

    } else {
        npc(buf)->append(u"VALUE"_j);
    }
    npc(buf)->append(sep);
    npc(buf)->append(numArg);
    npc(::java::lang::System::out())->println(static_cast< ::java::lang::Object* >(buf));
}

void org::apache::poi::hssf::dev::FormulaViewer::parseFormulaRecord(::org::apache::poi::hssf::record::FormulaRecord* record)
{
    npc(::java::lang::System::out())->println(u"=============================="_j);
    npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u"row = "_j)->append(npc(record)->getRow())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u", col = "_j)->append(npc(record)->getColumn())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"value = "_j)->append(npc(record)->getValue())->toString());
    npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u"xf = "_j)->append(npc(record)->getXFIndex())->toString());
    npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u", number of ptgs = "_j)->append(npc(npc(record)->getParsedExpression())->length)->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u", options = "_j)->append(npc(record)->getOptions())->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"RPN List = "_j)->append(formulaString(record))->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Formula text = "_j)->append(composeFormula(record))->toString());
}

java::lang::String* org::apache::poi::hssf::dev::FormulaViewer::formulaString(::org::apache::poi::hssf::record::FormulaRecord* record)
{
    auto buf = new ::java::lang::StringBuilder();
    auto tokens = npc(record)->getParsedExpression();
    for(auto token : *npc(tokens)) {
        npc(buf)->append(npc(token)->toFormulaString());
        switch (npc(token)->getPtgClass()) {
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_REF:
            npc(buf)->append(u"(R)"_j);
            break;
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_VALUE:
            npc(buf)->append(u"(V)"_j);
            break;
        case ::org::apache::poi::ss::formula::ptg::Ptg::CLASS_ARRAY:
            npc(buf)->append(u"(A)"_j);
            break;
        default:
            throwInvalidRVAToken(token);
        }

        npc(buf)->append(u' ');
    }
    return npc(buf)->toString();
}

void org::apache::poi::hssf::dev::FormulaViewer::throwInvalidRVAToken(::org::apache::poi::ss::formula::ptg::Ptg* token)
{
    clinit();
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Invalid RVA type ("_j)->append(npc(token)->getPtgClass())
        ->append(u"). This should never happen."_j)->toString());
}

java::lang::String* org::apache::poi::hssf::dev::FormulaViewer::composeFormula(::org::apache::poi::hssf::record::FormulaRecord* record)
{
    clinit();
    return ::org::apache::poi::hssf::model::HSSFFormulaParser::toFormulaString(static_cast< ::org::apache::poi::hssf::usermodel::HSSFWorkbook* >(nullptr), npc(record)->getParsedExpression());
}

void org::apache::poi::hssf::dev::FormulaViewer::setFile(::java::lang::String* file)
{
    this->file = file;
}

void org::apache::poi::hssf::dev::FormulaViewer::setList(bool list)
{
    this->list = list;
}

void org::apache::poi::hssf::dev::FormulaViewer::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if((args == nullptr) || (npc(args)->length > 2) || npc((*args)[int32_t(0)])->equals(static_cast< ::java::lang::Object* >(u"--help"_j))) {
        npc(::java::lang::System::out())->println(u"FormulaViewer .8 proof that the devil lies in the details (or just in BIFF8 files in general)"_j);
        npc(::java::lang::System::out())->println(u"usage: Give me a big fat file name"_j);
    } else if(npc((*args)[int32_t(0)])->equals(static_cast< ::java::lang::Object* >(u"--listFunctions"_j))) {
        auto viewer = new FormulaViewer();
        npc(viewer)->setFile((*args)[int32_t(1)]);
        npc(viewer)->setList(true);
        npc(viewer)->run();
    } else {
        auto viewer = new FormulaViewer();
        npc(viewer)->setFile((*args)[int32_t(0)]);
        npc(viewer)->run();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::FormulaViewer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.FormulaViewer", 37);
    return c;
}

java::lang::Class* org::apache::poi::hssf::dev::FormulaViewer::getClass0()
{
    return class_();
}

