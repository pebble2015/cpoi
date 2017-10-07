// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/dnd/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/awt/im/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/peer/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <sun/java2d/pipe/fwd-POI.hpp>
#include <sun/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/image/ImageObserver.hpp>
#include <java/awt/MenuContainer.hpp>
#include <java/io/Serializable.hpp>

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

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Collection, ::java::lang::ObjectArray, ::java::lang::IterableArray > CollectionArray;
typedef ::SubArray< ::java::util::Set, ::java::lang::ObjectArray, CollectionArray > SetArray;
    } // util
} // java

namespace sun
{
    namespace awt
    {
typedef ::SubArray< ::sun::awt::EventQueueItem, ::java::lang::ObjectArray > EventQueueItemArray;
    } // awt
} // sun

struct default_init_tag;

class java::awt::Component
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::image::ImageObserver
    , public virtual MenuContainer
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;

public:
    static constexpr float BOTTOM_ALIGNMENT { 1.0f };
    static constexpr float CENTER_ALIGNMENT { 0.5f };

private:
    static constexpr int32_t FOCUS_TRAVERSABLE_DEFAULT { int32_t(1) };
    static constexpr int32_t FOCUS_TRAVERSABLE_SET { int32_t(2) };
    static constexpr int32_t FOCUS_TRAVERSABLE_UNKNOWN { int32_t(0) };

public:
    static constexpr float LEFT_ALIGNMENT { 0.0f };

private:
    static ::java::lang::Object* LOCK_;

public:
    static constexpr float RIGHT_ALIGNMENT { 1.0f };
    static constexpr float TOP_ALIGNMENT { 0.0f };

private:
    std::atomic< ::java::security::AccessControlContext* > acc {  };

public: /* protected */
    ::javax::accessibility::AccessibleContext* accessibleContext {  };

private:
    static ::java::lang::String* actionListenerK_;
    static ::java::lang::String* adjustmentListenerK_;

public: /* package */
    ::sun::awt::AppContext* appContext {  };

private:
    bool autoFocusTransferOnDisposal {  };

public: /* package */
    Color* background {  };
    bool backgroundEraseDisabled {  };

private:
    int32_t boundsOp {  };

public: /* package */
    ::java::awt::image::BufferStrategy* bufferStrategy {  };

private:
    ::java::beans::PropertyChangeSupport* changeSupport {  };
    static ::java::lang::ClassArray* coalesceEventsParams_;
    static ::java::util::Map* coalesceMap_;
    bool coalescingEnabled {  };

public: /* package */
    ::java::awt::event::ComponentListener* componentListener {  };

private:
    static ::java::lang::String* componentListenerK_;

public: /* package */
    ComponentOrientation* componentOrientation {  };

private:
    int32_t componentSerializedDataVersion {  };
    ::sun::java2d::pipe::Region* compoundShape {  };
    static ::java::lang::String* containerListenerK_;

public: /* package */
    Cursor* cursor {  };
    ::java::awt::dnd::DropTarget* dropTarget {  };
    bool enabled {  };
    ::sun::awt::EventQueueItemArray* eventCache {  };

private:
    static ::sun::util::logging::PlatformLogger* eventLog_;

public: /* package */
    int64_t eventMask {  };
    ::java::awt::event::FocusListener* focusListener {  };

private:
    static ::java::lang::String* focusListenerK_;
    static ::sun::util::logging::PlatformLogger* focusLog_;
    static ::java::lang::StringArray* focusTraversalKeyPropertyNames_;

public: /* package */
    ::java::util::SetArray* focusTraversalKeys {  };

private:
    bool focusTraversalKeysEnabled {  };
    bool focusable {  };

public: /* package */
    std::atomic< Font* > font {  };
    Color* foreground {  };

private:
    std::atomic< GraphicsConfiguration* > graphicsConfig {  };

public: /* package */
    int32_t height {  };
    ::java::awt::event::HierarchyBoundsListener* hierarchyBoundsListener {  };

private:
    static ::java::lang::String* hierarchyBoundsListenerK_;

public: /* package */
    ::java::awt::event::HierarchyListener* hierarchyListener {  };

private:
    static ::java::lang::String* hierarchyListenerK_;

public: /* package */
    bool ignoreRepaint {  };

private:
    static int32_t incRate_;

public: /* package */
    ::java::awt::event::InputMethodListener* inputMethodListener {  };

private:
    static ::java::lang::String* inputMethodListenerK_;
    bool isAddNotifyComplete {  };
    int32_t isFocusTraversableOverridden_ {  };
    static bool isInc_;

public: /* package */
    bool isPacked {  };

private:
    static ::java::lang::String* itemListenerK_;

public: /* package */
    ::java::awt::event::KeyListener* keyListener {  };

private:
    static ::java::lang::String* keyListenerK_;

public: /* package */
    ::java::util::Locale* locale {  };

private:
    static ::sun::util::logging::PlatformLogger* log_;

public: /* package */
    Dimension* maxSize {  };
    bool maxSizeSet {  };
    Dimension* minSize {  };
    bool minSizeSet {  };

private:
    ::sun::java2d::pipe::Region* mixingCutoutRegion {  };
    static ::sun::util::logging::PlatformLogger* mixingLog_;

public: /* package */
    ::java::awt::event::MouseListener* mouseListener {  };

private:
    static ::java::lang::String* mouseListenerK_;

public: /* package */
    ::java::awt::event::MouseMotionListener* mouseMotionListener {  };

private:
    static ::java::lang::String* mouseMotionListenerK_;

public: /* package */
    ::java::awt::event::MouseWheelListener* mouseWheelListener {  };

private:
    static ::java::lang::String* mouseWheelListenerK_;
    ::java::lang::String* name {  };
    bool nameExplicitlySet {  };

public: /* package */
    bool newEventsOnly {  };

private:
    ::java::lang::Object* objectLock {  };
    static ::java::lang::String* ownedWindowK_;

public: /* package */
    Container* parent {  };
    ::java::awt::peer::ComponentPeer* peer {  };
    Font* peerFont {  };
    ::java::util::Vector* popups {  };
    Dimension* prefSize {  };
    bool prefSizeSet {  };

private:
    static ::sun::awt::RequestFocusController* requestFocusController_;
    static constexpr int64_t serialVersionUID { int64_t(-7644114512714619750LL) };
    static ::java::lang::String* textListenerK_;
    std::atomic< bool > valid {  };

public: /* package */
    bool visible {  };
    int32_t width {  };
    ::java::lang::RuntimeException* windowClosingException {  };

private:
    static ::java::lang::String* windowFocusListenerK_;
    static ::java::lang::String* windowListenerK_;
    static ::java::lang::String* windowStateListenerK_;

public: /* package */
    int32_t x {  };
    int32_t y {  };

protected:
    void ctor();

public:
    virtual bool action(Event* evt, ::java::lang::Object* what);
    virtual void add(PopupMenu* popup);
    virtual void addComponentListener(::java::awt::event::ComponentListener* l);
    virtual void addFocusListener(::java::awt::event::FocusListener* l);
    virtual void addHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l);
    virtual void addHierarchyListener(::java::awt::event::HierarchyListener* l);
    virtual void addInputMethodListener(::java::awt::event::InputMethodListener* l);
    virtual void addKeyListener(::java::awt::event::KeyListener* l);
    virtual void addMouseListener(::java::awt::event::MouseListener* l);
    virtual void addMouseMotionListener(::java::awt::event::MouseMotionListener* l);
    virtual void addMouseWheelListener(::java::awt::event::MouseWheelListener* l);
    virtual void addNotify();
    virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
    virtual void addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener);

public: /* package */
    virtual void adjustListeningChildrenOnParent(int64_t mask, int32_t num);

public:
    virtual void applyComponentOrientation(ComponentOrientation* orientation);

public: /* package */
    virtual void applyCompoundShape(::sun::java2d::pipe::Region* shape);
    virtual void applyCurrentShape();
    /*void applyCurrentShapeBelowMe(); (private) */
    bool areBoundsValid();

public:
    virtual bool areFocusTraversalKeysSet(int32_t id);

public: /* package */
    virtual bool areInputMethodsEnabled();
    virtual void autoProcessMouseWheel(::java::awt::event::MouseWheelEvent* e);

public:
    virtual Rectangle* bounds();
    /*::sun::java2d::pipe::Region* calculateCurrentShape(); (private) */

public: /* package */
    bool canBeFocusOwner();
    bool canBeFocusOwnerRecursively();
    /*bool checkCoalescing(); (private) */
    virtual void checkGD(::java::lang::String* stringID);

public:
    virtual int32_t checkImage(Image* image, ::java::awt::image::ImageObserver* observer);
    virtual int32_t checkImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer);

public: /* package */
    void checkTreeLock();
    virtual bool checkWindowClosingException();
    virtual void clearCurrentFocusCycleRootOnHide();
    virtual void clearMostRecentFocusOwnerOnHide();

public: /* protected */
    virtual AWTEvent* coalesceEvents(AWTEvent* existingEvent, AWTEvent* newEvent);

public: /* package */
    virtual ::java::lang::String* constructComponentName();

public:
    virtual bool contains(Point* p);
    virtual bool contains(int32_t x, int32_t y);

public: /* package */
    virtual bool containsFocus();
    virtual int32_t countHierarchyMembers();
    virtual void createBufferStrategy(int32_t numBuffers);
    virtual void createBufferStrategy(int32_t numBuffers, BufferCapabilities* caps);
    virtual int32_t createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit);

public:
    virtual Image* createImage(::java::awt::image::ImageProducer* producer);
    virtual Image* createImage(int32_t width, int32_t height);
    virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height);
    virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height, ImageCapabilities* caps);
    virtual void deliverEvent(Event* e);
    virtual void disable();

public: /* protected */
    void disableEvents(int64_t eventsToDisable);

public:
    void dispatchEvent(AWTEvent* e);

public: /* package */
    virtual void dispatchEventImpl(AWTEvent* e);
    virtual bool dispatchMouseWheelToAncestor(::java::awt::event::MouseWheelEvent* e);

public:
    virtual void doLayout();
    /*void doSwingSerialization(); (private) */
    virtual void enable();
    virtual void enable(bool b);

public: /* protected */
    void enableEvents(int64_t eventsToEnable);

public:
    virtual void enableInputMethods(bool enable);

public: /* package */
    virtual bool eventEnabled(AWTEvent* e);
    virtual bool eventTypeEnabled(int32_t type);
    virtual Component* findUnderMouseInWindow(PointerInfo* pi);

public: /* protected */
    virtual void firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue);

public:
    virtual void firePropertyChange(::java::lang::String* propertyName, int8_t oldValue, int8_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int16_t oldValue, int16_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int64_t oldValue, int64_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, float oldValue, float newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, double oldValue, double newValue);

public: /* package */
    ::java::security::AccessControlContext* getAccessControlContext();

public:
    virtual ::javax::accessibility::AccessibleContext* getAccessibleContext();

public: /* package */
    virtual int32_t getAccessibleIndexInParent();
    virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet();

public:
    virtual float getAlignmentX();
    virtual float getAlignmentY();
    /*::sun::java2d::pipe::Region* getAppliedShape(); (private) */

public: /* package */
    virtual Image* getBackBuffer();

public:
    virtual Color* getBackground();
    virtual int32_t getBaseline(int32_t width, int32_t height);
    virtual Component_BaselineResizeBehavior* getBaselineResizeBehavior();
    virtual Rectangle* getBounds();
    virtual Rectangle* getBounds(Rectangle* rv);

public: /* package */
    virtual int32_t getBoundsOp();
    virtual ::java::awt::image::BufferStrategy* getBufferStrategy();

public:
    virtual ::java::awt::image::ColorModel* getColorModel();
    virtual Component* getComponentAt(Point* p);
    virtual Component* getComponentAt(int32_t x, int32_t y);
    virtual ::java::awt::event::ComponentListenerArray* getComponentListeners();
    virtual ComponentOrientation* getComponentOrientation();

public: /* package */
    virtual Container* getContainer();
    virtual Window* getContainingWindow();

public:
    virtual Cursor* getCursor();

public: /* package */
    Cursor* getCursor_NoClientCode();

public:
    virtual ::java::awt::dnd::DropTarget* getDropTarget();
    virtual Container* getFocusCycleRootAncestor();
    virtual ::java::awt::event::FocusListenerArray* getFocusListeners();
    virtual ::java::util::Set* getFocusTraversalKeys(int32_t id);
    virtual bool getFocusTraversalKeysEnabled();

public: /* package */
    ::java::util::Set* getFocusTraversalKeys_NoIDCheck(int32_t id);

public:
    Font* getFont() override;
    virtual FontMetrics* getFontMetrics(Font* font);

public: /* package */
    Font* getFont_NoClientCode();

public:
    virtual Color* getForeground();
    virtual Graphics* getGraphics();
    virtual GraphicsConfiguration* getGraphicsConfiguration();

public: /* package */
    GraphicsConfiguration* getGraphicsConfiguration_NoClientCode();
    Graphics* getGraphics_NoClientCode();
    ::java::awt::peer::ComponentPeer* getHWPeerAboveMe();

public:
    virtual int32_t getHeight();
    virtual ::java::awt::event::HierarchyBoundsListenerArray* getHierarchyBoundsListeners();
    virtual ::java::awt::event::HierarchyListenerArray* getHierarchyListeners();
    virtual bool getIgnoreRepaint();
    virtual ::java::awt::im::InputContext* getInputContext();
    virtual ::java::awt::event::InputMethodListenerArray* getInputMethodListeners();
    virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests();
    /*Insets* getInsets_NoClientCode(); (private) */
    virtual ::java::awt::event::KeyListenerArray* getKeyListeners();
    virtual ::java::util::EventListenerArray* getListeners(::java::lang::Class* listenerType);
    virtual ::java::util::Locale* getLocale();
    virtual Point* getLocation();
    virtual Point* getLocation(Point* rv);
    virtual Point* getLocationOnScreen();

public: /* package */
    Point* getLocationOnScreen_NoTreeLock();
    virtual Point* getLocationOnWindow();

public:
    virtual Dimension* getMaximumSize();
    virtual Dimension* getMinimumSize();
    virtual ::java::awt::event::MouseListenerArray* getMouseListeners();
    virtual ::java::awt::event::MouseMotionListenerArray* getMouseMotionListeners();
    virtual Point* getMousePosition();
    virtual ::java::awt::event::MouseWheelListenerArray* getMouseWheelListeners();
    virtual ::java::lang::String* getName();

public: /* package */
    Container* getNativeContainer();
    Component* getNextFocusCandidate();
    ::sun::java2d::pipe::Region* getNormalShape();
    virtual ::java::lang::Object* getObjectLock();
    virtual ::sun::java2d::pipe::Region* getOpaqueShape();

public:
    virtual Container* getParent();

public: /* package */
    Container* getParent_NoClientCode();

public:
    virtual ::java::awt::peer::ComponentPeer* getPeer();
    virtual Dimension* getPreferredSize();
    virtual ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners();
    virtual ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners(::java::lang::String* propertyName);
    /*Rectangle* getRecursivelyVisibleBounds(); (private) */

public: /* package */
    int32_t getSiblingIndexAbove();
    int32_t getSiblingIndexBelow();

public:
    virtual Dimension* getSize();
    virtual Dimension* getSize(Dimension* rv);
    virtual Toolkit* getToolkit();

public: /* package */
    Toolkit* getToolkitImpl();
    virtual Container* getTraversalRoot();

public:
    ::java::lang::Object* getTreeLock();
    virtual int32_t getWidth();
    virtual int32_t getX();
    virtual int32_t getY();
    virtual bool gotFocus(Event* evt, ::java::lang::Object* what);
    virtual bool handleEvent(Event* evt);
    virtual bool hasFocus();
    virtual void hide();
    bool imageUpdate(Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
    /*static void initIDs(); (private) */

public: /* package */
    virtual void initializeFocusTraversalKeys();

public:
    virtual bool inside(int32_t x, int32_t y);
    virtual void invalidate();

public: /* package */
    void invalidateIfValid();
    virtual void invalidateParent();
    virtual bool isAutoFocusTransferOnDisposal();

public:
    virtual bool isBackgroundSet();
    /*static bool isCoalesceEventsOverriden(::java::lang::Class* clazz); (private) */

public: /* package */
    bool isCoalescingEnabled();

public:
    virtual bool isCursorSet();
    virtual bool isDisplayable();
    virtual bool isDoubleBuffered();
    virtual bool isEnabled();

public: /* package */
    bool isEnabledImpl();

public:
    virtual bool isFocusCycleRoot(Container* container);
    virtual bool isFocusOwner();
    virtual bool isFocusTraversable();

public: /* package */
    bool isFocusTraversableOverridden();

public:
    virtual bool isFocusable();
    virtual bool isFontSet();
    virtual bool isForegroundSet();

public: /* package */
    static bool isInstanceOf(::java::lang::Object* obj, ::java::lang::String* className);

public:
    virtual bool isLightweight();
    virtual bool isMaximumSizeSet();
    virtual bool isMinimumSizeSet();

public: /* package */
    bool isMixingNeeded();
    bool isNonOpaqueForMixing();

public:
    virtual bool isOpaque();
    virtual bool isPreferredSizeSet();

public: /* package */
    virtual bool isRecursivelyVisible();
    /*bool isRequestFocusAccepted(bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause); (private) */
    virtual bool isSameOrAncestorOf(Component* comp, bool allowChildren);

public:
    virtual bool isShowing();
    virtual bool isValid();
    virtual bool isVisible();

public: /* package */
    bool isVisible_NoClientCode();

public:
    virtual bool keyDown(Event* evt, int32_t key);
    virtual bool keyUp(Event* evt, int32_t key);
    virtual void layout();

public: /* package */
    virtual void lightweightPaint(Graphics* g);
    virtual void lightweightPrint(Graphics* g);

public:
    virtual void list();
    virtual void list(::java::io::PrintStream* out);
    virtual void list(::java::io::PrintWriter* out);
    virtual void list(::java::io::PrintStream* out, int32_t indent);
    virtual void list(::java::io::PrintWriter* out, int32_t indent);
    virtual Component* locate(int32_t x, int32_t y);
    virtual Point* location();
    /*Point* location_NoClientCode(); (private) */
    virtual bool lostFocus(Event* evt, ::java::lang::Object* what);
    virtual Dimension* minimumSize();

public: /* package */
    virtual void mixOnHiding(bool isLightweight);
    virtual void mixOnReshaping();
    virtual void mixOnShowing();
    virtual void mixOnValidating();
    virtual void mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder);

public:
    virtual bool mouseDown(Event* evt, int32_t x, int32_t y);
    virtual bool mouseDrag(Event* evt, int32_t x, int32_t y);
    virtual bool mouseEnter(Event* evt, int32_t x, int32_t y);
    virtual bool mouseExit(Event* evt, int32_t x, int32_t y);
    virtual bool mouseMove(Event* evt, int32_t x, int32_t y);
    virtual bool mouseUp(Event* evt, int32_t x, int32_t y);
    virtual void move(int32_t x, int32_t y);
    virtual void nextFocus();
    /*void notifyNewBounds(bool resized, bool moved); (private) */

public: /* package */
    virtual int32_t numListening(int64_t mask);

public:
    virtual void paint(Graphics* g);
    virtual void paintAll(Graphics* g);

public: /* package */
    virtual void paintHeavyweightComponents(Graphics* g);

public: /* protected */
    virtual ::java::lang::String* paramString();

public: /* package */
    virtual Point* pointRelativeToComponent(Point* absolute);

public:
    bool postEvent(Event* e) override;

public: /* package */
    virtual bool postsOldMouseEvents();

public:
    virtual Dimension* preferredSize();
    virtual bool prepareImage(Image* image, ::java::awt::image::ImageObserver* observer);
    virtual bool prepareImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer);
    virtual void print(Graphics* g);
    virtual void printAll(Graphics* g);

public: /* package */
    virtual void printHeavyweightComponents(Graphics* g);

public: /* protected */
    virtual void processComponentEvent(::java::awt::event::ComponentEvent* e);
    virtual void processEvent(AWTEvent* e);
    virtual void processFocusEvent(::java::awt::event::FocusEvent* e);
    virtual void processHierarchyBoundsEvent(::java::awt::event::HierarchyEvent* e);
    virtual void processHierarchyEvent(::java::awt::event::HierarchyEvent* e);
    virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* e);
    virtual void processKeyEvent(::java::awt::event::KeyEvent* e);
    virtual void processMouseEvent(::java::awt::event::MouseEvent* e);
    virtual void processMouseMotionEvent(::java::awt::event::MouseEvent* e);
    virtual void processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public: /* package */
    void relocateComponent();

public:
    void remove(MenuComponent* popup) override;
    virtual void removeComponentListener(::java::awt::event::ComponentListener* l);
    virtual void removeFocusListener(::java::awt::event::FocusListener* l);
    virtual void removeHierarchyBoundsListener(::java::awt::event::HierarchyBoundsListener* l);
    virtual void removeHierarchyListener(::java::awt::event::HierarchyListener* l);
    virtual void removeInputMethodListener(::java::awt::event::InputMethodListener* l);
    virtual void removeKeyListener(::java::awt::event::KeyListener* l);
    virtual void removeMouseListener(::java::awt::event::MouseListener* l);
    virtual void removeMouseMotionListener(::java::awt::event::MouseMotionListener* l);
    virtual void removeMouseWheelListener(::java::awt::event::MouseWheelListener* l);
    virtual void removeNotify();
    virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
    virtual void removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener);
    virtual void repaint();
    virtual void repaint(int64_t tm);
    virtual void repaint(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height);
    /*void repaintParentIfNeeded(int32_t oldX, int32_t oldY, int32_t oldWidth, int32_t oldHeight); (private) */
    virtual void requestFocus();

public: /* package */
    virtual bool requestFocus(::sun::awt::CausedFocusEvent_Cause* cause);

public: /* protected */
    virtual bool requestFocus(bool temporary);

public: /* package */
    virtual bool requestFocus(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause);
    bool requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed);
    bool requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause);

public:
    virtual bool requestFocusInWindow();

public: /* package */
    virtual bool requestFocusInWindow(::sun::awt::CausedFocusEvent_Cause* cause);

public: /* protected */
    virtual bool requestFocusInWindow(bool temporary);

public: /* package */
    virtual bool requestFocusInWindow(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause);

public:
    virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
    /*void reshapeNativePeer(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op); (private) */
    virtual void resize(Dimension* d);
    virtual void resize(int32_t width, int32_t height);
    virtual void revalidate();

public: /* package */
    void revalidateSynchronously();
    virtual void setAutoFocusTransferOnDisposal(bool value);

public:
    virtual void setBackground(Color* c);
    virtual void setBounds(Rectangle* r);
    virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);

public: /* package */
    virtual void setBoundsOp(int32_t op);

public:
    virtual void setComponentOrientation(ComponentOrientation* o);
    virtual void setCursor(Cursor* cursor);
    virtual void setDropTarget(::java::awt::dnd::DropTarget* dt);
    virtual void setEnabled(bool b);
    virtual void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes);
    virtual void setFocusTraversalKeysEnabled(bool focusTraversalKeysEnabled);

public: /* package */
    void setFocusTraversalKeys_NoIDCheck(int32_t id, ::java::util::Set* keystrokes);

public:
    virtual void setFocusable(bool focusable);
    virtual void setFont(Font* f);
    virtual void setForeground(Color* c);

public: /* package */
    virtual void setGraphicsConfiguration(GraphicsConfiguration* gc);

public:
    virtual void setIgnoreRepaint(bool ignoreRepaint);
    virtual void setLocale(::java::util::Locale* l);
    virtual void setLocation(Point* p);
    virtual void setLocation(int32_t x, int32_t y);
    virtual void setMaximumSize(Dimension* maximumSize);
    virtual void setMinimumSize(Dimension* minimumSize);
    virtual void setName(::java::lang::String* name);
    virtual void setPreferredSize(Dimension* preferredSize);

public: /* package */
    static void setRequestFocusController(::sun::awt::RequestFocusController* requestController);

public:
    virtual void setSize(Dimension* d);
    virtual void setSize(int32_t width, int32_t height);
    virtual void setVisible(bool b);
    virtual void show();
    virtual void show(bool b);
    virtual Dimension* size();

public: /* package */
    void subtractAndApplyShape(::sun::java2d::pipe::Region* s);
    void subtractAndApplyShapeBelowMe();

public:
    ::java::lang::String* toString() override;
    virtual void transferFocus();

public: /* package */
    virtual bool transferFocus(bool clearOnFailure);

public:
    virtual void transferFocusBackward();

public: /* package */
    virtual bool transferFocusBackward(bool clearOnFailure);

public:
    virtual void transferFocusUpCycle();
    virtual void update(Graphics* g);

public: /* package */
    void updateCursorImmediately();
    virtual bool updateGraphicsData(GraphicsConfiguration* gc);
    virtual void updateZOrder();

public:
    virtual void validate();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public: /* protected */
    Component();
protected:
    Component(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();
    static ::java::lang::Object*& LOCK();
    static ::java::lang::String*& actionListenerK();
    static ::java::lang::String*& adjustmentListenerK();

private:
    static ::java::lang::ClassArray*& coalesceEventsParams();
    static ::java::util::Map*& coalesceMap();

public: /* package */
    static ::java::lang::String*& componentListenerK();
    static ::java::lang::String*& containerListenerK();

private:
    static ::sun::util::logging::PlatformLogger*& eventLog();

public: /* package */
    static ::java::lang::String*& focusListenerK();

private:
    static ::sun::util::logging::PlatformLogger*& focusLog();
    static ::java::lang::StringArray*& focusTraversalKeyPropertyNames();

public: /* package */
    static ::java::lang::String*& hierarchyBoundsListenerK();
    static ::java::lang::String*& hierarchyListenerK();
    static int32_t& incRate();
    static ::java::lang::String*& inputMethodListenerK();
    static bool& isInc();
    static ::java::lang::String*& itemListenerK();
    static ::java::lang::String*& keyListenerK();

private:
    static ::sun::util::logging::PlatformLogger*& log();
    static ::sun::util::logging::PlatformLogger*& mixingLog();

public: /* package */
    static ::java::lang::String*& mouseListenerK();
    static ::java::lang::String*& mouseMotionListenerK();
    static ::java::lang::String*& mouseWheelListenerK();
    static ::java::lang::String*& ownedWindowK();

private:
    static ::sun::awt::RequestFocusController*& requestFocusController();

public: /* package */
    static ::java::lang::String*& textListenerK();
    static ::java::lang::String*& windowFocusListenerK();
    static ::java::lang::String*& windowListenerK();
    static ::java::lang::String*& windowStateListenerK();

private:
    virtual ::java::lang::Class* getClass0();
};
