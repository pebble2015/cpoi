// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTHyperlink.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTHyperlink
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    CTEmbeddedWAVAudioFile* snd {  };
    CTOfficeArtExtensionList* extLst {  };
    ::java::lang::String* id {  };
    ::java::lang::String* invalidUrl {  };
    ::java::lang::String* action {  };
    ::java::lang::String* tgtFrame {  };
    ::java::lang::String* tooltip {  };
    ::java::lang::Boolean* history {  };
    ::java::lang::Boolean* highlightClick {  };
    ::java::lang::Boolean* endSnd {  };

public:
    virtual CTEmbeddedWAVAudioFile* getSnd();
    virtual void setSnd(CTEmbeddedWAVAudioFile* value);
    virtual bool isSetSnd();
    virtual CTOfficeArtExtensionList* getExtLst();
    virtual void setExtLst(CTOfficeArtExtensionList* value);
    virtual bool isSetExtLst();
    virtual ::java::lang::String* getId();
    virtual void setId(::java::lang::String* value);
    virtual bool isSetId();
    virtual ::java::lang::String* getInvalidUrl();
    virtual void setInvalidUrl(::java::lang::String* value);
    virtual bool isSetInvalidUrl();
    virtual ::java::lang::String* getAction();
    virtual void setAction(::java::lang::String* value);
    virtual bool isSetAction();
    virtual ::java::lang::String* getTgtFrame();
    virtual void setTgtFrame(::java::lang::String* value);
    virtual bool isSetTgtFrame();
    virtual ::java::lang::String* getTooltip();
    virtual void setTooltip(::java::lang::String* value);
    virtual bool isSetTooltip();
    virtual bool isHistory();
    virtual void setHistory(bool value);
    virtual bool isSetHistory();
    virtual void unsetHistory();
    virtual bool isHighlightClick();
    virtual void setHighlightClick(bool value);
    virtual bool isSetHighlightClick();
    virtual void unsetHighlightClick();
    virtual bool isEndSnd();
    virtual void setEndSnd(bool value);
    virtual bool isSetEndSnd();
    virtual void unsetEndSnd();

    // Generated
    CTHyperlink();
protected:
    CTHyperlink(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
