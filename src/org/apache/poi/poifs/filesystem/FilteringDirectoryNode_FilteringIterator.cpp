// Generated from /POI/java/org/apache/poi/poifs/filesystem/FilteringDirectoryNode.java
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode_FilteringIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/FilteringDirectoryNode.hpp>

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

poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::FilteringDirectoryNode_FilteringIterator(FilteringDirectoryNode *FilteringDirectoryNode_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , FilteringDirectoryNode_this(FilteringDirectoryNode_this)
{
    clinit();
}

poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::FilteringDirectoryNode_FilteringIterator(FilteringDirectoryNode *FilteringDirectoryNode_this) 
    : FilteringDirectoryNode_FilteringIterator(FilteringDirectoryNode_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::ctor()
{
    super::ctor();
    parent = npc(FilteringDirectoryNode_this->directory)->getEntries();
    locateNext();
}

void poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::locateNext()
{
    next_ = nullptr;
    Entry* e;
    while (npc(parent)->hasNext() && next_ == nullptr) {
        e = java_cast< Entry* >(npc(parent)->next());
        if(!npc(FilteringDirectoryNode_this->excludes)->contains(static_cast< ::java::lang::Object* >(npc(e)->getName()))) {
            next_ = FilteringDirectoryNode_this->wrapEntry(e);
        }
    }
}

bool poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::hasNext()
{
    return (next_ != nullptr);
}

poi::poifs::filesystem::Entry* poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::next()
{
    auto e = next_;
    locateNext();
    return e;
}

void poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException(u"Remove not supported"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.FilteringDirectoryNode.FilteringIterator", 72);
    return c;
}

java::lang::Class* poi::poifs::filesystem::FilteringDirectoryNode_FilteringIterator::getClass0()
{
    return class_();
}

