// Generated from /POI/java/org/apache/poi/ss/formula/SheetIdentifier.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::SheetIdentifier
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    ::java::lang::String* _bookName {  };
    NameIdentifier* _sheetIdentifier {  };
protected:
    void ctor(::java::lang::String* bookName, NameIdentifier* sheetIdentifier);

public:
    virtual ::java::lang::String* getBookName();
    virtual NameIdentifier* getSheetIdentifier();

public: /* protected */
    virtual void asFormulaString(::java::lang::StringBuffer* sb);

public:
    virtual ::java::lang::String* asFormulaString();
    ::java::lang::String* toString() override;

    // Generated
    SheetIdentifier(::java::lang::String* bookName, NameIdentifier* sheetIdentifier);
protected:
    SheetIdentifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
