//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__FOR_EACH_HPP
#define YYMP__FOR_EACH_HPP

#include <cstddef> // std::size_t

#include <utility> // std::move, std::integer_sequence

#include <yymp/typelist_fwd.hpp>

namespace yymp {

/** \brief A value that represents a type.
 *
 * \tparam T The type to represent.
 */
template< class T >
struct type_value {
    /** \brief The represented type. */
    using type = T;
};

/** \brief Calls \a f on `type_value<T>{}` for each type `T` in \a Ts, in order.
 *
 * \return `std::move(f)`
 */
template< class... Ts, class UnaryFunction >
constexpr UnaryFunction for_each(typelist<Ts...>, UnaryFunction f);

/** \brief Calls \a f on `std::integral_constant`s whose values come from `Is`, in order.
 *
 * \return `std::move(f)`
 */
template< class T, T... Is, class UnaryFunction >
constexpr UnaryFunction for_each(::std::integer_sequence<T, Is...>, UnaryFunction f);

#if __cpp_fold_expressions >= 201411

template< class... Ts, class UnaryFunction >
constexpr UnaryFunction for_each(typelist<Ts...>, UnaryFunction f) {
    return ((..., (f(type_value<Ts>{}), void())) , std::move(f));
}

template< class T, T... Is, class UnaryFunction >
constexpr UnaryFunction for_each(::std::integer_sequence<T, Is...>, UnaryFunction f) {
    return ((..., (f(::std::integral_constant<T, Is>{}), void())) , std::move(f));
}

#elif __cpp_constexpr >= 201304

template< class... Ts, class UnaryFunction >
constexpr UnaryFunction for_each(typelist<Ts...>, UnaryFunction f) {
    using discard = int[sizeof...(Ts) + 1];
    (void)discard{(f(type_value<Ts>{}), void(), 0)...};
    return std::move(f);
}

template< class T, T... Is, class UnaryFunction >
constexpr UnaryFunction for_each(::std::integer_sequence<T, Is...>, UnaryFunction f) {
    using discard = int[sizeof...(Is) + 1];
    (void)discard{(f(::std::integral_constant<T, Is>{}), void(), 0)...};
    return std::move(f);
}

#endif // __cpp_fold_expressions >= 201411

}

#endif // YYMP__FOR_EACH_HPP
