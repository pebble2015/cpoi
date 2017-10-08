// Generated from /POI/java/org/apache/poi/poifs/property/Property.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>

struct default_init_tag;

class poi::poifs::property::Property
    : public virtual ::java::lang::Object
    , public virtual Child
    , public virtual ::poi::poifs::dev::POIFSViewable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int8_t _default_fill { int8_t(0) };
    static constexpr int32_t _name_size_offset { int32_t(64) };
    static constexpr int32_t _max_name_length { int32_t(31) };

public: /* protected */
    static constexpr int32_t _NO_INDEX { int32_t(-1) };

private:
    static constexpr int32_t _node_color_offset { int32_t(67) };
    static constexpr int32_t _previous_property_offset { int32_t(68) };
    static constexpr int32_t _next_property_offset { int32_t(72) };
    static constexpr int32_t _child_property_offset { int32_t(76) };
    static constexpr int32_t _storage_clsid_offset { int32_t(80) };
    static constexpr int32_t _user_flags_offset { int32_t(96) };
    static constexpr int32_t _seconds_1_offset { int32_t(100) };
    static constexpr int32_t _days_1_offset { int32_t(104) };
    static constexpr int32_t _seconds_2_offset { int32_t(108) };
    static constexpr int32_t _days_2_offset { int32_t(112) };
    static constexpr int32_t _start_block_offset { int32_t(116) };
    static constexpr int32_t _size_offset { int32_t(120) };

public: /* protected */
    static constexpr int8_t _NODE_BLACK { int8_t(1) };
    static constexpr int8_t _NODE_RED { int8_t(0) };

private:
    static constexpr int32_t _big_block_minimum_bytes { int32_t(4096) };
    ::java::lang::String* _name {  };
    ::poi::util::ShortField* _name_size {  };
    ::poi::util::ByteField* _property_type {  };
    ::poi::util::ByteField* _node_color {  };
    ::poi::util::IntegerField* _previous_property {  };
    ::poi::util::IntegerField* _next_property {  };
    ::poi::util::IntegerField* _child_property {  };
    ::poi::hpsf::ClassID* _storage_clsid {  };
    ::poi::util::IntegerField* _user_flags {  };
    ::poi::util::IntegerField* _seconds_1 {  };
    ::poi::util::IntegerField* _days_1 {  };
    ::poi::util::IntegerField* _seconds_2 {  };
    ::poi::util::IntegerField* _days_2 {  };
    ::poi::util::IntegerField* _start_block {  };
    ::poi::util::IntegerField* _size {  };
    ::int8_tArray* _raw_data {  };
    int32_t _index {  };
    Child* _next_child {  };
    Child* _previous_child {  };
protected:
    void ctor();
    void ctor(int32_t index, ::int8_tArray* array, int32_t offset);

public:
    virtual void writeData(::java::io::OutputStream* stream) /* throws(IOException) */;
    virtual void setStartBlock(int32_t startBlock);
    virtual int32_t getStartBlock();
    virtual int32_t getSize();
    virtual bool shouldUseSmallBlocks();
    static bool isSmall(int32_t length);
    virtual ::java::lang::String* getName();
    virtual bool isDirectory() = 0;
    virtual ::poi::hpsf::ClassID* getStorageClsid();

public: /* protected */
    virtual void setName(::java::lang::String* name);

public:
    virtual void setStorageClsid(::poi::hpsf::ClassID* clsidStorage);

public: /* protected */
    virtual void setPropertyType(int8_t propertyType);
    virtual void setNodeColor(int8_t nodeColor);
    virtual void setChildProperty(int32_t child);
    virtual int32_t getChildIndex();
    virtual void setSize(int32_t size);
    virtual void setIndex(int32_t index);
    virtual int32_t getIndex();
    virtual void preWrite() = 0;

public: /* package */
    virtual int32_t getNextChildIndex();
    virtual int32_t getPreviousChildIndex();
    static bool isValidIndex(int32_t index);

public:
    Child* getNextChild() override;
    Child* getPreviousChild() override;
    void setNextChild(Child* child) override;
    void setPreviousChild(Child* child) override;
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;

    // Generated

public: /* protected */
    Property();
    Property(int32_t index, ::int8_tArray* array, int32_t offset);
protected:
    Property(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
