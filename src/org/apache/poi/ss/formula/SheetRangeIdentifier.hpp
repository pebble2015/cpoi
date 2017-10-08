// Generated from /POI/java/org/apache/poi/ss/formula/SheetRangeIdentifier.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/SheetIdentifier.hpp>

struct default_init_tag;

class poi::ss::formula::SheetRangeIdentifier
    : public SheetIdentifier
{

public:
    typedef SheetIdentifier super;
    NameIdentifier* _lastSheetIdentifier {  };
protected:
    void ctor(::java::lang::String* bookName, NameIdentifier* firstSheetIdentifier, NameIdentifier* lastSheetIdentifier);

public:
    virtual NameIdentifier* getFirstSheetIdentifier();
    virtual NameIdentifier* getLastSheetIdentifier();

public: /* protected */
    void asFormulaString(::java::lang::StringBuffer* sb) override;

    // Generated

public:
    SheetRangeIdentifier(::java::lang::String* bookName, NameIdentifier* firstSheetIdentifier, NameIdentifier* lastSheetIdentifier);
protected:
    SheetRangeIdentifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* asFormulaString();

private:
    virtual ::java::lang::Class* getClass0();
};
