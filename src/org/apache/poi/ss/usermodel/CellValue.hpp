// Generated from /POI/java/org/apache/poi/ss/usermodel/CellValue.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::CellValue final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static CellValue* TRUE_;
    static CellValue* FALSE_;
    CellType* _cellType {  };
    double _numberValue {  };
    bool _booleanValue {  };
    ::java::lang::String* _textValue {  };
    int32_t _errorCode {  };
protected:
    void ctor(CellType* cellType, double numberValue, bool booleanValue, ::java::lang::String* textValue, int32_t errorCode);
    void ctor(double numberValue);

public:
    static CellValue* valueOf(bool booleanValue);
protected:
    void ctor(::java::lang::String* stringValue);

public:
    static CellValue* getError(int32_t errorCode);
    bool getBooleanValue();
    double getNumberValue();
    ::java::lang::String* getStringValue();
    CellType* getCellTypeEnum();
    int32_t getCellType();
    int8_t getErrorValue();
    ::java::lang::String* toString() override;
    ::java::lang::String* formatAsString();

    // Generated

private:
    CellValue(CellType* cellType, double numberValue, bool booleanValue, ::java::lang::String* textValue, int32_t errorCode);

public:
    CellValue(double numberValue);
    CellValue(::java::lang::String* stringValue);
protected:
    CellValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static CellValue*& TRUE();
    static CellValue*& FALSE();

private:
    virtual ::java::lang::Class* getClass0();
};
