// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/AbortableHSSFListener.java
#include <org/apache/poi/hssf/eventusermodel/AbortableHSSFListener.hpp>

poi::hssf::eventusermodel::AbortableHSSFListener::AbortableHSSFListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::eventusermodel::AbortableHSSFListener::AbortableHSSFListener()
    : AbortableHSSFListener(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::eventusermodel::AbortableHSSFListener::processRecord(::poi::hssf::record::Record* record)
{
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::eventusermodel::AbortableHSSFListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.eventusermodel.AbortableHSSFListener", 56);
    return c;
}

java::lang::Class* poi::hssf::eventusermodel::AbortableHSSFListener::getClass0()
{
    return class_();
}

