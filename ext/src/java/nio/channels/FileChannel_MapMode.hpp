// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::channels::FileChannel_MapMode
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static FileChannel_MapMode* PRIVATE_;
    static FileChannel_MapMode* READ_ONLY_;
    static FileChannel_MapMode* READ_WRITE_;
    ::java::lang::String* name {  };

    /*void ctor(::java::lang::String* name); (private) */

public:
    ::java::lang::String* toString() override;

    // Generated
    FileChannel_MapMode();
protected:
    FileChannel_MapMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static FileChannel_MapMode*& PRIVATE();
    static FileChannel_MapMode*& READ_ONLY();
    static FileChannel_MapMode*& READ_WRITE();

private:
    virtual ::java::lang::Class* getClass0();
};
