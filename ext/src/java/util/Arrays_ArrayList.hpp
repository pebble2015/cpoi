// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Arrays_ArrayList
    : public AbstractList
    , public virtual RandomAccess
    , public virtual ::java::io::Serializable
{

public:
    typedef AbstractList super;

private:
    ::java::lang::ObjectArray* a {  };
    static constexpr int64_t serialVersionUID { int64_t(-2764017481108945198LL) };

protected:
    void ctor(::java::lang::ObjectArray* array);

public:
    bool contains(::java::lang::Object* o) override;
    void forEach(::java::util::function::Consumer* action) override;
    ::java::lang::Object* get(int32_t index) override;
    int32_t indexOf(::java::lang::Object* o) override;
    void replaceAll(::java::util::function::UnaryOperator* operator_) override;
    ::java::lang::Object* set(int32_t index, ::java::lang::Object* element) override;
    int32_t size() override;
    void sort(Comparator* c) override;
    Spliterator* spliterator() override;
    ::java::lang::ObjectArray* toArray_() override;
    ::java::lang::ObjectArray* toArray_(::java::lang::ObjectArray* a) override;

    // Generated

public: /* package */
    Arrays_ArrayList(::java::lang::ObjectArray* array);
protected:
    Arrays_ArrayList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
