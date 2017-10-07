// Generated from /POI/java/org/apache/poi/ss/util/WorkbookUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::WorkbookUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::java::lang::String* createSafeSheetName(::java::lang::String* nameProposal);
    static ::java::lang::String* createSafeSheetName(::java::lang::String* nameProposal, char16_t replaceChar);
    static void validateSheetName(::java::lang::String* sheetName);
    static void validateSheetState(int32_t state);

    // Generated
    WorkbookUtil();
protected:
    WorkbookUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
