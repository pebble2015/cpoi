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

class org::apache::poi::ss::formula::ParseNode_TokenCollector final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::ss::formula::ptg::PtgArray* _ptgs {  };
    int32_t _offset {  };
protected:
    void ctor(int32_t tokenCount);

public:
    int32_t sumTokenSizes(int32_t fromIx, int32_t toIx);
    int32_t createPlaceholder();
    void add(::org::apache::poi::ss::formula::ptg::Ptg* token);
    void setPlaceholder(int32_t index, ::org::apache::poi::ss::formula::ptg::Ptg* token);
    ::org::apache::poi::ss::formula::ptg::PtgArray* getResult();

    // Generated
    ParseNode_TokenCollector(int32_t tokenCount);
protected:
    ParseNode_TokenCollector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ParseNode;
};
