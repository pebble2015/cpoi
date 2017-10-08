// Generated from /POI/java/org/apache/poi/hpsf/ClassID.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::ClassID
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ClassID* OLE10_PACKAGE_;
    static ClassID* PPT_SHOW_;
    static ClassID* XLS_WORKBOOK_;
    static ClassID* TXT_ONLY_;
    static ClassID* EXCEL_V3_;
    static ClassID* EXCEL_V3_CHART_;
    static ClassID* EXCEL_V3_MACRO_;
    static ClassID* EXCEL95_;
    static ClassID* EXCEL95_CHART_;
    static ClassID* EXCEL97_;
    static ClassID* EXCEL97_CHART_;
    static ClassID* EXCEL2003_;
    static ClassID* EXCEL2007_;
    static ClassID* EXCEL2007_MACRO_;
    static ClassID* EXCEL2007_XLSB_;
    static ClassID* EXCEL2010_;
    static ClassID* EXCEL2010_CHART_;
    static ClassID* EXCEL2010_ODS_;
    static ClassID* WORD97_;
    static ClassID* WORD95_;
    static ClassID* WORD2007_;
    static ClassID* WORD2007_MACRO_;
    static ClassID* POWERPOINT97_;
    static ClassID* POWERPOINT95_;
    static ClassID* POWERPOINT2007_;
    static ClassID* POWERPOINT2007_MACRO_;
    static ClassID* EQUATION30_;

public:
    static constexpr int32_t LENGTH { int32_t(16) };

private:
    ::int8_tArray* bytes {  };
protected:
    void ctor(::int8_tArray* src, int32_t offset);
    void ctor();
    void ctor(::java::lang::String* externalForm);

public:
    virtual int32_t length();
    virtual ::int8_tArray* getBytes();
    virtual void setBytes(::int8_tArray* bytes);
    virtual ::int8_tArray* read(::int8_tArray* src, int32_t offset);
    virtual void write(::int8_tArray* dst, int32_t offset) /* throws(ArrayStoreException) */;
    bool equals(::java::lang::Object* o) override;
    virtual bool equalsInverted(ClassID* o);
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

    // Generated
    ClassID(::int8_tArray* src, int32_t offset);
    ClassID();
    ClassID(::java::lang::String* externalForm);
protected:
    ClassID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    static ClassID*& OLE10_PACKAGE();
    static ClassID*& PPT_SHOW();
    static ClassID*& XLS_WORKBOOK();
    static ClassID*& TXT_ONLY();
    static ClassID*& EXCEL_V3();
    static ClassID*& EXCEL_V3_CHART();
    static ClassID*& EXCEL_V3_MACRO();
    static ClassID*& EXCEL95();
    static ClassID*& EXCEL95_CHART();
    static ClassID*& EXCEL97();
    static ClassID*& EXCEL97_CHART();
    static ClassID*& EXCEL2003();
    static ClassID*& EXCEL2007();
    static ClassID*& EXCEL2007_MACRO();
    static ClassID*& EXCEL2007_XLSB();
    static ClassID*& EXCEL2010();
    static ClassID*& EXCEL2010_CHART();
    static ClassID*& EXCEL2010_ODS();
    static ClassID*& WORD97();
    static ClassID*& WORD95();
    static ClassID*& WORD2007();
    static ClassID*& WORD2007_MACRO();
    static ClassID*& POWERPOINT97();
    static ClassID*& POWERPOINT95();
    static ClassID*& POWERPOINT2007();
    static ClassID*& POWERPOINT2007_MACRO();
    static ClassID*& EQUATION30();

private:
    virtual ::java::lang::Class* getClass0();
};
