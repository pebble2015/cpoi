// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/format/CellFormatPart_PartHandler.hpp>

struct default_init_tag;

class poi::ss::format::CellElapsedFormatter_ElapsedPartHandler
    : public virtual ::java::lang::Object
    , public virtual CellFormatPart_PartHandler
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc) override;

    // Generated
    CellElapsedFormatter_ElapsedPartHandler(CellElapsedFormatter *CellElapsedFormatter_this);
protected:
    CellElapsedFormatter_ElapsedPartHandler(CellElapsedFormatter *CellElapsedFormatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    CellElapsedFormatter *CellElapsedFormatter_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellElapsedFormatter;
    friend class CellElapsedFormatter_TimeSpec;
};
