// Generated from /POI/java/org/apache/poi/sl/draw/geom/PresetGeometries.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/util/LinkedHashMap.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::geom::PresetGeometries
    : public ::java::util::LinkedHashMap
{

public:
    typedef ::java::util::LinkedHashMap super;

private:
    static ::org::apache::poi::util::POILogger* LOG_;
    static ::java::lang::String* BINDING_PACKAGE_;
    static PresetGeometries* _inst_;
protected:
    void ctor();

public:
    virtual void init_(::java::io::InputStream* is) /* throws(XMLStreamException, JAXBException) */;
    static CustomGeometry* convertCustomGeometry(::javax::xml::stream::XMLStreamReader* staxReader);
    static PresetGeometries* getInstance();

    // Generated

public: /* protected */
    PresetGeometries();
protected:
    PresetGeometries(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& LOG();

public: /* protected */
    static ::java::lang::String*& BINDING_PACKAGE();
    static PresetGeometries*& _inst();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PresetGeometries_init_1;
};
