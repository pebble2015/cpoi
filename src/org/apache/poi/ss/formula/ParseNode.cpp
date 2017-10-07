// Generated from /POI/java/org/apache/poi/ss/formula/ParseNode.java
#include <org/apache/poi/ss/formula/ParseNode.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ParseNode_TokenCollector.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/ptg/ArrayPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::ParseNode, ::java::lang::ObjectArray > ParseNodeArray;

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

org::apache::poi::ss::formula::ParseNode::ParseNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ParseNode::ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNodeArray* children) 
    : ParseNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(token,children);
}

org::apache::poi::ss::formula::ParseNode::ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token) 
    : ParseNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(token);
}

org::apache::poi::ss::formula::ParseNode::ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0) 
    : ParseNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(token,child0);
}

org::apache::poi::ss::formula::ParseNode::ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0, ParseNode* child1) 
    : ParseNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(token,child0,child1);
}

org::apache::poi::ss::formula::ParseNodeArray*& org::apache::poi::ss::formula::ParseNode::EMPTY_ARRAY()
{
    clinit();
    return EMPTY_ARRAY_;
}
org::apache::poi::ss::formula::ParseNodeArray* org::apache::poi::ss::formula::ParseNode::EMPTY_ARRAY_;

void org::apache::poi::ss::formula::ParseNode::ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNodeArray* children)
{
    super::ctor();
    if(token == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"token must not be null"_j);
    }
    _token = token;
    _children = npc(children)->clone();
    _isIf = isIf(token);
    auto tokenCount = int32_t(1);
    for (auto i = int32_t(0); i < npc(children)->length; i++) {
        tokenCount += npc((*children)[i])->getTokenCount();
    }
    if(_isIf) {
        tokenCount += npc(children)->length;
    }
    _tokenCount = tokenCount;
}

void org::apache::poi::ss::formula::ParseNode::ctor(::org::apache::poi::ss::formula::ptg::Ptg* token)
{
    ctor(token, EMPTY_ARRAY_);
}

void org::apache::poi::ss::formula::ParseNode::ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0)
{
    ctor(token, new ParseNodeArray({child0}));
}

void org::apache::poi::ss::formula::ParseNode::ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0, ParseNode* child1)
{
    ctor(token, new ParseNodeArray({
        child0
        , child1
    }));
}

int32_t org::apache::poi::ss::formula::ParseNode::getTokenCount()
{
    return _tokenCount;
}

int32_t org::apache::poi::ss::formula::ParseNode::getEncodedSize()
{
    auto result = dynamic_cast< ::org::apache::poi::ss::formula::ptg::ArrayPtg* >(_token) != nullptr ? ::org::apache::poi::ss::formula::ptg::ArrayPtg::PLAIN_TOKEN_SIZE : npc(_token)->getSize();
    for (auto i = int32_t(0); i < npc(_children)->length; i++) {
        result += npc((*_children)[i])->getEncodedSize();
    }
    return result;
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::ParseNode::toTokenArray_(ParseNode* rootNode)
{
    clinit();
    auto temp = new ParseNode_TokenCollector(npc(rootNode)->getTokenCount());
    npc(rootNode)->collectPtgs(temp);
    return npc(temp)->getResult();
}

void org::apache::poi::ss::formula::ParseNode::collectPtgs(ParseNode_TokenCollector* temp)
{
    if(isIf(_token)) {
        collectIfPtgs(temp);
        return;
    }
    auto isPreFixOperator = dynamic_cast< ::org::apache::poi::ss::formula::ptg::MemFuncPtg* >(_token) != nullptr || dynamic_cast< ::org::apache::poi::ss::formula::ptg::MemAreaPtg* >(_token) != nullptr;
    if(isPreFixOperator) {
        npc(temp)->add(_token);
    }
    for (auto i = int32_t(0); i < npc(getChildren())->length; i++) {
        npc((*getChildren())[i])->collectPtgs(temp);
    }
    if(!isPreFixOperator) {
        npc(temp)->add(_token);
    }
}

void org::apache::poi::ss::formula::ParseNode::collectIfPtgs(ParseNode_TokenCollector* temp)
{
    npc((*getChildren())[int32_t(0)])->collectPtgs(temp);
    auto ifAttrIndex = npc(temp)->createPlaceholder();
    npc((*getChildren())[int32_t(1)])->collectPtgs(temp);
    auto skipAfterTrueParamIndex = npc(temp)->createPlaceholder();
    auto trueParamSize = npc(temp)->sumTokenSizes(ifAttrIndex + int32_t(1), skipAfterTrueParamIndex);
    auto attrIf = ::org::apache::poi::ss::formula::ptg::AttrPtg::createIf(trueParamSize + int32_t(4));
    if(npc(getChildren())->length > 2) {
        npc((*getChildren())[int32_t(2)])->collectPtgs(temp);
        auto skipAfterFalseParamIndex = npc(temp)->createPlaceholder();
        auto falseParamSize = npc(temp)->sumTokenSizes(skipAfterTrueParamIndex + int32_t(1), skipAfterFalseParamIndex);
        auto attrSkipAfterTrue = ::org::apache::poi::ss::formula::ptg::AttrPtg::createSkip(falseParamSize + int32_t(4) + int32_t(4) - int32_t(1));
        auto attrSkipAfterFalse = ::org::apache::poi::ss::formula::ptg::AttrPtg::createSkip(int32_t(4) - int32_t(1));
        npc(temp)->setPlaceholder(ifAttrIndex, attrIf);
        npc(temp)->setPlaceholder(skipAfterTrueParamIndex, attrSkipAfterTrue);
        npc(temp)->setPlaceholder(skipAfterFalseParamIndex, attrSkipAfterFalse);
    } else {
        auto attrSkipAfterTrue = ::org::apache::poi::ss::formula::ptg::AttrPtg::createSkip(int32_t(4) - int32_t(1));
        npc(temp)->setPlaceholder(ifAttrIndex, attrIf);
        npc(temp)->setPlaceholder(skipAfterTrueParamIndex, attrSkipAfterTrue);
    }
    npc(temp)->add(_token);
}

bool org::apache::poi::ss::formula::ParseNode::isIf(::org::apache::poi::ss::formula::ptg::Ptg* token)
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::ss::formula::ptg::FuncVarPtg* >(token) != nullptr) {
        auto func = java_cast< ::org::apache::poi::ss::formula::ptg::FuncVarPtg* >(token);
        if(npc(::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::FUNCTION_NAME_IF())->equals(static_cast< ::java::lang::Object* >(npc(func)->getName()))) {
            return true;
        }
    }
    return false;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::ParseNode::getToken()
{
    return _token;
}

org::apache::poi::ss::formula::ParseNodeArray* org::apache::poi::ss::formula::ParseNode::getChildren()
{
    return _children;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ParseNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ParseNode", 35);
    return c;
}

void org::apache::poi::ss::formula::ParseNode::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ARRAY_ = (new ::org::apache::poi::ss::formula::ParseNodeArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ParseNode::getClass0()
{
    return class_();
}

