// Generated from /POI/java/org/apache/poi/dev/RecordGenerator.java
#include <org/apache/poi/dev/RecordGenerator.hpp>

#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Properties.hpp>
#include <javax/xml/parsers/DocumentBuilder.hpp>
#include <javax/xml/parsers/DocumentBuilderFactory.hpp>
#include <javax/xml/transform/OutputKeys.hpp>
#include <javax/xml/transform/Transformer.hpp>
#include <javax/xml/transform/TransformerException.hpp>
#include <javax/xml/transform/TransformerFactory.hpp>
#include <javax/xml/transform/stream/StreamResult.hpp>
#include <javax/xml/transform/stream/StreamSource.hpp>
#include <org/apache/poi/util/XMLHelper.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/NamedNodeMap.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/NodeList.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::File, ::java::lang::ObjectArray, SerializableArray, ::java::lang::ComparableArray > FileArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::dev::RecordGenerator::RecordGenerator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::dev::RecordGenerator::RecordGenerator()
    : RecordGenerator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::dev::RecordGenerator::main(::java::lang::StringArray* args) /* throws(Exception) */
{
    clinit();
    ::java::lang::Class::forName(u"org.apache.poi.generator.FieldIterator"_j);
    if(npc(args)->length != 4) {
        npc(::java::lang::System::out())->println(u"Usage:"_j);
        npc(::java::lang::System::out())->println(u"  java org.apache.poi.hssf.util.RecordGenerator RECORD_DEFINTIONS RECORD_STYLES DEST_SRC_PATH TEST_SRC_PATH"_j);
    } else {
        generateRecords((*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)], (*args)[int32_t(3)]);
    }
}

void org::apache::poi::dev::RecordGenerator::generateRecords(::java::lang::String* defintionsDir, ::java::lang::String* recordStyleDir, ::java::lang::String* destSrcPathDir, ::java::lang::String* testSrcPathDir) /* throws(Exception) */
{
    clinit();
    auto definitionsFiles = (new ::java::io::File(defintionsDir))->listFiles();
    if(definitionsFiles == nullptr) {
        npc(::java::lang::System::err())->println(::java::lang::StringBuilder().append(defintionsDir)->append(u" is not a directory."_j)->toString());
        return;
    }
    for(auto file : *npc(definitionsFiles)) {
        if(npc(file)->isFile() && (npc(npc(file)->getName())->endsWith(u"_record.xml"_j) || npc(npc(file)->getName())->endsWith(u"_type.xml"_j))) {
            auto factory = ::org::apache::poi::util::XMLHelper::getDocumentBuilderFactory();
            auto builder = npc(factory)->newDocumentBuilder();
            auto document = npc(builder)->parse(file);
            auto record = npc(document)->getDocumentElement();
            auto extendstg = npc(npc(npc(npc(record)->getElementsByTagName(u"extends"_j))->item(0))->getFirstChild())->getNodeValue();
            auto suffix = npc(npc(npc(npc(record)->getElementsByTagName(u"suffix"_j))->item(0))->getFirstChild())->getNodeValue();
            auto recordName = npc(npc(npc(record)->getAttributes())->getNamedItem(u"name"_j))->getNodeValue();
            auto packageName = npc(npc(npc(record)->getAttributes())->getNamedItem(u"package"_j))->getNodeValue();
            packageName = npc(packageName)->replace(u'.', u'/');
            auto destinationPath = ::java::lang::StringBuilder().append(destSrcPathDir)->append(u"/"_j)
                ->append(packageName)->toString();
            auto destinationPathFile = new ::java::io::File(destinationPath);
            if(!npc(destinationPathFile)->mkdirs()) {
                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create directory "_j)->append(static_cast< ::java::lang::Object* >(destinationPathFile))->toString());
            } else {
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Created destination directory: "_j)->append(destinationPath)->toString());
            }
            auto destinationFilepath = ::java::lang::StringBuilder().append(destinationPath)->append(u"/"_j)
                ->append(recordName)
                ->append(suffix)
                ->append(u".java"_j)->toString();
            transform(file, new ::java::io::File(destinationFilepath), new ::java::io::File(::java::lang::StringBuilder().append(recordStyleDir)->append(u"/"_j)
                ->append(npc(extendstg)->toLowerCase(::java::util::Locale::ROOT()))
                ->append(u".xsl"_j)->toString()));
            npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Generated "_j)->append(suffix)
                ->append(u": "_j)
                ->append(destinationFilepath)->toString());
            destinationPath = ::java::lang::StringBuilder().append(testSrcPathDir)->append(u"/"_j)
                ->append(packageName)->toString();
            destinationPathFile = new ::java::io::File(destinationPath);
            if(!npc(destinationPathFile)->mkdirs()) {
                throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Could not create directory "_j)->append(static_cast< ::java::lang::Object* >(destinationPathFile))->toString());
            } else {
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Created destination directory: "_j)->append(destinationPath)->toString());
            }
            destinationFilepath = ::java::lang::StringBuilder().append(destinationPath)->append(u"/Test"_j)
                ->append(recordName)
                ->append(suffix)
                ->append(u".java"_j)->toString();
            if(!(new ::java::io::File(destinationFilepath))->exists()) {
                auto temp = (::java::lang::StringBuilder().append(recordStyleDir)->append(u"/"_j)
                    ->append(npc(extendstg)->toLowerCase(::java::util::Locale::ROOT()))
                    ->append(u"_test.xsl"_j)->toString());
                transform(file, new ::java::io::File(destinationFilepath), new ::java::io::File(temp));
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Generated test: "_j)->append(destinationFilepath)->toString());
            } else {
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Skipped test generation: "_j)->append(destinationFilepath)->toString());
            }
        }
    }
}

void org::apache::poi::dev::RecordGenerator::transform(::java::io::File* in, ::java::io::File* out, ::java::io::File* xslt) /* throws(FileNotFoundException, TransformerException) */
{
    clinit();
    auto const ss = new ::javax::xml::transform::stream::StreamSource(xslt);
    auto const tf = ::javax::xml::transform::TransformerFactory::newInstance();
    ::javax::xml::transform::Transformer* t;
    try {
        t = npc(tf)->newTransformer(ss);
    } catch (::javax::xml::transform::TransformerException* ex) {
        npc(::java::lang::System::err())->println(::java::lang::StringBuilder().append(u"Error compiling XSL style sheet "_j)->append(static_cast< ::java::lang::Object* >(xslt))->toString());
        throw ex;
    }
    auto const p = new ::java::util::Properties();
    npc(p)->setProperty(::javax::xml::transform::OutputKeys::METHOD(), u"text"_j);
    npc(t)->setOutputProperties(p);
    ::javax::xml::transform::Result* const result = new ::javax::xml::transform::stream::StreamResult(out);
    npc(t)->transform(new ::javax::xml::transform::stream::StreamSource(in), result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::dev::RecordGenerator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.dev.RecordGenerator", 34);
    return c;
}

java::lang::Class* org::apache::poi::dev::RecordGenerator::getClass0()
{
    return class_();
}

