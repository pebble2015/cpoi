// Generated from /POI/java/org/apache/poi/ss/formula/eval/NotImplementedFunctionException.java
#include <org/apache/poi/ss/formula/eval/NotImplementedFunctionException.hpp>

#include <java/lang/String.hpp>

org::apache::poi::ss::formula::eval::NotImplementedFunctionException::NotImplementedFunctionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::NotImplementedFunctionException::NotImplementedFunctionException(::java::lang::String* functionName) 
    : NotImplementedFunctionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionName);
}

org::apache::poi::ss::formula::eval::NotImplementedFunctionException::NotImplementedFunctionException(::java::lang::String* functionName, NotImplementedException* cause) 
    : NotImplementedFunctionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(functionName,cause);
}

constexpr int64_t org::apache::poi::ss::formula::eval::NotImplementedFunctionException::serialVersionUID;

void org::apache::poi::ss::formula::eval::NotImplementedFunctionException::ctor(::java::lang::String* functionName)
{
    super::ctor(functionName);
    this->functionName = functionName;
}

void org::apache::poi::ss::formula::eval::NotImplementedFunctionException::ctor(::java::lang::String* functionName, NotImplementedException* cause)
{
    super::ctor(functionName, cause);
    this->functionName = functionName;
}

java::lang::String* org::apache::poi::ss::formula::eval::NotImplementedFunctionException::getFunctionName()
{
    return functionName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::NotImplementedFunctionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.NotImplementedFunctionException", 62);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::NotImplementedFunctionException::getClass0()
{
    return class_();
}

