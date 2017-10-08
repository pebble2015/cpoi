// Generated from /POI/java/org/apache/poi/ss/format/CellTextFormatter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>

struct default_init_tag;

class poi::ss::format::CellTextFormatter
    : public CellFormatter
{

public:
    typedef CellFormatter super;

private:
    ::int32_tArray* textPos {  };
    ::java::lang::String* desc {  };
    static CellFormatter* SIMPLE_TEXT_;
protected:
    void ctor(::java::lang::String* format);

public:
    void formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* obj) override;
    void simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value) override;

    // Generated
    CellTextFormatter(::java::lang::String* format);
protected:
    CellTextFormatter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static CellFormatter*& SIMPLE_TEXT();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CellTextFormatter_CellTextFormatter_1;
};
