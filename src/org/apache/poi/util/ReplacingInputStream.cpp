// Generated from /POI/java/org/apache/poi/util/ReplacingInputStream.java
#include <org/apache/poi/util/ReplacingInputStream.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/util/ReplacingInputStream_State.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::ReplacingInputStream::ReplacingInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::ReplacingInputStream::ReplacingInputStream(::java::io::InputStream* in, ::java::lang::String* pattern, ::java::lang::String* replacement) 
    : ReplacingInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,pattern,replacement);
}

org::apache::poi::util::ReplacingInputStream::ReplacingInputStream(::java::io::InputStream* in, ::int8_tArray* pattern, ::int8_tArray* replacement) 
    : ReplacingInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,pattern,replacement);
}

void org::apache::poi::util::ReplacingInputStream::init()
{
    matchedIndex = int32_t(0);
    unbufferIndex = int32_t(0);
    replacedIndex = int32_t(0);
    state = ReplacingInputStream_State::NOT_MATCHED;
}

java::nio::charset::Charset*& org::apache::poi::util::ReplacingInputStream::UTF8()
{
    clinit();
    return UTF8_;
}
java::nio::charset::Charset* org::apache::poi::util::ReplacingInputStream::UTF8_;

void org::apache::poi::util::ReplacingInputStream::ctor(::java::io::InputStream* in, ::java::lang::String* pattern, ::java::lang::String* replacement)
{
    ctor(in, npc(pattern)->getBytes(UTF8_), replacement == nullptr ? static_cast< ::int8_tArray* >(nullptr) : npc(replacement)->getBytes(UTF8_));
}

void org::apache::poi::util::ReplacingInputStream::ctor(::java::io::InputStream* in, ::int8_tArray* pattern, ::int8_tArray* replacement)
{
    super::ctor(in);
    init();
    if(pattern == nullptr || npc(pattern)->length == 0) {
        throw new ::java::lang::IllegalArgumentException(u"pattern length should be > 0"_j);
    }
    this->pattern = pattern;
    this->replacement = replacement;
    buf = new ::int32_tArray(npc(pattern)->length);
}

int32_t org::apache::poi::util::ReplacingInputStream::read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    if(b == nullptr) {
        throw new ::java::lang::NullPointerException();
    } else if(off < 0 || len < 0 || len > npc(b)->length - off) {
        throw new ::java::lang::IndexOutOfBoundsException();
    } else if(len == 0) {
        return 0;
    }
    auto c = read();
    if(c == -int32_t(1)) {
        return -int32_t(1);
    }
    (*b)[off] = static_cast< int8_t >(c);
    auto i = int32_t(1);
    for (; i < len; i++) {
        c = read();
        if(c == -int32_t(1)) {
            break;
        }
        (*b)[off + i] = static_cast< int8_t >(c);
    }
    return i;
}

int32_t org::apache::poi::util::ReplacingInputStream::read(::int8_tArray* b) /* throws(IOException) */
{
    return read(b, int32_t(0), npc(b)->length);
}

int32_t org::apache::poi::util::ReplacingInputStream::read() /* throws(IOException) */
{
    int32_t next;
    {
        auto v = state;
        if((v == ReplacingInputStream_State::NOT_MATCHED)) {
            next = super::read();
            if((*pattern)[int32_t(0)] != next) {
                return next;
            }
            ::java::util::Arrays::fill(buf, int32_t(0));
            matchedIndex = 0;
            (*buf)[matchedIndex++] = next;
            if(npc(pattern)->length == 1) {
                state = ReplacingInputStream_State::REPLACING;
                replacedIndex = 0;
            } else {
                state = ReplacingInputStream_State::MATCHING;
            }
            return read();
        }
        if((v == ReplacingInputStream_State::MATCHING)) {
            next = super::read();
            if((*pattern)[matchedIndex] == next) {
                (*buf)[matchedIndex++] = next;
                if(matchedIndex == npc(pattern)->length) {
                    if(replacement == nullptr || npc(replacement)->length == 0) {
                        state = ReplacingInputStream_State::NOT_MATCHED;
                        matchedIndex = 0;
                    } else {
                        state = ReplacingInputStream_State::REPLACING;
                        replacedIndex = 0;
                    }
                }
            } else {
                (*buf)[matchedIndex++] = next;
                state = ReplacingInputStream_State::UNBUFFER;
                unbufferIndex = 0;
            }
            return read();
        }
        if((v == ReplacingInputStream_State::REPLACING)) {
            next = (*replacement)[replacedIndex++];
            if(replacedIndex == npc(replacement)->length) {
                state = ReplacingInputStream_State::NOT_MATCHED;
                replacedIndex = 0;
            }
            return next;
        }
        if((v == ReplacingInputStream_State::UNBUFFER)) {
            next = (*buf)[unbufferIndex++];
            if(unbufferIndex == matchedIndex) {
                state = ReplacingInputStream_State::NOT_MATCHED;
                matchedIndex = 0;
            }
            return next;
        }
end_switch0:;
    }

}

java::lang::String* org::apache::poi::util::ReplacingInputStream::toString()
{
    return ::java::lang::StringBuilder().append(npc(state)->name())->append(u" "_j)
        ->append(matchedIndex)
        ->append(u" "_j)
        ->append(replacedIndex)
        ->append(u" "_j)
        ->append(unbufferIndex)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::ReplacingInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.ReplacingInputStream", 40);
    return c;
}

void org::apache::poi::util::ReplacingInputStream::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        UTF8_ = ::java::nio::charset::Charset::forName(u"UTF-8"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::ReplacingInputStream::getClass0()
{
    return class_();
}

