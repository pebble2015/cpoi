// Generated from /POI/java/org/apache/poi/util/ReplacingInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class org::apache::poi::util::ReplacingInputStream
    : public ::java::io::FilterInputStream
{

public:
    typedef ::java::io::FilterInputStream super;

public: /* package */
    ::int32_tArray* buf {  };

private:
    int32_t matchedIndex {  };
    int32_t unbufferIndex {  };
    int32_t replacedIndex {  };
    ::int8_tArray* pattern {  };
    ::int8_tArray* replacement {  };
    ReplacingInputStream_State* state {  };
    static ::java::nio::charset::Charset* UTF8_;
protected:
    void ctor(::java::io::InputStream* in, ::java::lang::String* pattern, ::java::lang::String* replacement);
    void ctor(::java::io::InputStream* in, ::int8_tArray* pattern, ::int8_tArray* replacement);

public:
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b) /* throws(IOException) */ override;
    int32_t read() /* throws(IOException) */ override;
    ::java::lang::String* toString() override;

    // Generated
    ReplacingInputStream(::java::io::InputStream* in, ::java::lang::String* pattern, ::java::lang::String* replacement);
    ReplacingInputStream(::java::io::InputStream* in, ::int8_tArray* pattern, ::int8_tArray* replacement);
protected:
    ReplacingInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::java::nio::charset::Charset*& UTF8();
    virtual ::java::lang::Class* getClass0();
    friend class ReplacingInputStream_State;
};
