// Generated from /POI/java/org/apache/poi/ss/formula/eval/RefListEval.java
#include <org/apache/poi/ss/formula/eval/RefListEval.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

org::apache::poi::ss::formula::eval::RefListEval::RefListEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::RefListEval::RefListEval(ValueEval* v1, ValueEval* v2) 
    : RefListEval(*static_cast< ::default_init_tag* >(0))
{
    ctor(v1,v2);
}

void org::apache::poi::ss::formula::eval::RefListEval::init()
{
    list = new ::java::util::ArrayList();
}

void org::apache::poi::ss::formula::eval::RefListEval::ctor(ValueEval* v1, ValueEval* v2)
{
    super::ctor();
    init();
    add(v1);
    add(v2);
}

void org::apache::poi::ss::formula::eval::RefListEval::add(ValueEval* v)
{
    if(dynamic_cast< RefListEval* >(v) != nullptr) {
        npc(list)->addAll(static_cast< ::java::util::Collection* >(java_cast< ::java::util::List* >(npc((java_cast< RefListEval* >(v)))->list)));
    } else {
        npc(list)->add(static_cast< ::java::lang::Object* >(v));
    }
}

java::util::List* org::apache::poi::ss::formula::eval::RefListEval::getList()
{
    return list;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::RefListEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.RefListEval", 42);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::RefListEval::getClass0()
{
    return class_();
}

