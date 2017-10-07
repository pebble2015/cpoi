// Generated from /POI/java/org/apache/poi/ss/util/PaneInformation.java
#include <org/apache/poi/ss/util/PaneInformation.hpp>

org::apache::poi::ss::util::PaneInformation::PaneInformation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::PaneInformation::PaneInformation(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen) 
    : PaneInformation(*static_cast< ::default_init_tag* >(0))
{
    ctor(x,y,top,left,active,frozen);
}

constexpr int8_t org::apache::poi::ss::util::PaneInformation::PANE_LOWER_RIGHT;

constexpr int8_t org::apache::poi::ss::util::PaneInformation::PANE_UPPER_RIGHT;

constexpr int8_t org::apache::poi::ss::util::PaneInformation::PANE_LOWER_LEFT;

constexpr int8_t org::apache::poi::ss::util::PaneInformation::PANE_UPPER_LEFT;

void org::apache::poi::ss::util::PaneInformation::ctor(int16_t x, int16_t y, int16_t top, int16_t left, int8_t active, bool frozen)
{
    super::ctor();
    this->x = x;
    this->y = y;
    this->topRow = top;
    this->leftColumn = left;
    this->activePane = active;
    this->frozen = frozen;
}

int16_t org::apache::poi::ss::util::PaneInformation::getVerticalSplitPosition()
{
    return x;
}

int16_t org::apache::poi::ss::util::PaneInformation::getHorizontalSplitPosition()
{
    return y;
}

int16_t org::apache::poi::ss::util::PaneInformation::getHorizontalSplitTopRow()
{
    return topRow;
}

int16_t org::apache::poi::ss::util::PaneInformation::getVerticalSplitLeftColumn()
{
    return leftColumn;
}

int8_t org::apache::poi::ss::util::PaneInformation::getActivePane()
{
    return activePane;
}

bool org::apache::poi::ss::util::PaneInformation::isFreezePane()
{
    return frozen;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::PaneInformation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.PaneInformation", 38);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::PaneInformation::getClass0()
{
    return class_();
}

