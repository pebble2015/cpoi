// Generated from /POI/java/org/apache/poi/poifs/property/Property.java
#include <org/apache/poi/poifs/property/Property.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <org/apache/poi/poifs/property/PropertyConstants.hpp>
#include <org/apache/poi/util/ByteField.hpp>
#include <org/apache/poi/util/IntegerField.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/ShortField.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::property::Property::Property(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::Property::Property() 
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::property::Property::Property(int32_t index, ::int8_tArray* array, int32_t offset) 
    : Property(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,array,offset);
}

constexpr int8_t org::apache::poi::poifs::property::Property::_default_fill;

constexpr int32_t org::apache::poi::poifs::property::Property::_name_size_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_max_name_length;

constexpr int32_t org::apache::poi::poifs::property::Property::_NO_INDEX;

constexpr int32_t org::apache::poi::poifs::property::Property::_node_color_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_previous_property_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_next_property_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_child_property_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_storage_clsid_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_user_flags_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_seconds_1_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_days_1_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_seconds_2_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_days_2_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_start_block_offset;

constexpr int32_t org::apache::poi::poifs::property::Property::_size_offset;

constexpr int8_t org::apache::poi::poifs::property::Property::_NODE_BLACK;

constexpr int8_t org::apache::poi::poifs::property::Property::_NODE_RED;

constexpr int32_t org::apache::poi::poifs::property::Property::_big_block_minimum_bytes;

void org::apache::poi::poifs::property::Property::ctor()
{
    super::ctor();
    _raw_data = new ::int8_tArray(::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE);
    ::java::util::Arrays::fill(_raw_data, _default_fill);
    _name_size = new ::org::apache::poi::util::ShortField(_name_size_offset);
    _property_type = new ::org::apache::poi::util::ByteField(PropertyConstants::PROPERTY_TYPE_OFFSET);
    _node_color = new ::org::apache::poi::util::ByteField(_node_color_offset);
    _previous_property = new ::org::apache::poi::util::IntegerField(_previous_property_offset, _NO_INDEX, _raw_data);
    _next_property = new ::org::apache::poi::util::IntegerField(_next_property_offset, _NO_INDEX, _raw_data);
    _child_property = new ::org::apache::poi::util::IntegerField(_child_property_offset, _NO_INDEX, _raw_data);
    _storage_clsid = new ::org::apache::poi::hpsf::ClassID(_raw_data, _storage_clsid_offset);
    _user_flags = new ::org::apache::poi::util::IntegerField(_user_flags_offset, int32_t(0), _raw_data);
    _seconds_1 = new ::org::apache::poi::util::IntegerField(_seconds_1_offset, int32_t(0), _raw_data);
    _days_1 = new ::org::apache::poi::util::IntegerField(_days_1_offset, int32_t(0), _raw_data);
    _seconds_2 = new ::org::apache::poi::util::IntegerField(_seconds_2_offset, int32_t(0), _raw_data);
    _days_2 = new ::org::apache::poi::util::IntegerField(_days_2_offset, int32_t(0), _raw_data);
    _start_block = new ::org::apache::poi::util::IntegerField(_start_block_offset);
    _size = new ::org::apache::poi::util::IntegerField(_size_offset, int32_t(0), _raw_data);
    _index = _NO_INDEX;
    setName(u""_j);
    setNextChild(static_cast< Child* >(nullptr));
    setPreviousChild(static_cast< Child* >(nullptr));
}

void org::apache::poi::poifs::property::Property::ctor(int32_t index, ::int8_tArray* array, int32_t offset)
{
    super::ctor();
    _raw_data = new ::int8_tArray(::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE);
    ::java::lang::System::arraycopy(array, offset, _raw_data, 0, ::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE);
    _name_size = new ::org::apache::poi::util::ShortField(_name_size_offset, _raw_data);
    _property_type = new ::org::apache::poi::util::ByteField(PropertyConstants::PROPERTY_TYPE_OFFSET, _raw_data);
    _node_color = new ::org::apache::poi::util::ByteField(_node_color_offset, _raw_data);
    _previous_property = new ::org::apache::poi::util::IntegerField(_previous_property_offset, _raw_data);
    _next_property = new ::org::apache::poi::util::IntegerField(_next_property_offset, _raw_data);
    _child_property = new ::org::apache::poi::util::IntegerField(_child_property_offset, _raw_data);
    _storage_clsid = new ::org::apache::poi::hpsf::ClassID(_raw_data, _storage_clsid_offset);
    _user_flags = new ::org::apache::poi::util::IntegerField(_user_flags_offset, int32_t(0), _raw_data);
    _seconds_1 = new ::org::apache::poi::util::IntegerField(_seconds_1_offset, _raw_data);
    _days_1 = new ::org::apache::poi::util::IntegerField(_days_1_offset, _raw_data);
    _seconds_2 = new ::org::apache::poi::util::IntegerField(_seconds_2_offset, _raw_data);
    _days_2 = new ::org::apache::poi::util::IntegerField(_days_2_offset, _raw_data);
    _start_block = new ::org::apache::poi::util::IntegerField(_start_block_offset, _raw_data);
    _size = new ::org::apache::poi::util::IntegerField(_size_offset, _raw_data);
    _index = index;
    auto name_length = (npc(_name_size)->get() / ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE) - int32_t(1);
    if(name_length < 1) {
        _name = u""_j;
    } else {
        auto char_array = new ::char16_tArray(name_length);
        auto name_offset = int32_t(0);
        for (auto j = int32_t(0); j < name_length; j++) {
            (*char_array)[j] = static_cast< char16_t >((new ::org::apache::poi::util::ShortField(name_offset, _raw_data))->get());
            name_offset += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
        }
        _name = new ::java::lang::String(char_array, int32_t(0), name_length);
    }
    _next_child = nullptr;
    _previous_child = nullptr;
}

void org::apache::poi::poifs::property::Property::writeData(::java::io::OutputStream* stream) /* throws(IOException) */
{
    npc(stream)->write(_raw_data);
}

void org::apache::poi::poifs::property::Property::setStartBlock(int32_t startBlock)
{
    npc(_start_block)->set(startBlock, _raw_data);
}

int32_t org::apache::poi::poifs::property::Property::getStartBlock()
{
    return npc(_start_block)->get();
}

int32_t org::apache::poi::poifs::property::Property::getSize()
{
    return npc(_size)->get();
}

bool org::apache::poi::poifs::property::Property::shouldUseSmallBlocks()
{
    return Property::isSmall(npc(_size)->get());
}

bool org::apache::poi::poifs::property::Property::isSmall(int32_t length)
{
    clinit();
    return length < _big_block_minimum_bytes;
}

java::lang::String* org::apache::poi::poifs::property::Property::getName()
{
    return _name;
}

org::apache::poi::hpsf::ClassID* org::apache::poi::poifs::property::Property::getStorageClsid()
{
    return _storage_clsid;
}

void org::apache::poi::poifs::property::Property::setName(::java::lang::String* name)
{
    auto char_array = npc(name)->toCharArray_();
    auto limit = ::java::lang::Math::min(npc(char_array)->length, _max_name_length);
    _name = new ::java::lang::String(char_array, int32_t(0), limit);
    int16_t offset = int32_t(0);
    auto j = int32_t(0);
    for (; j < limit; j++) {
        new ::org::apache::poi::util::ShortField(offset, static_cast< int16_t >((*char_array)[j]), _raw_data);
        offset += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    }
    for (; j < _max_name_length + int32_t(1); j++) {
        new ::org::apache::poi::util::ShortField(offset, static_cast< int16_t >(int32_t(0)), _raw_data);
        offset += ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE;
    }
    npc(_name_size)->set(static_cast< int16_t >(((limit + int32_t(1)) * ::org::apache::poi::util::LittleEndianConsts::SHORT_SIZE)), _raw_data);
}

void org::apache::poi::poifs::property::Property::setStorageClsid(::org::apache::poi::hpsf::ClassID* clsidStorage)
{
    _storage_clsid = clsidStorage;
    if(clsidStorage == nullptr) {
        ::java::util::Arrays::fill(_raw_data, _storage_clsid_offset, _storage_clsid_offset + ::org::apache::poi::hpsf::ClassID::LENGTH, static_cast< int8_t >(int32_t(0)));
    } else {
        npc(clsidStorage)->write(_raw_data, _storage_clsid_offset);
    }
}

void org::apache::poi::poifs::property::Property::setPropertyType(int8_t propertyType)
{
    npc(_property_type)->set(propertyType, _raw_data);
}

void org::apache::poi::poifs::property::Property::setNodeColor(int8_t nodeColor)
{
    npc(_node_color)->set(nodeColor, _raw_data);
}

void org::apache::poi::poifs::property::Property::setChildProperty(int32_t child)
{
    npc(_child_property)->set(child, _raw_data);
}

int32_t org::apache::poi::poifs::property::Property::getChildIndex()
{
    return npc(_child_property)->get();
}

void org::apache::poi::poifs::property::Property::setSize(int32_t size)
{
    npc(_size)->set(size, _raw_data);
}

void org::apache::poi::poifs::property::Property::setIndex(int32_t index)
{
    _index = index;
}

int32_t org::apache::poi::poifs::property::Property::getIndex()
{
    return _index;
}

int32_t org::apache::poi::poifs::property::Property::getNextChildIndex()
{
    return npc(_next_property)->get();
}

int32_t org::apache::poi::poifs::property::Property::getPreviousChildIndex()
{
    return npc(_previous_property)->get();
}

bool org::apache::poi::poifs::property::Property::isValidIndex(int32_t index)
{
    clinit();
    return index != _NO_INDEX;
}

org::apache::poi::poifs::property::Child* org::apache::poi::poifs::property::Property::getNextChild()
{
    return _next_child;
}

org::apache::poi::poifs::property::Child* org::apache::poi::poifs::property::Property::getPreviousChild()
{
    return _previous_child;
}

void org::apache::poi::poifs::property::Property::setNextChild(Child* child)
{
    _next_child = child;
    npc(_next_property)->set((child == nullptr) ? _NO_INDEX : npc((java_cast< Property* >(child)))->getIndex(), _raw_data);
}

void org::apache::poi::poifs::property::Property::setPreviousChild(Child* child)
{
    _previous_child = child;
    npc(_previous_property)->set((child == nullptr) ? _NO_INDEX : npc((java_cast< Property* >(child)))->getIndex(), _raw_data);
}

java::lang::ObjectArray* org::apache::poi::poifs::property::Property::getViewableArray_()
{
    auto results = new ::java::lang::ObjectArray(int32_t(6));
    results->set(int32_t(0), ::java::lang::StringBuilder().append(u"Name          = \""_j)->append(getName())
        ->append(u"\""_j)->toString());
    results->set(int32_t(1), ::java::lang::StringBuilder().append(u"Property Type = "_j)->append(npc(_property_type)->get())->toString());
    results->set(int32_t(2), ::java::lang::StringBuilder().append(u"Node Color    = "_j)->append(npc(_node_color)->get())->toString());
    int64_t time = npc(_days_1)->get();
    time <<= 32;
    time += npc(_seconds_1)->get() & int64_t(65535LL);
    results->set(int32_t(3), ::java::lang::StringBuilder().append(u"Time 1        = "_j)->append(time)->toString());
    time = npc(_days_2)->get();
    time <<= 32;
    time += npc(_seconds_2)->get() & int64_t(65535LL);
    results->set(int32_t(4), ::java::lang::StringBuilder().append(u"Time 2        = "_j)->append(time)->toString());
    results->set(int32_t(5), ::java::lang::StringBuilder().append(u"Size          = "_j)->append(getSize())->toString());
    return results;
}

java::util::Iterator* org::apache::poi::poifs::property::Property::getViewableIterator()
{
    return npc(::java::util::Collections::emptyList())->iterator();
}

bool org::apache::poi::poifs::property::Property::preferArray_()
{
    return true;
}

java::lang::String* org::apache::poi::poifs::property::Property::getShortDescription()
{
    return ::java::lang::StringBuilder().append(u"Property: \""_j)->append(getName())
        ->append(u"\""_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::Property::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.Property", 38);
    return c;
}

java::lang::Class* org::apache::poi::poifs::property::Property::getClass0()
{
    return class_();
}

