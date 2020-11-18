//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__TRAITS_HPP
#define YYMP__TRAITS_HPP

#include <yymp/typelist_fwd.hpp>

#include <yymp/group.hpp>
#include <yymp/filter.hpp>

#include <type_traits> // std::integral_constant, std::true_type, std::false_type

namespace yymp {

/* ***************************
 * DECLARATION
 */

template< template< class... > class Predicate, class TypeList >
struct all_where;

template< template< class... > class Predicate, class TypeList >
struct any_where;

template< template< class... > class Predicate, class TypeList >
struct none_where;

template< class T, class TypeList >
struct any_of;

template< class T, class TypeList >
struct all_of;

template< class T, class TypeList >
struct none_of;

/* ***************************
 * IMPLEMENTATION
 */

/** \brief A compile-time bool constant whose `value` is \c true if and only if <code>Predicate\<T\></code> is \c true for all `T` of \a Ts.
 *
 * `value` is \c true if \a Ts is the empty sequence.
 * \tparam Predicate The template class representing some criteria.
 * \tparam Ts The type sequence to query.
 */
template< template< class... > class Predicate, class... Ts >
struct all_where< Predicate, typelist< Ts... > >
    : std::integral_constant< bool, size< typename filter< Predicate, typelist< Ts... > >::type >::value == sizeof...(Ts) > { };

/** \brief A compile-time bool constant whose `value` is \c true if and only if <code>Predicate\<T\></code> is \c true for any `T` of \a Ts.
 *
 * `value` is \c false if \a Ts is the empty sequence.
 * \tparam Predicate The template class representing some criteria.
 * \tparam Ts The type sequence to query.
 */
template< template< class... > class Predicate, class... Ts >
struct any_where< Predicate, typelist< Ts... > >
    : is_not_empty< typename filter< Predicate, typelist< Ts... > >::type > { };

/** \brief A compile-time bool constant whose `value` is \c true if and only if <code>Predicate\<T\></code> is \c true for no `T` of \a Ts.
 *
 * `value` is \c true if \a Ts is the empty sequence.
 * \tparam Predicate The template class representing some criteria.
 * \tparam Ts The type sequence to query.
 */
template< template< class... > class Predicate, class... Ts >
struct none_where< Predicate, typelist< Ts... > >
    : is_empty< typename filter< Predicate, typelist< Ts... > >::type > { };

/** \brief A compile-time bool constant whose `value` is \c true if and only if \a Ts is a type sequence of containing only `T`.
 *
 * `value` is \c true if \a Ts is the empty sequence.
 * \tparam T The type to check the sequence for.
 * \tparam Ts The type sequence to query.
 */
template< class T, class... Ts >
struct all_of< T, typelist< Ts... > >
    : std::integral_constant< bool, size< typename filter_of< T, typelist< Ts... > >::type >::value == sizeof...(Ts) > { };

/** \brief A compile-time bool constant whose `value` is \c true if and only if \a Ts is a type sequence containing one `T`.
 *
 * `value` is \c false if \a Ts is the empty sequence.
 * \tparam T The type to check the sequence for.
 * \tparam Ts The type sequence to query.
 */
template< class T, class... Ts >
struct any_of< T, typelist< Ts... > >
    : is_not_empty< typename filter_of< T, typelist< Ts... > >::type > { };

/** \brief A compile-time bool constant whose `value` is \c true if and only if \a Ts is a type sequence of containing no `T`.
 *
 * `value` is \c true if \a Ts is the empty sequence.
 * \tparam T The type to check the sequence for.
 * \tparam Ts The type sequence to query.
 */
template< class T, class... Ts >
struct none_of< T, typelist< Ts... > >
    : is_empty< typename filter_of< T, typelist< Ts... > >::type > { };

}

#endif // YYMP__TRAITS_HPP
