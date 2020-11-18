//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__GROUP_HPP
#define YYMP__GROUP_HPP

#include <yymp/typelist_fwd.hpp>

#include <yymp/transform.hpp>
#include <yymp/accumulate.hpp>
#include <yymp/join.hpp>

#include <yymp/detail/deduction.hpp>

#include <type_traits> // std::conditional

namespace yymp {

template< class Key, class Group >
struct group;

template< class Group >
struct get_group_key;

template< class Group >
struct get_group_types;

struct group_suppress;

template< template< class... > class Selector, class TypeList >
struct group_by;

template< class Key, class GroupsTypeList >
struct get_group;

/** \class group
 * \brief Represents a key-value relationship between types \a Key and the type sequence represented by \a GTypes.
 *
 * \tparam Key The key of the group.
 * \tparam GTypes The type sequence associated with \a Key.
 */
template< class Key, class... GTypes >
struct group< Key, typelist< GTypes... > > {
    /** \brief The group key. */
    using key = Key;

    /** \brief The \ref yymp::typelist "typelist" associated with \a Key. */
    using types = typelist< GTypes... >;
};

/** \brief Defines `type` as the key of the supplied group. */
template< class Key, class... GTypes >
struct get_group_key< group< Key, typelist< GTypes... > > > {
    /** \brief The group key. */
    using type = Key;
};

/** \brief Defines `type` as the \ref yymp::typelist "typelist" associated with the key of the supplied group. */
template< class Key, class... GTypes >
struct get_group_types< group< Key, typelist< GTypes... > > > {
    /** \brief The \ref yymp::typelist "typelist" associated with the key of the supplied group. */
    using type = typelist< GTypes... >;
};

/** \brief Defines `type` as a \ref yymp::typelist "typelist" of \ref yymp::group "groups" with non-recurring keys determined the sequence \a Ts under \a Selector.
 *
 * The key of any type `T` in \a Ts is <code>typename Selector<T>::type</code>.
 * The type sequence of the group by `Key` is the maximal subsequence of \a Ts whose key is `Key`.
 * The groups of `type` are ordered by occurrence of their keys.
 *
 * \tparam Selector The class template that maps type `T` to its key by <code>typename Selector<T>::type</code>.
 * \tparam Ts The sequence of types to group under \a Selector.
 */
template< template< class... > class Selector, class... Ts >
struct group_by< Selector, typelist< Ts... > > {
    template< class GroupsTypeList, class T >
    struct join_op {
        using key = typename Selector< T >::type;

        using transformed_type = typename transform<
            detail::make_join_key_group< key, T >::template transform,
            GroupsTypeList
        >::type; // adds T under group key if key exists in GroupsTypeList, otherwise unchanged

        using type = typename std::conditional<
            std::is_same<key, group_suppress>::value,
            GroupsTypeList,
            typename std::conditional<
                std::is_same< transformed_type, GroupsTypeList >::value,
                typename join<
                    GroupsTypeList,
                    typelist< group< key, typelist< T > > >
                >::type,
                transformed_type
            >::type // appends group< Key, T > to GroupsTypeList if no group of Key was in GroupsTypeList
                    // otherwise, GroupsTypeList Key group has T appended to it (transformed_type)
        >::type;
    };

    /** \brief The result of grouping the type sequence \a Ts under \a Selector. */
    using type = typename accumulate<
        join_op,
        typelist<>,
        typelist< Ts... >
    >::type;
};

/** \brief Defines `type` as the \ref yymp::typelist "typelist" associated with the group under \a Key or the empty \ref yymp::typelist "typelist" if \a Key is not among \a Keys.
 *
 * \a Keys must be a sequence containing distinct types.
 *
 * \tparam Key The type to query for.
 */
template< class Key, class... Keys, class... GTypeLists >
struct get_group< Key, typelist< group< Keys, GTypeLists >... > > {
    using Default = typelist<>;

    using inheritor = detail::inheritor< Default, group< Keys, GTypeLists >... >;

    /** \brief The \ref yymp::typelist "typelist" representing the sequence associated with \a Key in the supplied groups or the empty \ref yymp::typelist "typelist" if \a Key is not among \a Keys. */
    using type = decltype(::yymp::detail::deduce< Default, Key, group >(inheritor{}));
};

}

#endif // YYMP__GROUP_HPP
