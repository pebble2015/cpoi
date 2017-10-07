// Generated from /POI/java/org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::WorkbookEvaluator, ::java::lang::ObjectArray > WorkbookEvaluatorArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::CollaboratingWorkbooksEnvironment final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static CollaboratingWorkbooksEnvironment* EMPTY_;
    ::java::util::Map* _evaluatorsByName {  };
    WorkbookEvaluatorArray* _evaluators {  };
    bool _unhooked {  };
protected:
    void ctor();

public:
    static void setup(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators);
    static void setup(::java::util::Map* evaluatorsByName);
    static void setupFormulaEvaluator(::java::util::Map* evaluators);
protected:
    void ctor(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems);

private:
    static ::java::util::Map* toUniqueMap(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems);
protected:
    void ctor(::java::util::Map* evaluatorsByName, WorkbookEvaluatorArray* evaluators);

private:
    static void hookNewEnvironment(WorkbookEvaluatorArray* evaluators, CollaboratingWorkbooksEnvironment* env);
    void unhookOldEnvironments(WorkbookEvaluatorArray* evaluators);
    void unhook();

public:
    WorkbookEvaluator* getWorkbookEvaluator(::java::lang::String* workbookName) /* throws(WorkbookNotFoundException) */;

    // Generated

private:
    CollaboratingWorkbooksEnvironment();
    CollaboratingWorkbooksEnvironment(::java::lang::StringArray* workbookNames, WorkbookEvaluatorArray* evaluators, int32_t nItems);
    CollaboratingWorkbooksEnvironment(::java::util::Map* evaluatorsByName, WorkbookEvaluatorArray* evaluators);
protected:
    CollaboratingWorkbooksEnvironment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static CollaboratingWorkbooksEnvironment*& EMPTY();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CollaboratingWorkbooksEnvironment_WorkbookNotFoundException;
};
