// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/geom/PathIterator.hpp>

struct default_init_tag;

class java::awt::geom::Path2D_Iterator
    : public virtual ::java::lang::Object
    , public virtual PathIterator
{

public:
    typedef ::java::lang::Object super;

private:
    static ::int32_tArray* curvecoords_;

public: /* package */
    Path2D* path {  };
    int32_t pointIdx {  };
    int32_t typeIdx {  };

protected:
    void ctor(Path2D* path);

public:
    int32_t getWindingRule() override;
    bool isDone() override;
    void next() override;

    // Generated

public: /* package */
    Path2D_Iterator(Path2D* path);
protected:
    Path2D_Iterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::int32_tArray*& curvecoords();

private:
    virtual ::java::lang::Class* getClass0();
};
