// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util

    namespace awt
    {
        namespace event
        {
typedef ::SubArray< ::java::awt::event::ComponentListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > ComponentListenerArray;
typedef ::SubArray< ::java::awt::event::FocusListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > FocusListenerArray;
typedef ::SubArray< ::java::awt::event::HierarchyBoundsListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > HierarchyBoundsListenerArray;
typedef ::SubArray< ::java::awt::event::HierarchyListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > HierarchyListenerArray;
typedef ::SubArray< ::java::awt::event::InputMethodListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > InputMethodListenerArray;
typedef ::SubArray< ::java::awt::event::KeyListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > KeyListenerArray;
typedef ::SubArray< ::java::awt::event::MouseListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > MouseListenerArray;
typedef ::SubArray< ::java::awt::event::MouseMotionListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > MouseMotionListenerArray;
typedef ::SubArray< ::java::awt::event::MouseWheelListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > MouseWheelListenerArray;
        } // event
    } // awt

    namespace beans
    {
typedef ::SubArray< ::java::beans::PropertyChangeListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > PropertyChangeListenerArray;
    } // beans
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Component::Component(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Component::Component()
    : Component(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool& java::awt::Component::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::awt::Component::$assertionsDisabled_;
constexpr float java::awt::Component::BOTTOM_ALIGNMENT;
constexpr float java::awt::Component::CENTER_ALIGNMENT;
constexpr int32_t java::awt::Component::FOCUS_TRAVERSABLE_DEFAULT;
constexpr int32_t java::awt::Component::FOCUS_TRAVERSABLE_SET;
constexpr int32_t java::awt::Component::FOCUS_TRAVERSABLE_UNKNOWN;
constexpr float java::awt::Component::LEFT_ALIGNMENT;
java::lang::Object*& java::awt::Component::LOCK()
{
    clinit();
    return LOCK_;
}
java::lang::Object* java::awt::Component::LOCK_;
constexpr float java::awt::Component::RIGHT_ALIGNMENT;
constexpr float java::awt::Component::TOP_ALIGNMENT;
java::lang::String*& java::awt::Component::actionListenerK()
{
    clinit();
    return actionListenerK_;
}
java::lang::String* java::awt::Component::actionListenerK_;
java::lang::String*& java::awt::Component::adjustmentListenerK()
{
    clinit();
    return adjustmentListenerK_;
}
java::lang::String* java::awt::Component::adjustmentListenerK_;
java::lang::ClassArray*& java::awt::Component::coalesceEventsParams()
{
    clinit();
    return coalesceEventsParams_;
}
java::lang::ClassArray* java::awt::Component::coalesceEventsParams_;
java::util::Map*& java::awt::Component::coalesceMap()
{
    clinit();
    return coalesceMap_;
}
java::util::Map* java::awt::Component::coalesceMap_;
java::lang::String*& java::awt::Component::componentListenerK()
{
    clinit();
    return componentListenerK_;
}
java::lang::String* java::awt::Component::componentListenerK_;
java::lang::String*& java::awt::Component::containerListenerK()
{
    clinit();
    return containerListenerK_;
}
java::lang::String* java::awt::Component::containerListenerK_;
sun::util::logging::PlatformLogger*& java::awt::Component::eventLog()
{
    clinit();
    return eventLog_;
}
sun::util::logging::PlatformLogger* java::awt::Component::eventLog_;
java::lang::String*& java::awt::Component::focusListenerK()
{
    clinit();
    return focusListenerK_;
}
java::lang::String* java::awt::Component::focusListenerK_;
sun::util::logging::PlatformLogger*& java::awt::Component::focusLog()
{
    clinit();
    return focusLog_;
}
sun::util::logging::PlatformLogger* java::awt::Component::focusLog_;
java::lang::StringArray*& java::awt::Component::focusTraversalKeyPropertyNames()
{
    clinit();
    return focusTraversalKeyPropertyNames_;
}
java::lang::StringArray* java::awt::Component::focusTraversalKeyPropertyNames_;
java::lang::String*& java::awt::Component::hierarchyBoundsListenerK()
{
    clinit();
    return hierarchyBoundsListenerK_;
}
java::lang::String* java::awt::Component::hierarchyBoundsListenerK_;
java::lang::String*& java::awt::Component::hierarchyListenerK()
{
    clinit();
    return hierarchyListenerK_;
}
java::lang::String* java::awt::Component::hierarchyListenerK_;
int32_t& java::awt::Component::incRate()
{
    clinit();
    return incRate_;
}
int32_t java::awt::Component::incRate_;
java::lang::String*& java::awt::Component::inputMethodListenerK()
{
    clinit();
    return inputMethodListenerK_;
}
java::lang::String* java::awt::Component::inputMethodListenerK_;
bool& java::awt::Component::isInc()
{
    clinit();
    return isInc_;
}
bool java::awt::Component::isInc_;
java::lang::String*& java::awt::Component::itemListenerK()
{
    clinit();
    return itemListenerK_;
}
java::lang::String* java::awt::Component::itemListenerK_;
java::lang::String*& java::awt::Component::keyListenerK()
{
    clinit();
    return keyListenerK_;
}
java::lang::String* java::awt::Component::keyListenerK_;
sun::util::logging::PlatformLogger*& java::awt::Component::log()
{
    clinit();
    return log_;
}
sun::util::logging::PlatformLogger* java::awt::Component::log_;
sun::util::logging::PlatformLogger*& java::awt::Component::mixingLog()
{
    clinit();
    return mixingLog_;
}
sun::util::logging::PlatformLogger* java::awt::Component::mixingLog_;
java::lang::String*& java::awt::Component::mouseListenerK()
{
    clinit();
    return mouseListenerK_;
}
java::lang::String* java::awt::Component::mouseListenerK_;
java::lang::String*& java::awt::Component::mouseMotionListenerK()
{
    clinit();
    return mouseMotionListenerK_;
}
java::lang::String* java::awt::Component::mouseMotionListenerK_;
java::lang::String*& java::awt::Component::mouseWheelListenerK()
{
    clinit();
    return mouseWheelListenerK_;
}
java::lang::String* java::awt::Component::mouseWheelListenerK_;
java::lang::String*& java::awt::Component::ownedWindowK()
{
    clinit();
    return ownedWindowK_;
}
java::lang::String* java::awt::Component::ownedWindowK_;
sun::awt::RequestFocusController*& java::awt::Component::requestFocusController()
{
    clinit();
    return requestFocusController_;
}
sun::awt::RequestFocusController* java::awt::Component::requestFocusController_;
constexpr int64_t java::awt::Component::serialVersionUID;
java::lang::String*& java::awt::Component::textListenerK()
{
    clinit();
    return textListenerK_;
}
java::lang::String* java::awt::Component::textListenerK_;
java::lang::String*& java::awt::Component::windowFocusListenerK()
{
    clinit();
    return windowFocusListenerK_;
}
java::lang::String* java::awt::Component::windowFocusListenerK_;
java::lang::String*& java::awt::Component::windowListenerK()
{
    clinit();
    return windowListenerK_;
}
java::lang::String* java::awt::Component::windowListenerK_;
java::lang::String*& java::awt::Component::windowStateListenerK()
{
    clinit();
    return windowStateListenerK_;
}
java::lang::String* java::awt::Component::windowStateListenerK_;

void ::java::awt::Component::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component::ctor()");
}

bool java::awt::Component::action(Event* evt, ::java::lang::Object* what)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::action(Event* evt, ::java::lang::Object* what)");
    return 0;
}

void java::awt::Component::add(PopupMenu* popup)
{ /* stub */
    unimplemented_(u"void java::awt::Component::add(PopupMenu* popup)");
}

void java::awt::Component::addComponentListener(::java::awt::event::ComponentListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addComponentListener(::java::awt::event::ComponentListener* l)");
}

void java::awt::Component::addFocusListener(::java::awt::event::FocusListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addFocusListener(::java::awt::event::FocusListener* l)");
}

void java::awt::Component::addHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l)");
}

void java::awt::Component::addHierarchyListener(::java::awt::event::HierarchyListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addHierarchyListener(::java::awt::event::HierarchyListener* l)");
}

void java::awt::Component::addInputMethodListener(::java::awt::event::InputMethodListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addInputMethodListener(::java::awt::event::InputMethodListener* l)");
}

void java::awt::Component::addKeyListener(::java::awt::event::KeyListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addKeyListener(::java::awt::event::KeyListener* l)");
}

void java::awt::Component::addMouseListener(::java::awt::event::MouseListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addMouseListener(::java::awt::event::MouseListener* l)");
}

void java::awt::Component::addMouseMotionListener(::java::awt::event::MouseMotionListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addMouseMotionListener(::java::awt::event::MouseMotionListener* l)");
}

void java::awt::Component::addMouseWheelListener(::java::awt::event::MouseWheelListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addMouseWheelListener(::java::awt::event::MouseWheelListener* l)");
}

void java::awt::Component::addNotify()
{ /* stub */
    unimplemented_(u"void java::awt::Component::addNotify()");
}

void java::awt::Component::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Component::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Component::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Component::adjustListeningChildrenOnParent(int64_t mask, int32_t num)
{ /* stub */
    unimplemented_(u"void java::awt::Component::adjustListeningChildrenOnParent(int64_t mask, int32_t num)");
}

void java::awt::Component::applyComponentOrientation(ComponentOrientation* orientation)
{ /* stub */
    unimplemented_(u"void java::awt::Component::applyComponentOrientation(ComponentOrientation* orientation)");
}

void java::awt::Component::applyCompoundShape(::sun::java2d::pipe::Region* shape)
{ /* stub */
    unimplemented_(u"void java::awt::Component::applyCompoundShape(::sun::java2d::pipe::Region* shape)");
}

void java::awt::Component::applyCurrentShape()
{ /* stub */
    unimplemented_(u"void java::awt::Component::applyCurrentShape()");
}

/* private: void java::awt::Component::applyCurrentShapeBelowMe() */
bool java::awt::Component::areBoundsValid()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::areBoundsValid()");
    return 0;
}

bool java::awt::Component::areFocusTraversalKeysSet(int32_t id)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::areFocusTraversalKeysSet(int32_t id)");
    return 0;
}

bool java::awt::Component::areInputMethodsEnabled()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::areInputMethodsEnabled()");
    return 0;
}

void java::awt::Component::autoProcessMouseWheel(::java::awt::event::MouseWheelEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::autoProcessMouseWheel(::java::awt::event::MouseWheelEvent* e)");
}

java::awt::Rectangle* java::awt::Component::bounds()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Component::bounds()");
    return 0;
}

/* private: sun::java2d::pipe::Region* java::awt::Component::calculateCurrentShape() */
bool java::awt::Component::canBeFocusOwner()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::canBeFocusOwner()");
    return 0;
}

bool java::awt::Component::canBeFocusOwnerRecursively()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::canBeFocusOwnerRecursively()");
    return 0;
}

/* private: bool java::awt::Component::checkCoalescing() */
void java::awt::Component::checkGD(::java::lang::String* stringID)
{ /* stub */
    unimplemented_(u"void java::awt::Component::checkGD(::java::lang::String* stringID)");
}

int32_t java::awt::Component::checkImage(Image* image, ::java::awt::image::ImageObserver* observer)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::checkImage(Image* image, ::java::awt::image::ImageObserver* observer)");
    return 0;
}

int32_t java::awt::Component::checkImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::checkImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)");
    return 0;
}

void java::awt::Component::checkTreeLock()
{ /* stub */
    unimplemented_(u"void java::awt::Component::checkTreeLock()");
}

bool java::awt::Component::checkWindowClosingException()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::checkWindowClosingException()");
    return 0;
}

void java::awt::Component::clearCurrentFocusCycleRootOnHide()
{ /* stub */
    unimplemented_(u"void java::awt::Component::clearCurrentFocusCycleRootOnHide()");
}

void java::awt::Component::clearMostRecentFocusOwnerOnHide()
{ /* stub */
    unimplemented_(u"void java::awt::Component::clearMostRecentFocusOwnerOnHide()");
}

java::awt::AWTEvent* java::awt::Component::coalesceEvents(AWTEvent* existingEvent, AWTEvent* newEvent)
{ /* stub */
    unimplemented_(u"java::awt::AWTEvent* java::awt::Component::coalesceEvents(AWTEvent* existingEvent, AWTEvent* newEvent)");
    return 0;
}

java::lang::String* java::awt::Component::constructComponentName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Component::constructComponentName()");
    return 0;
}

bool java::awt::Component::contains(Point* p)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::contains(Point* p)");
    return 0;
}

bool java::awt::Component::contains(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::contains(int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::containsFocus()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::containsFocus()");
    return 0;
}

int32_t java::awt::Component::countHierarchyMembers()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::countHierarchyMembers()");
    return 0;
}

void java::awt::Component::createBufferStrategy(int32_t numBuffers)
{ /* stub */
    unimplemented_(u"void java::awt::Component::createBufferStrategy(int32_t numBuffers)");
}

void java::awt::Component::createBufferStrategy(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    unimplemented_(u"void java::awt::Component::createBufferStrategy(int32_t numBuffers, BufferCapabilities* caps)");
}

int32_t java::awt::Component::createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit)");
    return 0;
}

java::awt::Image* java::awt::Component::createImage(::java::awt::image::ImageProducer* producer)
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Component::createImage(::java::awt::image::ImageProducer* producer)");
    return 0;
}

java::awt::Image* java::awt::Component::createImage(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Component::createImage(int32_t width, int32_t height)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::Component::createVolatileImage(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::Component::createVolatileImage(int32_t width, int32_t height)");
    return 0;
}

java::awt::image::VolatileImage* java::awt::Component::createVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps)
{ /* stub */
    unimplemented_(u"java::awt::image::VolatileImage* java::awt::Component::createVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps)");
    return 0;
}

void java::awt::Component::deliverEvent(Event* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::deliverEvent(Event* e)");
}

void java::awt::Component::disable()
{ /* stub */
    unimplemented_(u"void java::awt::Component::disable()");
}

void java::awt::Component::disableEvents(int64_t eventsToDisable)
{ /* stub */
    unimplemented_(u"void java::awt::Component::disableEvents(int64_t eventsToDisable)");
}

void java::awt::Component::dispatchEvent(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::dispatchEvent(AWTEvent* e)");
}

void java::awt::Component::dispatchEventImpl(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::dispatchEventImpl(AWTEvent* e)");
}

bool java::awt::Component::dispatchMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::dispatchMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e)");
    return 0;
}

void java::awt::Component::doLayout()
{ /* stub */
    unimplemented_(u"void java::awt::Component::doLayout()");
}

/* private: void java::awt::Component::doSwingSerialization() */
void java::awt::Component::enable()
{ /* stub */
    unimplemented_(u"void java::awt::Component::enable()");
}

void java::awt::Component::enable(bool b)
{ /* stub */
    unimplemented_(u"void java::awt::Component::enable(bool b)");
}

void java::awt::Component::enableEvents(int64_t eventsToEnable)
{ /* stub */
    unimplemented_(u"void java::awt::Component::enableEvents(int64_t eventsToEnable)");
}

void java::awt::Component::enableInputMethods(bool enable)
{ /* stub */
    unimplemented_(u"void java::awt::Component::enableInputMethods(bool enable)");
}

bool java::awt::Component::eventEnabled(AWTEvent* e)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::eventEnabled(AWTEvent* e)");
    return 0;
}

bool java::awt::Component::eventTypeEnabled(int32_t type)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::eventTypeEnabled(int32_t type)");
    return 0;
}

java::awt::Component* java::awt::Component::findUnderMouseInWindow(PointerInfo* pi)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Component::findUnderMouseInWindow(PointerInfo* pi)");
    return 0;
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int8_t oldValue, int8_t newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int8_t oldValue, int8_t newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int16_t oldValue, int16_t newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int16_t oldValue, int16_t newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int64_t oldValue, int64_t newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, int64_t oldValue, int64_t newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, float oldValue, float newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, float oldValue, float newValue)");
}

void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, double oldValue, double newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Component::firePropertyChange(::java::lang::String* propertyName, double oldValue, double newValue)");
}

java::security::AccessControlContext* java::awt::Component::getAccessControlContext()
{ /* stub */
    unimplemented_(u"java::security::AccessControlContext* java::awt::Component::getAccessControlContext()");
    return 0;
}

javax::accessibility::AccessibleContext* java::awt::Component::getAccessibleContext()
{ /* stub */
return accessibleContext ; /* getter */
}

int32_t java::awt::Component::getAccessibleIndexInParent()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::getAccessibleIndexInParent()");
    return 0;
}

javax::accessibility::AccessibleStateSet* java::awt::Component::getAccessibleStateSet()
{ /* stub */
    unimplemented_(u"javax::accessibility::AccessibleStateSet* java::awt::Component::getAccessibleStateSet()");
    return 0;
}

float java::awt::Component::getAlignmentX()
{ /* stub */
    unimplemented_(u"float java::awt::Component::getAlignmentX()");
    return 0;
}

float java::awt::Component::getAlignmentY()
{ /* stub */
    unimplemented_(u"float java::awt::Component::getAlignmentY()");
    return 0;
}

/* private: sun::java2d::pipe::Region* java::awt::Component::getAppliedShape() */
java::awt::Image* java::awt::Component::getBackBuffer()
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Component::getBackBuffer()");
    return 0;
}

java::awt::Color* java::awt::Component::getBackground()
{ /* stub */
return background ; /* getter */
}

int32_t java::awt::Component::getBaseline(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::getBaseline(int32_t width, int32_t height)");
    return 0;
}

java::awt::Component_BaselineResizeBehavior* java::awt::Component::getBaselineResizeBehavior()
{ /* stub */
    unimplemented_(u"java::awt::Component_BaselineResizeBehavior* java::awt::Component::getBaselineResizeBehavior()");
    return 0;
}

java::awt::Rectangle* java::awt::Component::getBounds()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Component::getBounds()");
    return 0;
}

java::awt::Rectangle* java::awt::Component::getBounds(Rectangle* rv)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Component::getBounds(Rectangle* rv)");
    return 0;
}

int32_t java::awt::Component::getBoundsOp()
{ /* stub */
return boundsOp ; /* getter */
}

java::awt::image::BufferStrategy* java::awt::Component::getBufferStrategy()
{ /* stub */
return bufferStrategy ; /* getter */
}

java::awt::image::ColorModel* java::awt::Component::getColorModel()
{ /* stub */
    unimplemented_(u"java::awt::image::ColorModel* java::awt::Component::getColorModel()");
    return 0;
}

java::awt::Component* java::awt::Component::getComponentAt(Point* p)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Component::getComponentAt(Point* p)");
    return 0;
}

java::awt::Component* java::awt::Component::getComponentAt(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Component::getComponentAt(int32_t x, int32_t y)");
    return 0;
}

java::awt::event::ComponentListenerArray* java::awt::Component::getComponentListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::ComponentListenerArray* java::awt::Component::getComponentListeners()");
    return 0;
}

java::awt::ComponentOrientation* java::awt::Component::getComponentOrientation()
{ /* stub */
return componentOrientation ; /* getter */
}

java::awt::Container* java::awt::Component::getContainer()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Component::getContainer()");
    return 0;
}

java::awt::Window* java::awt::Component::getContainingWindow()
{ /* stub */
    unimplemented_(u"java::awt::Window* java::awt::Component::getContainingWindow()");
    return 0;
}

java::awt::Cursor* java::awt::Component::getCursor()
{ /* stub */
return cursor ; /* getter */
}

java::awt::Cursor* java::awt::Component::getCursor_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::Cursor* java::awt::Component::getCursor_NoClientCode()");
    return 0;
}

java::awt::dnd::DropTarget* java::awt::Component::getDropTarget()
{ /* stub */
return dropTarget ; /* getter */
}

java::awt::Container* java::awt::Component::getFocusCycleRootAncestor()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Component::getFocusCycleRootAncestor()");
    return 0;
}

java::awt::event::FocusListenerArray* java::awt::Component::getFocusListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::FocusListenerArray* java::awt::Component::getFocusListeners()");
    return 0;
}

java::util::Set* java::awt::Component::getFocusTraversalKeys(int32_t id)
{ /* stub */
}

bool java::awt::Component::getFocusTraversalKeysEnabled()
{ /* stub */
return focusTraversalKeysEnabled ; /* getter */
}

java::util::Set* java::awt::Component::getFocusTraversalKeys_NoIDCheck(int32_t id)
{ /* stub */
    unimplemented_(u"java::util::Set* java::awt::Component::getFocusTraversalKeys_NoIDCheck(int32_t id)");
    return 0;
}

java::awt::Font* java::awt::Component::getFont()
{ /* stub */
return font ; /* getter */
}

java::awt::FontMetrics* java::awt::Component::getFontMetrics(Font* font)
{ /* stub */
    unimplemented_(u"java::awt::FontMetrics* java::awt::Component::getFontMetrics(Font* font)");
    return 0;
}

java::awt::Font* java::awt::Component::getFont_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Component::getFont_NoClientCode()");
    return 0;
}

java::awt::Color* java::awt::Component::getForeground()
{ /* stub */
return foreground ; /* getter */
}

java::awt::Graphics* java::awt::Component::getGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Component::getGraphics()");
    return 0;
}

java::awt::GraphicsConfiguration* java::awt::Component::getGraphicsConfiguration()
{ /* stub */
    unimplemented_(u"java::awt::GraphicsConfiguration* java::awt::Component::getGraphicsConfiguration()");
    return 0;
}

java::awt::GraphicsConfiguration* java::awt::Component::getGraphicsConfiguration_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::GraphicsConfiguration* java::awt::Component::getGraphicsConfiguration_NoClientCode()");
    return 0;
}

java::awt::Graphics* java::awt::Component::getGraphics_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Component::getGraphics_NoClientCode()");
    return 0;
}

java::awt::peer::ComponentPeer* java::awt::Component::getHWPeerAboveMe()
{ /* stub */
    unimplemented_(u"java::awt::peer::ComponentPeer* java::awt::Component::getHWPeerAboveMe()");
    return 0;
}

int32_t java::awt::Component::getHeight()
{ /* stub */
return height ; /* getter */
}

java::awt::event::HierarchyBoundsListenerArray* java::awt::Component::getHierarchyBoundsListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::HierarchyBoundsListenerArray* java::awt::Component::getHierarchyBoundsListeners()");
    return 0;
}

java::awt::event::HierarchyListenerArray* java::awt::Component::getHierarchyListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::HierarchyListenerArray* java::awt::Component::getHierarchyListeners()");
    return 0;
}

bool java::awt::Component::getIgnoreRepaint()
{ /* stub */
return ignoreRepaint ; /* getter */
}

java::awt::im::InputContext* java::awt::Component::getInputContext()
{ /* stub */
    unimplemented_(u"java::awt::im::InputContext* java::awt::Component::getInputContext()");
    return 0;
}

java::awt::event::InputMethodListenerArray* java::awt::Component::getInputMethodListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::InputMethodListenerArray* java::awt::Component::getInputMethodListeners()");
    return 0;
}

java::awt::im::InputMethodRequests* java::awt::Component::getInputMethodRequests()
{ /* stub */
    unimplemented_(u"java::awt::im::InputMethodRequests* java::awt::Component::getInputMethodRequests()");
    return 0;
}

/* private: java::awt::Insets* java::awt::Component::getInsets_NoClientCode() */
java::awt::event::KeyListenerArray* java::awt::Component::getKeyListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::KeyListenerArray* java::awt::Component::getKeyListeners()");
    return 0;
}

java::util::EventListenerArray* java::awt::Component::getListeners(::java::lang::Class* listenerType)
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* java::awt::Component::getListeners(::java::lang::Class* listenerType)");
    return 0;
}

java::util::Locale* java::awt::Component::getLocale()
{ /* stub */
return locale ; /* getter */
}

java::awt::Point* java::awt::Component::getLocation()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getLocation()");
    return 0;
}

java::awt::Point* java::awt::Component::getLocation(Point* rv)
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getLocation(Point* rv)");
    return 0;
}

java::awt::Point* java::awt::Component::getLocationOnScreen()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getLocationOnScreen()");
    return 0;
}

java::awt::Point* java::awt::Component::getLocationOnScreen_NoTreeLock()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getLocationOnScreen_NoTreeLock()");
    return 0;
}

java::awt::Point* java::awt::Component::getLocationOnWindow()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getLocationOnWindow()");
    return 0;
}

java::awt::Dimension* java::awt::Component::getMaximumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::getMaximumSize()");
    return 0;
}

java::awt::Dimension* java::awt::Component::getMinimumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::getMinimumSize()");
    return 0;
}

java::awt::event::MouseListenerArray* java::awt::Component::getMouseListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::MouseListenerArray* java::awt::Component::getMouseListeners()");
    return 0;
}

java::awt::event::MouseMotionListenerArray* java::awt::Component::getMouseMotionListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::MouseMotionListenerArray* java::awt::Component::getMouseMotionListeners()");
    return 0;
}

java::awt::Point* java::awt::Component::getMousePosition()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::getMousePosition()");
    return 0;
}

java::awt::event::MouseWheelListenerArray* java::awt::Component::getMouseWheelListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::MouseWheelListenerArray* java::awt::Component::getMouseWheelListeners()");
    return 0;
}

java::lang::String* java::awt::Component::getName()
{ /* stub */
return name ; /* getter */
}

java::awt::Container* java::awt::Component::getNativeContainer()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Component::getNativeContainer()");
    return 0;
}

java::awt::Component* java::awt::Component::getNextFocusCandidate()
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Component::getNextFocusCandidate()");
    return 0;
}

sun::java2d::pipe::Region* java::awt::Component::getNormalShape()
{ /* stub */
    unimplemented_(u"sun::java2d::pipe::Region* java::awt::Component::getNormalShape()");
    return 0;
}

java::lang::Object* java::awt::Component::getObjectLock()
{ /* stub */
return objectLock ; /* getter */
}

sun::java2d::pipe::Region* java::awt::Component::getOpaqueShape()
{ /* stub */
    unimplemented_(u"sun::java2d::pipe::Region* java::awt::Component::getOpaqueShape()");
    return 0;
}

java::awt::Container* java::awt::Component::getParent()
{ /* stub */
return parent ; /* getter */
}

java::awt::Container* java::awt::Component::getParent_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Component::getParent_NoClientCode()");
    return 0;
}

java::awt::peer::ComponentPeer* java::awt::Component::getPeer()
{ /* stub */
return peer ; /* getter */
}

java::awt::Dimension* java::awt::Component::getPreferredSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::getPreferredSize()");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::awt::Component::getPropertyChangeListeners()
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Component::getPropertyChangeListeners()");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::awt::Component::getPropertyChangeListeners(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Component::getPropertyChangeListeners(::java::lang::String* propertyName)");
    return 0;
}

/* private: java::awt::Rectangle* java::awt::Component::getRecursivelyVisibleBounds() */
int32_t java::awt::Component::getSiblingIndexAbove()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::getSiblingIndexAbove()");
    return 0;
}

int32_t java::awt::Component::getSiblingIndexBelow()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::getSiblingIndexBelow()");
    return 0;
}

java::awt::Dimension* java::awt::Component::getSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::getSize()");
    return 0;
}

java::awt::Dimension* java::awt::Component::getSize(Dimension* rv)
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::getSize(Dimension* rv)");
    return 0;
}

java::awt::Toolkit* java::awt::Component::getToolkit()
{ /* stub */
    unimplemented_(u"java::awt::Toolkit* java::awt::Component::getToolkit()");
    return 0;
}

java::awt::Toolkit* java::awt::Component::getToolkitImpl()
{ /* stub */
    unimplemented_(u"java::awt::Toolkit* java::awt::Component::getToolkitImpl()");
    return 0;
}

java::awt::Container* java::awt::Component::getTraversalRoot()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Component::getTraversalRoot()");
    return 0;
}

java::lang::Object* java::awt::Component::getTreeLock()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::Component::getTreeLock()");
    return 0;
}

int32_t java::awt::Component::getWidth()
{ /* stub */
return width ; /* getter */
}

int32_t java::awt::Component::getX()
{ /* stub */
return x ; /* getter */
}

int32_t java::awt::Component::getY()
{ /* stub */
return y ; /* getter */
}

bool java::awt::Component::gotFocus(Event* evt, ::java::lang::Object* what)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::gotFocus(Event* evt, ::java::lang::Object* what)");
    return 0;
}

bool java::awt::Component::handleEvent(Event* evt)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::handleEvent(Event* evt)");
    return 0;
}

bool java::awt::Component::hasFocus()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::hasFocus()");
    return 0;
}

void java::awt::Component::hide()
{ /* stub */
    unimplemented_(u"void java::awt::Component::hide()");
}

bool java::awt::Component::imageUpdate(Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::imageUpdate(Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h)");
    return 0;
}

void java::awt::Component::initializeFocusTraversalKeys()
{ /* stub */
    unimplemented_(u"void java::awt::Component::initializeFocusTraversalKeys()");
}

bool java::awt::Component::inside(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::inside(int32_t x, int32_t y)");
    return 0;
}

void java::awt::Component::invalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Component::invalidate()");
}

void java::awt::Component::invalidateIfValid()
{ /* stub */
    unimplemented_(u"void java::awt::Component::invalidateIfValid()");
}

void java::awt::Component::invalidateParent()
{ /* stub */
    unimplemented_(u"void java::awt::Component::invalidateParent()");
}

bool java::awt::Component::isAutoFocusTransferOnDisposal()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isAutoFocusTransferOnDisposal()");
    return 0;
}

bool java::awt::Component::isBackgroundSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isBackgroundSet()");
    return 0;
}

/* private: bool java::awt::Component::isCoalesceEventsOverriden(::java::lang::Class* clazz) */
bool java::awt::Component::isCoalescingEnabled()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isCoalescingEnabled()");
    return 0;
}

bool java::awt::Component::isCursorSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isCursorSet()");
    return 0;
}

bool java::awt::Component::isDisplayable()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isDisplayable()");
    return 0;
}

bool java::awt::Component::isDoubleBuffered()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isDoubleBuffered()");
    return 0;
}

bool java::awt::Component::isEnabled()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isEnabled()");
    return 0;
}

bool java::awt::Component::isEnabledImpl()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isEnabledImpl()");
    return 0;
}

bool java::awt::Component::isFocusCycleRoot(Container* container)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFocusCycleRoot(Container* container)");
    return 0;
}

bool java::awt::Component::isFocusOwner()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFocusOwner()");
    return 0;
}

bool java::awt::Component::isFocusTraversable()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFocusTraversable()");
    return 0;
}

bool java::awt::Component::isFocusTraversableOverridden()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFocusTraversableOverridden()");
    return 0;
}

bool java::awt::Component::isFocusable()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFocusable()");
    return 0;
}

bool java::awt::Component::isFontSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isFontSet()");
    return 0;
}

bool java::awt::Component::isForegroundSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isForegroundSet()");
    return 0;
}

bool java::awt::Component::isInstanceOf(::java::lang::Object* obj, ::java::lang::String* className)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::Component::isInstanceOf(::java::lang::Object* obj, ::java::lang::String* className)");
    return 0;
}

bool java::awt::Component::isLightweight()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isLightweight()");
    return 0;
}

bool java::awt::Component::isMaximumSizeSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isMaximumSizeSet()");
    return 0;
}

bool java::awt::Component::isMinimumSizeSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isMinimumSizeSet()");
    return 0;
}

bool java::awt::Component::isMixingNeeded()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isMixingNeeded()");
    return 0;
}

bool java::awt::Component::isNonOpaqueForMixing()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isNonOpaqueForMixing()");
    return 0;
}

bool java::awt::Component::isOpaque()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isOpaque()");
    return 0;
}

bool java::awt::Component::isPreferredSizeSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isPreferredSizeSet()");
    return 0;
}

bool java::awt::Component::isRecursivelyVisible()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isRecursivelyVisible()");
    return 0;
}

/* private: bool java::awt::Component::isRequestFocusAccepted(bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause) */
bool java::awt::Component::isSameOrAncestorOf(Component* comp, bool allowChildren)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isSameOrAncestorOf(Component* comp, bool allowChildren)");
    return 0;
}

bool java::awt::Component::isShowing()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isShowing()");
    return 0;
}

bool java::awt::Component::isValid()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isValid()");
    return 0;
}

bool java::awt::Component::isVisible()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isVisible()");
    return 0;
}

bool java::awt::Component::isVisible_NoClientCode()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::isVisible_NoClientCode()");
    return 0;
}

bool java::awt::Component::keyDown(Event* evt, int32_t key)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::keyDown(Event* evt, int32_t key)");
    return 0;
}

bool java::awt::Component::keyUp(Event* evt, int32_t key)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::keyUp(Event* evt, int32_t key)");
    return 0;
}

void java::awt::Component::layout()
{ /* stub */
    unimplemented_(u"void java::awt::Component::layout()");
}

void java::awt::Component::lightweightPaint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::lightweightPaint(Graphics* g)");
}

void java::awt::Component::lightweightPrint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::lightweightPrint(Graphics* g)");
}

void java::awt::Component::list()
{ /* stub */
    unimplemented_(u"void java::awt::Component::list()");
}

void java::awt::Component::list(::java::io::PrintStream* out)
{ /* stub */
    unimplemented_(u"void java::awt::Component::list(::java::io::PrintStream* out)");
}

void java::awt::Component::list(::java::io::PrintWriter* out)
{ /* stub */
    unimplemented_(u"void java::awt::Component::list(::java::io::PrintWriter* out)");
}

void java::awt::Component::list(::java::io::PrintStream* out, int32_t indent)
{ /* stub */
    unimplemented_(u"void java::awt::Component::list(::java::io::PrintStream* out, int32_t indent)");
}

void java::awt::Component::list(::java::io::PrintWriter* out, int32_t indent)
{ /* stub */
    unimplemented_(u"void java::awt::Component::list(::java::io::PrintWriter* out, int32_t indent)");
}

java::awt::Component* java::awt::Component::locate(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Component::locate(int32_t x, int32_t y)");
    return 0;
}

java::awt::Point* java::awt::Component::location()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::location()");
    return 0;
}

/* private: java::awt::Point* java::awt::Component::location_NoClientCode() */
bool java::awt::Component::lostFocus(Event* evt, ::java::lang::Object* what)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::lostFocus(Event* evt, ::java::lang::Object* what)");
    return 0;
}

java::awt::Dimension* java::awt::Component::minimumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::minimumSize()");
    return 0;
}

void java::awt::Component::mixOnHiding(bool isLightweight)
{ /* stub */
    unimplemented_(u"void java::awt::Component::mixOnHiding(bool isLightweight)");
}

void java::awt::Component::mixOnReshaping()
{ /* stub */
    unimplemented_(u"void java::awt::Component::mixOnReshaping()");
}

void java::awt::Component::mixOnShowing()
{ /* stub */
    unimplemented_(u"void java::awt::Component::mixOnShowing()");
}

void java::awt::Component::mixOnValidating()
{ /* stub */
    unimplemented_(u"void java::awt::Component::mixOnValidating()");
}

void java::awt::Component::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Component::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder)");
}

bool java::awt::Component::mouseDown(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseDown(Event* evt, int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::mouseDrag(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseDrag(Event* evt, int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::mouseEnter(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseEnter(Event* evt, int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::mouseExit(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseExit(Event* evt, int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::mouseMove(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseMove(Event* evt, int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Component::mouseUp(Event* evt, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::mouseUp(Event* evt, int32_t x, int32_t y)");
    return 0;
}

void java::awt::Component::move(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Component::move(int32_t x, int32_t y)");
}

void java::awt::Component::nextFocus()
{ /* stub */
    unimplemented_(u"void java::awt::Component::nextFocus()");
}

/* private: void java::awt::Component::notifyNewBounds(bool resized, bool moved) */
int32_t java::awt::Component::numListening(int64_t mask)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Component::numListening(int64_t mask)");
    return 0;
}

void java::awt::Component::paint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::paint(Graphics* g)");
}

void java::awt::Component::paintAll(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::paintAll(Graphics* g)");
}

void java::awt::Component::paintHeavyweightComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::paintHeavyweightComponents(Graphics* g)");
}

java::lang::String* java::awt::Component::paramString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Component::paramString()");
    return 0;
}

java::awt::Point* java::awt::Component::pointRelativeToComponent(Point* absolute)
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Component::pointRelativeToComponent(Point* absolute)");
    return 0;
}

bool java::awt::Component::postEvent(Event* e)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::postEvent(Event* e)");
    return 0;
}

bool java::awt::Component::postsOldMouseEvents()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::postsOldMouseEvents()");
    return 0;
}

java::awt::Dimension* java::awt::Component::preferredSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::preferredSize()");
    return 0;
}

bool java::awt::Component::prepareImage(Image* image, ::java::awt::image::ImageObserver* observer)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::prepareImage(Image* image, ::java::awt::image::ImageObserver* observer)");
    return 0;
}

bool java::awt::Component::prepareImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::prepareImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)");
    return 0;
}

void java::awt::Component::print(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::print(Graphics* g)");
}

void java::awt::Component::printAll(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::printAll(Graphics* g)");
}

void java::awt::Component::printHeavyweightComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::printHeavyweightComponents(Graphics* g)");
}

void java::awt::Component::processComponentEvent(::java::awt::event::ComponentEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processComponentEvent(::java::awt::event::ComponentEvent* e)");
}

void java::awt::Component::processEvent(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processEvent(AWTEvent* e)");
}

void java::awt::Component::processFocusEvent(::java::awt::event::FocusEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processFocusEvent(::java::awt::event::FocusEvent* e)");
}

void java::awt::Component::processHierarchyBoundsEvent(::java::awt::event::HierarchyEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processHierarchyBoundsEvent(::java::awt::event::HierarchyEvent* e)");
}

void java::awt::Component::processHierarchyEvent(::java::awt::event::HierarchyEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processHierarchyEvent(::java::awt::event::HierarchyEvent* e)");
}

void java::awt::Component::processInputMethodEvent(::java::awt::event::InputMethodEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processInputMethodEvent(::java::awt::event::InputMethodEvent* e)");
}

void java::awt::Component::processKeyEvent(::java::awt::event::KeyEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processKeyEvent(::java::awt::event::KeyEvent* e)");
}

void java::awt::Component::processMouseEvent(::java::awt::event::MouseEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processMouseEvent(::java::awt::event::MouseEvent* e)");
}

void java::awt::Component::processMouseMotionEvent(::java::awt::event::MouseEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processMouseMotionEvent(::java::awt::event::MouseEvent* e)");
}

void java::awt::Component::processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Component::processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e)");
}

/* private: void java::awt::Component::readObject(::java::io::ObjectInputStream* s) */
void java::awt::Component::relocateComponent()
{ /* stub */
    unimplemented_(u"void java::awt::Component::relocateComponent()");
}

void java::awt::Component::remove(MenuComponent* popup)
{ /* stub */
    unimplemented_(u"void java::awt::Component::remove(MenuComponent* popup)");
}

void java::awt::Component::removeComponentListener(::java::awt::event::ComponentListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeComponentListener(::java::awt::event::ComponentListener* l)");
}

void java::awt::Component::removeFocusListener(::java::awt::event::FocusListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeFocusListener(::java::awt::event::FocusListener* l)");
}

void java::awt::Component::removeHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l)");
}

void java::awt::Component::removeHierarchyListener(::java::awt::event::HierarchyListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeHierarchyListener(::java::awt::event::HierarchyListener* l)");
}

void java::awt::Component::removeInputMethodListener(::java::awt::event::InputMethodListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeInputMethodListener(::java::awt::event::InputMethodListener* l)");
}

void java::awt::Component::removeKeyListener(::java::awt::event::KeyListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeKeyListener(::java::awt::event::KeyListener* l)");
}

void java::awt::Component::removeMouseListener(::java::awt::event::MouseListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeMouseListener(::java::awt::event::MouseListener* l)");
}

void java::awt::Component::removeMouseMotionListener(::java::awt::event::MouseMotionListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeMouseMotionListener(::java::awt::event::MouseMotionListener* l)");
}

void java::awt::Component::removeMouseWheelListener(::java::awt::event::MouseWheelListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeMouseWheelListener(::java::awt::event::MouseWheelListener* l)");
}

void java::awt::Component::removeNotify()
{ /* stub */
    unimplemented_(u"void java::awt::Component::removeNotify()");
}

void java::awt::Component::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Component::removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Component::removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Component::repaint()
{ /* stub */
    unimplemented_(u"void java::awt::Component::repaint()");
}

void java::awt::Component::repaint(int64_t tm)
{ /* stub */
    unimplemented_(u"void java::awt::Component::repaint(int64_t tm)");
}

void java::awt::Component::repaint(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::repaint(int32_t x, int32_t y, int32_t width, int32_t height)");
}

void java::awt::Component::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height)");
}

/* private: void java::awt::Component::repaintParentIfNeeded(int32_t oldX, int32_t oldY, int32_t oldWidth, int32_t oldHeight) */
void java::awt::Component::requestFocus()
{ /* stub */
    unimplemented_(u"void java::awt::Component::requestFocus()");
}

bool java::awt::Component::requestFocus(::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocus(::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

bool java::awt::Component::requestFocus(bool temporary)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocus(bool temporary)");
    return 0;
}

bool java::awt::Component::requestFocus(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocus(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

bool java::awt::Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed)");
    return 0;
}

bool java::awt::Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

bool java::awt::Component::requestFocusInWindow()
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusInWindow()");
    return 0;
}

bool java::awt::Component::requestFocusInWindow(::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusInWindow(::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

bool java::awt::Component::requestFocusInWindow(bool temporary)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusInWindow(bool temporary)");
    return 0;
}

bool java::awt::Component::requestFocusInWindow(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::requestFocusInWindow(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

void java::awt::Component::reshape(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::reshape(int32_t x, int32_t y, int32_t width, int32_t height)");
}

/* private: void java::awt::Component::reshapeNativePeer(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) */
void java::awt::Component::resize(Dimension* d)
{ /* stub */
    unimplemented_(u"void java::awt::Component::resize(Dimension* d)");
}

void java::awt::Component::resize(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::resize(int32_t width, int32_t height)");
}

void java::awt::Component::revalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Component::revalidate()");
}

void java::awt::Component::revalidateSynchronously()
{ /* stub */
    unimplemented_(u"void java::awt::Component::revalidateSynchronously()");
}

void java::awt::Component::setAutoFocusTransferOnDisposal(bool value)
{ /* stub */
    this->autoFocusTransferOnDisposal = value; /* setter */
}

void java::awt::Component::setBackground(Color* c)
{ /* stub */
    this->background = c; /* setter */
}

void java::awt::Component::setBounds(Rectangle* r)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setBounds(Rectangle* r)");
}

void java::awt::Component::setBounds(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setBounds(int32_t x, int32_t y, int32_t width, int32_t height)");
}

void java::awt::Component::setBoundsOp(int32_t op)
{ /* stub */
    this->boundsOp = op; /* setter */
}

void java::awt::Component::setComponentOrientation(ComponentOrientation* o)
{ /* stub */
    this->componentOrientation = o; /* setter */
}

void java::awt::Component::setCursor(Cursor* cursor)
{ /* stub */
    this->cursor = cursor; /* setter */
}

void java::awt::Component::setDropTarget(::java::awt::dnd::DropTarget* dt)
{ /* stub */
    this->dropTarget = dt; /* setter */
}

void java::awt::Component::setEnabled(bool b)
{ /* stub */
    this->enabled = b; /* setter */
}

void java::awt::Component::setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes)
{ /* stub */
}

void java::awt::Component::setFocusTraversalKeysEnabled(bool focusTraversalKeysEnabled)
{ /* stub */
    this->focusTraversalKeysEnabled = focusTraversalKeysEnabled; /* setter */
}

void java::awt::Component::setFocusTraversalKeys_NoIDCheck(int32_t id, ::java::util::Set* keystrokes)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setFocusTraversalKeys_NoIDCheck(int32_t id, ::java::util::Set* keystrokes)");
}

void java::awt::Component::setFocusable(bool focusable)
{ /* stub */
    this->focusable = focusable; /* setter */
}

void java::awt::Component::setFont(Font* f)
{ /* stub */
    this->font = f; /* setter */
}

void java::awt::Component::setForeground(Color* c)
{ /* stub */
    this->foreground = c; /* setter */
}

void java::awt::Component::setGraphicsConfiguration(GraphicsConfiguration* gc)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setGraphicsConfiguration(GraphicsConfiguration* gc)");
}

void java::awt::Component::setIgnoreRepaint(bool ignoreRepaint)
{ /* stub */
    this->ignoreRepaint = ignoreRepaint; /* setter */
}

void java::awt::Component::setLocale(::java::util::Locale* l)
{ /* stub */
    this->locale = l; /* setter */
}

void java::awt::Component::setLocation(Point* p)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setLocation(Point* p)");
}

void java::awt::Component::setLocation(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setLocation(int32_t x, int32_t y)");
}

void java::awt::Component::setMaximumSize(Dimension* maximumSize)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setMaximumSize(Dimension* maximumSize)");
}

void java::awt::Component::setMinimumSize(Dimension* minimumSize)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setMinimumSize(Dimension* minimumSize)");
}

void java::awt::Component::setName(::java::lang::String* name)
{ /* stub */
    this->name = name; /* setter */
}

void java::awt::Component::setPreferredSize(Dimension* preferredSize)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setPreferredSize(Dimension* preferredSize)");
}

void java::awt::Component::setRequestFocusController(::sun::awt::RequestFocusController* requestController)
{ /* stub */
    clinit();
    Component::requestFocusController() = requestController; /* setter */
}

void java::awt::Component::setSize(Dimension* d)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setSize(Dimension* d)");
}

void java::awt::Component::setSize(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Component::setSize(int32_t width, int32_t height)");
}

void java::awt::Component::setVisible(bool b)
{ /* stub */
    this->visible = b; /* setter */
}

void java::awt::Component::show()
{ /* stub */
    unimplemented_(u"void java::awt::Component::show()");
}

void java::awt::Component::show(bool b)
{ /* stub */
    unimplemented_(u"void java::awt::Component::show(bool b)");
}

java::awt::Dimension* java::awt::Component::size()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Component::size()");
    return 0;
}

void java::awt::Component::subtractAndApplyShape(::sun::java2d::pipe::Region* s)
{ /* stub */
    unimplemented_(u"void java::awt::Component::subtractAndApplyShape(::sun::java2d::pipe::Region* s)");
}

void java::awt::Component::subtractAndApplyShapeBelowMe()
{ /* stub */
    unimplemented_(u"void java::awt::Component::subtractAndApplyShapeBelowMe()");
}

java::lang::String* java::awt::Component::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Component::toString()");
    return 0;
}

void java::awt::Component::transferFocus()
{ /* stub */
    unimplemented_(u"void java::awt::Component::transferFocus()");
}

bool java::awt::Component::transferFocus(bool clearOnFailure)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::transferFocus(bool clearOnFailure)");
    return 0;
}

void java::awt::Component::transferFocusBackward()
{ /* stub */
    unimplemented_(u"void java::awt::Component::transferFocusBackward()");
}

bool java::awt::Component::transferFocusBackward(bool clearOnFailure)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::transferFocusBackward(bool clearOnFailure)");
    return 0;
}

void java::awt::Component::transferFocusUpCycle()
{ /* stub */
    unimplemented_(u"void java::awt::Component::transferFocusUpCycle()");
}

void java::awt::Component::update(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Component::update(Graphics* g)");
}

void java::awt::Component::updateCursorImmediately()
{ /* stub */
    unimplemented_(u"void java::awt::Component::updateCursorImmediately()");
}

bool java::awt::Component::updateGraphicsData(GraphicsConfiguration* gc)
{ /* stub */
    unimplemented_(u"bool java::awt::Component::updateGraphicsData(GraphicsConfiguration* gc)");
    return 0;
}

void java::awt::Component::updateZOrder()
{ /* stub */
    unimplemented_(u"void java::awt::Component::updateZOrder()");
}

void java::awt::Component::validate()
{ /* stub */
    unimplemented_(u"void java::awt::Component::validate()");
}

/* private: void java::awt::Component::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component", 18);
    return c;
}

java::lang::Class* java::awt::Component::getClass0()
{
    return class_();
}

