//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__EXPAND_HPP
#define YYMP__EXPAND_HPP

#include <yymp/typelist_fwd.hpp>

namespace yymp {

template< template<class...> class Template, class TypeList >
struct expand_into;

template< template<class...> class Template, class TypeList >
struct expand;

/** \brief Expands the sequence of types \a Ts into class template \a Template by `Template<Ts...>` as `type`.
 *
 * \tparam Template The class template to expand into.
 * \tparam Ts The types by which to expand \a Template.
 */
template< template<class...> class Template, class... Ts >
struct expand_into< Template, typelist< Ts... > > {
    /** \brief The expanded result. */
	using type = Template< Ts... >;
};

/** \brief Expands the sequence of types \a Ts into class template \a Template by <code>typename Template<Ts...>::type</code> as `type`.
 *
 * \tparam Template The class template to expand into.
 * \tparam Ts The types by which to expand \a Template.
 */
template< template<class...> class Template, class... Ts >
struct expand< Template, typelist< Ts... > > {
    /** \brief The expanded result. */
	using type = typename Template< Ts... >::type;
};

}

#endif // YYMP__EXPAND_HPP
