// Generated from /POI/java/org/apache/poi/ss/usermodel/DataFormatter.java
#include <org/apache/poi/ss/usermodel/DataFormatter_LocaleChangeObservable.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::DataFormatter_LocaleChangeObservable::DataFormatter_LocaleChangeObservable(DataFormatter *DataFormatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataFormatter_this(DataFormatter_this)
{
    clinit();
}

poi::ss::usermodel::DataFormatter_LocaleChangeObservable::DataFormatter_LocaleChangeObservable(DataFormatter *DataFormatter_this)
    : DataFormatter_LocaleChangeObservable(DataFormatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::DataFormatter_LocaleChangeObservable::checkForLocaleChange()
{
    checkForLocaleChange(::poi::util::LocaleUtil::getUserLocale());
}

void poi::ss::usermodel::DataFormatter_LocaleChangeObservable::checkForLocaleChange(::java::util::Locale* newLocale)
{
    if(!DataFormatter_this->localeIsAdapting)
        return;

    if(npc(newLocale)->equals(static_cast< ::java::lang::Object* >(DataFormatter_this->locale)))
        return;

    super::setChanged();
    notifyObservers(newLocale);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataFormatter_LocaleChangeObservable::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataFormatter.LocaleChangeObservable", 64);
    return c;
}

java::lang::Class* poi::ss::usermodel::DataFormatter_LocaleChangeObservable::getClass0()
{
    return class_();
}

