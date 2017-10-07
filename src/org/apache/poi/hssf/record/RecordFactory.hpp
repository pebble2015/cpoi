// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::BlankRecord, StandardRecordArray, CellValueRecordInterfaceArray, ::java::lang::CloneableArray > BlankRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::CellRecord, StandardRecordArray, CellValueRecordInterfaceArray > CellRecordArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::NumberRecord, CellRecordArray, ::java::lang::CloneableArray > NumberRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::RecordFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t NUM_RECORDS { int32_t(512) };
    static ::java::lang::ClassArray* CONSTRUCTOR_ARGS_;
    static ::java::lang::ClassArray* recordClasses_;
    static ::java::util::Map* _recordCreatorsById_;
    static ::int16_tArray* _allKnownRecordSIDs_;

public:
    static ::java::lang::Class* getRecordClass(int32_t sid);
    static RecordArray* createRecord(RecordInputStream* in);
    static Record* createSingleRecord(RecordInputStream* in);
    static NumberRecord* convertToNumberRecord(RKRecord* rk);
    static NumberRecordArray* convertRKRecords(MulRKRecord* mrk);
    static BlankRecordArray* convertBlankRecords(MulBlankRecord* mbk);
    static ::int16_tArray* getAllKnownRecordSIDs();

private:
    static ::java::util::Map* recordsToMap(::java::lang::ClassArray* records);
    static RecordFactory_I_RecordCreator* getRecordCreator(::java::lang::Class* recClass);

public:
    static ::java::util::List* createRecords(::java::io::InputStream* in) /* throws(org.apache.poi.util.RecordFormatException) */;

    // Generated
    RecordFactory();
protected:
    RecordFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ClassArray*& CONSTRUCTOR_ARGS();
    static ::java::lang::ClassArray*& recordClasses();
    static ::java::util::Map*& _recordCreatorsById();
    static ::int16_tArray*& _allKnownRecordSIDs();
    virtual ::java::lang::Class* getClass0();
    friend class RecordFactory_I_RecordCreator;
    friend class RecordFactory_ReflectionConstructorRecordCreator;
    friend class RecordFactory_ReflectionMethodRecordCreator;
};
