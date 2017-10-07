// Generated from /POI/java/org/apache/poi/hpsf/wellknown/SectionIDMap.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/wellknown/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
            } // hpsf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hpsf::wellknown::SectionIDMap
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::ThreadLocal* defaultMap_;
    static ::org::apache::poi::hpsf::ClassID* SUMMARY_INFORMATION_ID_;
    static ::org::apache::poi::hpsf::ClassID* DOC_SUMMARY_INFORMATION_;
    static ::org::apache::poi::hpsf::ClassID* USER_DEFINED_PROPERTIES_;
    static ::org::apache::poi::hpsf::ClassIDArray* DOCUMENT_SUMMARY_INFORMATION_ID_;
    static ::java::lang::String* UNDEFINED_;

public:
    static SectionIDMap* getInstance();
    static ::java::lang::String* getPIDString(::org::apache::poi::hpsf::ClassID* sectionFormatID, int64_t pid);
    virtual PropertyIDMap* get(::org::apache::poi::hpsf::ClassID* sectionFormatID);
    virtual PropertyIDMap* put(::org::apache::poi::hpsf::ClassID* sectionFormatID, PropertyIDMap* propertyIDMap);

public: /* protected */
    virtual PropertyIDMap* put(::java::lang::String* key, PropertyIDMap* value);

    // Generated

public:
    SectionIDMap();
protected:
    SectionIDMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ThreadLocal*& defaultMap();

public:
    static ::org::apache::poi::hpsf::ClassID*& SUMMARY_INFORMATION_ID();

private:
    static ::org::apache::poi::hpsf::ClassID*& DOC_SUMMARY_INFORMATION();
    static ::org::apache::poi::hpsf::ClassID*& USER_DEFINED_PROPERTIES();

public:
    static ::org::apache::poi::hpsf::ClassIDArray*& DOCUMENT_SUMMARY_INFORMATION_ID();
    static ::java::lang::String*& UNDEFINED();

private:
    virtual ::java::lang::Class* getClass0();
};
