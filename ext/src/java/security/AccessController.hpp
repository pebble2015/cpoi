// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace security
    {
typedef ::SubArray< ::java::security::Guard, ::java::lang::ObjectArray > GuardArray;
typedef ::SubArray< ::java::security::Permission, ::java::lang::ObjectArray, GuardArray, ::java::io::SerializableArray > PermissionArray;
    } // security
} // java

struct default_init_tag;

class java::security::AccessController final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

    /*void ctor(); (private) */
    static void checkPermission(Permission* perm);
    /*static AccessControlContext* createWrapper(DomainCombiner* combiner, ::java::lang::Class* caller, AccessControlContext* parent, AccessControlContext* context, PermissionArray* perms); (private) */
    static ::java::lang::Object* doPrivileged(PrivilegedAction* action);
    static ::java::lang::Object* doPrivileged(PrivilegedExceptionAction* action);
    static ::java::lang::Object* doPrivileged(PrivilegedAction* action, AccessControlContext* context);
    static ::java::lang::Object* doPrivileged(PrivilegedExceptionAction* action, AccessControlContext* context);
    static ::java::lang::Object* doPrivileged(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms);
    static ::java::lang::Object* doPrivileged(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms);
    static ::java::lang::Object* doPrivilegedWithCombiner(PrivilegedAction* action);
    static ::java::lang::Object* doPrivilegedWithCombiner(PrivilegedExceptionAction* action);
    static ::java::lang::Object* doPrivilegedWithCombiner(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms);
    static ::java::lang::Object* doPrivilegedWithCombiner(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms);
    /*static ProtectionDomain* getCallerPD(::java::lang::Class* caller); (private) */
    static AccessControlContext* getContext();

public: /* package */
    static AccessControlContext* getInheritedAccessControlContext();
    /*static AccessControlContext* getStackAccessControlContext(); (private) */
    /*static AccessControlContext* preserveCombiner(DomainCombiner* combiner, ::java::lang::Class* caller); (private) */

    // Generated

public:
    AccessController();
protected:
    AccessController(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
