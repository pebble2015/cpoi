// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/peer/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <sun/java2d/pipe/fwd-POI.hpp>
#include <sun/util/logging/fwd-POI.hpp>
#include <java/awt/Component.hpp>

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

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::ObjectStreamField, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ObjectStreamFieldArray;
    } // io
} // java

struct default_init_tag;

class java::awt::Container
    : public Component
{

public:
    typedef Component super;

private:
    static ComponentArray* EMPTY_ARRAY_;

public: /* package */
    static constexpr bool INCLUDE_SELF { true };
    static constexpr bool SEARCH_HEAVYWEIGHTS { true };

private:
    ::java::util::List* component {  };

public: /* package */
    ::java::awt::event::ContainerListener* containerListener {  };

private:
    int32_t containerSerializedDataVersion {  };
    static bool descendUnconditionallyWhenValidating_;

public: /* package */
    int32_t descendantsCount {  };

private:
    LightweightDispatcher* dispatcher {  };
    static ::sun::util::logging::PlatformLogger* eventLog_;
    bool focusCycleRoot {  };
    FocusTraversalPolicy* focusTraversalPolicy {  };
    bool focusTraversalPolicyProvider {  };
    static bool isJavaAwtSmartInvalidate_;

public: /* package */
    LayoutManager* layoutMgr {  };
    int32_t listeningBoundsChildren {  };
    int32_t listeningChildren {  };

private:
    static ::sun::util::logging::PlatformLogger* log_;
    static ::sun::util::logging::PlatformLogger* mixingLog_;

public: /* package */
    ::sun::awt::AppContext* modalAppContext {  };
    Component* modalComp {  };

private:
    int32_t numOfHWComponents {  };
    int32_t numOfLWComponents {  };

public: /* package */
    Color* preserveBackgroundColor {  };

private:
    bool printing {  };
    ::java::util::Set* printingThreads {  };
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;
    static constexpr int64_t serialVersionUID { int64_t(4613797578919906343LL) };

protected:
    void ctor();

public:
    virtual Component* add(Component* comp);
    virtual Component* add(::java::lang::String* name, Component* comp);
    virtual Component* add(Component* comp, int32_t index);
    virtual void add(Component* comp, ::java::lang::Object* constraints);
    virtual void add(Component* comp, ::java::lang::Object* constraints, int32_t index);
    virtual void addContainerListener(::java::awt::event::ContainerListener* l);
    /*void addDelicately(Component* comp, Container* curParent, int32_t index); (private) */

public: /* protected */
    virtual void addImpl(Component* comp, ::java::lang::Object* constraints, int32_t index);

public:
    void addNotify() override;
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    void addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener) override;

public: /* package */
    virtual void adjustDecendantsOnParent(int32_t num);
    virtual void adjustDescendants(int32_t num);
    virtual void adjustListeningChildren(int64_t mask, int32_t num);

public:
    void applyComponentOrientation(ComponentOrientation* o) override;
    bool areFocusTraversalKeysSet(int32_t id) override;

public: /* package */
    virtual bool canContainFocusOwner(Component* focusOwnerCandidate);
    /*void checkAddToSelf(Component* comp); (private) */
    /*void checkAdding(Component* comp, int32_t index); (private) */
    void checkGD(::java::lang::String* stringID) override;
    /*void checkNotAWindow(Component* comp); (private) */
    void clearCurrentFocusCycleRootOnHide() override;
    void clearMostRecentFocusOwnerOnHide() override;
    bool containsFocus() override;

public:
    virtual int32_t countComponents();

public: /* package */
    int32_t countHierarchyMembers() override;
    void createChildHierarchyEvents(int32_t id, int64_t changeFlags, bool enabledOnToolkit);
    int32_t createHierarchyEvents(int32_t id, Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit) override;
    void decreaseComponentCount(Component* c);

public:
    void deliverEvent(Event* e) override;

public: /* package */
    void dispatchEventImpl(AWTEvent* e) override;
    virtual void dispatchEventToSelf(AWTEvent* e);

public:
    void doLayout() override;

public: /* package */
    bool eventEnabled(AWTEvent* e) override;

public:
    virtual Component* findComponentAt(Point* p);
    virtual Component* findComponentAt(int32_t x, int32_t y);

public: /* package */
    Component* findComponentAt(int32_t x, int32_t y, bool ignoreEnabled);
    Component* findComponentAtImpl(int32_t x, int32_t y, bool ignoreEnabled);
    /*Container* findTraversalRoot(); (private) */
    virtual ::javax::accessibility::Accessible* getAccessibleAt(Point* p);
    virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i);
    virtual int32_t getAccessibleChildrenCount();

public:
    float getAlignmentX() override;
    float getAlignmentY() override;
    /*int32_t getBottommostComponentIndex(); (private) */
    /*static Component* getChildAt(Component* comp, int32_t x, int32_t y, bool ignoreEnabled); (private) */
    virtual Component* getComponent(int32_t n);
    Component* getComponentAt(Point* p) override;
    Component* getComponentAt(int32_t x, int32_t y) override;
    virtual int32_t getComponentCount();
    virtual int32_t getComponentZOrder(Component* comp);
    virtual ComponentArray* getComponents();

public: /* package */
    virtual ComponentArray* getComponentsSync();
    ComponentArray* getComponents_NoClientCode();

public:
    virtual ::java::awt::event::ContainerListenerArray* getContainerListeners();

public: /* package */
    virtual Component* getDropTargetEventTarget(int32_t x, int32_t y, bool includeSelf);

public:
    ::java::util::Set* getFocusTraversalKeys(int32_t id) override;
    virtual FocusTraversalPolicy* getFocusTraversalPolicy();

public: /* package */
    virtual Container* getHeavyweightContainer();

public:
    virtual Insets* getInsets();
    virtual LayoutManager* getLayout();
    ::java::util::EventListenerArray* getListeners(::java::lang::Class* listenerType) override;
    /*int32_t getListenersCount(int32_t id, bool enabledOnToolkit); (private) */
    Dimension* getMaximumSize() override;
    Dimension* getMinimumSize() override;

public: /* package */
    virtual Component* getMouseEventTarget(int32_t x, int32_t y, bool includeSelf);
    /*Component* getMouseEventTarget(int32_t x, int32_t y, bool includeSelf, Container_EventTargetFilter* filter, bool searchHeavyweights); (private) */
    /*Component* getMouseEventTargetImpl(int32_t x, int32_t y, bool includeSelf, Container_EventTargetFilter* filter, bool searchHeavyweightChildren, bool searchHeavyweightDescendants); (private) */

public:
    virtual Point* getMousePosition(bool allowChildren);

public: /* package */
    ::sun::java2d::pipe::Region* getOpaqueShape() override;

public:
    Dimension* getPreferredSize() override;
    /*int32_t getTopmostComponentIndex(); (private) */

public: /* package */
    Container* getTraversalRoot() override;
    bool hasHeavyweightDescendants();
    bool hasLightweightDescendants();
    void increaseComponentCount(Component* c);
    /*static void initIDs(); (private) */
    void initializeFocusTraversalKeys() override;

public:
    virtual Insets* insets();
    void invalidate() override;

public: /* package */
    void invalidateParent() override;
    virtual void invalidateTree();

public:
    virtual bool isAncestorOf(Component* c);
    virtual bool isFocusCycleRoot();
    bool isFocusCycleRoot(Container* container) override;
    bool isFocusTraversalPolicyProvider();
    virtual bool isFocusTraversalPolicySet();
    /*bool isParentOf(Component* comp); (private) */

public: /* package */
    bool isRecursivelyVisibleUpToHeavyweightContainer();
    /*static bool isRemoveNotifyNeeded(Component* comp, Container* oldContainer, Container* newContainer); (private) */
    bool isSameOrAncestorOf(Component* comp, bool allowChildren) override;

public:
    virtual bool isValidateRoot();
    void layout() override;

public: /* package */
    void lightweightPaint(Graphics* g) override;
    void lightweightPrint(Graphics* g) override;

public:
    void list(::java::io::PrintStream* out, int32_t indent) override;
    void list(::java::io::PrintWriter* out, int32_t indent) override;
    Component* locate(int32_t x, int32_t y) override;
    Dimension* minimumSize() override;

public: /* package */
    void mixOnHiding(bool isLightweight) override;
    void mixOnReshaping() override;
    void mixOnShowing() override;
    void mixOnValidating() override;
    void mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder) override;
    int32_t numListening(int64_t mask) override;

public:
    void paint(Graphics* g) override;
    virtual void paintComponents(Graphics* g);

public: /* package */
    void paintHeavyweightComponents(Graphics* g) override;

public: /* protected */
    ::java::lang::String* paramString() override;

public: /* package */
    virtual void postProcessKeyEvent(::java::awt::event::KeyEvent* e);
    bool postsOldMouseEvents() override;
    virtual void preProcessKeyEvent(::java::awt::event::KeyEvent* e);

public:
    Dimension* preferredSize() override;
    void print(Graphics* g) override;
    virtual void printComponents(Graphics* g);

public: /* package */
    void printHeavyweightComponents(Graphics* g) override;

public: /* protected */
    virtual void processContainerEvent(::java::awt::event::ContainerEvent* e);
    void processEvent(AWTEvent* e) override;

public: /* package */
    virtual void proxyEnableEvents(int64_t events);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    void recursiveApplyCurrentShape();
    void recursiveApplyCurrentShape(int32_t fromZorder);
    void recursiveApplyCurrentShape(int32_t fromZorder, int32_t toZorder);
    /*void recursiveHideHeavyweightChildren(); (private) */
    /*void recursiveRelocateHeavyweightChildren(Point* origin); (private) */
    /*void recursiveShowHeavyweightChildren(); (private) */
    void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape);
    void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder);
    void recursiveSubtractAndApplyShape(::sun::java2d::pipe::Region* shape, int32_t fromZorder, int32_t toZorder);

public:
    virtual void remove(int32_t index);
    virtual void remove(Component* comp);
    virtual void removeAll();
    virtual void removeContainerListener(::java::awt::event::ContainerListener* l);
    /*bool removeDelicately(Component* comp, Container* newParent, int32_t newIndex); (private) */
    void removeNotify() override;
    /*void reparentChild(Component* comp); (private) */
    /*void reparentTraverse(::java::awt::peer::ContainerPeer* parentPeer, Container* child); (private) */
    virtual void setComponentZOrder(Component* comp, int32_t index);
    virtual void setFocusCycleRoot(bool focusCycleRoot);
    void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes) override;
    virtual void setFocusTraversalPolicy(FocusTraversalPolicy* policy);
    void setFocusTraversalPolicyProvider(bool provider);
    void setFont(Font* f) override;
    virtual void setLayout(LayoutManager* mgr);
    /*void startLWModal(); (private) */
    /*void stopLWModal(); (private) */
    virtual void transferFocusDownCycle();
    void update(Graphics* g) override;

public: /* package */
    bool updateGraphicsData(GraphicsConfiguration* gc) override;

public:
    void validate() override;

public: /* protected */
    virtual void validateTree();

public: /* package */
    void validateUnconditionally();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated

public:
    Container();
protected:
    Container(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void add(PopupMenu* popup);
    virtual Point* getMousePosition();
    virtual void list();
    virtual void list(::java::io::PrintStream* out);
    virtual void list(::java::io::PrintWriter* out);
    void remove(MenuComponent* popup);

private:
    static ComponentArray*& EMPTY_ARRAY();
    static bool& descendUnconditionallyWhenValidating();
    static ::sun::util::logging::PlatformLogger*& eventLog();
    static bool& isJavaAwtSmartInvalidate();
    static ::sun::util::logging::PlatformLogger*& log();
    static ::sun::util::logging::PlatformLogger*& mixingLog();
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    virtual ::java::lang::Class* getClass0();
};
