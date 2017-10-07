// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/Collections_UnmodifiableNavigableMap.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableNavigableMap_EmptyNavigableMap
    : public Collections_UnmodifiableNavigableMap
    , public virtual ::java::io::Serializable
{

public:
    typedef Collections_UnmodifiableNavigableMap super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-2239321462712562324LL) };

protected:
    void ctor();

public:
    NavigableSet* navigableKeySet() override;
    /*::java::lang::Object* readResolve(); (private) */

    // Generated

public: /* package */
    Collections_UnmodifiableNavigableMap_EmptyNavigableMap();
protected:
    Collections_UnmodifiableNavigableMap_EmptyNavigableMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
