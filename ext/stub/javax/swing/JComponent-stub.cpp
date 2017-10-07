// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/swing/JComponent.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Point.hpp>
#include <java/awt/Rectangle.hpp>

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

extern void unimplemented_(const char16_t* name);
javax::swing::JComponent::JComponent(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::swing::JComponent::JComponent()
    : JComponent(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t javax::swing::JComponent::ACTIONMAP_CREATED;
constexpr int32_t javax::swing::JComponent::ANCESTOR_INPUTMAP_CREATED;
constexpr int32_t javax::swing::JComponent::ANCESTOR_USING_BUFFER;
constexpr int32_t javax::swing::JComponent::AUTOSCROLLS_SET;
constexpr int32_t javax::swing::JComponent::COMPLETELY_OBSCURED;
constexpr int32_t javax::swing::JComponent::CREATED_DOUBLE_BUFFER;
bool& javax::swing::JComponent::DEBUG_GRAPHICS_LOADED()
{
    clinit();
    return DEBUG_GRAPHICS_LOADED_;
}
bool javax::swing::JComponent::DEBUG_GRAPHICS_LOADED_;
constexpr int32_t javax::swing::JComponent::FOCUS_INPUTMAP_CREATED;
constexpr int32_t javax::swing::JComponent::FOCUS_TRAVERSAL_KEYS_BACKWARD_SET;
constexpr int32_t javax::swing::JComponent::FOCUS_TRAVERSAL_KEYS_FORWARD_SET;
constexpr int32_t javax::swing::JComponent::INHERITS_POPUP_MENU;
java::lang::Object*& javax::swing::JComponent::INPUT_VERIFIER_SOURCE_KEY()
{
    clinit();
    return INPUT_VERIFIER_SOURCE_KEY_;
}
java::lang::Object* javax::swing::JComponent::INPUT_VERIFIER_SOURCE_KEY_;
constexpr int32_t javax::swing::JComponent::IS_DOUBLE_BUFFERED;
constexpr int32_t javax::swing::JComponent::IS_OPAQUE;
constexpr int32_t javax::swing::JComponent::IS_PAINTING_TILE;
constexpr int32_t javax::swing::JComponent::IS_PRINTING;
constexpr int32_t javax::swing::JComponent::IS_PRINTING_ALL;
constexpr int32_t javax::swing::JComponent::IS_REPAINTING;
java::lang::String*& javax::swing::JComponent::KEYBOARD_BINDINGS_KEY()
{
    clinit();
    return KEYBOARD_BINDINGS_KEY_;
}
java::lang::String* javax::swing::JComponent::KEYBOARD_BINDINGS_KEY_;
constexpr int32_t javax::swing::JComponent::KEY_EVENTS_ENABLED;
java::lang::String*& javax::swing::JComponent::NEXT_FOCUS()
{
    clinit();
    return NEXT_FOCUS_;
}
java::lang::String* javax::swing::JComponent::NEXT_FOCUS_;
constexpr int32_t javax::swing::JComponent::NOT_OBSCURED;
constexpr int32_t javax::swing::JComponent::OPAQUE_SET;
constexpr int32_t javax::swing::JComponent::PARTIALLY_OBSCURED;
constexpr int32_t javax::swing::JComponent::REQUEST_FOCUS_DISABLED;
constexpr int32_t javax::swing::JComponent::RESERVED_1;
constexpr int32_t javax::swing::JComponent::RESERVED_2;
constexpr int32_t javax::swing::JComponent::RESERVED_3;
constexpr int32_t javax::swing::JComponent::RESERVED_4;
constexpr int32_t javax::swing::JComponent::RESERVED_5;
constexpr int32_t javax::swing::JComponent::RESERVED_6;
java::lang::String*& javax::swing::JComponent::TOOL_TIP_TEXT_KEY()
{
    clinit();
    return TOOL_TIP_TEXT_KEY_;
}
java::lang::String* javax::swing::JComponent::TOOL_TIP_TEXT_KEY_;
constexpr int32_t javax::swing::JComponent::UNDEFINED_CONDITION;
constexpr int32_t javax::swing::JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT;
constexpr int32_t javax::swing::JComponent::WHEN_FOCUSED;
constexpr int32_t javax::swing::JComponent::WHEN_IN_FOCUSED_WINDOW;
java::lang::String*& javax::swing::JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS()
{
    clinit();
    return WHEN_IN_FOCUSED_WINDOW_BINDINGS_;
}
java::lang::String* javax::swing::JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS_;
constexpr int32_t javax::swing::JComponent::WIF_INPUTMAP_CREATED;
constexpr int32_t javax::swing::JComponent::WRITE_OBJ_COUNTER_FIRST;
constexpr int32_t javax::swing::JComponent::WRITE_OBJ_COUNTER_LAST;
java::awt::Component*& javax::swing::JComponent::componentObtainingGraphicsFrom()
{
    clinit();
    return componentObtainingGraphicsFrom_;
}
java::awt::Component* javax::swing::JComponent::componentObtainingGraphicsFrom_;
java::lang::Object*& javax::swing::JComponent::componentObtainingGraphicsFromLock()
{
    clinit();
    return componentObtainingGraphicsFromLock_;
}
java::lang::Object* javax::swing::JComponent::componentObtainingGraphicsFromLock_;
java::lang::String*& javax::swing::JComponent::defaultLocale()
{
    clinit();
    return defaultLocale_;
}
java::lang::String* javax::swing::JComponent::defaultLocale_;
sun::awt::RequestFocusController*& javax::swing::JComponent::focusController()
{
    clinit();
    return focusController_;
}
sun::awt::RequestFocusController* javax::swing::JComponent::focusController_;
java::util::Set*& javax::swing::JComponent::managingFocusBackwardTraversalKeys()
{
    clinit();
    return managingFocusBackwardTraversalKeys_;
}
java::util::Set* javax::swing::JComponent::managingFocusBackwardTraversalKeys_;
java::util::Set*& javax::swing::JComponent::managingFocusForwardTraversalKeys()
{
    clinit();
    return managingFocusForwardTraversalKeys_;
}
java::util::Set* javax::swing::JComponent::managingFocusForwardTraversalKeys_;
java::util::Hashtable*& javax::swing::JComponent::readObjectCallbacks()
{
    clinit();
    return readObjectCallbacks_;
}
java::util::Hashtable* javax::swing::JComponent::readObjectCallbacks_;
java::util::List*& javax::swing::JComponent::tempRectangles()
{
    clinit();
    return tempRectangles_;
}
java::util::List* javax::swing::JComponent::tempRectangles_;
java::lang::String*& javax::swing::JComponent::uiClassID()
{
    clinit();
    return uiClassID_;
}
java::lang::String* javax::swing::JComponent::uiClassID_;

void ::javax::swing::JComponent::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::swing::JComponent::ctor()");
}

void javax::swing::JComponent::_paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::_paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h)");
}

void javax::swing::JComponent::addAncestorListener(::javax::swing::event::AncestorListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::addAncestorListener(::javax::swing::event::AncestorListener* listener)");
}

void javax::swing::JComponent::addNotify()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::addNotify()");
}

void javax::swing::JComponent::addVetoableChangeListener(::java::beans::VetoableChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::addVetoableChangeListener(::java::beans::VetoableChangeListener* listener)");
}

/* private: void javax::swing::JComponent::adjustPaintFlags() */
bool javax::swing::JComponent::alwaysOnTop()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::alwaysOnTop()");
    return 0;
}

bool javax::swing::JComponent::checkIfChildObscuredBySibling()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::checkIfChildObscuredBySibling()");
    return 0;
}

void javax::swing::JComponent::clientPropertyChanged(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::clientPropertyChanged(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
}

void javax::swing::JComponent::compWriteObjectNotify()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::compWriteObjectNotify()");
}

void javax::swing::JComponent::componentInputMapChanged(ComponentInputMap* inputMap)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::componentInputMapChanged(ComponentInputMap* inputMap)");
}

void javax::swing::JComponent::computeVisibleRect(::java::awt::Rectangle* visibleRect)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::computeVisibleRect(::java::awt::Rectangle* visibleRect)");
}

void javax::swing::JComponent::computeVisibleRect(::java::awt::Component* c, ::java::awt::Rectangle* visibleRect)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::swing::JComponent::computeVisibleRect(::java::awt::Component* c, ::java::awt::Rectangle* visibleRect)");
}

bool javax::swing::JComponent::contains(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::contains(int32_t x, int32_t y)");
    return 0;
}

javax::swing::JToolTip* javax::swing::JComponent::createToolTip()
{ /* stub */
    unimplemented_(u"javax::swing::JToolTip* javax::swing::JComponent::createToolTip()");
    return 0;
}

/* private: void javax::swing::JComponent::deregisterNextFocusableComponent() */
void javax::swing::JComponent::disable()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::disable()");
}

void javax::swing::JComponent::dndDone()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::dndDone()");
}

javax::swing::TransferHandler_DropLocation* javax::swing::JComponent::dropLocationForPoint(::java::awt::Point* p)
{ /* stub */
    unimplemented_(u"javax::swing::TransferHandler_DropLocation* javax::swing::JComponent::dropLocationForPoint(::java::awt::Point* p)");
    return 0;
}

void javax::swing::JComponent::enable()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::enable()");
}

/* private: java::awt::Rectangle* javax::swing::JComponent::fetchRectangle() */
void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)");
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)");
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, char16_t oldValue, char16_t newValue)");
}

void javax::swing::JComponent::fireVetoableChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::fireVetoableChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
}

java::awt::event::ActionListener* javax::swing::JComponent::getActionForKeyStroke(KeyStroke* aKeyStroke)
{ /* stub */
    unimplemented_(u"java::awt::event::ActionListener* javax::swing::JComponent::getActionForKeyStroke(KeyStroke* aKeyStroke)");
    return 0;
}

javax::swing::ActionMap* javax::swing::JComponent::getActionMap()
{ /* stub */
return actionMap ; /* getter */
}

javax::swing::ActionMap* javax::swing::JComponent::getActionMap(bool create)
{ /* stub */
return actionMap ; /* getter */
}

float javax::swing::JComponent::getAlignmentX()
{ /* stub */
return alignmentX ; /* getter */
}

float javax::swing::JComponent::getAlignmentY()
{ /* stub */
return alignmentY ; /* getter */
}

javax::swing::event::AncestorListenerArray* javax::swing::JComponent::getAncestorListeners()
{ /* stub */
    unimplemented_(u"javax::swing::event::AncestorListenerArray* javax::swing::JComponent::getAncestorListeners()");
    return 0;
}

/* private: javax::swing::AncestorNotifier* javax::swing::JComponent::getAncestorNotifier() */
bool javax::swing::JComponent::getAutoscrolls()
{ /* stub */
return autoscrolls ; /* getter */
}

int32_t javax::swing::JComponent::getBaseline(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getBaseline(int32_t width, int32_t height)");
    return 0;
}

java::awt::Component_BaselineResizeBehavior* javax::swing::JComponent::getBaselineResizeBehavior()
{ /* stub */
    unimplemented_(u"java::awt::Component_BaselineResizeBehavior* javax::swing::JComponent::getBaselineResizeBehavior()");
    return 0;
}

javax::swing::border::Border* javax::swing::JComponent::getBorder()
{ /* stub */
return border ; /* getter */
}

java::awt::Rectangle* javax::swing::JComponent::getBounds(::java::awt::Rectangle* rv)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* javax::swing::JComponent::getBounds(::java::awt::Rectangle* rv)");
    return 0;
}

/* private: javax::swing::ArrayTable* javax::swing::JComponent::getClientProperties() */
java::lang::Object* javax::swing::JComponent::getClientProperty(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* javax::swing::JComponent::getClientProperty(::java::lang::Object* key)");
    return 0;
}

java::awt::Graphics* javax::swing::JComponent::getComponentGraphics(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"java::awt::Graphics* javax::swing::JComponent::getComponentGraphics(::java::awt::Graphics* g)");
    return 0;
}

javax::swing::JPopupMenu* javax::swing::JComponent::getComponentPopupMenu()
{ /* stub */
    unimplemented_(u"javax::swing::JPopupMenu* javax::swing::JComponent::getComponentPopupMenu()");
    return 0;
}

int32_t javax::swing::JComponent::getConditionForKeyStroke(KeyStroke* aKeyStroke)
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getConditionForKeyStroke(KeyStroke* aKeyStroke)");
    return 0;
}

bool javax::swing::JComponent::getCreatedDoubleBuffer()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::getCreatedDoubleBuffer()");
    return 0;
}

int32_t javax::swing::JComponent::getDebugGraphicsOptions()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getDebugGraphicsOptions()");
    return 0;
}

java::util::Locale* javax::swing::JComponent::getDefaultLocale()
{ /* stub */
    clinit();
}

/* private: bool javax::swing::JComponent::getFlag(int32_t aFlag) */
java::awt::FontMetrics* javax::swing::JComponent::getFontMetrics(::java::awt::Font* font)
{ /* stub */
    unimplemented_(u"java::awt::FontMetrics* javax::swing::JComponent::getFontMetrics(::java::awt::Font* font)");
    return 0;
}

java::awt::Graphics* javax::swing::JComponent::getGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* javax::swing::JComponent::getGraphics()");
    return 0;
}

void javax::swing::JComponent::getGraphicsInvoked(::java::awt::Component* root)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::swing::JComponent::getGraphicsInvoked(::java::awt::Component* root)");
}

int32_t javax::swing::JComponent::getHeight()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getHeight()");
    return 0;
}

bool javax::swing::JComponent::getInheritsPopupMenu()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::getInheritsPopupMenu()");
    return 0;
}

javax::swing::InputMap* javax::swing::JComponent::getInputMap()
{ /* stub */
    unimplemented_(u"javax::swing::InputMap* javax::swing::JComponent::getInputMap()");
    return 0;
}

javax::swing::InputMap* javax::swing::JComponent::getInputMap(int32_t condition)
{ /* stub */
    unimplemented_(u"javax::swing::InputMap* javax::swing::JComponent::getInputMap(int32_t condition)");
    return 0;
}

javax::swing::InputMap* javax::swing::JComponent::getInputMap(int32_t condition, bool create)
{ /* stub */
    unimplemented_(u"javax::swing::InputMap* javax::swing::JComponent::getInputMap(int32_t condition, bool create)");
    return 0;
}

javax::swing::InputVerifier* javax::swing::JComponent::getInputVerifier()
{ /* stub */
return inputVerifier ; /* getter */
}

java::awt::Insets* javax::swing::JComponent::getInsets()
{ /* stub */
    unimplemented_(u"java::awt::Insets* javax::swing::JComponent::getInsets()");
    return 0;
}

java::awt::Insets* javax::swing::JComponent::getInsets(::java::awt::Insets* insets)
{ /* stub */
    unimplemented_(u"java::awt::Insets* javax::swing::JComponent::getInsets(::java::awt::Insets* insets)");
    return 0;
}

java::util::EventListenerArray* javax::swing::JComponent::getListeners(::java::lang::Class* listenerType)
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* javax::swing::JComponent::getListeners(::java::lang::Class* listenerType)");
    return 0;
}

java::awt::Point* javax::swing::JComponent::getLocation(::java::awt::Point* rv)
{ /* stub */
    unimplemented_(u"java::awt::Point* javax::swing::JComponent::getLocation(::java::awt::Point* rv)");
    return 0;
}

java::util::Set* javax::swing::JComponent::getManagingFocusBackwardTraversalKeys()
{ /* stub */
    clinit();
return managingFocusBackwardTraversalKeys() ; /* getter */
}

java::util::Set* javax::swing::JComponent::getManagingFocusForwardTraversalKeys()
{ /* stub */
    clinit();
return managingFocusForwardTraversalKeys() ; /* getter */
}

java::awt::Dimension* javax::swing::JComponent::getMaximumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* javax::swing::JComponent::getMaximumSize()");
    return 0;
}

java::awt::Dimension* javax::swing::JComponent::getMinimumSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* javax::swing::JComponent::getMinimumSize()");
    return 0;
}

java::awt::Component* javax::swing::JComponent::getNextFocusableComponent()
{ /* stub */
    unimplemented_(u"java::awt::Component* javax::swing::JComponent::getNextFocusableComponent()");
    return 0;
}

/* private: int32_t javax::swing::JComponent::getObscuredState(int32_t compIndex, int32_t x, int32_t y, int32_t width, int32_t height) */
java::awt::Point* javax::swing::JComponent::getPopupLocation(::java::awt::event::MouseEvent* event)
{ /* stub */
    unimplemented_(u"java::awt::Point* javax::swing::JComponent::getPopupLocation(::java::awt::event::MouseEvent* event)");
    return 0;
}

java::awt::Dimension* javax::swing::JComponent::getPreferredSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* javax::swing::JComponent::getPreferredSize()");
    return 0;
}

javax::swing::KeyStrokeArray* javax::swing::JComponent::getRegisteredKeyStrokes()
{ /* stub */
    unimplemented_(u"javax::swing::KeyStrokeArray* javax::swing::JComponent::getRegisteredKeyStrokes()");
    return 0;
}

javax::swing::JRootPane* javax::swing::JComponent::getRootPane()
{ /* stub */
    unimplemented_(u"javax::swing::JRootPane* javax::swing::JComponent::getRootPane()");
    return 0;
}

java::awt::Dimension* javax::swing::JComponent::getSize(::java::awt::Dimension* rv)
{ /* stub */
    unimplemented_(u"java::awt::Dimension* javax::swing::JComponent::getSize(::java::awt::Dimension* rv)");
    return 0;
}

java::awt::Point* javax::swing::JComponent::getToolTipLocation(::java::awt::event::MouseEvent* event)
{ /* stub */
    unimplemented_(u"java::awt::Point* javax::swing::JComponent::getToolTipLocation(::java::awt::event::MouseEvent* event)");
    return 0;
}

java::lang::String* javax::swing::JComponent::getToolTipText()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent::getToolTipText()");
    return 0;
}

java::lang::String* javax::swing::JComponent::getToolTipText(::java::awt::event::MouseEvent* event)
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent::getToolTipText(::java::awt::event::MouseEvent* event)");
    return 0;
}

java::awt::Container* javax::swing::JComponent::getTopLevelAncestor()
{ /* stub */
    unimplemented_(u"java::awt::Container* javax::swing::JComponent::getTopLevelAncestor()");
    return 0;
}

javax::swing::TransferHandler* javax::swing::JComponent::getTransferHandler()
{ /* stub */
    unimplemented_(u"javax::swing::TransferHandler* javax::swing::JComponent::getTransferHandler()");
    return 0;
}

java::lang::String* javax::swing::JComponent::getUIClassID()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent::getUIClassID()");
    return 0;
}

bool javax::swing::JComponent::getVerifyInputWhenFocusTarget()
{ /* stub */
return verifyInputWhenFocusTarget ; /* getter */
}

java::beans::VetoableChangeListenerArray* javax::swing::JComponent::getVetoableChangeListeners()
{ /* stub */
    unimplemented_(u"java::beans::VetoableChangeListenerArray* javax::swing::JComponent::getVetoableChangeListeners()");
    return 0;
}

java::awt::Rectangle* javax::swing::JComponent::getVisibleRect()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* javax::swing::JComponent::getVisibleRect()");
    return 0;
}

int32_t javax::swing::JComponent::getWidth()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getWidth()");
    return 0;
}

int8_t javax::swing::JComponent::getWriteObjCounter(JComponent* comp)
{ /* stub */
    clinit();
    unimplemented_(u"int8_t javax::swing::JComponent::getWriteObjCounter(JComponent* comp)");
    return 0;
}

int32_t javax::swing::JComponent::getX()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getX()");
    return 0;
}

int32_t javax::swing::JComponent::getY()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::getY()");
    return 0;
}

void javax::swing::JComponent::grabFocus()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::grabFocus()");
}

void javax::swing::JComponent::hide()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::hide()");
}

/* private: bool javax::swing::JComponent::isComponentObtainingGraphicsFrom(::java::awt::Component* c) */
bool javax::swing::JComponent::isDoubleBuffered()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isDoubleBuffered()");
    return 0;
}

bool javax::swing::JComponent::isLightweightComponent(::java::awt::Component* c)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::swing::JComponent::isLightweightComponent(::java::awt::Component* c)");
    return 0;
}

bool javax::swing::JComponent::isManagingFocus()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isManagingFocus()");
    return 0;
}

bool javax::swing::JComponent::isOpaque()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isOpaque()");
    return 0;
}

bool javax::swing::JComponent::isOptimizedDrawingEnabled()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isOptimizedDrawingEnabled()");
    return 0;
}

bool javax::swing::JComponent::isPainting()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isPainting()");
    return 0;
}

bool javax::swing::JComponent::isPaintingForPrint()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isPaintingForPrint()");
    return 0;
}

bool javax::swing::JComponent::isPaintingOrigin()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isPaintingOrigin()");
    return 0;
}

bool javax::swing::JComponent::isPaintingTile()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isPaintingTile()");
    return 0;
}

bool javax::swing::JComponent::isRequestFocusEnabled()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isRequestFocusEnabled()");
    return 0;
}

bool javax::swing::JComponent::isValidateRoot()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::isValidateRoot()");
    return 0;
}

void javax::swing::JComponent::paint(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paint(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::paintBorder(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintBorder(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::paintChildren(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintChildren(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::paintComponent(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintComponent(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::paintForceDoubleBuffered(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintForceDoubleBuffered(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::paintImmediately(::java::awt::Rectangle* r)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintImmediately(::java::awt::Rectangle* r)");
}

void javax::swing::JComponent::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h)");
}

void javax::swing::JComponent::paintToOffscreen(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::paintToOffscreen(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY)");
}

java::lang::String* javax::swing::JComponent::paramString()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent::paramString()");
    return 0;
}

void javax::swing::JComponent::print(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::print(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::printAll(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::printAll(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::printBorder(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::printBorder(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::printChildren(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::printChildren(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::printComponent(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::printComponent(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::processComponentKeyEvent(::java::awt::event::KeyEvent* e)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::processComponentKeyEvent(::java::awt::event::KeyEvent* e)");
}

bool javax::swing::JComponent::processKeyBinding(KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::processKeyBinding(KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed)");
    return 0;
}

bool javax::swing::JComponent::processKeyBindings(::java::awt::event::KeyEvent* e, bool pressed)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::processKeyBindings(::java::awt::event::KeyEvent* e, bool pressed)");
    return 0;
}

bool javax::swing::JComponent::processKeyBindingsForAllComponents(::java::awt::event::KeyEvent* e, ::java::awt::Container* container, bool pressed)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::swing::JComponent::processKeyBindingsForAllComponents(::java::awt::event::KeyEvent* e, ::java::awt::Container* container, bool pressed)");
    return 0;
}

void javax::swing::JComponent::processKeyEvent(::java::awt::event::KeyEvent* e)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::processKeyEvent(::java::awt::event::KeyEvent* e)");
}

void javax::swing::JComponent::processMouseEvent(::java::awt::event::MouseEvent* e)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::processMouseEvent(::java::awt::event::MouseEvent* e)");
}

void javax::swing::JComponent::processMouseMotionEvent(::java::awt::event::MouseEvent* e)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::processMouseMotionEvent(::java::awt::event::MouseEvent* e)");
}

void javax::swing::JComponent::putClientProperty(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::putClientProperty(::java::lang::Object* key, ::java::lang::Object* value)");
}

/* private: void javax::swing::JComponent::readObject(::java::io::ObjectInputStream* s) */
bool javax::swing::JComponent::rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height)");
    return 0;
}

/* private: void javax::swing::JComponent::recycleRectangle(::java::awt::Rectangle* rect) */
void javax::swing::JComponent::registerKeyboardAction(::java::awt::event::ActionListener* anAction, KeyStroke* aKeyStroke, int32_t aCondition)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::registerKeyboardAction(::java::awt::event::ActionListener* anAction, KeyStroke* aKeyStroke, int32_t aCondition)");
}

void javax::swing::JComponent::registerKeyboardAction(::java::awt::event::ActionListener* anAction, ::java::lang::String* aCommand, KeyStroke* aKeyStroke, int32_t aCondition)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::registerKeyboardAction(::java::awt::event::ActionListener* anAction, ::java::lang::String* aCommand, KeyStroke* aKeyStroke, int32_t aCondition)");
}

/* private: void javax::swing::JComponent::registerNextFocusableComponent() */
/* private: void javax::swing::JComponent::registerNextFocusableComponent(::java::awt::Component* nextFocusableComponent) */
/* private: void javax::swing::JComponent::registerWithKeyboardManager(bool onlyIfNew) */
/* private: void javax::swing::JComponent::registerWithKeyboardManager(KeyStroke* aKeyStroke) */
void javax::swing::JComponent::removeAncestorListener(::javax::swing::event::AncestorListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::removeAncestorListener(::javax::swing::event::AncestorListener* listener)");
}

void javax::swing::JComponent::removeNotify()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::removeNotify()");
}

void javax::swing::JComponent::removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener)");
}

void javax::swing::JComponent::repaint(::java::awt::Rectangle* r)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::repaint(::java::awt::Rectangle* r)");
}

void javax::swing::JComponent::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height)");
}

bool javax::swing::JComponent::requestDefaultFocus()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::requestDefaultFocus()");
    return 0;
}

void javax::swing::JComponent::requestFocus()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::requestFocus()");
}

bool javax::swing::JComponent::requestFocus(bool temporary)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::requestFocus(bool temporary)");
    return 0;
}

bool javax::swing::JComponent::requestFocusInWindow()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::requestFocusInWindow()");
    return 0;
}

bool javax::swing::JComponent::requestFocusInWindow(bool temporary)
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent::requestFocusInWindow(bool temporary)");
    return 0;
}

void javax::swing::JComponent::resetKeyboardActions()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::resetKeyboardActions()");
}

void javax::swing::JComponent::reshape(int32_t x, int32_t y, int32_t w, int32_t h)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::reshape(int32_t x, int32_t y, int32_t w, int32_t h)");
}

void javax::swing::JComponent::revalidate()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::revalidate()");
}

java::awt::Graphics* javax::swing::JComponent::safelyGetGraphics(::java::awt::Component* c)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Graphics* javax::swing::JComponent::safelyGetGraphics(::java::awt::Component* c)");
    return 0;
}

java::awt::Graphics* javax::swing::JComponent::safelyGetGraphics(::java::awt::Component* c, ::java::awt::Component* root)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Graphics* javax::swing::JComponent::safelyGetGraphics(::java::awt::Component* c, ::java::awt::Component* root)");
    return 0;
}

void javax::swing::JComponent::scrollRectToVisible(::java::awt::Rectangle* aRect)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::scrollRectToVisible(::java::awt::Rectangle* aRect)");
}

void javax::swing::JComponent::setActionMap(ActionMap* am)
{ /* stub */
    this->actionMap = am; /* setter */
}

void javax::swing::JComponent::setAlignmentX(float alignmentX)
{ /* stub */
    this->alignmentX = alignmentX; /* setter */
}

void javax::swing::JComponent::setAlignmentY(float alignmentY)
{ /* stub */
    this->alignmentY = alignmentY; /* setter */
}

void javax::swing::JComponent::setAutoscrolls(bool autoscrolls)
{ /* stub */
    this->autoscrolls = autoscrolls; /* setter */
}

void javax::swing::JComponent::setBackground(::java::awt::Color* bg)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setBackground(::java::awt::Color* bg)");
}

void javax::swing::JComponent::setBorder(::javax::swing::border::Border* border)
{ /* stub */
    this->border = border; /* setter */
}

void javax::swing::JComponent::setComponentPopupMenu(JPopupMenu* popup)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setComponentPopupMenu(JPopupMenu* popup)");
}

void javax::swing::JComponent::setCreatedDoubleBuffer(bool newValue)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setCreatedDoubleBuffer(bool newValue)");
}

void javax::swing::JComponent::setDebugGraphicsOptions(int32_t debugOptions)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setDebugGraphicsOptions(int32_t debugOptions)");
}

void javax::swing::JComponent::setDefaultLocale(::java::util::Locale* l)
{ /* stub */
    clinit();
}

void javax::swing::JComponent::setDoubleBuffered(bool aFlag)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setDoubleBuffered(bool aFlag)");
}

java::lang::Object* javax::swing::JComponent::setDropLocation(TransferHandler_DropLocation* location, ::java::lang::Object* state, bool forDrop)
{ /* stub */
    unimplemented_(u"java::lang::Object* javax::swing::JComponent::setDropLocation(TransferHandler_DropLocation* location, ::java::lang::Object* state, bool forDrop)");
    return 0;
}

void javax::swing::JComponent::setEnabled(bool enabled)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setEnabled(bool enabled)");
}

/* private: void javax::swing::JComponent::setFlag(int32_t aFlag, bool aValue) */
void javax::swing::JComponent::setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setFocusTraversalKeys(int32_t id, ::java::util::Set* keystrokes)");
}

void javax::swing::JComponent::setFont(::java::awt::Font* font)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setFont(::java::awt::Font* font)");
}

void javax::swing::JComponent::setForeground(::java::awt::Color* fg)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setForeground(::java::awt::Color* fg)");
}

void javax::swing::JComponent::setInheritsPopupMenu(bool value)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setInheritsPopupMenu(bool value)");
}

void javax::swing::JComponent::setInputMap(int32_t condition, InputMap* map)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setInputMap(int32_t condition, InputMap* map)");
}

void javax::swing::JComponent::setInputVerifier(InputVerifier* inputVerifier)
{ /* stub */
    this->inputVerifier = inputVerifier; /* setter */
}

void javax::swing::JComponent::setMaximumSize(::java::awt::Dimension* maximumSize)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setMaximumSize(::java::awt::Dimension* maximumSize)");
}

void javax::swing::JComponent::setMinimumSize(::java::awt::Dimension* minimumSize)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setMinimumSize(::java::awt::Dimension* minimumSize)");
}

void javax::swing::JComponent::setNextFocusableComponent(::java::awt::Component* aComponent)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setNextFocusableComponent(::java::awt::Component* aComponent)");
}

void javax::swing::JComponent::setOpaque(bool isOpaque)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setOpaque(bool isOpaque)");
}

void javax::swing::JComponent::setPaintingChild(::java::awt::Component* paintingChild)
{ /* stub */
    this->paintingChild = paintingChild; /* setter */
}

void javax::swing::JComponent::setPreferredSize(::java::awt::Dimension* preferredSize)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setPreferredSize(::java::awt::Dimension* preferredSize)");
}

void javax::swing::JComponent::setRequestFocusEnabled(bool requestFocusEnabled)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setRequestFocusEnabled(bool requestFocusEnabled)");
}

void javax::swing::JComponent::setToolTipText(::java::lang::String* text)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setToolTipText(::java::lang::String* text)");
}

void javax::swing::JComponent::setTransferHandler(TransferHandler* newHandler)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setTransferHandler(TransferHandler* newHandler)");
}

void javax::swing::JComponent::setUI(::javax::swing::plaf::ComponentUI* newUI)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setUI(::javax::swing::plaf::ComponentUI* newUI)");
}

void javax::swing::JComponent::setUIProperty(::java::lang::String* propertyName, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setUIProperty(::java::lang::String* propertyName, ::java::lang::Object* value)");
}

void javax::swing::JComponent::setVerifyInputWhenFocusTarget(bool verifyInputWhenFocusTarget)
{ /* stub */
    this->verifyInputWhenFocusTarget = verifyInputWhenFocusTarget; /* setter */
}

void javax::swing::JComponent::setVisible(bool aFlag)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::setVisible(bool aFlag)");
}

void javax::swing::JComponent::setWriteObjCounter(JComponent* comp, int8_t count)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::swing::JComponent::setWriteObjCounter(JComponent* comp, int8_t count)");
}

int32_t javax::swing::JComponent::shouldDebugGraphics()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent::shouldDebugGraphics()");
    return 0;
}

void javax::swing::JComponent::superProcessMouseMotionEvent(::java::awt::event::MouseEvent* e)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::superProcessMouseMotionEvent(::java::awt::event::MouseEvent* e)");
}

/* private: void javax::swing::JComponent::uninstallUIAndProperties() */
void javax::swing::JComponent::unregisterKeyboardAction(KeyStroke* aKeyStroke)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::unregisterKeyboardAction(KeyStroke* aKeyStroke)");
}

/* private: void javax::swing::JComponent::unregisterWithKeyboardManager() */
/* private: void javax::swing::JComponent::unregisterWithKeyboardManager(KeyStroke* aKeyStroke) */
void javax::swing::JComponent::update(::java::awt::Graphics* g)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::update(::java::awt::Graphics* g)");
}

void javax::swing::JComponent::updateUI()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent::updateUI()");
}

/* private: void javax::swing::JComponent::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::swing::JComponent::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.swing.JComponent", 22);
    return c;
}

bool javax::swing::JComponent::contains(::java::awt::Point* p)
{
    return super::contains(p);
}

void javax::swing::JComponent::enable(bool b)
{
    super::enable(b);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, int8_t oldValue, int8_t newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, int16_t oldValue, int16_t newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, int64_t oldValue, int64_t newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, float oldValue, float newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void javax::swing::JComponent::firePropertyChange(::java::lang::String* propertyName, double oldValue, double newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

java::awt::Rectangle* javax::swing::JComponent::getBounds()
{
    return super::getBounds();
}

java::awt::Point* javax::swing::JComponent::getLocation()
{
    return super::getLocation();
}

java::awt::Dimension* javax::swing::JComponent::getSize()
{
    return super::getSize();
}

void javax::swing::JComponent::repaint()
{
    super::repaint();
}

void javax::swing::JComponent::repaint(int64_t tm)
{
    super::repaint(tm);
}

void javax::swing::JComponent::repaint(int32_t x, int32_t y, int32_t width, int32_t height)
{
    super::repaint(x, y, width, height);
}

bool javax::swing::JComponent::requestFocus(::sun::awt::CausedFocusEvent_Cause* cause)
{
    return super::requestFocus(cause);
}

bool javax::swing::JComponent::requestFocus(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)
{
    return super::requestFocus(temporary, cause);
}

bool javax::swing::JComponent::requestFocusInWindow(::sun::awt::CausedFocusEvent_Cause* cause)
{
    return super::requestFocusInWindow(cause);
}

bool javax::swing::JComponent::requestFocusInWindow(bool temporary, ::sun::awt::CausedFocusEvent_Cause* cause)
{
    return super::requestFocusInWindow(temporary, cause);
}

java::lang::Class* javax::swing::JComponent::getClass0()
{
    return class_();
}

