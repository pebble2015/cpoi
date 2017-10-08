// Generated from /POI/java/org/apache/poi/ss/util/PaneInformation.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::PaneInformation
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int8_t PANE_LOWER_RIGHT { int8_t(0) };
    static constexpr int8_t PANE_UPPER_RIGHT { int8_t(1) };
    static constexpr int8_t PANE_LOWER_LEFT { int8_t(2) };
    static constexpr int8_t PANE_UPPER_LEFT { int8_t(3) };

private:
    int16_t x {  };
    int16_t y {  };
    int16_t topRow {  };
    int16_t leftColumn {  };
    int8_t activePane {  };
    bool frozen {  };
protected:
    void ctor(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen);

public:
    virtual int16_t getVerticalSplitPosition();
    virtual int16_t getHorizontalSplitPosition();
    virtual int16_t getHorizontalSplitTopRow();
    virtual int16_t getVerticalSplitLeftColumn();
    virtual int8_t getActivePane();
    virtual bool isFreezePane();

    // Generated
    PaneInformation(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen);
protected:
    PaneInformation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
