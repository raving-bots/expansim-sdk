//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__TRANSFORM_HPP
#define YYMP__TRANSFORM_HPP

#include <yymp/typelist_fwd.hpp>

namespace yymp {

template< template<class...> class UnaryOp, class TypeList >
struct transform_into;

template< template<class...> class UnaryOp, class TypeList >
struct transform;

/** \brief Transform each type `T` in \a Ts through `UnaryOp<T>`, as \ref yymp::typelist "typelist" `type`.
 *
 * \tparam UnaryOp The template transforming the type sequence.
 * \tparam Ts The type sequence to transform.
 */
template< template<class...> class UnaryOp, class... Ts >
struct transform_into< UnaryOp, typelist< Ts... > > {
    /** \brief The \ref yymp::typelist "typelist" of transformed types. */
	using type = typelist< UnaryOp< Ts >... >;
};

/** \brief Transform each type `T` in \a Ts through <code>typename UnaryOp<T>::type</code>, as \ref yymp::typelist "typelist" `type`.
 *
 * \tparam UnaryOp The template transforming the type sequence.
 * \tparam Ts The type sequence to transform.
 */
template< template<class...> class UnaryOp, class... Ts >
struct transform< UnaryOp, typelist< Ts... > > {
    /** \brief The \ref yymp::typelist "typelist" of transformed types. */
	using type = typelist< typename UnaryOp< Ts >::type... >;
};

}

#endif // YYMP__TRANSFORM_HPP
