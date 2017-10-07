// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumifs.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Baseifs.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Sumifs final
    : public Baseifs
{

public:
    typedef Baseifs super;

private:
    static FreeRefFunction* instance_;

public: /* protected */
    bool hasInitialRange() override;

    // Generated

public:
    Sumifs();
protected:
    Sumifs(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static FreeRefFunction*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
