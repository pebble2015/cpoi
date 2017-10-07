// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::text::AttributedCharacterIterator_Attribute
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static AttributedCharacterIterator_Attribute* INPUT_METHOD_SEGMENT_;
    static AttributedCharacterIterator_Attribute* LANGUAGE_;
    static AttributedCharacterIterator_Attribute* READING_;
    static ::java::util::Map* instanceMap_;
    ::java::lang::String* name {  };
    static constexpr int64_t serialVersionUID { int64_t(-9142742483513960612LL) };

protected:
    void ctor(::java::lang::String* name);

public:
    bool equals(::java::lang::Object* obj) override;

public: /* protected */
    virtual ::java::lang::String* getName();

public:
    int32_t hashCode() override;

public: /* protected */
    virtual ::java::lang::Object* readResolve();

public:
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    AttributedCharacterIterator_Attribute(::java::lang::String* name);
protected:
    AttributedCharacterIterator_Attribute(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static AttributedCharacterIterator_Attribute*& INPUT_METHOD_SEGMENT();
    static AttributedCharacterIterator_Attribute*& LANGUAGE();
    static AttributedCharacterIterator_Attribute*& READING();

private:
    static ::java::util::Map*& instanceMap();
    virtual ::java::lang::Class* getClass0();
};
