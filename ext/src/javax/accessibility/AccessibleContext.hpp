// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace javax
{
    namespace accessibility
    {
typedef ::SubArray< ::javax::accessibility::AccessibleIcon, ::java::lang::ObjectArray > AccessibleIconArray;
    } // accessibility
} // javax

struct default_init_tag;

class javax::accessibility::AccessibleContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* ACCESSIBLE_ACTION_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_CARET_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_CHILD_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_COMPONENT_BOUNDS_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_DESCRIPTION_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_HYPERTEXT_OFFSET_;
    static ::java::lang::String* ACCESSIBLE_INVALIDATE_CHILDREN_;
    static ::java::lang::String* ACCESSIBLE_NAME_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_SELECTION_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_STATE_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_TABLE_CAPTION_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_MODEL_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_ROW_HEADER_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TABLE_SUMMARY_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED_;
    static ::java::lang::String* ACCESSIBLE_TEXT_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_VALUE_PROPERTY_;
    static ::java::lang::String* ACCESSIBLE_VISIBLE_DATA_PROPERTY_;
    ::java::beans::PropertyChangeSupport* accessibleChangeSupport {  };

public: /* protected */
    ::java::lang::String* accessibleDescription {  };
    ::java::lang::String* accessibleName {  };
    Accessible* accessibleParent {  };

private:
    ::java::lang::Object* nativeAXResource {  };
    AccessibleRelationSet* relationSet {  };
    std::atomic< ::sun::awt::AppContext* > targetAppContext {  };

protected:
    void ctor();

public:
    virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
    virtual void firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual AccessibleAction* getAccessibleAction();
    virtual Accessible* getAccessibleChild(int32_t i) = 0;
    virtual int32_t getAccessibleChildrenCount() = 0;
    virtual AccessibleComponent* getAccessibleComponent();
    virtual ::java::lang::String* getAccessibleDescription();
    virtual AccessibleEditableText* getAccessibleEditableText();
    virtual AccessibleIconArray* getAccessibleIcon();
    virtual int32_t getAccessibleIndexInParent() = 0;
    virtual ::java::lang::String* getAccessibleName();
    virtual Accessible* getAccessibleParent();
    virtual AccessibleRelationSet* getAccessibleRelationSet();
    virtual AccessibleRole* getAccessibleRole() = 0;
    virtual AccessibleSelection* getAccessibleSelection();
    virtual AccessibleStateSet* getAccessibleStateSet() = 0;
    virtual AccessibleTable* getAccessibleTable();
    virtual AccessibleText* getAccessibleText();
    virtual AccessibleValue* getAccessibleValue();
    virtual ::java::util::Locale* getLocale() = 0;
    virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
    virtual void setAccessibleDescription(::java::lang::String* s);
    virtual void setAccessibleName(::java::lang::String* s);
    virtual void setAccessibleParent(Accessible* a);

    // Generated
    AccessibleContext();
protected:
    AccessibleContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& ACCESSIBLE_ACTION_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_CARET_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_CHILD_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_COMPONENT_BOUNDS_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_DESCRIPTION_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_HYPERTEXT_OFFSET();
    static ::java::lang::String*& ACCESSIBLE_INVALIDATE_CHILDREN();
    static ::java::lang::String*& ACCESSIBLE_NAME_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_SELECTION_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_STATE_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_TABLE_CAPTION_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_MODEL_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_ROW_HEADER_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TABLE_SUMMARY_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED();
    static ::java::lang::String*& ACCESSIBLE_TEXT_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_VALUE_PROPERTY();
    static ::java::lang::String*& ACCESSIBLE_VISIBLE_DATA_PROPERTY();

private:
    virtual ::java::lang::Class* getClass0();
};
