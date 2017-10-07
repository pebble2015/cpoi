// Generated from /POI/java/org/apache/poi/util/CloseIgnoringInputStream.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class org::apache::poi::util::CloseIgnoringInputStream
    : public ::java::io::FilterInputStream
{

public:
    typedef ::java::io::FilterInputStream super;
protected:
    void ctor(::java::io::InputStream* in);

public:
    void close() override;

    // Generated
    CloseIgnoringInputStream(::java::io::InputStream* in);
protected:
    CloseIgnoringInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
