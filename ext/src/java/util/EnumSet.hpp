// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

struct default_init_tag;

class java::util::EnumSet
    : public AbstractSet
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractSet super;

private:
    static ::java::lang::EnumArray* ZERO_LENGTH_ENUM_ARRAY_;

public: /* package */
    ::java::lang::Class* elementType {  };
    ::java::lang::EnumArray* universe {  };

protected:
    void ctor(::java::lang::Class* elementType, ::java::lang::EnumArray* universe);

public: /* package */
    virtual void addAll() = 0;
    virtual void addRange(::java::lang::Enum* from, ::java::lang::Enum* to) = 0;

public:
    static EnumSet* allOf(::java::lang::Class* elementType);
    EnumSet* clone() override;

public: /* package */
    virtual void complement() = 0;

public:
    static EnumSet* complementOf(EnumSet* s);
    static EnumSet* copyOf(EnumSet* s);
    static EnumSet* copyOf(Collection* c);
    /*static ::java::lang::EnumArray* getUniverse(::java::lang::Class* elementType); (private) */
    static EnumSet* noneOf(::java::lang::Class* elementType);
    static EnumSet* of(::java::lang::Enum* e);
    static EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2);
    static EnumSet* of(::java::lang::Enum* first, ::java::lang::EnumArray* rest);
    static EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3);
    static EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4);
    static EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4, ::java::lang::Enum* e5);
    static EnumSet* range(::java::lang::Enum* from, ::java::lang::Enum* to);
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */

public: /* package */
    void typeCheck(::java::lang::Enum* e);
    virtual ::java::lang::Object* writeReplace();

    // Generated
    EnumSet(::java::lang::Class* elementType, ::java::lang::EnumArray* universe);
protected:
    EnumSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    bool addAll(Collection* c);

private:
    static ::java::lang::EnumArray*& ZERO_LENGTH_ENUM_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
