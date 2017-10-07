// Generated from /POI/java/org/apache/poi/ss/formula/ParseNode.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::formula::ParseNode final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ParseNodeArray* EMPTY_ARRAY_;
    ::org::apache::poi::ss::formula::ptg::Ptg* _token {  };
    ParseNodeArray* _children {  };
    bool _isIf {  };
    int32_t _tokenCount {  };
protected:
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNodeArray* children);
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* token);
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0);
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0, ParseNode* child1);

private:
    int32_t getTokenCount();

public:
    int32_t getEncodedSize();
    static ::org::apache::poi::ss::formula::ptg::PtgArray* toTokenArray_(ParseNode* rootNode);

private:
    void collectPtgs(ParseNode_TokenCollector* temp);
    void collectIfPtgs(ParseNode_TokenCollector* temp);
    static bool isIf(::org::apache::poi::ss::formula::ptg::Ptg* token);

public:
    ::org::apache::poi::ss::formula::ptg::Ptg* getToken();
    ParseNodeArray* getChildren();

    // Generated
    ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNodeArray* children);
    ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token);
    ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0);
    ParseNode(::org::apache::poi::ss::formula::ptg::Ptg* token, ParseNode* child0, ParseNode* child1);
protected:
    ParseNode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ParseNodeArray*& EMPTY_ARRAY();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ParseNode_TokenCollector;
};
