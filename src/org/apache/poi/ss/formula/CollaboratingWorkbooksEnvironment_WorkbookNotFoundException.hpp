// Generated from /POI/java/org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Exception.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment_WorkbookNotFoundException final
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static constexpr int64_t serialVersionUID { int64_t(8787784539811167941LL) };
protected:
    void ctor(::java::lang::String* msg);

    // Generated

public: /* package */
    CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(::java::lang::String* msg);
protected:
    CollaboratingWorkbooksEnvironment_WorkbookNotFoundException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CollaboratingWorkbooksEnvironment;
};
