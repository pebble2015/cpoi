// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Offset_LinearOffsetRange final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _offset {  };
    int32_t _length {  };
protected:
    void ctor(int32_t offset, int32_t length);

public:
    int16_t getFirstIndex();
    int16_t getLastIndex();
    Offset_LinearOffsetRange* normaliseAndTranslate(int32_t translationAmount);
    bool isOutOfBounds(int32_t lowValidIx, int32_t highValidIx);
    ::java::lang::String* toString() override;

    // Generated
    Offset_LinearOffsetRange(int32_t offset, int32_t length);
protected:
    Offset_LinearOffsetRange(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Offset;
    friend class Offset_BaseRef;
};
