// Generated from /POI/java/org/apache/poi/ss/format/CellTextFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/format/CellFormatPart_PartHandler.hpp>

struct default_init_tag;

class poi::ss::format::CellTextFormatter_CellTextFormatter_1
    : public virtual ::java::lang::Object
    , public virtual CellFormatPart_PartHandler
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc) override;

    // Generated
    CellTextFormatter_CellTextFormatter_1(CellTextFormatter *CellTextFormatter_this, ::int32_tArray* numPlaces);
    static ::java::lang::Class *class_();
    CellTextFormatter *CellTextFormatter_this;
    ::int32_tArray* numPlaces;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellTextFormatter;
};
