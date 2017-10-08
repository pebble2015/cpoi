// Generated from /POI/java/org/apache/poi/util/IntList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::IntList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int32_tArray* _array {  };
    int32_t _limit {  };
    int32_t fillval {  };
    static constexpr int32_t _default_size { int32_t(128) };
protected:
    void ctor();
    void ctor(int32_t initialCapacity);
    void ctor(IntList* list);
    void ctor(int32_t initialCapacity, int32_t fillvalue);

private:
    void fillArray_(int32_t val, ::int32_tArray* array, int32_t index);

public:
    virtual void add(int32_t index, int32_t value);
    virtual bool add(int32_t value);
    virtual bool addAll(IntList* c);
    virtual bool addAll(int32_t index, IntList* c);
    virtual void clear();
    virtual bool contains(int32_t o);
    virtual bool containsAll(IntList* c);
    bool equals(::java::lang::Object* o) override;
    virtual int32_t get(int32_t index);
    int32_t hashCode() override;
    virtual int32_t indexOf(int32_t o);
    virtual bool isEmpty();
    virtual int32_t lastIndexOf(int32_t o);
    virtual int32_t remove(int32_t index);
    virtual bool removeValue(int32_t o);
    virtual bool removeAll(IntList* c);
    virtual bool retainAll(IntList* c);
    virtual int32_t set(int32_t index, int32_t element);
    virtual int32_t size();
    virtual ::int32_tArray* toArray_();
    virtual ::int32_tArray* toArray_(::int32_tArray* a);

private:
    void growArray_(int32_t new_size);

    // Generated

public:
    IntList();
    IntList(int32_t initialCapacity);
    IntList(IntList* list);
    IntList(int32_t initialCapacity, int32_t fillvalue);
protected:
    IntList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
