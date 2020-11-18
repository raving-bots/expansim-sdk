//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__ACCUMULATE_HPP
#define YYMP__ACCUMULATE_HPP

#include <yymp/typelist_fwd.hpp>

#include <yymp/detail/accumulator.hpp>

namespace yymp {

/** \brief Accumulates the types in \a TypeList across \a BinaryOp, starting with \a Init, as `type`.
 *
 * \tparam BinaryOp The template that composes types `A` and `B` by <code>typename BinaryOp<A,B>::type</code>.
 * \tparam Init The initial type of the accumulation.
 * \tparam TypeList The \ref yymp::typelist "typelist" representing the type sequence to accumulate across.
 */
template< template<class...> class BinaryOp, class Init, class TypeList >
struct accumulate;

#if __cpp_fold_expressions >= 201411

template< template<class...> class BinaryOp, class Init, class... Ts >
struct accumulate<
	BinaryOp,
	Init,
	typelist< Ts... >
> {
	template< class T >
	using accumulator = detail::accumulator< BinaryOp, T >;

	using type = typename decltype((accumulator<Init>{} + ... + accumulator<Ts>{}))::type;
};

#else

template< template<class...> class BinaryOp, class Init >
struct accumulate< BinaryOp, Init, typelist<> > {
    using type = Init;
};

template< template<class...> class BinaryOp, class Init, class T, class... Ts >
struct accumulate< BinaryOp, Init, typelist< T, Ts... > > {
    using type = typename accumulate< BinaryOp, typename BinaryOp<Init, T>::type, typelist< Ts... > >::type;
};

#endif

}

#endif // YYMP__ACCUMULATE_HPP
