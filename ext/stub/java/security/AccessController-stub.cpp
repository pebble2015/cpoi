// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/AccessController.hpp>

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

extern void unimplemented_(const char16_t* name);
java::security::AccessController::AccessController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::security::AccessController::ctor() */
void java::security::AccessController::checkPermission(Permission* perm)
{ /* stub */
    clinit();
    unimplemented_(u"void java::security::AccessController::checkPermission(Permission* perm)");
}

/* private: java::security::AccessControlContext* java::security::AccessController::createWrapper(DomainCombiner* combiner, ::java::lang::Class* caller, AccessControlContext* parent, AccessControlContext* context, PermissionArray* perms) */
java::lang::Object* java::security::AccessController::doPrivileged(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivileged(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms)");
    return 0;
}

java::lang::Object* java::security::AccessController::doPrivileged(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivileged(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms)");
    return 0;
}

java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedAction* action)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedAction* action)");
    return 0;
}

java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedExceptionAction* action)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedExceptionAction* action)");
    return 0;
}

java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedAction* action, AccessControlContext* context, PermissionArray* perms)");
    return 0;
}

java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Object* java::security::AccessController::doPrivilegedWithCombiner(PrivilegedExceptionAction* action, AccessControlContext* context, PermissionArray* perms)");
    return 0;
}

/* private: java::security::ProtectionDomain* java::security::AccessController::getCallerPD(::java::lang::Class* caller) */
java::security::AccessControlContext* java::security::AccessController::getContext()
{ /* stub */
    clinit();
    unimplemented_(u"java::security::AccessControlContext* java::security::AccessController::getContext()");
    return 0;
}

/* private: java::security::AccessControlContext* java::security::AccessController::preserveCombiner(DomainCombiner* combiner, ::java::lang::Class* caller) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::AccessController::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.AccessController", 30);
    return c;
}

java::lang::Class* java::security::AccessController::getClass0()
{
    return class_();
}

