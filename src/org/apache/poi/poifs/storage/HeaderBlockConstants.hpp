// Generated from /POI/java/org/apache/poi/poifs/storage/HeaderBlockConstants.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::poifs::storage::HeaderBlockConstants
    : public virtual ::java::lang::Object
{
    static constexpr int64_t _signature { int64_t(-2226271756974174256LL) };
    static constexpr int32_t _bat_array_offset { int32_t(76) };
    static constexpr int32_t _max_bats_in_header { int32_t(109) };
    static constexpr int32_t _signature_offset { int32_t(0) };
    static constexpr int32_t _bat_count_offset { int32_t(44) };
    static constexpr int32_t _property_start_offset { int32_t(48) };
    static constexpr int32_t _sbat_start_offset { int32_t(60) };
    static constexpr int32_t _sbat_block_count_offset { int32_t(64) };
    static constexpr int32_t _xbat_start_offset { int32_t(68) };
    static constexpr int32_t _xbat_count_offset { int32_t(72) };

    // Generated
    static ::java::lang::Class *class_();
};
