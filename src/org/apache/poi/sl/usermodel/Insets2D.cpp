// Generated from /POI/java/org/apache/poi/sl/usermodel/Insets2D.java
#include <org/apache/poi/sl/usermodel/Insets2D.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

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

poi::sl::usermodel::Insets2D::Insets2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::Insets2D::Insets2D(double top, double left, double bottom, double right) 
    : Insets2D(*static_cast< ::default_init_tag* >(0))
{
    ctor(top,left,bottom,right);
}

void poi::sl::usermodel::Insets2D::ctor(double top, double left, double bottom, double right)
{
    super::ctor();
    this->top = top;
    this->left = left;
    this->bottom = bottom;
    this->right = right;
}

void poi::sl::usermodel::Insets2D::set(double top, double left, double bottom, double right)
{
    this->top = top;
    this->left = left;
    this->bottom = bottom;
    this->right = right;
}

bool poi::sl::usermodel::Insets2D::equals(::java::lang::Object* obj)
{
    if(dynamic_cast< Insets2D* >(obj) != nullptr) {
        auto insets = java_cast< Insets2D* >(obj);
        return ((top == npc(insets)->top) && (left == npc(insets)->left) && (bottom == npc(insets)->bottom)&& (right == npc(insets)->right));
    }
    return false;
}

int32_t poi::sl::usermodel::Insets2D::hashCode()
{
    auto sum1 = left + bottom;
    auto sum2 = right + top;
    auto val1 = sum1 * (sum1 + int32_t(1)) / int32_t(2) + left;
    auto val2 = sum2 * (sum2 + int32_t(1)) / int32_t(2) + top;
    auto sum3 = val1 + val2;
    return static_cast< int32_t >((sum3 * (sum3 + int32_t(1)) / int32_t(2) + val2));
}

java::lang::String* poi::sl::usermodel::Insets2D::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u"[top="_j)
        ->append(top)
        ->append(u",left="_j)
        ->append(left)
        ->append(u",bottom="_j)
        ->append(bottom)
        ->append(u",right="_j)
        ->append(right)
        ->append(u"]"_j)->toString();
}

poi::sl::usermodel::Insets2D* poi::sl::usermodel::Insets2D::clone()
{
    return new Insets2D(top, left, bottom, right);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::Insets2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.Insets2D", 36);
    return c;
}

java::lang::Class* poi::sl::usermodel::Insets2D::getClass0()
{
    return class_();
}

