// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/stream/fwd-POI.hpp>
#include <java/nio/Buffer.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Readable.hpp>
#include <Array.hpp>

struct default_init_tag;

class java::nio::CharBuffer
    : public Buffer
    , public virtual ::java::lang::Comparable
    , public virtual ::java::lang::Appendable
    , public virtual ::java::lang::CharSequence
    , public virtual ::java::lang::Readable
{

public:
    typedef Buffer super;

public: /* package */
    ::char16_tArray* hb {  };
    bool isReadOnly_ {  };
    int32_t offset {  };

protected:
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::char16_tArray* hb, int32_t offset);

public:
    static CharBuffer* allocate(int32_t capacity);
    CharBuffer* append(::java::lang::CharSequence* csq) override;
    CharBuffer* append(char16_t c) override;
    CharBuffer* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
    ::char16_tArray* array() override;
    int32_t arrayOffset() override;
    virtual CharBuffer* asReadOnlyBuffer() = 0;
    char16_t charAt(int32_t index) override;
    ::java::util::stream::IntStream* chars() override;
    virtual CharBuffer* compact() = 0;
    /*static int32_t compare(char16_t x, char16_t y); (private) */
    virtual int32_t compareTo(CharBuffer* that);
    virtual CharBuffer* duplicate() = 0;
    bool equals(::java::lang::Object* ob) override;
    /*static bool equals(char16_t x, char16_t y); (private) */
    virtual char16_t get() = 0;
    virtual char16_t get(int32_t index) = 0;
    virtual CharBuffer* get(::char16_tArray* dst);
    virtual CharBuffer* get(::char16_tArray* dst, int32_t offset, int32_t length);

public: /* package */
    virtual char16_t getUnchecked(int32_t index) = 0;

public:
    bool hasArray_() override;
    int32_t hashCode() override;
    bool isDirect() = 0;
    int32_t length() override;
    virtual ByteOrder* order() = 0;
    virtual CharBuffer* put(char16_t c) = 0;
    virtual CharBuffer* put(CharBuffer* src);
    CharBuffer* put(::char16_tArray* src);
    CharBuffer* put(::java::lang::String* src);
    virtual CharBuffer* put(int32_t index, char16_t c) = 0;
    virtual CharBuffer* put(::char16_tArray* src, int32_t offset, int32_t length);
    virtual CharBuffer* put(::java::lang::String* src, int32_t start, int32_t end);
    int32_t read(CharBuffer* target) override;
    virtual CharBuffer* slice() = 0;
    CharBuffer* subSequence(int32_t start, int32_t end) = 0;
    ::java::lang::String* toString() override;

public: /* package */
    virtual ::java::lang::String* toString(int32_t start, int32_t end) = 0;

public:
    static CharBuffer* wrap(::char16_tArray* array);
    static CharBuffer* wrap(::java::lang::CharSequence* csq);
    static CharBuffer* wrap(::char16_tArray* array, int32_t offset, int32_t length);
    static CharBuffer* wrap(::java::lang::CharSequence* csq, int32_t start, int32_t end);

    // Generated

public: /* package */
    CharBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    CharBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::char16_tArray* hb, int32_t offset);
protected:
    CharBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
