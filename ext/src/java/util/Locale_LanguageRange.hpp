// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Locale_LanguageRange final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr double MAX_WEIGHT { 1.0 };
    static constexpr double MIN_WEIGHT { 0.0 };

private:
    std::atomic< int32_t > hash {  };
    ::java::lang::String* range {  };
    double weight {  };

protected:
    void ctor(::java::lang::String* range);
    void ctor(::java::lang::String* range, double weight);

public:
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::String* getRange();
    double getWeight();
    int32_t hashCode() override;
    /*static bool isSubtagIllFormed(::java::lang::String* subtag, bool isFirstSubtag); (private) */
    static List* mapEquivalents(List* priorityList, Map* map);
    static List* parse(::java::lang::String* ranges);
    static List* parse(::java::lang::String* ranges, Map* map);

    // Generated
    Locale_LanguageRange(::java::lang::String* range);
    Locale_LanguageRange(::java::lang::String* range, double weight);
protected:
    Locale_LanguageRange(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
