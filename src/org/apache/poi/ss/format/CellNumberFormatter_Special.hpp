// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellNumberFormatter_Special
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    char16_t ch {  };
    int32_t pos {  };
protected:
    void ctor(char16_t ch, int32_t pos);

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* package */
    CellNumberFormatter_Special(char16_t ch, int32_t pos);
protected:
    CellNumberFormatter_Special(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellNumberFormatter;
    friend class CellNumberFormatter_GeneralNumberFormatter;
};
