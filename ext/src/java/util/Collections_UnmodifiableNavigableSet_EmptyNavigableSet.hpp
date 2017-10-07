// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/Collections_UnmodifiableNavigableSet.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableNavigableSet_EmptyNavigableSet
    : public Collections_UnmodifiableNavigableSet
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_UnmodifiableNavigableSet super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-6291252904449939134LL) };

protected:
    void ctor();
    /*::java::lang::Object* readResolve(); (private) */

    // Generated

public:
    Collections_UnmodifiableNavigableSet_EmptyNavigableSet();
protected:
    Collections_UnmodifiableNavigableSet_EmptyNavigableSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
