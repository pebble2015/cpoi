// Generated from /POI/java/org/apache/poi/ss/format/CellFormat.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormat.hpp>

struct default_init_tag;

class poi::ss::format::CellFormat_createGeneralFormat_1
    : public CellFormat
{

public:
    typedef CellFormat super;
    CellFormatResult* apply(::java::lang::Object* value) override;

    // Generated

private:
    CellFormat_createGeneralFormat_1(::java::util::Locale* locale_, ::java::util::Locale* locale, ::java::lang::String* format);

public:
    static ::java::lang::Class *class_();
    virtual CellFormatResult* apply(::poi::ss::usermodel::Cell* c);
    virtual CellFormatResult* apply(::javax::swing::JLabel* label, ::java::lang::Object* value);
    virtual CellFormatResult* apply(::javax::swing::JLabel* label, ::poi::ss::usermodel::Cell* c);
    ::java::util::Locale* locale;

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellFormat;
};
