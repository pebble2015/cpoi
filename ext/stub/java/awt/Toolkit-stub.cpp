// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Toolkit.hpp>

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
typedef ::SubArray< ::java::awt::event::AWTEventListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > AWTEventListenerArray;
        } // event
    } // awt

    namespace beans
    {
typedef ::SubArray< ::java::beans::PropertyChangeListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > PropertyChangeListenerArray;
    } // beans
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Toolkit::Toolkit(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Toolkit::Toolkit()
    : Toolkit(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool& java::awt::Toolkit::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::awt::Toolkit::$assertionsDisabled_;
constexpr int32_t java::awt::Toolkit::LONG_BITS;
java::lang::String*& java::awt::Toolkit::atNames()
{
    clinit();
    return atNames_;
}
java::lang::String* java::awt::Toolkit::atNames_;
std::atomic< int64_t >& java::awt::Toolkit::enabledOnToolkitMask()
{
    clinit();
    return enabledOnToolkitMask_;
}
std::atomic< int64_t > java::awt::Toolkit::enabledOnToolkitMask_;
java::awt::peer::LightweightPeer*& java::awt::Toolkit::lightweightMarker()
{
    clinit();
    return lightweightMarker_;
}
java::awt::peer::LightweightPeer* java::awt::Toolkit::lightweightMarker_;
bool& java::awt::Toolkit::loaded()
{
    clinit();
    return loaded_;
}
bool java::awt::Toolkit::loaded_;
java::util::ResourceBundle*& java::awt::Toolkit::platformResources()
{
    clinit();
    return platformResources_;
}
java::util::ResourceBundle* java::awt::Toolkit::platformResources_;
java::util::ResourceBundle*& java::awt::Toolkit::resources()
{
    clinit();
    return resources_;
}
java::util::ResourceBundle* java::awt::Toolkit::resources_;
java::awt::Toolkit*& java::awt::Toolkit::toolkit()
{
    clinit();
    return toolkit_;
}
java::awt::Toolkit* java::awt::Toolkit::toolkit_;

void ::java::awt::Toolkit::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Toolkit::ctor()");
}

void java::awt::Toolkit::addAWTEventListener(::java::awt::event::AWTEventListener* listener, int64_t eventMask)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::addAWTEventListener(::java::awt::event::AWTEventListener* listener, int64_t eventMask)");
}

void java::awt::Toolkit::addPropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::addPropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl)");
}

bool java::awt::Toolkit::areExtraMouseButtonsEnabled()
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::areExtraMouseButtonsEnabled()");
    return 0;
}

int32_t java::awt::Toolkit::countAWTEventListeners(int64_t eventMask)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Toolkit::countAWTEventListeners(int64_t eventMask)");
    return 0;
}

java::awt::peer::LightweightPeer* java::awt::Toolkit::createComponent(Component* target)
{ /* stub */
    unimplemented_(u"java::awt::peer::LightweightPeer* java::awt::Toolkit::createComponent(Component* target)");
    return 0;
}

java::awt::Cursor* java::awt::Toolkit::createCustomCursor(Image* cursor, Point* hotSpot, ::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::awt::Cursor* java::awt::Toolkit::createCustomCursor(Image* cursor, Point* hotSpot, ::java::lang::String* name)");
    return 0;
}

java::awt::dnd::DragGestureRecognizer* java::awt::Toolkit::createDragGestureRecognizer(::java::lang::Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl)
{ /* stub */
    unimplemented_(u"java::awt::dnd::DragGestureRecognizer* java::awt::Toolkit::createDragGestureRecognizer(::java::lang::Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl)");
    return 0;
}

java::awt::Image* java::awt::Toolkit::createImage(::int8_tArray* imagedata)
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Toolkit::createImage(::int8_tArray* imagedata)");
    return 0;
}

/* private: java::beans::PropertyChangeSupport* java::awt::Toolkit::createPropertyChangeSupport(Toolkit* toolkit) */
/* private: java::awt::event::AWTEventListener* java::awt::Toolkit::deProxyAWTEventListener(::java::awt::event::AWTEventListener* l) */
bool java::awt::Toolkit::enabledOnToolkit(int64_t eventMask)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::Toolkit::enabledOnToolkit(int64_t eventMask)");
    return 0;
}

java::awt::event::AWTEventListenerArray* java::awt::Toolkit::getAWTEventListeners()
{ /* stub */
    unimplemented_(u"java::awt::event::AWTEventListenerArray* java::awt::Toolkit::getAWTEventListeners()");
    return 0;
}

java::awt::event::AWTEventListenerArray* java::awt::Toolkit::getAWTEventListeners(int64_t eventMask)
{ /* stub */
    unimplemented_(u"java::awt::event::AWTEventListenerArray* java::awt::Toolkit::getAWTEventListeners(int64_t eventMask)");
    return 0;
}

java::awt::Dimension* java::awt::Toolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight)
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Toolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight)");
    return 0;
}

java::awt::Toolkit* java::awt::Toolkit::getDefaultToolkit()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Toolkit* java::awt::Toolkit::getDefaultToolkit()");
    return 0;
}

java::lang::Object* java::awt::Toolkit::getDesktopProperty(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::Toolkit::getDesktopProperty(::java::lang::String* propertyName)");
    return 0;
}

java::awt::EventQueue* java::awt::Toolkit::getEventQueue()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::EventQueue* java::awt::Toolkit::getEventQueue()");
    return 0;
}

bool java::awt::Toolkit::getLockingKeyState(int32_t keyCode)
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::getLockingKeyState(int32_t keyCode)");
    return 0;
}

int32_t java::awt::Toolkit::getMaximumCursorColors()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Toolkit::getMaximumCursorColors()");
    return 0;
}

int32_t java::awt::Toolkit::getMenuShortcutKeyMask()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Toolkit::getMenuShortcutKeyMask()");
    return 0;
}

java::awt::peer::MouseInfoPeer* java::awt::Toolkit::getMouseInfoPeer()
{ /* stub */
    unimplemented_(u"java::awt::peer::MouseInfoPeer* java::awt::Toolkit::getMouseInfoPeer()");
    return 0;
}

java::awt::Container* java::awt::Toolkit::getNativeContainer(Component* c)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Container* java::awt::Toolkit::getNativeContainer(Component* c)");
    return 0;
}

java::awt::PrintJob* java::awt::Toolkit::getPrintJob(Frame* frame, ::java::lang::String* jobtitle, JobAttributes* jobAttributes, PageAttributes* pageAttributes)
{ /* stub */
    unimplemented_(u"java::awt::PrintJob* java::awt::Toolkit::getPrintJob(Frame* frame, ::java::lang::String* jobtitle, JobAttributes* jobAttributes, PageAttributes* pageAttributes)");
    return 0;
}

java::lang::String* java::awt::Toolkit::getProperty(::java::lang::String* key, ::java::lang::String* defaultValue)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::awt::Toolkit::getProperty(::java::lang::String* key, ::java::lang::String* defaultValue)");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::awt::Toolkit::getPropertyChangeListeners()
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Toolkit::getPropertyChangeListeners()");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::awt::Toolkit::getPropertyChangeListeners(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Toolkit::getPropertyChangeListeners(::java::lang::String* propertyName)");
    return 0;
}

java::awt::Insets* java::awt::Toolkit::getScreenInsets(GraphicsConfiguration* gc)
{ /* stub */
    unimplemented_(u"java::awt::Insets* java::awt::Toolkit::getScreenInsets(GraphicsConfiguration* gc)");
    return 0;
}

java::awt::EventQueue* java::awt::Toolkit::getSystemEventQueue()
{ /* stub */
    unimplemented_(u"java::awt::EventQueue* java::awt::Toolkit::getSystemEventQueue()");
    return 0;
}

java::awt::datatransfer::Clipboard* java::awt::Toolkit::getSystemSelection()
{ /* stub */
    unimplemented_(u"java::awt::datatransfer::Clipboard* java::awt::Toolkit::getSystemSelection()");
    return 0;
}

/* private: void java::awt::Toolkit::initAssistiveTechnologies() */
void java::awt::Toolkit::initializeDesktopProperties()
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::initializeDesktopProperties()");
}

bool java::awt::Toolkit::isAlwaysOnTopSupported()
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::isAlwaysOnTopSupported()");
    return 0;
}

bool java::awt::Toolkit::isDynamicLayoutActive()
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::isDynamicLayoutActive()");
    return 0;
}

bool java::awt::Toolkit::isDynamicLayoutSet()
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::isDynamicLayoutSet()");
    return 0;
}

bool java::awt::Toolkit::isFrameStateSupported(int32_t state)
{ /* stub */
    unimplemented_(u"bool java::awt::Toolkit::isFrameStateSupported(int32_t state)");
    return 0;
}

java::lang::Object* java::awt::Toolkit::lazilyLoadDesktopProperty(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::Toolkit::lazilyLoadDesktopProperty(::java::lang::String* name)");
    return 0;
}

/* private: void java::awt::Toolkit::loadAssistiveTechnologies() */
void java::awt::Toolkit::loadLibraries()
{ /* stub */
    clinit();
    unimplemented_(u"void java::awt::Toolkit::loadLibraries()");
}

void java::awt::Toolkit::loadSystemColors(::int32_tArray* systemColors)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::loadSystemColors(::int32_tArray* systemColors)");
}

void java::awt::Toolkit::notifyAWTEventListeners(AWTEvent* theEvent)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::notifyAWTEventListeners(AWTEvent* theEvent)");
}

void java::awt::Toolkit::removeAWTEventListener(::java::awt::event::AWTEventListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::removeAWTEventListener(::java::awt::event::AWTEventListener* listener)");
}

void java::awt::Toolkit::removePropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::removePropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl)");
}

void java::awt::Toolkit::setDesktopProperty(::java::lang::String* name, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::setDesktopProperty(::java::lang::String* name, ::java::lang::Object* newValue)");
}

void java::awt::Toolkit::setDynamicLayout(bool dynamic)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::setDynamicLayout(bool dynamic)");
}

void java::awt::Toolkit::setLockingKeyState(int32_t keyCode, bool on)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit::setLockingKeyState(int32_t keyCode, bool on)");
}

/* private: void java::awt::Toolkit::setPlatformResources(::java::util::ResourceBundle* bundle) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Toolkit::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Toolkit", 16);
    return c;
}

java::lang::Class* java::awt::Toolkit::getClass0()
{
    return class_();
}

