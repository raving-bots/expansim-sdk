//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__DETAIL__OPS_HPP
#define YYMP__DETAIL__OPS_HPP

#include <yymp/typelist_fwd.hpp>

namespace yymp {

template< class Key, class Group >
struct group;

}

namespace yymp { namespace detail {

template< class TypeListA, class TypeListB >
struct join_op;

template< class... As, class... Bs >
struct join_op< typelist<As...>, typelist<Bs...> > {
	using type = typelist<As..., Bs...>;
};

template< class Group, class Key, class T >
struct join_key_group {
    using type = Group;
};

template< class... GTypes, class Key, class T >
struct join_key_group< group< Key, typelist< GTypes... > >, Key, T > {
    using type = group<
        Key,
        typelist< GTypes..., T >
    >;
};

template< class Key, class T >
struct make_join_key_group {
    template< class Group >
    struct transform {
        using type = typename join_key_group< Group, Key, T >::type;
    };
};

} }

#endif // YYMP__DETAIL__OPS_HPP
