// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::Formatter_FormatString, ::java::lang::ObjectArray > Formatter_FormatStringArray;
    } // util
} // java

struct default_init_tag;

class java::util::Formatter final
    : public virtual ::java::lang::Object
    , public ::java::io::Closeable
    , public ::java::io::Flushable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MAX_FD_CHARS { int32_t(30) };
    ::java::lang::Appendable* a {  };
    static ::java::lang::String* formatSpecifier_;
    static ::java::util::regex::Pattern* fsPattern_;
    Locale* l {  };
    ::java::io::IOException* lastException {  };
    static double scaleUp_;
    char16_t zero {  };

protected:
    void ctor();
    void ctor(::java::lang::Appendable* a);
    void ctor(Locale* l);
    void ctor(::java::lang::String* fileName);
    void ctor(::java::io::File* file);
    void ctor(::java::io::PrintStream* ps);
    void ctor(::java::io::OutputStream* os);
    /*void ctor(Locale* l, ::java::lang::Appendable* a); (private) */
    void ctor(::java::lang::Appendable* a, Locale* l);
    void ctor(::java::lang::String* fileName, ::java::lang::String* csn);
    void ctor(::java::io::File* file, ::java::lang::String* csn);
    void ctor(::java::io::OutputStream* os, ::java::lang::String* csn);
    /*void ctor(::java::nio::charset::Charset* charset, Locale* l, ::java::io::File* file); (private) */
    void ctor(::java::lang::String* fileName, ::java::lang::String* csn, Locale* l);
    void ctor(::java::io::File* file, ::java::lang::String* csn, Locale* l);
    void ctor(::java::io::OutputStream* os, ::java::lang::String* csn, Locale* l);
    /*static void checkText(::java::lang::String* s, int32_t start, int32_t end); (private) */

public:
    void close() override;
    /*void ensureOpen(); (private) */
    void flush() override;
    Formatter* format(::java::lang::String* format, ::java::lang::ObjectArray* args);
    Formatter* format(Locale* l, ::java::lang::String* format, ::java::lang::ObjectArray* args);
    /*static char16_t getZero(Locale* l); (private) */
    ::java::io::IOException* ioException();
    Locale* locale();
    /*static ::java::lang::Appendable* nonNullAppendable(::java::lang::Appendable* a); (private) */
    ::java::lang::Appendable* out();
    /*Formatter_FormatStringArray* parse(::java::lang::String* s); (private) */
    /*static ::java::nio::charset::Charset* toCharset(::java::lang::String* csn); (private) */
    ::java::lang::String* toString() override;

    // Generated
    Formatter();
    Formatter(::java::lang::Appendable* a);
    Formatter(Locale* l);
    Formatter(::java::lang::String* fileName);
    Formatter(::java::io::File* file);
    Formatter(::java::io::PrintStream* ps);
    Formatter(::java::io::OutputStream* os);
    Formatter(::java::lang::Appendable* a, Locale* l);
    Formatter(::java::lang::String* fileName, ::java::lang::String* csn);
    Formatter(::java::io::File* file, ::java::lang::String* csn);
    Formatter(::java::io::OutputStream* os, ::java::lang::String* csn);
    Formatter(::java::lang::String* fileName, ::java::lang::String* csn, Locale* l);
    Formatter(::java::io::File* file, ::java::lang::String* csn, Locale* l);
    Formatter(::java::io::OutputStream* os, ::java::lang::String* csn, Locale* l);
protected:
    Formatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::lang::String*& formatSpecifier();
    static ::java::util::regex::Pattern*& fsPattern();
    static double& scaleUp();
    virtual ::java::lang::Class* getClass0();
};
