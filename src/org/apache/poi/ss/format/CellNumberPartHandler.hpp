// Generated from /POI/java/org/apache/poi/ss/format/CellNumberPartHandler.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/format/CellFormatPart_PartHandler.hpp>

struct default_init_tag;

class org::apache::poi::ss::format::CellNumberPartHandler
    : public virtual ::java::lang::Object
    , public virtual CellFormatPart_PartHandler
{

public:
    typedef ::java::lang::Object super;

private:
    char16_t insertSignForExponent {  };
    double scale {  };
    CellNumberFormatter_Special* decimalPoint {  };
    CellNumberFormatter_Special* slash {  };
    CellNumberFormatter_Special* exponent {  };
    CellNumberFormatter_Special* numerator {  };
    ::java::util::List* specials {  };
    bool improperFraction {  };

public:
    ::java::lang::String* handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* descBuf) override;
    virtual double getScale();
    virtual CellNumberFormatter_Special* getDecimalPoint();
    virtual CellNumberFormatter_Special* getSlash();
    virtual CellNumberFormatter_Special* getExponent();
    virtual CellNumberFormatter_Special* getNumerator();
    virtual ::java::util::List* getSpecials();
    virtual bool isImproperFraction();

private:
    CellNumberFormatter_Special* previousNumber();
    static bool isDigitFmt(CellNumberFormatter_Special* s);
    static CellNumberFormatter_Special* firstDigit(::java::util::List* specials);

    // Generated

public:
    CellNumberPartHandler();
protected:
    void ctor();
    CellNumberPartHandler(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
