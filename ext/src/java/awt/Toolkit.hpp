// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/datatransfer/fwd-POI.hpp>
#include <java/awt/dnd/fwd-POI.hpp>
#include <java/awt/dnd/peer/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/awt/im/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/peer/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/net/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::awt::Toolkit
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static constexpr int32_t LONG_BITS { int32_t(64) };
    static ::java::lang::String* atNames_;
    ::int32_tArray* calls {  };

public: /* protected */
    ::java::util::Map* desktopProperties {  };
    ::java::beans::PropertyChangeSupport* desktopPropsSupport {  };

private:
    static std::atomic< int64_t > enabledOnToolkitMask_;
    ::java::awt::event::AWTEventListener* eventListener {  };
    static ::java::awt::peer::LightweightPeer* lightweightMarker_;
    ::java::util::WeakHashMap* listener2SelectiveListener {  };
    static bool loaded_;
    static ::java::util::ResourceBundle* platformResources_;
    static ::java::util::ResourceBundle* resources_;
    static Toolkit* toolkit_;

protected:
    void ctor();

public:
    virtual void addAWTEventListener(::java::awt::event::AWTEventListener* listener, int64_t eventMask);
    virtual void addPropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl);
    virtual bool areExtraMouseButtonsEnabled();
    virtual void beep() = 0;
    virtual int32_t checkImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) = 0;

public: /* package */
    virtual int32_t countAWTEventListeners(int64_t eventMask);

public: /* protected */
    virtual ::java::awt::peer::ButtonPeer* createButton(Button* target) = 0;
    virtual ::java::awt::peer::CanvasPeer* createCanvas(Canvas* target) = 0;
    virtual ::java::awt::peer::CheckboxPeer* createCheckbox(Checkbox* target) = 0;
    virtual ::java::awt::peer::CheckboxMenuItemPeer* createCheckboxMenuItem(CheckboxMenuItem* target) = 0;
    virtual ::java::awt::peer::ChoicePeer* createChoice(Choice* target) = 0;
    virtual ::java::awt::peer::LightweightPeer* createComponent(Component* target);

public:
    virtual Cursor* createCustomCursor(Image* cursor, Point* hotSpot, ::java::lang::String* name);

public: /* protected */
    virtual ::java::awt::peer::DesktopPeer* createDesktopPeer(Desktop* target) = 0;
    virtual ::java::awt::peer::DialogPeer* createDialog(Dialog* target) = 0;

public:
    virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer(::java::lang::Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl);
    virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) = 0;

public: /* protected */
    virtual ::java::awt::peer::FileDialogPeer* createFileDialog(FileDialog* target) = 0;
    virtual ::java::awt::peer::FramePeer* createFrame(Frame* target) = 0;

public:
    virtual Image* createImage(::java::lang::String* filename) = 0;
    virtual Image* createImage(::java::net::URL* url) = 0;
    virtual Image* createImage(::java::awt::image::ImageProducer* producer) = 0;
    virtual Image* createImage(::int8_tArray* imagedata);
    virtual Image* createImage(::int8_tArray* imagedata, int32_t imageoffset, int32_t imagelength) = 0;

public: /* protected */
    virtual ::java::awt::peer::LabelPeer* createLabel(Label* target) = 0;
    virtual ::java::awt::peer::ListPeer* createList(List* target) = 0;
    virtual ::java::awt::peer::MenuPeer* createMenu(Menu* target) = 0;
    virtual ::java::awt::peer::MenuBarPeer* createMenuBar(MenuBar* target) = 0;
    virtual ::java::awt::peer::MenuItemPeer* createMenuItem(MenuItem* target) = 0;
    virtual ::java::awt::peer::PanelPeer* createPanel(Panel* target) = 0;
    virtual ::java::awt::peer::PopupMenuPeer* createPopupMenu(PopupMenu* target) = 0;
    /*static ::java::beans::PropertyChangeSupport* createPropertyChangeSupport(Toolkit* toolkit); (private) */
    virtual ::java::awt::peer::ScrollPanePeer* createScrollPane(ScrollPane* target) = 0;
    virtual ::java::awt::peer::ScrollbarPeer* createScrollbar(Scrollbar* target) = 0;
    virtual ::java::awt::peer::TextAreaPeer* createTextArea(TextArea* target) = 0;
    virtual ::java::awt::peer::TextFieldPeer* createTextField(TextField* target) = 0;
    virtual ::java::awt::peer::WindowPeer* createWindow(Window* target) = 0;
    /*static ::java::awt::event::AWTEventListener* deProxyAWTEventListener(::java::awt::event::AWTEventListener* l); (private) */

public: /* package */
    static bool enabledOnToolkit(int64_t eventMask);

public:
    virtual ::java::awt::event::AWTEventListenerArray* getAWTEventListeners();
    virtual ::java::awt::event::AWTEventListenerArray* getAWTEventListeners(int64_t eventMask);
    virtual Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight);
    virtual ::java::awt::image::ColorModel* getColorModel() = 0;
    static Toolkit* getDefaultToolkit();
    ::java::lang::Object* getDesktopProperty(::java::lang::String* propertyName);

public: /* package */
    static EventQueue* getEventQueue();

public:
    virtual ::java::lang::StringArray* getFontList() = 0;
    virtual FontMetrics* getFontMetrics(Font* font) = 0;

public: /* protected */
    virtual ::java::awt::peer::FontPeer* getFontPeer(::java::lang::String* name, int32_t style) = 0;

public:
    virtual Image* getImage(::java::lang::String* filename) = 0;
    virtual Image* getImage(::java::net::URL* url) = 0;
    virtual bool getLockingKeyState(int32_t keyCode);
    virtual int32_t getMaximumCursorColors();
    virtual int32_t getMenuShortcutKeyMask();

public: /* protected */
    virtual ::java::awt::peer::MouseInfoPeer* getMouseInfoPeer();
    static Container* getNativeContainer(Component* c);

public:
    virtual PrintJob* getPrintJob(Frame* frame, ::java::lang::String* jobtitle, ::java::util::Properties* props) = 0;
    virtual PrintJob* getPrintJob(Frame* frame, ::java::lang::String* jobtitle, JobAttributes* jobAttributes, PageAttributes* pageAttributes);
    static ::java::lang::String* getProperty(::java::lang::String* key, ::java::lang::String* defaultValue);
    virtual ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners();
    virtual ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners(::java::lang::String* propertyName);
    virtual Insets* getScreenInsets(GraphicsConfiguration* gc);
    virtual int32_t getScreenResolution() = 0;
    virtual Dimension* getScreenSize() = 0;
    virtual ::java::awt::datatransfer::Clipboard* getSystemClipboard() = 0;
    EventQueue* getSystemEventQueue();

public: /* protected */
    virtual EventQueue* getSystemEventQueueImpl() = 0;

public:
    virtual ::java::awt::datatransfer::Clipboard* getSystemSelection();
    /*static void initAssistiveTechnologies(); (private) */
    /*static void initIDs(); (private) */

public: /* protected */
    virtual void initializeDesktopProperties();

public:
    virtual bool isAlwaysOnTopSupported();
    virtual bool isDynamicLayoutActive();

public: /* protected */
    virtual bool isDynamicLayoutSet();

public:
    virtual bool isFrameStateSupported(int32_t state);
    virtual bool isModalExclusionTypeSupported(Dialog_ModalExclusionType* modalExclusionType) = 0;
    virtual bool isModalityTypeSupported(Dialog_ModalityType* modalityType) = 0;

public: /* protected */
    virtual ::java::lang::Object* lazilyLoadDesktopProperty(::java::lang::String* name);
    /*static void loadAssistiveTechnologies(); (private) */

public: /* package */
    static void loadLibraries();

public: /* protected */
    virtual void loadSystemColors(::int32_tArray* systemColors);

public:
    virtual ::java::util::Map* mapInputMethodHighlight(::java::awt::im::InputMethodHighlight* highlight) = 0;

public: /* package */
    virtual void notifyAWTEventListeners(AWTEvent* theEvent);

public:
    virtual bool prepareImage(Image* image, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) = 0;
    virtual void removeAWTEventListener(::java::awt::event::AWTEventListener* listener);
    virtual void removePropertyChangeListener(::java::lang::String* name, ::java::beans::PropertyChangeListener* pcl);

public: /* protected */
    void setDesktopProperty(::java::lang::String* name, ::java::lang::Object* newValue);

public:
    virtual void setDynamicLayout(bool dynamic);
    virtual void setLockingKeyState(int32_t keyCode, bool on);
    /*static void setPlatformResources(::java::util::ResourceBundle* bundle); (private) */
    virtual void sync() = 0;

    // Generated
    Toolkit();
protected:
    Toolkit(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::lang::String*& atNames();
    static std::atomic< int64_t >& enabledOnToolkitMask();
    static ::java::awt::peer::LightweightPeer*& lightweightMarker();
    static bool& loaded();
    static ::java::util::ResourceBundle*& platformResources();
    static ::java::util::ResourceBundle*& resources();
    static Toolkit*& toolkit();
    virtual ::java::lang::Class* getClass0();
};
