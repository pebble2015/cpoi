// Generated from /POI/java/org/apache/poi/hpsf/Filetime.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hpsf::Filetime
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t EPOCH_DIFF { int64_t(-11644473600000LL) };
    static constexpr int32_t SIZE { int32_t(8) };
    static constexpr int64_t UINT_MASK { int64_t(4294967295LL) };
    static constexpr int64_t NANO_100 { int64_t(10000LL) };
    int32_t _dwHighDateTime {  };
    int32_t _dwLowDateTime {  };
protected:
    void ctor();
    void ctor(int32_t low, int32_t high);
    void ctor(::java::util::Date* date);

public: /* package */
    virtual void read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei);
    virtual int64_t getHigh();
    virtual int64_t getLow();
    virtual ::int8_tArray* toByteArray_();
    virtual int32_t write(::java::io::OutputStream* out) /* throws(IOException) */;
    virtual ::java::util::Date* getJavaValue();

public:
    static ::java::util::Date* filetimeToDate(int64_t filetime);
    static int64_t dateToFileTime(::java::util::Date* date);
    static bool isUndefined(::java::util::Date* date);

    // Generated

public: /* package */
    Filetime();
    Filetime(int32_t low, int32_t high);
    Filetime(::java::util::Date* date);
protected:
    Filetime(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
