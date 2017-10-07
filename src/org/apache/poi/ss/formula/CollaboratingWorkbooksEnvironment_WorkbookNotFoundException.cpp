// Generated from /POI/java/org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.java
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment_WorkbookNotFoundException.hpp>

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(::java::lang::String* msg) 
    : CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

constexpr int64_t org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::serialVersionUID;

void org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.CollaboratingWorkbooksEnvironment.WorkbookNotFoundException", 85);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException::getClass0()
{
    return class_();
}

