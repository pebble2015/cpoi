// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::text::FieldPosition
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    Format_Field* attribute {  };

public: /* package */
    int32_t beginIndex {  };
    int32_t endIndex {  };
    int32_t field {  };

protected:
    void ctor(int32_t field);
    void ctor(Format_Field* attribute);
    void ctor(Format_Field* attribute, int32_t fieldID);

public:
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t getBeginIndex();
    virtual int32_t getEndIndex();
    virtual int32_t getField();
    virtual Format_Field* getFieldAttribute();

public: /* package */
    virtual Format_FieldDelegate* getFieldDelegate();

public:
    int32_t hashCode() override;
    /*bool matchesField(Format_Field* attribute); (private) */
    /*bool matchesField(Format_Field* attribute, int32_t field); (private) */
    virtual void setBeginIndex(int32_t bi);
    virtual void setEndIndex(int32_t ei);
    ::java::lang::String* toString() override;

    // Generated
    FieldPosition(int32_t field);
    FieldPosition(Format_Field* attribute);
    FieldPosition(Format_Field* attribute, int32_t fieldID);
protected:
    FieldPosition(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
