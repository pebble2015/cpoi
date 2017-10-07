// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellElapsedFormatter_TimeSpec
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    char16_t type {  };
    int32_t pos {  };
    int32_t len {  };
    double factor {  };
    double modBy {  };
protected:
    void ctor(char16_t type, int32_t pos, int32_t len, double factor);

public:
    virtual int64_t valueFor(double elapsed);

    // Generated
    CellElapsedFormatter_TimeSpec(char16_t type, int32_t pos, int32_t len, double factor);
protected:
    CellElapsedFormatter_TimeSpec(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellElapsedFormatter;
    friend class CellElapsedFormatter_ElapsedPartHandler;
};
