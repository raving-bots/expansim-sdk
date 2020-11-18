//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__JOIN_HPP
#define YYMP__JOIN_HPP

#include <yymp/typelist_fwd.hpp>
#include <yymp/accumulate.hpp>

#include <yymp/detail/ops.hpp>

namespace yymp {

/** \brief Concatenates the \ref yymp::typelist "typelists" supplied into a single \ref yymp::typelist "typelist" `type`.
 *
 * \tparam TypeLists The \ref yymp::typelist "typelists" to join.
 */
template< class... TypeLists >
struct join {
    /** \brief The concatenated \a TypeLists. */
	using type = typename accumulate< detail::join_op, typelist<>, typelist< TypeLists... > >::type;
};

}

#endif // YYMP__JOIN_HPP
