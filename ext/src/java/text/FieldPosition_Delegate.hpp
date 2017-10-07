// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/text/Format_FieldDelegate.hpp>

struct default_init_tag;

class java::text::FieldPosition_Delegate
    : public virtual ::java::lang::Object
    , public virtual Format_FieldDelegate
{

public:
    typedef ::java::lang::Object super;

private:
    bool encounteredField {  };

public: /* package */
    FieldPosition* this$0 {  };

    /*void ctor(); (private) */

public:
    void formatted(Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
    void formatted(int32_t fieldID, Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;

    // Generated
    FieldPosition_Delegate(FieldPosition *FieldPosition_this);
protected:
    FieldPosition_Delegate(FieldPosition *FieldPosition_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    FieldPosition *FieldPosition_this;

private:
    virtual ::java::lang::Class* getClass0();
};
