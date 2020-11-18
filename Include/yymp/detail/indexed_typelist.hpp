//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__DETAIL__INDEXED_TYPELIST_HPP
#define YYMP__DETAIL__INDEXED_TYPELIST_HPP

#include <yymp/typelist_fwd.hpp>

#include <yymp/join.hpp>
#include <yymp/accumulate.hpp>

#include <cstddef> // std::size_t

#include <utility> // std::integer_sequence

namespace yymp { namespace detail {

template< std::size_t I, class T >
struct zip {
    static constexpr std::size_t index = I;
    using type = T;
};

template< class TypeList >
struct make_zipped;

template< class ZippedTypeList >
struct make_unzipped;

template< class... Ts >
struct make_zipped< ::yymp::typelist< Ts... > > {
    template< class ZippedTypeList, class T >
    struct accumulator {
        using type = typename ::yymp::join<
            ZippedTypeList,
            ::yymp::typelist<
                zip< ::yymp::size<ZippedTypeList>::value, T>
            >
        >::type;
    };
    
    using type = typename ::yymp::accumulate<
        accumulator,
        ::yymp::typelist<>,
        ::yymp::typelist<Ts...>
    >::type;
};

template< std::size_t... Is, class... Ts >
struct make_unzipped< ::yymp::typelist<zip<Is, Ts>...> > {
    using type = std::integer_sequence<std::size_t, Is...>;
};

} }

#endif // YYMP__DETAIL__INDEXED_TYPELIST_HPP