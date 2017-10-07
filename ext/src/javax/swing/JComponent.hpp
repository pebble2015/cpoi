// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/concurrent/atomic/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <javax/swing/border/fwd-POI.hpp>
#include <javax/swing/event/fwd-POI.hpp>
#include <javax/swing/plaf/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/awt/Container.hpp>
#include <java/io/Serializable.hpp>
#include <javax/swing/TransferHandler_HasGetTransferHandler.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::AWTKeyStroke, ::java::lang::ObjectArray, ::java::io::SerializableArray > AWTKeyStrokeArray;
    } // awt

    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util

    namespace beans
    {
typedef ::SubArray< ::java::beans::VetoableChangeListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > VetoableChangeListenerArray;
    } // beans
} // java

namespace javax
{
    namespace swing
    {
typedef ::SubArray< ::javax::swing::KeyStroke, ::java::awt::AWTKeyStrokeArray > KeyStrokeArray;

        namespace event
        {
typedef ::SubArray< ::javax::swing::event::AncestorListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > AncestorListenerArray;
        } // event
    } // swing
} // javax

struct default_init_tag;

class javax::swing::JComponent
    : public ::java::awt::Container
    , public virtual ::java::io::Serializable
    , public virtual TransferHandler_HasGetTransferHandler
{

public:
    typedef ::java::awt::Container super;

private:
    static constexpr int32_t ACTIONMAP_CREATED { int32_t(8) };
    static constexpr int32_t ANCESTOR_INPUTMAP_CREATED { int32_t(6) };
    static constexpr int32_t ANCESTOR_USING_BUFFER { int32_t(1) };
    static constexpr int32_t AUTOSCROLLS_SET { int32_t(25) };
    static constexpr int32_t COMPLETELY_OBSCURED { int32_t(2) };
    static constexpr int32_t CREATED_DOUBLE_BUFFER { int32_t(9) };
    static bool DEBUG_GRAPHICS_LOADED_;
    static constexpr int32_t FOCUS_INPUTMAP_CREATED { int32_t(5) };
    static constexpr int32_t FOCUS_TRAVERSAL_KEYS_BACKWARD_SET { int32_t(27) };
    static constexpr int32_t FOCUS_TRAVERSAL_KEYS_FORWARD_SET { int32_t(26) };
    static constexpr int32_t INHERITS_POPUP_MENU { int32_t(23) };
    static ::java::lang::Object* INPUT_VERIFIER_SOURCE_KEY_;
    static constexpr int32_t IS_DOUBLE_BUFFERED { int32_t(0) };
    static constexpr int32_t IS_OPAQUE { int32_t(3) };
    static constexpr int32_t IS_PAINTING_TILE { int32_t(2) };
    static constexpr int32_t IS_PRINTING { int32_t(11) };
    static constexpr int32_t IS_PRINTING_ALL { int32_t(12) };
    static constexpr int32_t IS_REPAINTING { int32_t(13) };
    static ::java::lang::String* KEYBOARD_BINDINGS_KEY_;
    static constexpr int32_t KEY_EVENTS_ENABLED { int32_t(4) };
    static ::java::lang::String* NEXT_FOCUS_;
    static constexpr int32_t NOT_OBSCURED { int32_t(0) };
    static constexpr int32_t OPAQUE_SET { int32_t(24) };
    static constexpr int32_t PARTIALLY_OBSCURED { int32_t(1) };
    static constexpr int32_t REQUEST_FOCUS_DISABLED { int32_t(22) };
    static constexpr int32_t RESERVED_1 { int32_t(15) };
    static constexpr int32_t RESERVED_2 { int32_t(16) };
    static constexpr int32_t RESERVED_3 { int32_t(17) };
    static constexpr int32_t RESERVED_4 { int32_t(18) };
    static constexpr int32_t RESERVED_5 { int32_t(19) };
    static constexpr int32_t RESERVED_6 { int32_t(20) };
    static ::java::lang::String* TOOL_TIP_TEXT_KEY_;

public:
    static constexpr int32_t UNDEFINED_CONDITION { int32_t(-1) };
    static constexpr int32_t WHEN_ANCESTOR_OF_FOCUSED_COMPONENT { int32_t(1) };
    static constexpr int32_t WHEN_FOCUSED { int32_t(0) };
    static constexpr int32_t WHEN_IN_FOCUSED_WINDOW { int32_t(2) };

private:
    static ::java::lang::String* WHEN_IN_FOCUSED_WINDOW_BINDINGS_;
    static constexpr int32_t WIF_INPUTMAP_CREATED { int32_t(7) };
    static constexpr int32_t WRITE_OBJ_COUNTER_FIRST { int32_t(14) };
    static constexpr int32_t WRITE_OBJ_COUNTER_LAST { int32_t(21) };
    ::java::lang::Object* aaTextInfo {  };
    ActionMap* actionMap {  };
    float alignmentX {  };
    float alignmentY {  };
    InputMap* ancestorInputMap {  };
    bool autoscrolls {  };
    ::javax::swing::border::Border* border {  };
    ArrayTable* clientProperties {  };
    static ::java::awt::Component* componentObtainingGraphicsFrom_;
    static ::java::lang::Object* componentObtainingGraphicsFromLock_;
    static ::java::lang::String* defaultLocale_;
    int32_t flags {  };
    static ::sun::awt::RequestFocusController* focusController_;
    InputMap* focusInputMap {  };
    InputVerifier* inputVerifier {  };
    bool isAlignmentXSet {  };
    bool isAlignmentYSet {  };

public: /* protected */
    ::javax::swing::event::EventListenerList* listenerList {  };

private:
    static ::java::util::Set* managingFocusBackwardTraversalKeys_;
    static ::java::util::Set* managingFocusForwardTraversalKeys_;

public: /* package */
    ::java::awt::Component* paintingChild {  };

private:
    JPopupMenu* popupMenu {  };
    static ::java::util::Hashtable* readObjectCallbacks_;
    ::java::util::concurrent::atomic::AtomicBoolean* revalidateRunnableScheduled {  };
    static ::java::util::List* tempRectangles_;

public: /* protected */
    ::javax::swing::plaf::ComponentUI* ui {  };

private:
    static ::java::lang::String* uiClassID_;
    bool verifyInputWhenFocusTarget {  };
    ::java::beans::VetoableChangeSupport* vetoableChangeSupport {  };
    ComponentInputMap* windowInputMap {  };

protected:
    void ctor();

public: /* package */
    virtual void _paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h);

public:
    virtual void addAncestorListener(::javax::swing::event::AncestorListener* listener);
    void addNotify() override;
    virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
    /*void adjustPaintFlags(); (private) */

public: /* package */
    virtual bool alwaysOnTop();
    virtual bool checkIfChildObscuredBySibling();
    virtual void clientPropertyChanged(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void compWriteObjectNotify();
    virtual void componentInputMapChanged(ComponentInputMap* inputMap);

public:
    virtual void computeVisibleRect(::java::awt::Rectangle* visibleRect);

public: /* package */
    static void computeVisibleRect(::java::awt::Component* c, ::java::awt::Rectangle* visibleRect);

public:
    bool contains(int32_t x, int32_t y) override;
    virtual JToolTip* createToolTip();
    /*void deregisterNextFocusableComponent(); (private) */
    void disable() override;

public: /* package */
    virtual void dndDone();
    virtual TransferHandler_DropLocation* dropLocationForPoint(::java::awt::Point* p);

public:
    void enable() override;
    /*static ::java::awt::Rectangle* fetchRectangle(); (private) */
    void firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue) override;
    void firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue) override;
    void firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue) override;

public: /* protected */
    virtual void fireVetoableChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);

public:
    virtual ::java::awt::event::ActionListener* getActionForKeyStroke(KeyStroke* aKeyStroke);
    ActionMap* getActionMap();

public: /* package */
    ActionMap* getActionMap(bool create);

public:
    float getAlignmentX() override;
    float getAlignmentY() override;
    virtual ::javax::swing::event::AncestorListenerArray* getAncestorListeners();
    /*AncestorNotifier* getAncestorNotifier(); (private) */
    virtual bool getAutoscrolls();
    int32_t getBaseline(int32_t width, int32_t height) override;
    ::java::awt::Component_BaselineResizeBehavior* getBaselineResizeBehavior() override;
    virtual ::javax::swing::border::Border* getBorder();
    ::java::awt::Rectangle* getBounds(::java::awt::Rectangle* rv) override;
    /*ArrayTable* getClientProperties(); (private) */
    ::java::lang::Object* getClientProperty(::java::lang::Object* key);

public: /* protected */
    virtual ::java::awt::Graphics* getComponentGraphics(::java::awt::Graphics* g);

public:
    virtual JPopupMenu* getComponentPopupMenu();
    virtual int32_t getConditionForKeyStroke(KeyStroke* aKeyStroke);

public: /* package */
    virtual bool getCreatedDoubleBuffer();

public:
    virtual int32_t getDebugGraphicsOptions();
    static ::java::util::Locale* getDefaultLocale();
    /*bool getFlag(int32_t aFlag); (private) */
    ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
    ::java::awt::Graphics* getGraphics() override;

public: /* package */
    static void getGraphicsInvoked(::java::awt::Component* root);

public:
    int32_t getHeight() override;
    virtual bool getInheritsPopupMenu();
    InputMap* getInputMap();
    InputMap* getInputMap(int32_t condition);

public: /* package */
    InputMap* getInputMap(int32_t condition, bool create);

public:
    virtual InputVerifier* getInputVerifier();
    ::java::awt::Insets* getInsets() override;
    virtual ::java::awt::Insets* getInsets(::java::awt::Insets* insets);
    ::java::util::EventListenerArray* getListeners(::java::lang::Class* listenerType) override;
    ::java::awt::Point* getLocation(::java::awt::Point* rv) override;

public: /* package */
    static ::java::util::Set* getManagingFocusBackwardTraversalKeys();
    static ::java::util::Set* getManagingFocusForwardTraversalKeys();

public:
    ::java::awt::Dimension* getMaximumSize() override;
    ::java::awt::Dimension* getMinimumSize() override;
    virtual ::java::awt::Component* getNextFocusableComponent();
    /*int32_t getObscuredState(int32_t compIndex, int32_t x, int32_t y, int32_t width, int32_t height); (private) */
    virtual ::java::awt::Point* getPopupLocation(::java::awt::event::MouseEvent* event);
    ::java::awt::Dimension* getPreferredSize() override;
    virtual KeyStrokeArray* getRegisteredKeyStrokes();
    virtual JRootPane* getRootPane();
    ::java::awt::Dimension* getSize(::java::awt::Dimension* rv) override;
    virtual ::java::awt::Point* getToolTipLocation(::java::awt::event::MouseEvent* event);
    virtual ::java::lang::String* getToolTipText();
    virtual ::java::lang::String* getToolTipText(::java::awt::event::MouseEvent* event);
    virtual ::java::awt::Container* getTopLevelAncestor();
    TransferHandler* getTransferHandler() override;
    virtual ::java::lang::String* getUIClassID();
    virtual bool getVerifyInputWhenFocusTarget();
    virtual ::java::beans::VetoableChangeListenerArray* getVetoableChangeListeners();
    virtual ::java::awt::Rectangle* getVisibleRect();
    int32_t getWidth() override;

public: /* package */
    static int8_t getWriteObjCounter(JComponent* comp);

public:
    int32_t getX() override;
    int32_t getY() override;
    virtual void grabFocus();
    void hide() override;
    /*static bool isComponentObtainingGraphicsFrom(::java::awt::Component* c); (private) */
    bool isDoubleBuffered() override;
    static bool isLightweightComponent(::java::awt::Component* c);
    virtual bool isManagingFocus();
    bool isOpaque() override;
    virtual bool isOptimizedDrawingEnabled();

public: /* package */
    virtual bool isPainting();

public:
    bool isPaintingForPrint();

public: /* protected */
    virtual bool isPaintingOrigin();

public:
    virtual bool isPaintingTile();
    virtual bool isRequestFocusEnabled();
    bool isValidateRoot() override;
    void paint(::java::awt::Graphics* g) override;

public: /* protected */
    virtual void paintBorder(::java::awt::Graphics* g);
    virtual void paintChildren(::java::awt::Graphics* g);
    virtual void paintComponent(::java::awt::Graphics* g);

public: /* package */
    virtual void paintForceDoubleBuffered(::java::awt::Graphics* g);

public:
    virtual void paintImmediately(::java::awt::Rectangle* r);
    virtual void paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h);

public: /* package */
    virtual void paintToOffscreen(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY);

public: /* protected */
    ::java::lang::String* paramString() override;

public:
    void print(::java::awt::Graphics* g) override;
    void printAll(::java::awt::Graphics* g) override;

public: /* protected */
    virtual void printBorder(::java::awt::Graphics* g);
    virtual void printChildren(::java::awt::Graphics* g);
    virtual void printComponent(::java::awt::Graphics* g);
    virtual void processComponentKeyEvent(::java::awt::event::KeyEvent* e);
    virtual bool processKeyBinding(KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed);

public: /* package */
    virtual bool processKeyBindings(::java::awt::event::KeyEvent* e, bool pressed);
    static bool processKeyBindingsForAllComponents(::java::awt::event::KeyEvent* e, ::java::awt::Container* container, bool pressed);

public: /* protected */
    void processKeyEvent(::java::awt::event::KeyEvent* e) override;
    void processMouseEvent(::java::awt::event::MouseEvent* e) override;
    void processMouseMotionEvent(::java::awt::event::MouseEvent* e) override;

public:
    void putClientProperty(::java::lang::Object* key, ::java::lang::Object* value);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */

public: /* package */
    virtual bool rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height);
    /*static void recycleRectangle(::java::awt::Rectangle* rect); (private) */

public:
    virtual void registerKeyboardAction(::java::awt::event::ActionListener* anAction, KeyStroke* aKeyStroke, int32_t aCondition);
    virtual void registerKeyboardAction(::java::awt::event::ActionListener* anAction, ::java::lang::String* aCommand, KeyStroke* aKeyStroke, int32_t aCondition);
    /*void registerNextFocusableComponent(); (private) */
    /*void registerNextFocusableComponent(::java::awt::Component* nextFocusableComponent); (private) */
    /*void registerWithKeyboardManager(bool onlyIfNew); (private) */
    /*void registerWithKeyboardManager(KeyStroke* aKeyStroke); (private) */
    virtual void removeAncestorListener(::javax::swing::event::AncestorListener* listener);
    void removeNotify() override;
    virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
    virtual void repaint(::java::awt::Rectangle* r);
    void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) override;
    virtual bool requestDefaultFocus();
    void requestFocus() override;
    bool requestFocus(bool temporary) override;
    bool requestFocusInWindow() override;

public: /* protected */
    bool requestFocusInWindow(bool temporary) override;

public:
    virtual void resetKeyboardActions();
    void reshape(int32_t x, int32_t y, int32_t w, int32_t h) override;
    void revalidate() override;

public: /* package */
    static ::java::awt::Graphics* safelyGetGraphics(::java::awt::Component* c);
    static ::java::awt::Graphics* safelyGetGraphics(::java::awt::Component* c, ::java::awt::Component* root);

public:
    virtual void scrollRectToVisible(::java::awt::Rectangle* aRect);
    void setActionMap(ActionMap* am);
    virtual void setAlignmentX(float alignmentX);
    virtual void setAlignmentY(float alignmentY);
    virtual void setAutoscrolls(bool autoscrolls);
    void setBackground(::java::awt::Color* bg) override;
    virtual void setBorder(::javax::swing::border::Border* border);
    virtual void setComponentPopupMenu(JPopupMenu* popup);

public: /* package */
    virtual void setCreatedDoubleBuffer(bool newValue);

public:
    virtual void setDebugGraphicsOptions(int32_t debugOptions);
    static void setDefaultLocale(::java::util::Locale* l);
    virtual void setDoubleBuffered(bool aFlag);

public: /* package */
    virtual ::java::lang::Object* setDropLocation(TransferHandler_DropLocation* location, ::java::lang::Object* state, bool forDrop);

public:
    void setEnabled(bool enabled) override;
    /*void setFlag(int32_t aFlag, bool aValue); (private) */
    void setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes) override;
    void setFont(::java::awt::Font* font) override;
    void setForeground(::java::awt::Color* fg) override;
    virtual void setInheritsPopupMenu(bool value);
    void setInputMap(int32_t condition, InputMap* map);
    virtual void setInputVerifier(InputVerifier* inputVerifier);
    void setMaximumSize(::java::awt::Dimension* maximumSize) override;
    void setMinimumSize(::java::awt::Dimension* minimumSize) override;
    virtual void setNextFocusableComponent(::java::awt::Component* aComponent);
    virtual void setOpaque(bool isOpaque);

public: /* package */
    virtual void setPaintingChild(::java::awt::Component* paintingChild);

public:
    void setPreferredSize(::java::awt::Dimension* preferredSize) override;
    virtual void setRequestFocusEnabled(bool requestFocusEnabled);
    virtual void setToolTipText(::java::lang::String* text);
    virtual void setTransferHandler(TransferHandler* newHandler);

public: /* protected */
    virtual void setUI(::javax::swing::plaf::ComponentUI* newUI);

public: /* package */
    virtual void setUIProperty(::java::lang::String* propertyName, ::java::lang::Object* value);

public:
    virtual void setVerifyInputWhenFocusTarget(bool verifyInputWhenFocusTarget);
    void setVisible(bool aFlag) override;

public: /* package */
    static void setWriteObjCounter(JComponent* comp, int8_t count);
    virtual int32_t shouldDebugGraphics();
    virtual void superProcessMouseMotionEvent(::java::awt::event::MouseEvent* e);
    /*void uninstallUIAndProperties(); (private) */

public:
    virtual void unregisterKeyboardAction(KeyStroke* aKeyStroke);
    /*void unregisterWithKeyboardManager(); (private) */
    /*void unregisterWithKeyboardManager(KeyStroke* aKeyStroke); (private) */
    void update(::java::awt::Graphics* g) override;
    virtual void updateUI();
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    JComponent();
protected:
    JComponent(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool contains(::java::awt::Point* p);
    virtual void enable(bool b);

public: /* protected */
    virtual void firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);

public:
    virtual void firePropertyChange(::java::lang::String* propertyName, int8_t oldValue, int8_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int16_t oldValue, int16_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int64_t oldValue, int64_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, float oldValue, float newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, double oldValue, double newValue);
    virtual ::java::awt::Rectangle* getBounds();
    virtual ::java::awt::Point* getLocation();
    virtual ::java::awt::Dimension* getSize();
    virtual void repaint();
    virtual void repaint(int64_t tm);
    virtual void repaint(int32_t x, int32_t y, int32_t width, int32_t height);

public: /* package */
    virtual bool requestFocus(::sun::awt::CausedFocusEvent_Cause* cause);
    virtual bool requestFocus(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause);
    virtual bool requestFocusInWindow(::sun::awt::CausedFocusEvent_Cause* cause);
    virtual bool requestFocusInWindow(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause);
    static bool& DEBUG_GRAPHICS_LOADED();

private:
    static ::java::lang::Object*& INPUT_VERIFIER_SOURCE_KEY();
    static ::java::lang::String*& KEYBOARD_BINDINGS_KEY();
    static ::java::lang::String*& NEXT_FOCUS();

public:
    static ::java::lang::String*& TOOL_TIP_TEXT_KEY();

private:
    static ::java::lang::String*& WHEN_IN_FOCUSED_WINDOW_BINDINGS();
    static ::java::awt::Component*& componentObtainingGraphicsFrom();
    static ::java::lang::Object*& componentObtainingGraphicsFromLock();
    static ::java::lang::String*& defaultLocale();

public: /* package */
    static ::sun::awt::RequestFocusController*& focusController();

private:
    static ::java::util::Set*& managingFocusBackwardTraversalKeys();
    static ::java::util::Set*& managingFocusForwardTraversalKeys();
    static ::java::util::Hashtable*& readObjectCallbacks();
    static ::java::util::List*& tempRectangles();
    static ::java::lang::String*& uiClassID();
    virtual ::java::lang::Class* getClass0();
};
