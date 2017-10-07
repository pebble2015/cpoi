// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
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

struct default_init_tag;

class org::apache::poi::hssf::dev::BiffViewer_CommandArgs final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool _biffhex {  };
    bool _noint {  };
    bool _out {  };
    bool _rawhex {  };
    bool _noHeader {  };
    ::java::io::File* _file {  };
protected:
    void ctor(bool biffhex, bool noint, bool out, bool rawhex, bool noHeader, ::java::io::File* file);

public:
    static BiffViewer_CommandArgs* parse(::java::lang::StringArray* args) /* throws(CommandParseException) */;
    bool shouldDumpBiffHex();
    bool shouldDumpRecordInterpretations();
    bool shouldOutputToFile();
    bool shouldOutputRawHexOnly();
    bool suppressHeader();
    ::java::io::File* getFile();

    // Generated

private:
    BiffViewer_CommandArgs(bool biffhex, bool noint, bool out, bool rawhex, bool noHeader, ::java::io::File* file);
protected:
    BiffViewer_CommandArgs(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BiffViewer;
    friend class BiffViewer_CommandParseException;
    friend class BiffViewer_BiffRecordListener;
    friend class BiffViewer_IBiffRecordListener;
    friend class BiffViewer_BiffDumpingStream;
};
