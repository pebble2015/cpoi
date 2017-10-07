// Generated from /POI/java/org/apache/poi/ss/formula/ParseNode.java
#include <org/apache/poi/ss/formula/ParseNode_TokenCollector.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ParseNode_TokenCollector::ParseNode_TokenCollector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ParseNode_TokenCollector::ParseNode_TokenCollector(int32_t tokenCount) 
    : ParseNode_TokenCollector(*static_cast< ::default_init_tag* >(0))
{
    ctor(tokenCount);
}

void org::apache::poi::ss::formula::ParseNode_TokenCollector::ctor(int32_t tokenCount)
{
    super::ctor();
    _ptgs = new ::org::apache::poi::ss::formula::ptg::PtgArray(tokenCount);
    _offset = 0;
}

int32_t org::apache::poi::ss::formula::ParseNode_TokenCollector::sumTokenSizes(int32_t fromIx, int32_t toIx)
{
    auto result = int32_t(0);
    for (auto i = fromIx; i < toIx; i++) {
        result += npc((*_ptgs)[i])->getSize();
    }
    return result;
}

int32_t org::apache::poi::ss::formula::ParseNode_TokenCollector::createPlaceholder()
{
    return _offset++;
}

void org::apache::poi::ss::formula::ParseNode_TokenCollector::add(::org::apache::poi::ss::formula::ptg::Ptg* token)
{
    if(token == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"token must not be null"_j);
    }
    _ptgs->set(_offset, token);
    _offset++;
}

void org::apache::poi::ss::formula::ParseNode_TokenCollector::setPlaceholder(int32_t index, ::org::apache::poi::ss::formula::ptg::Ptg* token)
{
    if((*_ptgs)[index] != nullptr) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Invalid placeholder index ("_j)->append(index)
            ->append(u")"_j)->toString());
    }
    _ptgs->set(index, token);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::ParseNode_TokenCollector::getResult()
{
    return _ptgs;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ParseNode_TokenCollector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ParseNode.TokenCollector", 50);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ParseNode_TokenCollector::getClass0()
{
    return class_();
}

