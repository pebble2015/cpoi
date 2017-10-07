// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Container.hpp>

#include <java/awt/Point.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
        namespace image
        {
typedef ::SubArray< ::java::awt::image::ImageObserver, ::java::lang::ObjectArray > ImageObserverArray;
        } // image
typedef ::SubArray< ::java::awt::MenuContainer, ::java::lang::ObjectArray > MenuContainerArray;
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Component, ::java::lang::ObjectArray, ::java::awt::image::ImageObserverArray, MenuContainerArray, ::java::io::SerializableArray > ComponentArray;
    } // awt

    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util

    namespace awt
    {
        namespace event
        {
typedef ::SubArray< ::java::awt::event::ContainerListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > ContainerListenerArray;
        } // event
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Container::Container(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Container::Container()
    : Container(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::ComponentArray*& java::awt::Container::EMPTY_ARRAY()
{
    clinit();
    return EMPTY_ARRAY_;
}
java::awt::ComponentArray* java::awt::Container::EMPTY_ARRAY_;
constexpr bool java::awt::Container::INCLUDE_SELF;
constexpr bool java::awt::Container::SEARCH_HEAVYWEIGHTS;
bool& java::awt::Container::descendUnconditionallyWhenValidating()
{
    clinit();
    return descendUnconditionallyWhenValidating_;
}
bool java::awt::Container::descendUnconditionallyWhenValidating_;
sun::util::logging::PlatformLogger*& java::awt::Container::eventLog()
{
    clinit();
    return eventLog_;
}
sun::util::logging::PlatformLogger* java::awt::Container::eventLog_;
bool& java::awt::Container::isJavaAwtSmartInvalidate()
{
    clinit();
    return isJavaAwtSmartInvalidate_;
}
bool java::awt::Container::isJavaAwtSmartInvalidate_;
sun::util::logging::PlatformLogger*& java::awt::Container::log()
{
    clinit();
    return log_;
}
sun::util::logging::PlatformLogger* java::awt::Container::log_;
sun::util::logging::PlatformLogger*& java::awt::Container::mixingLog()
{
    clinit();
    return mixingLog_;
}
sun::util::logging::PlatformLogger* java::awt::Container::mixingLog_;
java::io::ObjectStreamFieldArray*& java::awt::Container::serialPersistentFields()
{
    clinit();
    return serialPersistentFields_;
}
java::io::ObjectStreamFieldArray* java::awt::Container::serialPersistentFields_;
constexpr int64_t java::awt::Container::serialVersionUID;

void ::java::awt::Container::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Container::ctor()");
}

java::awt::Component* java::awt::Container::add(Component* comp)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::add(Component* comp)");
    return 0;
}

java::awt::Component* java::awt::Container::add(::java::lang::String* name, Component* comp)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::add(::java::lang::String* name, Component* comp)");
    return 0;
}

java::awt::Component* java::awt::Container::add(Component* comp, int32_t index)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::add(Component* comp, int32_t index)");
    return 0;
}

void java::awt::Container::add(Component* comp, ::java::lang::Object* constraints)
{ /* stub */
    unimplemented_(u"void java::awt::Container::add(Component* comp, ::java::lang::Object* constraints)");
}

void java::awt::Container::add(Component* comp, ::java::lang::Object* constraints, int32_t index)
{ /* stub */
    unimplemented_(u"void java::awt::Container::add(Component* comp, ::java::lang::Object* constraints, int32_t index)");
}

void java::awt::Container::addContainerListener(::java::awt::event::ContainerListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Container::addContainerListener(::java::awt::event::ContainerListener* l)");
}

/* private: void java::awt::Container::addDelicately(Component* comp, Container* curParent, int32_t index) */
void java::awt::Container::addImpl(Component* comp, ::java::lang::Object* constraints, int32_t index)
{ /* stub */
    unimplemented_(u"void java::awt::Container::addImpl(Component* comp, ::java::lang::Object* constraints, int32_t index)");
}

void java::awt::Container::addNotify()
{ /* stub */
    unimplemented_(u"void java::awt::Container::addNotify()");
}

void java::awt::Container::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Container::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Container::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Container::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Container::adjustDecendantsOnParent(int32_t num)
{ /* stub */
    unimplemented_(u"void java::awt::Container::adjustDecendantsOnParent(int32_t num)");
}

void java::awt::Container::adjustDescendants(int32_t num)
{ /* stub */
    unimplemented_(u"void java::awt::Container::adjustDescendants(int32_t num)");
}

void java::awt::Container::adjustListeningChildren(int64_t mask, int32_t num)
{ /* stub */
    unimplemented_(u"void java::awt::Container::adjustListeningChildren(int64_t mask, int32_t num)");
}

void java::awt::Container::applyComponentOrientation(ComponentOrientation* o)
{ /* stub */
    unimplemented_(u"void java::awt::Container::applyComponentOrientation(ComponentOrientation* o)");
}

bool java::awt::Container::areFocusTraversalKeysSet(int32_t id)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::areFocusTraversalKeysSet(int32_t id)");
    return 0;
}

bool java::awt::Container::canContainFocusOwner(Component* focusOwnerCandidate)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::canContainFocusOwner(Component* focusOwnerCandidate)");
    return 0;
}

/* private: void java::awt::Container::checkAddToSelf(Component* comp) */
/* private: void java::awt::Container::checkAdding(Component* comp, int32_t index) */
void java::awt::Container::checkGD(::java::lang::String* stringID)
{ /* stub */
    unimplemented_(u"void java::awt::Container::checkGD(::java::lang::String* stringID)");
}

/* private: void java::awt::Container::checkNotAWindow(Component* comp) */
void java::awt::Container::clearCurrentFocusCycleRootOnHide()
{ /* stub */
    unimplemented_(u"void java::awt::Container::clearCurrentFocusCycleRootOnHide()");
}

void java::awt::Container::clearMostRecentFocusOwnerOnHide()
{ /* stub */
    unimplemented_(u"void java::awt::Container::clearMostRecentFocusOwnerOnHide()");
}

bool java::awt::Container::containsFocus()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::containsFocus()");
    return 0;
}

int32_t java::awt::Container::countComponents()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::countComponents()");
    return 0;
}

int32_t java::awt::Container::countHierarchyMembers()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::countHierarchyMembers()");
    return 0;
}

void java::awt::Container::createChildHierarchyEvents(int32_t id, int64_t changeFlags, bool enabledOnToolkit)
{ /* stub */
    unimplemented_(u"void java::awt::Container::createChildHierarchyEvents(int32_t id, int64_t changeFlags, bool enabledOnToolkit)");
}

int32_t java::awt::Container::createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit)");
    return 0;
}

void java::awt::Container::decreaseComponentCount(Component* c)
{ /* stub */
    unimplemented_(u"void java::awt::Container::decreaseComponentCount(Component* c)");
}

void java::awt::Container::deliverEvent(Event* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::deliverEvent(Event* e)");
}

void java::awt::Container::dispatchEventImpl(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::dispatchEventImpl(AWTEvent* e)");
}

void java::awt::Container::dispatchEventToSelf(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::dispatchEventToSelf(AWTEvent* e)");
}

void java::awt::Container::doLayout()
{ /* stub */
    unimplemented_(u"void java::awt::Container::doLayout()");
}

bool java::awt::Container::eventEnabled(AWTEvent* e)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::eventEnabled(AWTEvent* e)");
    return 0;
}

java::awt::Component* java::awt::Container::findComponentAt(Point* p)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::findComponentAt(Point* p)");
    return 0;
}

java::awt::Component* java::awt::Container::findComponentAt(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::findComponentAt(int32_t x, int32_t y)");
    return 0;
}

java::awt::Component* java::awt::Container::findComponentAt(int32_t x, int32_t y, bool ignoreEnabled)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::findComponentAt(int32_t x, int32_t y, bool ignoreEnabled)");
    return 0;
}

java::awt::Component* java::awt::Container::findComponentAtImpl(int32_t x, int32_t y, bool ignoreEnabled)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::findComponentAtImpl(int32_t x, int32_t y, bool ignoreEnabled)");
    return 0;
}

/* private: java::awt::Container* java::awt::Container::findTraversalRoot() */
javax::accessibility::Accessible* java::awt::Container::getAccessibleAt(Point* p)
{ /* stub */
    unimplemented_(u"javax::accessibility::Accessible* java::awt::Container::getAccessibleAt(Point* p)");
    return 0;
}

javax::accessibility::Accessible* java::awt::Container::getAccessibleChild(int32_t i)
{ /* stub */
    unimplemented_(u"javax::accessibility::Accessible* java::awt::Container::getAccessibleChild(int32_t i)");
    return 0;
}

int32_t java::awt::Container::getAccessibleChildrenCount()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::getAccessibleChildrenCount()");
    return 0;
}

float java::awt::Container::getAlignmentX()
{ /* stub */
    unimplemented_(u"float java::awt::Container::getAlignmentX()");
    return 0;
}

float java::awt::Container::getAlignmentY()
{ /* stub */
    unimplemented_(u"float java::awt::Container::getAlignmentY()");
    return 0;
}

/* private: int32_t java::awt::Container::getBottommostComponentIndex() */
/* private: java::awt::Component* java::awt::Container::getChildAt(Component* comp, int32_t x, int32_t y, bool ignoreEnabled) */
java::awt::Component* java::awt::Container::getComponent(int32_t n)
{ /* stub */
}

java::awt::Component* java::awt::Container::getComponentAt(Point* p)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::getComponentAt(Point* p)");
    return 0;
}

java::awt::Component* java::awt::Container::getComponentAt(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::getComponentAt(int32_t x, int32_t y)");
    return 0;
}

int32_t java::awt::Container::getComponentCount()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::getComponentCount()");
    return 0;
}

int32_t java::awt::Container::getComponentZOrder(Component* comp)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::getComponentZOrder(Component* comp)");
    return 0;
}

java::awt::ComponentArray* java::awt::Container::getComponents()
{ /* stub */
    unimplemented_(u"java::awt::ComponentArray* java::awt::Container::getComponents()");
    return 0;
}

java::awt::ComponentArray* java::awt::Container::getComponentsSync()
{ /* stub */
    unimplemented_(u"java::awt::ComponentArray* java::awt::Container::getComponentsSync()");
    return 0;
}

java::awt::ComponentArray* java::awt::Container::getComponents_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::ComponentArray* java::awt::Container::getComponents_NoClientCode()");
    return 0;
}

java::awt::event::ContainerListenerArray* java::awt::Container::getContainerListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::ContainerListenerArray* java::awt::Container::getContainerListeners()");
    return 0;
}

java::awt::Component* java::awt::Container::getDropTargetEventTarget(int32_t x, int32_t y, bool includeSelf)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::getDropTargetEventTarget(int32_t x, int32_t y, bool includeSelf)");
    return 0;
}

java::util::Set* java::awt::Container::getFocusTraversalKeys(int32_t id)
{ /* stub */
    unimplemented_(u"java::util::Set* java::awt::Container::getFocusTraversalKeys(int32_t id)");
    return 0;
}

java::awt::FocusTraversalPolicy* java::awt::Container::getFocusTraversalPolicy()
{ /* stub */
return focusTraversalPolicy ; /* getter */
}

java::awt::Container* java::awt::Container::getHeavyweightContainer()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Container::getHeavyweightContainer()");
    return 0;
}

java::awt::Insets* java::awt::Container::getInsets()
{ /* stub */
    unimplemented_(u"java::awt::Insets* java::awt::Container::getInsets()");
    return 0;
}

java::awt::LayoutManager* java::awt::Container::getLayout()
{ /* stub */
    unimplemented_(u"java::awt::LayoutManager* java::awt::Container::getLayout()");
    return 0;
}

java::util::EventListenerArray* java::awt::Container::getListeners(::java::lang::Class* listenerType)
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* java::awt::Container::getListeners(::java::lang::Class* listenerType)");
    return 0;
}

/* private: int32_t java::awt::Container::getListenersCount(int32_t id, bool enabledOnToolkit) */
java::awt::Dimension* java::awt::Container::getMaximumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Container::getMaximumSize()");
    return 0;
}

java::awt::Dimension* java::awt::Container::getMinimumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Container::getMinimumSize()");
    return 0;
}

java::awt::Component* java::awt::Container::getMouseEventTarget(int32_t x, int32_t y, bool includeSelf)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::getMouseEventTarget(int32_t x, int32_t y, bool includeSelf)");
    return 0;
}

/* private: java::awt::Component* java::awt::Container::getMouseEventTarget(int32_t x, int32_t y, bool includeSelf, Container_EventTargetFilter* filter, bool searchHeavyweights) */
/* private: java::awt::Component* java::awt::Container::getMouseEventTargetImpl(int32_t x, int32_t y, bool includeSelf, Container_EventTargetFilter* filter, bool searchHeavyweightChildren, bool searchHeavyweightDescendants) */
java::awt::Point* java::awt::Container::getMousePosition(bool allowChildren)
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Container::getMousePosition(bool allowChildren)");
    return 0;
}

sun::java2d::pipe::Region* java::awt::Container::getOpaqueShape()
{ /* stub */
    unimplemented_(u"sun::java2d::pipe::Region* java::awt::Container::getOpaqueShape()");
    return 0;
}

java::awt::Dimension* java::awt::Container::getPreferredSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Container::getPreferredSize()");
    return 0;
}

/* private: int32_t java::awt::Container::getTopmostComponentIndex() */
java::awt::Container* java::awt::Container::getTraversalRoot()
{ /* stub */
    unimplemented_(u"java::awt::Container* java::awt::Container::getTraversalRoot()");
    return 0;
}

bool java::awt::Container::hasHeavyweightDescendants()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::hasHeavyweightDescendants()");
    return 0;
}

bool java::awt::Container::hasLightweightDescendants()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::hasLightweightDescendants()");
    return 0;
}

void java::awt::Container::increaseComponentCount(Component* c)
{ /* stub */
    unimplemented_(u"void java::awt::Container::increaseComponentCount(Component* c)");
}

void java::awt::Container::initializeFocusTraversalKeys()
{ /* stub */
    unimplemented_(u"void java::awt::Container::initializeFocusTraversalKeys()");
}

java::awt::Insets* java::awt::Container::insets()
{ /* stub */
    unimplemented_(u"java::awt::Insets* java::awt::Container::insets()");
    return 0;
}

void java::awt::Container::invalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Container::invalidate()");
}

void java::awt::Container::invalidateParent()
{ /* stub */
    unimplemented_(u"void java::awt::Container::invalidateParent()");
}

void java::awt::Container::invalidateTree()
{ /* stub */
    unimplemented_(u"void java::awt::Container::invalidateTree()");
}

bool java::awt::Container::isAncestorOf(Component* c)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isAncestorOf(Component* c)");
    return 0;
}

bool java::awt::Container::isFocusCycleRoot()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isFocusCycleRoot()");
    return 0;
}

bool java::awt::Container::isFocusCycleRoot(Container* container)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isFocusCycleRoot(Container* container)");
    return 0;
}

bool java::awt::Container::isFocusTraversalPolicyProvider()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isFocusTraversalPolicyProvider()");
    return 0;
}

bool java::awt::Container::isFocusTraversalPolicySet()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isFocusTraversalPolicySet()");
    return 0;
}

/* private: bool java::awt::Container::isParentOf(Component* comp) */
bool java::awt::Container::isRecursivelyVisibleUpToHeavyweightContainer()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isRecursivelyVisibleUpToHeavyweightContainer()");
    return 0;
}

/* private: bool java::awt::Container::isRemoveNotifyNeeded(Component* comp, Container* oldContainer, Container* newContainer) */
bool java::awt::Container::isSameOrAncestorOf(Component* comp, bool allowChildren)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isSameOrAncestorOf(Component* comp, bool allowChildren)");
    return 0;
}

bool java::awt::Container::isValidateRoot()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::isValidateRoot()");
    return 0;
}

void java::awt::Container::layout()
{ /* stub */
    unimplemented_(u"void java::awt::Container::layout()");
}

void java::awt::Container::lightweightPaint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::lightweightPaint(Graphics* g)");
}

void java::awt::Container::lightweightPrint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::lightweightPrint(Graphics* g)");
}

void java::awt::Container::list(::java::io::PrintStream* out, int32_t indent)
{ /* stub */
    unimplemented_(u"void java::awt::Container::list(::java::io::PrintStream* out, int32_t indent)");
}

void java::awt::Container::list(::java::io::PrintWriter* out, int32_t indent)
{ /* stub */
    unimplemented_(u"void java::awt::Container::list(::java::io::PrintWriter* out, int32_t indent)");
}

java::awt::Component* java::awt::Container::locate(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"java::awt::Component* java::awt::Container::locate(int32_t x, int32_t y)");
    return 0;
}

java::awt::Dimension* java::awt::Container::minimumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Container::minimumSize()");
    return 0;
}

void java::awt::Container::mixOnHiding(bool isLightweight)
{ /* stub */
    unimplemented_(u"void java::awt::Container::mixOnHiding(bool isLightweight)");
}

void java::awt::Container::mixOnReshaping()
{ /* stub */
    unimplemented_(u"void java::awt::Container::mixOnReshaping()");
}

void java::awt::Container::mixOnShowing()
{ /* stub */
    unimplemented_(u"void java::awt::Container::mixOnShowing()");
}

void java::awt::Container::mixOnValidating()
{ /* stub */
    unimplemented_(u"void java::awt::Container::mixOnValidating()");
}

void java::awt::Container::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Container::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder)");
}

int32_t java::awt::Container::numListening(int64_t mask)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container::numListening(int64_t mask)");
    return 0;
}

void java::awt::Container::paint(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::paint(Graphics* g)");
}

void java::awt::Container::paintComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::paintComponents(Graphics* g)");
}

void java::awt::Container::paintHeavyweightComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::paintHeavyweightComponents(Graphics* g)");
}

java::lang::String* java::awt::Container::paramString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Container::paramString()");
    return 0;
}

void java::awt::Container::postProcessKeyEvent(::java::awt::event::KeyEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::postProcessKeyEvent(::java::awt::event::KeyEvent* e)");
}

bool java::awt::Container::postsOldMouseEvents()
{ /* stub */
    unimplemented_(u"bool java::awt::Container::postsOldMouseEvents()");
    return 0;
}

void java::awt::Container::preProcessKeyEvent(::java::awt::event::KeyEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::preProcessKeyEvent(::java::awt::event::KeyEvent* e)");
}

java::awt::Dimension* java::awt::Container::preferredSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Container::preferredSize()");
    return 0;
}

void java::awt::Container::print(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::print(Graphics* g)");
}

void java::awt::Container::printComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::printComponents(Graphics* g)");
}

void java::awt::Container::printHeavyweightComponents(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::printHeavyweightComponents(Graphics* g)");
}

void java::awt::Container::processContainerEvent(::java::awt::event::ContainerEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::processContainerEvent(::java::awt::event::ContainerEvent* e)");
}

void java::awt::Container::processEvent(AWTEvent* e)
{ /* stub */
    unimplemented_(u"void java::awt::Container::processEvent(AWTEvent* e)");
}

void java::awt::Container::proxyEnableEvents(int64_t events)
{ /* stub */
    unimplemented_(u"void java::awt::Container::proxyEnableEvents(int64_t events)");
}

/* private: void java::awt::Container::readObject(::java::io::ObjectInputStream* s) */
void java::awt::Container::recursiveApplyCurrentShape()
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveApplyCurrentShape()");
}

void java::awt::Container::recursiveApplyCurrentShape(int32_t fromZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveApplyCurrentShape(int32_t fromZorder)");
}

void java::awt::Container::recursiveApplyCurrentShape(int32_t fromZorder, int32_t toZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveApplyCurrentShape(int32_t fromZorder, int32_t toZorder)");
}

/* private: void java::awt::Container::recursiveHideHeavyweightChildren() */
/* private: void java::awt::Container::recursiveRelocateHeavyweightChildren(Point* origin) */
/* private: void java::awt::Container::recursiveShowHeavyweightChildren() */
void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape)
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape)");
}

void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder)");
}

void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder, int32_t toZorder)
{ /* stub */
    unimplemented_(u"void java::awt::Container::recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder, int32_t toZorder)");
}

void java::awt::Container::remove(int32_t index)
{ /* stub */
    unimplemented_(u"void java::awt::Container::remove(int32_t index)");
}

void java::awt::Container::remove(Component* comp)
{ /* stub */
    unimplemented_(u"void java::awt::Container::remove(Component* comp)");
}

void java::awt::Container::removeAll()
{ /* stub */
    unimplemented_(u"void java::awt::Container::removeAll()");
}

void java::awt::Container::removeContainerListener(::java::awt::event::ContainerListener* l)
{ /* stub */
    unimplemented_(u"void java::awt::Container::removeContainerListener(::java::awt::event::ContainerListener* l)");
}

/* private: bool java::awt::Container::removeDelicately(Component* comp, Container* newParent, int32_t newIndex) */
void java::awt::Container::removeNotify()
{ /* stub */
    unimplemented_(u"void java::awt::Container::removeNotify()");
}

/* private: void java::awt::Container::reparentChild(Component* comp) */
/* private: void java::awt::Container::reparentTraverse(::java::awt::peer::ContainerPeer* parentPeer, Container* child) */
void java::awt::Container::setComponentZOrder(Component* comp, int32_t index)
{ /* stub */
    unimplemented_(u"void java::awt::Container::setComponentZOrder(Component* comp, int32_t index)");
}

void java::awt::Container::setFocusCycleRoot(bool focusCycleRoot)
{ /* stub */
    this->focusCycleRoot = focusCycleRoot; /* setter */
}

void java::awt::Container::setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes)
{ /* stub */
    unimplemented_(u"void java::awt::Container::setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes)");
}

void java::awt::Container::setFocusTraversalPolicy(FocusTraversalPolicy* policy)
{ /* stub */
    this->focusTraversalPolicy = policy; /* setter */
}

void java::awt::Container::setFocusTraversalPolicyProvider(bool provider)
{ /* stub */
    this->focusTraversalPolicyProvider = provider; /* setter */
}

void java::awt::Container::setFont(Font* f)
{ /* stub */
    unimplemented_(u"void java::awt::Container::setFont(Font* f)");
}

void java::awt::Container::setLayout(LayoutManager* mgr)
{ /* stub */
    unimplemented_(u"void java::awt::Container::setLayout(LayoutManager* mgr)");
}

/* private: void java::awt::Container::startLWModal() */
/* private: void java::awt::Container::stopLWModal() */
void java::awt::Container::transferFocusDownCycle()
{ /* stub */
    unimplemented_(u"void java::awt::Container::transferFocusDownCycle()");
}

void java::awt::Container::update(Graphics* g)
{ /* stub */
    unimplemented_(u"void java::awt::Container::update(Graphics* g)");
}

bool java::awt::Container::updateGraphicsData(GraphicsConfiguration* gc)
{ /* stub */
    unimplemented_(u"bool java::awt::Container::updateGraphicsData(GraphicsConfiguration* gc)");
    return 0;
}

void java::awt::Container::validate()
{ /* stub */
    unimplemented_(u"void java::awt::Container::validate()");
}

void java::awt::Container::validateTree()
{ /* stub */
    unimplemented_(u"void java::awt::Container::validateTree()");
}

void java::awt::Container::validateUnconditionally()
{ /* stub */
    unimplemented_(u"void java::awt::Container::validateUnconditionally()");
}

/* private: void java::awt::Container::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Container::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Container", 18);
    return c;
}

void java::awt::Container::add(PopupMenu* popup)
{
    super::add(popup);
}

java::awt::Point* java::awt::Container::getMousePosition()
{
    return super::getMousePosition();
}

void java::awt::Container::list()
{
    super::list();
}

void java::awt::Container::list(::java::io::PrintStream* out)
{
    super::list(out);
}

void java::awt::Container::list(::java::io::PrintWriter* out)
{
    super::list(out);
}

void java::awt::Container::remove(MenuComponent* popup)
{
    super::remove(popup);
}

java::lang::Class* java::awt::Container::getClass0()
{
    return class_();
}

