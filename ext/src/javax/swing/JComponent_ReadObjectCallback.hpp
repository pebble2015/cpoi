// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/ObjectInputValidation.hpp>

struct default_init_tag;

class javax::swing::JComponent_ReadObjectCallback
    : public virtual ::java::lang::Object
    , public virtual ::java::io::ObjectInputValidation
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::io::ObjectInputStream* inputStream {  };
    ::java::util::Vector* roots {  };

public: /* package */
    JComponent* this$0 {  };

protected:
    void ctor(::java::io::ObjectInputStream* s);
    /*void registerComponent(JComponent* c); (private) */

public:
    void validateObject() override;

    // Generated

public: /* package */
    JComponent_ReadObjectCallback(JComponent *JComponent_this, ::java::io::ObjectInputStream* s);
protected:
    JComponent_ReadObjectCallback(JComponent *JComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    JComponent *JComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
