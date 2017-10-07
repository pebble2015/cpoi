// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::logging::Level
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static Level* ALL_;
    static Level* CONFIG_;
    static Level* FINE_;
    static Level* FINER_;
    static Level* FINEST_;
    static Level* INFO_;
    static Level* OFF_;
    static Level* SEVERE_;
    static Level* WARNING_;
    ::java::util::Locale* cachedLocale {  };
    static ::java::lang::String* defaultBundle_;
    ::java::lang::String* localizedLevelName {  };
    ::java::lang::String* name {  };
    ::java::lang::String* resourceBundleName {  };
    static constexpr int64_t serialVersionUID { int64_t(-8176160795706313070LL) };
    int32_t value {  };

protected:
    void ctor(::java::lang::String* name, int32_t value);
    void ctor(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName);
    /*void ctor(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName, bool visible); (private) */
    /*::java::lang::String* computeLocalizedLevelName(::java::util::Locale* newLocale); (private) */

public:
    bool equals(::java::lang::Object* ox) override;

public: /* package */
    static Level* findLevel(::java::lang::String* name);
    ::java::lang::String* getCachedLocalizedLevelName();
    ::java::lang::String* getLevelName();
    ::java::lang::String* getLocalizedLevelName();

public:
    virtual ::java::lang::String* getLocalizedName();
    virtual ::java::lang::String* getName();
    virtual ::java::lang::String* getResourceBundleName();
    int32_t hashCode() override;
    int32_t intValue();
    static Level* parse(::java::lang::String* name);
    /*::java::lang::Object* readResolve(); (private) */
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    Level(::java::lang::String* name, int32_t value);
    Level(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName);
protected:
    Level(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Level*& ALL();
    static Level*& CONFIG();
    static Level*& FINE();
    static Level*& FINER();
    static Level*& FINEST();
    static Level*& INFO();
    static Level*& OFF();
    static Level*& SEVERE();
    static Level*& WARNING();

private:
    static ::java::lang::String*& defaultBundle();
    virtual ::java::lang::Class* getClass0();
};
