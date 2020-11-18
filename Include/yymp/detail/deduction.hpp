//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__DETAIL__ACCESSORS_HPP
#define YYMP__DETAIL__ACCESSORS_HPP

namespace yymp { namespace detail {

template< class Default, class... Ts >
struct inheritor : Ts... {
    constexpr operator Default() const noexcept;
};

template< class Default, class Key, template< class... > class Template, class Value >
constexpr Value deduce(Template< Key, Value >) noexcept;

template< class Default, class, template< class... > class >
constexpr Default deduce(Default) noexcept;

} }

#endif // YYMP__DETAIL__ACCESSORS_HPP
