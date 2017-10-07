// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::swing::JComponent_IntVector final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::int32_tArray* array {  };
    int32_t capacity {  };
    int32_t count {  };

protected:
    void ctor();

public: /* package */
    void addElement(int32_t value);
    int32_t elementAt(int32_t index);
    void setElementAt(int32_t value, int32_t index);
    int32_t size();

    // Generated
    JComponent_IntVector();
protected:
    JComponent_IntVector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
