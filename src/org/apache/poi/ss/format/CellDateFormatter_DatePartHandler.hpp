// Generated from /POI/java/org/apache/poi/ss/format/CellDateFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/format/CellFormatPart_PartHandler.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellDateFormatter_DatePartHandler
    : public virtual ::java::lang::Object
    , public virtual CellFormatPart_PartHandler
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t mStart {  };
    int32_t mLen {  };
    int32_t hStart {  };
    int32_t hLen {  };

public:
    ::java::lang::String* handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc) override;
    virtual void finish(::java::lang::StringBuffer* toAppendTo);

    // Generated
    CellDateFormatter_DatePartHandler(CellDateFormatter *CellDateFormatter_this);
protected:
    void ctor();
    CellDateFormatter_DatePartHandler(CellDateFormatter *CellDateFormatter_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    CellDateFormatter *CellDateFormatter_this;
    virtual ::java::lang::Class* getClass0();
    friend class CellDateFormatter;
};
