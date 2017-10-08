// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTHyperlink.java
#include <org/apache/poi/sl/draw/binding/CTHyperlink.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/sl/draw/binding/CTEmbeddedWAVAudioFile.hpp>
#include <org/apache/poi/sl/draw/binding/CTOfficeArtExtensionList.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::binding::CTHyperlink::CTHyperlink(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTHyperlink::CTHyperlink()
    : CTHyperlink(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTEmbeddedWAVAudioFile* poi::sl::draw::binding::CTHyperlink::getSnd()
{
    return snd;
}

void poi::sl::draw::binding::CTHyperlink::setSnd(CTEmbeddedWAVAudioFile* value)
{
    this->snd = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetSnd()
{
    return (this->snd != nullptr);
}

poi::sl::draw::binding::CTOfficeArtExtensionList* poi::sl::draw::binding::CTHyperlink::getExtLst()
{
    return extLst;
}

void poi::sl::draw::binding::CTHyperlink::setExtLst(CTOfficeArtExtensionList* value)
{
    this->extLst = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetExtLst()
{
    return (this->extLst != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTHyperlink::getId()
{
    return id;
}

void poi::sl::draw::binding::CTHyperlink::setId(::java::lang::String* value)
{
    this->id = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetId()
{
    return (this->id != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTHyperlink::getInvalidUrl()
{
    if(invalidUrl == nullptr) {
        return u""_j;
    } else {
        return invalidUrl;
    }
}

void poi::sl::draw::binding::CTHyperlink::setInvalidUrl(::java::lang::String* value)
{
    this->invalidUrl = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetInvalidUrl()
{
    return (this->invalidUrl != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTHyperlink::getAction()
{
    if(action == nullptr) {
        return u""_j;
    } else {
        return action;
    }
}

void poi::sl::draw::binding::CTHyperlink::setAction(::java::lang::String* value)
{
    this->action = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetAction()
{
    return (this->action != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTHyperlink::getTgtFrame()
{
    if(tgtFrame == nullptr) {
        return u""_j;
    } else {
        return tgtFrame;
    }
}

void poi::sl::draw::binding::CTHyperlink::setTgtFrame(::java::lang::String* value)
{
    this->tgtFrame = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetTgtFrame()
{
    return (this->tgtFrame != nullptr);
}

java::lang::String* poi::sl::draw::binding::CTHyperlink::getTooltip()
{
    if(tooltip == nullptr) {
        return u""_j;
    } else {
        return tooltip;
    }
}

void poi::sl::draw::binding::CTHyperlink::setTooltip(::java::lang::String* value)
{
    this->tooltip = value;
}

bool poi::sl::draw::binding::CTHyperlink::isSetTooltip()
{
    return (this->tooltip != nullptr);
}

bool poi::sl::draw::binding::CTHyperlink::isHistory()
{
    if(history == nullptr) {
        return true;
    } else {
        return (npc(history))->booleanValue();
    }
}

void poi::sl::draw::binding::CTHyperlink::setHistory(bool value)
{
    this->history = ::java::lang::Boolean::valueOf(value);
}

bool poi::sl::draw::binding::CTHyperlink::isSetHistory()
{
    return (this->history != nullptr);
}

void poi::sl::draw::binding::CTHyperlink::unsetHistory()
{
    this->history = nullptr;
}

bool poi::sl::draw::binding::CTHyperlink::isHighlightClick()
{
    if(highlightClick == nullptr) {
        return false;
    } else {
        return (npc(highlightClick))->booleanValue();
    }
}

void poi::sl::draw::binding::CTHyperlink::setHighlightClick(bool value)
{
    this->highlightClick = ::java::lang::Boolean::valueOf(value);
}

bool poi::sl::draw::binding::CTHyperlink::isSetHighlightClick()
{
    return (this->highlightClick != nullptr);
}

void poi::sl::draw::binding::CTHyperlink::unsetHighlightClick()
{
    this->highlightClick = nullptr;
}

bool poi::sl::draw::binding::CTHyperlink::isEndSnd()
{
    if(endSnd == nullptr) {
        return false;
    } else {
        return (npc(endSnd))->booleanValue();
    }
}

void poi::sl::draw::binding::CTHyperlink::setEndSnd(bool value)
{
    this->endSnd = ::java::lang::Boolean::valueOf(value);
}

bool poi::sl::draw::binding::CTHyperlink::isSetEndSnd()
{
    return (this->endSnd != nullptr);
}

void poi::sl::draw::binding::CTHyperlink::unsetEndSnd()
{
    this->endSnd = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTHyperlink::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTHyperlink", 42);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTHyperlink::getClass0()
{
    return class_();
}

