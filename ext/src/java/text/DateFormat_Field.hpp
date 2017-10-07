// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/text/Format_Field.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
typedef ::SubArray< ::java::text::Format_Field, AttributedCharacterIterator_AttributeArray > Format_FieldArray;
typedef ::SubArray< ::java::text::DateFormat_Field, Format_FieldArray > DateFormat_FieldArray;
    } // text
} // java

struct default_init_tag;

class java::text::DateFormat_Field
    : public Format_Field
{

public:
    typedef Format_Field super;

private:
    static DateFormat_Field* AM_PM_;
    static DateFormat_Field* DAY_OF_MONTH_;
    static DateFormat_Field* DAY_OF_WEEK_;
    static DateFormat_Field* DAY_OF_WEEK_IN_MONTH_;
    static DateFormat_Field* DAY_OF_YEAR_;
    static DateFormat_Field* ERA_;
    static DateFormat_Field* HOUR0_;
    static DateFormat_Field* HOUR1_;
    static DateFormat_Field* HOUR_OF_DAY0_;
    static DateFormat_Field* HOUR_OF_DAY1_;
    static DateFormat_Field* MILLISECOND_;
    static DateFormat_Field* MINUTE_;
    static DateFormat_Field* MONTH_;
    static DateFormat_Field* SECOND_;
    static DateFormat_Field* TIME_ZONE_;
    static DateFormat_Field* WEEK_OF_MONTH_;
    static DateFormat_Field* WEEK_OF_YEAR_;
    static DateFormat_Field* YEAR_;
    int32_t calendarField {  };
    static DateFormat_FieldArray* calendarToFieldMapping_;
    static ::java::util::Map* instanceMap_;
    static constexpr int64_t serialVersionUID { int64_t(7441350119349544720LL) };

protected:
    void ctor(::java::lang::String* name, int32_t calendarField);

public:
    virtual int32_t getCalendarField();
    static DateFormat_Field* ofCalendarField(int32_t calendarField);

public: /* protected */
    ::java::lang::Object* readResolve() override;

    // Generated
    DateFormat_Field(::java::lang::String* name, int32_t calendarField);
protected:
    DateFormat_Field(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static DateFormat_Field*& AM_PM();
    static DateFormat_Field*& DAY_OF_MONTH();
    static DateFormat_Field*& DAY_OF_WEEK();
    static DateFormat_Field*& DAY_OF_WEEK_IN_MONTH();
    static DateFormat_Field*& DAY_OF_YEAR();
    static DateFormat_Field*& ERA();
    static DateFormat_Field*& HOUR0();
    static DateFormat_Field*& HOUR1();
    static DateFormat_Field*& HOUR_OF_DAY0();
    static DateFormat_Field*& HOUR_OF_DAY1();
    static DateFormat_Field*& MILLISECOND();
    static DateFormat_Field*& MINUTE();
    static DateFormat_Field*& MONTH();
    static DateFormat_Field*& SECOND();
    static DateFormat_Field*& TIME_ZONE();
    static DateFormat_Field*& WEEK_OF_MONTH();
    static DateFormat_Field*& WEEK_OF_YEAR();
    static DateFormat_Field*& YEAR();

private:
    static DateFormat_FieldArray*& calendarToFieldMapping();
    static ::java::util::Map*& instanceMap();
    virtual ::java::lang::Class* getClass0();
};
