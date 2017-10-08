// Generated from /POI/java/org/apache/poi/ss/formula/constant/ErrorConstant.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/constant/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::constant::ErrorConstant
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* logger_;
    static ErrorConstant* NULL__;
    static ErrorConstant* DIV_0_;
    static ErrorConstant* VALUE_;
    static ErrorConstant* REF_;
    static ErrorConstant* NAME_;
    static ErrorConstant* NUM_;
    static ErrorConstant* NA_;
    int32_t _errorCode {  };
protected:
    void ctor(int32_t errorCode);

public:
    virtual int32_t getErrorCode();
    virtual ::java::lang::String* getText();
    static ErrorConstant* valueOf(int32_t errorCode);
    ::java::lang::String* toString() override;

    // Generated

private:
    ErrorConstant(int32_t errorCode);
protected:
    ErrorConstant(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& logger();
    static ErrorConstant*& NULL_();
    static ErrorConstant*& DIV_0();
    static ErrorConstant*& VALUE();
    static ErrorConstant*& REF();
    static ErrorConstant*& NAME();
    static ErrorConstant*& NUM();
    static ErrorConstant*& NA();
    virtual ::java::lang::Class* getClass0();
};
