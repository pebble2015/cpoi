// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::util::Collections_UnmodifiableMap
    : public virtual ::java::lang::Object
    , public virtual Map
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    Set* entrySet_ {  };
    Set* keySet_ {  };
    Map* m {  };
    static constexpr int64_t serialVersionUID { int64_t(-1034234728574286014LL) };
    Collection* values_ {  };

protected:
    void ctor(Map* m);

public:
    void clear() override;
    ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction) override;
    ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* val) override;
    Set* entrySet() override;
    bool equals(::java::lang::Object* o) override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    ::java::lang::Object* getOrDefault(::java::lang::Object* k, ::java::lang::Object* defaultValue) override;
    int32_t hashCode() override;
    bool isEmpty() override;
    Set* keySet() override;
    ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(Map* m) override;
    ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    bool remove(::java::lang::Object* key, ::java::lang::Object* value) override;
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;
    int32_t size() override;
    ::java::lang::String* toString() override;
    Collection* values() override;

    // Generated

public: /* package */
    Collections_UnmodifiableMap(Map* m);
protected:
    Collections_UnmodifiableMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
