// Generated from /POI/java/org/apache/poi/ss/util/CellAddress.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class poi::ss::util::CellAddress
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    static CellAddress* A1_;
    int32_t _row {  };
    int32_t _col {  };
protected:
    void ctor(int32_t row, int32_t column);
    void ctor(::java::lang::String* address);
    void ctor(CellReference* reference);
    void ctor(CellAddress* address);
    void ctor(::poi::ss::usermodel::Cell* cell);

public:
    virtual int32_t getRow();
    virtual int32_t getColumn();
    virtual int32_t compareTo(CellAddress* other);
    bool equals(::java::lang::Object* o) override;
    int32_t hashCode() override;
    ::java::lang::String* toString() override;
    virtual ::java::lang::String* formatAsString();

    // Generated
    CellAddress(int32_t row, int32_t column);
    CellAddress(::java::lang::String* address);
    CellAddress(CellReference* reference);
    CellAddress(CellAddress* address);
    CellAddress(::poi::ss::usermodel::Cell* cell);
protected:
    CellAddress(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual int32_t compareTo(::java::lang::Object* o) override;
    static CellAddress*& A1();

private:
    virtual ::java::lang::Class* getClass0();
};
