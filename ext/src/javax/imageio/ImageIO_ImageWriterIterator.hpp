// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/imageio/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <javax/imageio/ImageWriter.hpp>

struct default_init_tag;

class javax::imageio::ImageIO_ImageWriterIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;
    ::java::util::Iterator* iter {  };

protected:
    void ctor(::java::util::Iterator* iter);

public:
    bool hasNext() override;
    ImageWriter* next() override;
    void remove() override;

    // Generated
    ImageIO_ImageWriterIterator(::java::util::Iterator* iter);
protected:
    ImageIO_ImageWriterIterator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
