#ifndef UTL_IPV6_HEXTETS_H
#define UTL_IPV6_HEXTETS_H

#include <array>
#include <cstdint>

using ipv6_hextets = std::array<std::uint16_t, 8>;

constexpr ipv6_hextets IPV6_UNSPECIFIED = {};

#endif // UTL_IPV6_HEXTETS_H
