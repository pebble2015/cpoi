// Generated from /POI/java/org/apache/poi/ddf/EscherColorRef.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ddf::EscherColorRef
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t opid {  };
    int32_t colorRef {  };
    static ::poi::util::BitField* FLAG_SYS_INDEX_;
    static ::poi::util::BitField* FLAG_SCHEME_INDEX_;
    static ::poi::util::BitField* FLAG_SYSTEM_RGB_;
    static ::poi::util::BitField* FLAG_PALETTE_RGB_;
    static ::poi::util::BitField* FLAG_PALETTE_INDEX_;
    static ::poi::util::BitField* FLAG_BLUE_;
    static ::poi::util::BitField* FLAG_GREEN_;
    static ::poi::util::BitField* FLAG_RED_;
protected:
    void ctor(int32_t colorRef);
    void ctor(::int8_tArray* source, int32_t start, int32_t len);

public:
    virtual bool hasSysIndexFlag();
    virtual void setSysIndexFlag(bool flag);
    virtual bool hasSchemeIndexFlag();
    virtual void setSchemeIndexFlag(bool flag);
    virtual bool hasSystemRGBFlag();
    virtual void setSystemRGBFlag(bool flag);
    virtual bool hasPaletteRGBFlag();
    virtual void setPaletteRGBFlag(bool flag);
    virtual bool hasPaletteIndexFlag();
    virtual void setPaletteIndexFlag(bool flag);
    virtual ::int32_tArray* getRGB();
    virtual EscherColorRef_SysIndexSource* getSysIndexSource();
    virtual EscherColorRef_SysIndexProcedure* getSysIndexProcedure();
    virtual int32_t getSysIndexInvert();
    virtual int32_t getSchemeIndex();
    virtual int32_t getPaletteIndex();
    virtual int32_t getSysIndex();

private:
    int32_t getIndex();

    // Generated

public:
    EscherColorRef(int32_t colorRef);
    EscherColorRef(::int8_tArray* source, int32_t start, int32_t len);
protected:
    EscherColorRef(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::BitField*& FLAG_SYS_INDEX();
    static ::poi::util::BitField*& FLAG_SCHEME_INDEX();
    static ::poi::util::BitField*& FLAG_SYSTEM_RGB();
    static ::poi::util::BitField*& FLAG_PALETTE_RGB();
    static ::poi::util::BitField*& FLAG_PALETTE_INDEX();
    static ::poi::util::BitField*& FLAG_BLUE();
    static ::poi::util::BitField*& FLAG_GREEN();
    static ::poi::util::BitField*& FLAG_RED();
    virtual ::java::lang::Class* getClass0();
    friend class EscherColorRef_SysIndexSource;
    friend class EscherColorRef_SysIndexProcedure;
};
