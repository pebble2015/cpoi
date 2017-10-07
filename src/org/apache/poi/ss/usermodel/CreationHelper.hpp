// Generated from /POI/java/org/apache/poi/ss/usermodel/CreationHelper.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::CreationHelper
    : public virtual ::java::lang::Object
{
    virtual RichTextString* createRichTextString(::java::lang::String* text) = 0;
    virtual DataFormat* createDataFormat() = 0;
    virtual Hyperlink* createHyperlink(::org::apache::poi::common::usermodel::HyperlinkType* type) = 0;
    virtual FormulaEvaluator* createFormulaEvaluator() = 0;
    virtual ExtendedColor* createExtendedColor() = 0;
    virtual ClientAnchor* createClientAnchor() = 0;
    virtual ::org::apache::poi::ss::util::AreaReference* createAreaReference(::java::lang::String* reference) = 0;
    virtual ::org::apache::poi::ss::util::AreaReference* createAreaReference(::org::apache::poi::ss::util::CellReference* topLeft, ::org::apache::poi::ss::util::CellReference* bottomRight) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
