// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellFormatType_1 final
    : public CellFormatType
{

public:
    typedef CellFormatType super;

public: /* package */
    bool isSpecial(char16_t ch) override;
    CellFormatter* formatter(::java::lang::String* pattern) override;
    CellFormatter* formatter(::java::util::Locale* locale, ::java::lang::String* pattern) override;

    // Generated

public:
    CellFormatType_1(::java::lang::String* name, int ordinal);
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellFormatType;
    friend class CellFormatType_2;
    friend class CellFormatType_3;
    friend class CellFormatType_4;
    friend class CellFormatType_5;
};
