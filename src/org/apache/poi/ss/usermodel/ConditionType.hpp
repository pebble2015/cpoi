// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::ConditionType
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* lookup_;
    static ConditionType* CELL_VALUE_IS_;
    static ConditionType* FORMULA_;
    static ConditionType* COLOR_SCALE_;
    static ConditionType* DATA_BAR_;
    static ConditionType* FILTER_;
    static ConditionType* ICON_SET_;

public:
    int8_t id {  };
    ::java::lang::String* type {  };
    ::java::lang::String* toString() override;
    static ConditionType* forId(int8_t id);
    static ConditionType* forId(int32_t id);
protected:
    void ctor(int32_t id, ::java::lang::String* type);

    // Generated

private:
    ConditionType(int32_t id, ::java::lang::String* type);
protected:
    ConditionType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& lookup();

public:
    static ConditionType*& CELL_VALUE_IS();
    static ConditionType*& FORMULA();
    static ConditionType*& COLOR_SCALE();
    static ConditionType*& DATA_BAR();
    static ConditionType*& FILTER();
    static ConditionType*& ICON_SET();

private:
    virtual ::java::lang::Class* getClass0();
};
