// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/annotation/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/net/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/reflect/fwd-POI.hpp>
#include <sun/reflect/annotation/fwd-POI.hpp>
#include <sun/reflect/generics/factory/fwd-POI.hpp>
#include <sun/reflect/generics/repository/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::ObjectStreamField, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ObjectStreamFieldArray;
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;

        namespace annotation
        {
typedef ::SubArray< ::java::lang::annotation::Annotation, ::java::lang::ObjectArray > AnnotationArray;
        } // annotation

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, ::java::lang::ObjectArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::AnnotatedType, ::java::lang::ObjectArray, AnnotatedElementArray > AnnotatedTypeArray;
typedef ::SubArray< ::java::lang::reflect::Member, ::java::lang::ObjectArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Constructor, ExecutableArray > ConstructorArray;
typedef ::SubArray< ::java::lang::reflect::Field, AccessibleObjectArray, MemberArray > FieldArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
typedef ::SubArray< ::java::lang::reflect::TypeVariable, ::java::lang::ObjectArray, TypeArray, AnnotatedElementArray > TypeVariableArray;
        } // reflect
    } // lang
} // java

struct default_init_tag;

class java::lang::Class final
    : public virtual Object
    , public ::java::io::Serializable
    , public ::java::lang::reflect::GenericDeclaration
    , public ::java::lang::reflect::Type
    , public virtual ::java::lang::reflect::AnnotatedElement
{

public:
    typedef Object super;

private:
    static constexpr int32_t ANNOTATION { int32_t(8192) };
    static constexpr int32_t ENUM { int32_t(16384) };
    static constexpr int32_t SYNTHETIC { int32_t(4096) };
    static ::java::security::ProtectionDomain* allPermDomain_;
    std::atomic< Class_AnnotationData* > annotationData_ {  };
    std::atomic< ::sun::reflect::annotation::AnnotationType* > annotationType {  };
    std::atomic< ::java::lang::reflect::Constructor* > cachedConstructor {  };
    ClassLoader* classLoader {  };
    std::atomic< int32_t > classRedefinedCount {  };

public: /* package */
    ClassValue_ClassValueMap* classValueMap {  };

private:
    std::atomic< ::java::util::Map* > enumConstantDirectory_ {  };
    std::atomic< ObjectArray* > enumConstants {  };
    std::atomic< ::sun::reflect::generics::repository::ClassRepository* > genericInfo {  };
    static bool initted_;
    String* name {  };
    std::atomic< Class* > newInstanceCallerCache {  };
    std::atomic< ::java::lang::ref::SoftReference* > reflectionData_ {  };
    static ::sun::reflect::ReflectionFactory* reflectionFactory_;
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;
    static constexpr int64_t serialVersionUID { int64_t(3206093459760846163LL) };
    static bool useCaches_;

    /*void ctor(ClassLoader* loader); (private) */
    /*static void addAll(::java::util::Collection* c, ::java::lang::reflect::FieldArray* o); (private) */
    /*Class_AnnotationData* annotationData(); (private) */
    /*static String* argumentTypesToString(ClassArray* argTypes); (private) */
    /*static bool arrayContentsEq(ObjectArray* a1, ObjectArray* a2); (private) */

public:
    Class* asSubclass(Class* clazz);
    /*String* cannotCastMsg(Object* obj); (private) */

public: /* package */
    bool casAnnotationType(::sun::reflect::annotation::AnnotationType* oldType, ::sun::reflect::annotation::AnnotationType* newType);

public:
    Object* cast(Object* obj);
    /*static void checkInitted(); (private) */
    /*void checkMemberAccess(int32_t which, Class* caller, bool checkProxyInterfaces); (private) */
    /*void checkPackageAccess(ClassLoader* ccl, bool checkProxyInterfaces); (private) */
    /*static ::java::lang::reflect::ConstructorArray* copyConstructors(::java::lang::reflect::ConstructorArray* arg); (private) */
    /*static ::java::lang::reflect::FieldArray* copyFields(::java::lang::reflect::FieldArray* arg); (private) */
    /*static ::java::lang::reflect::MethodArray* copyMethods(::java::lang::reflect::MethodArray* arg); (private) */
    /*Class_AnnotationData* createAnnotationData(int32_t classRedefinedCount); (private) */
    bool desiredAssertionStatus();
    /*static bool desiredAssertionStatus0(Class* clazz); (private) */

public: /* package */
    ::java::util::Map* enumConstantDirectory();

public:
    static Class* forName(String* className);
    static Class* forName(String* name, bool initialize, ClassLoader* loader);
    /*static Class* forName0(String* name, bool initialize, ClassLoader* loader, Class* caller); (private) */
    ::java::lang::reflect::AnnotatedTypeArray* getAnnotatedInterfaces();
    ::java::lang::reflect::AnnotatedType* getAnnotatedSuperclass();
    ::java::lang::annotation::Annotation* getAnnotation(Class* annotationClass) override;

public: /* package */
    ::sun::reflect::annotation::AnnotationType* getAnnotationType();

public:
    ::java::lang::annotation::AnnotationArray* getAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getAnnotationsByType(Class* annotationClass) override;
    String* getCanonicalName();
    ClassLoader* getClassLoader();

public: /* package */
    ClassLoader* getClassLoader0();

public:
    ClassArray* getClasses();
    Class* getComponentType();

public: /* package */
    ::sun::reflect::ConstantPool* getConstantPool();

public:
    ::java::lang::reflect::Constructor* getConstructor(ClassArray* parameterTypes);
    /*::java::lang::reflect::Constructor* getConstructor0(ClassArray* parameterTypes, int32_t which); (private) */
    ::java::lang::reflect::ConstructorArray* getConstructors();
    ::java::lang::annotation::Annotation* getDeclaredAnnotation(Class* annotationClass) override;

public: /* package */
    ::java::util::Map* getDeclaredAnnotationMap();

public:
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotations() override;
    ::java::lang::annotation::AnnotationArray* getDeclaredAnnotationsByType(Class* annotationClass) override;
    ClassArray* getDeclaredClasses();
    /*ClassArray* getDeclaredClasses0(); (private) */
    ::java::lang::reflect::Constructor* getDeclaredConstructor(ClassArray* parameterTypes);
    ::java::lang::reflect::ConstructorArray* getDeclaredConstructors();
    /*::java::lang::reflect::ConstructorArray* getDeclaredConstructors0(bool publicOnly); (private) */
    ::java::lang::reflect::Field* getDeclaredField(String* name);
    ::java::lang::reflect::FieldArray* getDeclaredFields();
    /*::java::lang::reflect::FieldArray* getDeclaredFields0(bool publicOnly); (private) */
    ::java::lang::reflect::Method* getDeclaredMethod(String* name, ClassArray* parameterTypes);
    ::java::lang::reflect::MethodArray* getDeclaredMethods();
    /*::java::lang::reflect::MethodArray* getDeclaredMethods0(bool publicOnly); (private) */
    Class* getDeclaringClass();
    /*Class* getDeclaringClass0(); (private) */
    Class* getEnclosingClass();
    ::java::lang::reflect::Constructor* getEnclosingConstructor();
    ::java::lang::reflect::Method* getEnclosingMethod();
    /*ObjectArray* getEnclosingMethod0(); (private) */
    /*Class_EnclosingMethodInfo* getEnclosingMethodInfo(); (private) */
    ObjectArray* getEnumConstants();

public: /* package */
    ObjectArray* getEnumConstantsShared();
    static ::int8_tArray* getExecutableTypeAnnotationBytes(::java::lang::reflect::Executable* ex);
    /*::sun::reflect::generics::factory::GenericsFactory* getFactory(); (private) */

public:
    ::java::lang::reflect::Field* getField(String* name);
    /*::java::lang::reflect::Field* getField0(String* name); (private) */
    ::java::lang::reflect::FieldArray* getFields();
    /*::sun::reflect::generics::repository::ClassRepository* getGenericInfo(); (private) */
    ::java::lang::reflect::TypeArray* getGenericInterfaces();
    /*String* getGenericSignature0(); (private) */
    ::java::lang::reflect::Type* getGenericSuperclass();
    ClassArray* getInterfaces();
    /*ClassArray* getInterfaces0(); (private) */
    ::java::lang::reflect::Method* getMethod(String* name, ClassArray* parameterTypes);
    /*::java::lang::reflect::Method* getMethod0(String* name, ClassArray* parameterTypes, bool includeStaticMethods); (private) */
    ::java::lang::reflect::MethodArray* getMethods();
    int32_t getModifiers();
    String* getName();
    /*String* getName0(); (private) */
    Package* getPackage();

public: /* package */
    static Class* getPrimitiveClass(String* name);

public:
    ::java::security::ProtectionDomain* getProtectionDomain();
    /*::java::security::ProtectionDomain* getProtectionDomain0(); (private) */

public: /* package */
    ::int8_tArray* getRawAnnotations();
    ::int8_tArray* getRawTypeAnnotations();
    /*static ::sun::reflect::ReflectionFactory* getReflectionFactory(); (private) */

public:
    ::java::net::URL* getResource(String* name);
    ::java::io::InputStream* getResourceAsStream(String* name);
    ObjectArray* getSigners();
    /*String* getSimpleBinaryName(); (private) */
    String* getSimpleName();
    Class* getSuperclass();
    String* getTypeName() override;
    ::java::lang::reflect::TypeVariableArray* getTypeParameters() override;
    bool isAnnotation();
    bool isAnnotationPresent(Class* annotationClass) override;
    bool isAnonymousClass();
    bool isArray_();
    /*static bool isAsciiDigit(char16_t c); (private) */
    bool isAssignableFrom(Class* cls);
    bool isEnum();
    bool isInstance(Object* obj);
    bool isInterface();
    bool isLocalClass();
    /*bool isLocalOrAnonymousClass(); (private) */
    bool isMemberClass();
    bool isPrimitive();
    bool isSynthetic();
    Object* newInstance();
    /*Class_ReflectionData* newReflectionData(::java::lang::ref::SoftReference* oldReflectionData, int32_t classRedefinedCount); (private) */
    /*::java::lang::reflect::ConstructorArray* privateGetDeclaredConstructors(bool publicOnly); (private) */
    /*::java::lang::reflect::FieldArray* privateGetDeclaredFields(bool publicOnly); (private) */
    /*::java::lang::reflect::MethodArray* privateGetDeclaredMethods(bool publicOnly); (private) */
    /*::java::lang::reflect::Method* privateGetMethodRecursive(String* name, ClassArray* parameterTypes, bool includeStaticMethods, Class_MethodArray* allInterfaceCandidates); (private) */
    /*::java::lang::reflect::FieldArray* privateGetPublicFields(::java::util::Set* traversedInterfaces); (private) */
    /*::java::lang::reflect::MethodArray* privateGetPublicMethods(); (private) */
    /*Class_ReflectionData* reflectionData(); (private) */
    /*static void registerNatives(); (private) */
    /*String* resolveName(String* name); (private) */
    /*static ::java::lang::reflect::Field* searchFields(::java::lang::reflect::FieldArray* fields, String* name); (private) */
    /*static ::java::lang::reflect::Method* searchMethods(::java::lang::reflect::MethodArray* methods, String* name, ClassArray* parameterTypes); (private) */

public: /* package */
    void setSigners(ObjectArray* signers);
    /*static Class* toClass(::java::lang::reflect::Type* o); (private) */

public:
    String* toGenericString();
    String* toString() override;

    // Generated
    Class();
protected:
    Class(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::security::ProtectionDomain*& allPermDomain();
    static bool& initted();
    static ::sun::reflect::ReflectionFactory*& reflectionFactory();
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    static bool& useCaches();
    virtual ::java::lang::Class* getClass0();
};
