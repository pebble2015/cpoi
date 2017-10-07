// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataFormat.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/DataFormat.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFDataFormat final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::DataFormat
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::StringArray* _builtinFormats_;
    ::java::util::Vector* _formats {  };
    ::org::apache::poi::hssf::model::InternalWorkbook* _workbook {  };
    bool _movedBuiltins {  };
protected:
    void ctor(::org::apache::poi::hssf::model::InternalWorkbook* workbook);

public:
    static ::java::util::List* getBuiltinFormats();
    static int16_t getBuiltinFormat(::java::lang::String* format);
    int16_t getFormat(::java::lang::String* pFormat) override;
    ::java::lang::String* getFormat(int16_t index) override;
    static ::java::lang::String* getBuiltinFormat(int16_t index);
    static int32_t getNumberOfBuiltinBuiltinFormats();

private:
    void ensureFormatsSize(int32_t index);

    // Generated

public: /* package */
    HSSFDataFormat(::org::apache::poi::hssf::model::InternalWorkbook* workbook);
protected:
    HSSFDataFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::java::lang::StringArray*& _builtinFormats();
    virtual ::java::lang::Class* getClass0();
};
