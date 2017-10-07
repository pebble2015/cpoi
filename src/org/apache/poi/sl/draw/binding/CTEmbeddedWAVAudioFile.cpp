// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTEmbeddedWAVAudioFile.java
#include <org/apache/poi/sl/draw/binding/CTEmbeddedWAVAudioFile.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::CTEmbeddedWAVAudioFile(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::CTEmbeddedWAVAudioFile()
    : CTEmbeddedWAVAudioFile(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::getEmbed()
{
    return embed;
}

void org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::setEmbed(::java::lang::String* value)
{
    this->embed = value;
}

bool org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::isSetEmbed()
{
    return (this->embed != nullptr);
}

java::lang::String* org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::getName()
{
    if(name == nullptr) {
        return u""_j;
    } else {
        return name;
    }
}

void org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::setName(::java::lang::String* value)
{
    this->name = value;
}

bool org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::isSetName()
{
    return (this->name != nullptr);
}

bool org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::isBuiltIn()
{
    if(builtIn == nullptr) {
        return false;
    } else {
        return (npc(builtIn))->booleanValue();
    }
}

void org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::setBuiltIn(bool value)
{
    this->builtIn = ::java::lang::Boolean::valueOf(value);
}

bool org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::isSetBuiltIn()
{
    return (this->builtIn != nullptr);
}

void org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::unsetBuiltIn()
{
    this->builtIn = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTEmbeddedWAVAudioFile", 53);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::binding::CTEmbeddedWAVAudioFile::getClass0()
{
    return class_();
}

