// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::nio::Buffer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int32_t SPLITERATOR_CHARACTERISTICS { int32_t(16464) };
    int64_t address {  };

private:
    int32_t capacity_ {  };
    int32_t limit_ {  };
    int32_t mark_ {  };
    int32_t position_ {  };

protected:
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap);

public:
    virtual ::java::lang::Object* array() = 0;
    virtual int32_t arrayOffset() = 0;
    int32_t capacity();

public: /* package */
    static void checkBounds(int32_t off, int32_t len, int32_t size);
    int32_t checkIndex(int32_t i);
    int32_t checkIndex(int32_t i, int32_t nb);

public:
    Buffer* clear();

public: /* package */
    void discardMark();

public:
    Buffer* flip();
    virtual bool hasArray_() = 0;
    bool hasRemaining();
    virtual bool isDirect() = 0;
    virtual bool isReadOnly() = 0;
    int32_t limit();
    Buffer* limit(int32_t newLimit);
    Buffer* mark();

public: /* package */
    int32_t markValue();
    int32_t nextGetIndex();
    int32_t nextGetIndex(int32_t nb);
    int32_t nextPutIndex();
    int32_t nextPutIndex(int32_t nb);

public:
    int32_t position();
    Buffer* position(int32_t newPosition);
    int32_t remaining();
    Buffer* reset();
    Buffer* rewind();

public: /* package */
    void truncate();

    // Generated
    Buffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
protected:
    Buffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
