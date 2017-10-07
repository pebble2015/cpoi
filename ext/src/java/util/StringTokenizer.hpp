// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>

struct default_init_tag;

class java::util::StringTokenizer
    : public virtual ::java::lang::Object
    , public virtual Enumeration
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t currentPosition {  };
    ::int32_tArray* delimiterCodePoints {  };
    ::java::lang::String* delimiters {  };
    bool delimsChanged {  };
    bool hasSurrogates {  };
    int32_t maxDelimCodePoint {  };
    int32_t maxPosition {  };
    int32_t newPosition {  };
    bool retDelims {  };
    ::java::lang::String* str {  };

protected:
    void ctor(::java::lang::String* str);
    void ctor(::java::lang::String* str, ::java::lang::String* delim);
    void ctor(::java::lang::String* str, ::java::lang::String* delim, bool returnDelims);

public:
    virtual int32_t countTokens();
    bool hasMoreElements() override;
    virtual bool hasMoreTokens();
    /*bool isDelimiter(int32_t codePoint); (private) */
    ::java::lang::Object* nextElement() override;
    virtual ::java::lang::String* nextToken();
    virtual ::java::lang::String* nextToken(::java::lang::String* delim);
    /*int32_t scanToken(int32_t startPos); (private) */
    /*void setMaxDelimCodePoint(); (private) */
    /*int32_t skipDelimiters(int32_t startPos); (private) */

    // Generated
    StringTokenizer(::java::lang::String* str);
    StringTokenizer(::java::lang::String* str, ::java::lang::String* delim);
    StringTokenizer(::java::lang::String* str, ::java::lang::String* delim, bool returnDelims);
protected:
    StringTokenizer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
