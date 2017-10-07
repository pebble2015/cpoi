// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::Insets
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;
    int32_t bottom {  };
    int32_t left {  };
    int32_t right {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-2272572637695466749LL) };

public:
    int32_t top {  };

protected:
    void ctor(int32_t top, int32_t left, int32_t bottom, int32_t right);

public:
    ::java::lang::Object* clone() override;
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    /*static void initIDs(); (private) */
    virtual void set(int32_t top, int32_t left, int32_t bottom, int32_t right);
    ::java::lang::String* toString() override;

    // Generated
    Insets(int32_t top, int32_t left, int32_t bottom, int32_t right);
protected:
    Insets(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
