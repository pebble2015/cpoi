// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/io/Serializable.hpp>

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
    } // io
} // java

struct default_init_tag;

class java::util::BitSet
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static constexpr int32_t ADDRESS_BITS_PER_WORD { int32_t(6) };
    static constexpr int32_t BITS_PER_WORD { int32_t(64) };
    static constexpr int32_t BIT_INDEX_MASK { int32_t(63) };
    static constexpr int64_t WORD_MASK { int64_t(-1LL) };
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;
    static constexpr int64_t serialVersionUID { int64_t(7997698588986878753LL) };
    bool sizeIsSticky {  };
    ::int64_tArray* words {  };
    int32_t wordsInUse {  };

protected:
    void ctor();
    void ctor(int32_t nbits);
    /*void ctor(::int64_tArray* words); (private) */

public:
    virtual void and_(BitSet* set);
    virtual void andNot(BitSet* set);
    virtual int32_t cardinality();
    /*void checkInvariants(); (private) */
    /*static void checkRange(int32_t fromIndex, int32_t toIndex); (private) */
    virtual void clear();
    virtual void clear(int32_t bitIndex);
    virtual void clear(int32_t fromIndex, int32_t toIndex);
    ::java::lang::Object* clone() override;
    /*void ensureCapacity(int32_t wordsRequired); (private) */
    bool equals(::java::lang::Object* obj) override;
    /*void expandTo(int32_t wordIndex); (private) */
    virtual void flip(int32_t bitIndex);
    virtual void flip(int32_t fromIndex, int32_t toIndex);
    virtual bool get(int32_t bitIndex);
    virtual BitSet* get(int32_t fromIndex, int32_t toIndex);
    int32_t hashCode() override;
    /*void initWords(int32_t nbits); (private) */
    virtual bool intersects(BitSet* set);
    virtual bool isEmpty();
    virtual int32_t length();
    virtual int32_t nextClearBit(int32_t fromIndex);
    virtual int32_t nextSetBit(int32_t fromIndex);
    virtual void or_(BitSet* set);
    virtual int32_t previousClearBit(int32_t fromIndex);
    virtual int32_t previousSetBit(int32_t fromIndex);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    /*void recalculateWordsInUse(); (private) */
    virtual void set(int32_t bitIndex);
    virtual void set(int32_t bitIndex, bool value);
    virtual void set(int32_t fromIndex, int32_t toIndex);
    virtual void set(int32_t fromIndex, int32_t toIndex, bool value);
    virtual int32_t size();
    virtual ::java::util::stream::IntStream* stream();
    virtual ::int8_tArray* toByteArray_();
    virtual ::int64_tArray* toLongArray_();
    ::java::lang::String* toString() override;
    /*void trimToSize(); (private) */
    static BitSet* valueOf(::int64_tArray* longs);
    static BitSet* valueOf(::java::nio::LongBuffer* lb);
    static BitSet* valueOf(::int8_tArray* bytes);
    static BitSet* valueOf(::java::nio::ByteBuffer* bb);
    /*static int32_t wordIndex(int32_t bitIndex); (private) */
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */
    virtual void xor_(BitSet* set);

    // Generated
    BitSet();
    BitSet(int32_t nbits);
protected:
    BitSet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    virtual ::java::lang::Class* getClass0();
};
