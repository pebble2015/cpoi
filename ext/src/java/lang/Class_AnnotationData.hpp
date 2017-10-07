// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::lang::Class_AnnotationData
    : public virtual Object
{

public:
    typedef Object super;

public: /* package */
    ::java::util::Map* annotations {  };
    ::java::util::Map* declaredAnnotations {  };
    int32_t redefinedCount {  };

protected:
    void ctor(::java::util::Map* annotations, ::java::util::Map* declaredAnnotations, int32_t redefinedCount);

    // Generated

public: /* package */
    Class_AnnotationData(::java::util::Map* annotations, ::java::util::Map* declaredAnnotations, int32_t redefinedCount);
protected:
    Class_AnnotationData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
