// Generated from /POI/java/org/apache/poi/util/LittleEndian.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/IOException.hpp>

struct default_init_tag;

class org::apache::poi::util::LittleEndian_BufferUnderrunException final
    : public ::java::io::IOException
{

public:
    typedef ::java::io::IOException super;

private:
    static constexpr int64_t serialVersionUID { int64_t(8736973884877006145LL) };
protected:
    void ctor();

    // Generated

public: /* package */
    LittleEndian_BufferUnderrunException();
protected:
    LittleEndian_BufferUnderrunException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LittleEndian;
};
