//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__DETAIL__ACCUMULATOR_HPP
#define YYMP__DETAIL__ACCUMULATOR_HPP

namespace yymp { namespace detail {

template< template<class...> class BinaryOp, class T >
struct accumulator {
    using type = T;

	template< class S >
	constexpr accumulator< BinaryOp, typename BinaryOp< T, S >::type > operator+(accumulator<BinaryOp, S>) const noexcept;
};

} }

#endif // YYMP__DETAIL__ACCUMULATOR_HPP
