// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/annotation/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation
    } // lang
} // java

struct java::lang::reflect::AnnotatedElement
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::annotation::Annotation* getAnnotation(::java::lang::Class* annotationClass) = 0;
    virtual ::java::lang::annotation::AnnotationArray* getAnnotations() = 0;
    virtual ::java::lang::annotation::AnnotationArray* getAnnotationsByType(::java::lang::Class* annotationClass);
    virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation(::java::lang::Class* annotationClass);
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() = 0;
    virtual ::java::lang::annotation::AnnotationArray* getDeclaredAnnotationsByType(::java::lang::Class* annotationClass);
    virtual bool isAnnotationPresent(::java::lang::Class* annotationClass);

    // Generated
    static ::java::lang::Class *class_();
};
