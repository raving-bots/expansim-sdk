//          Copyright Thomas Goehner 2017
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef YYMP__BIND_HPP
#define YYMP__BIND_HPP

namespace yymp {

/* ***************************
 * DECLARATION
 */

/** \class yymp::var
 * \brief A placeholder for the first value supplied to a rebound template, for use in \ref yymp::bind "template binding".
 */
struct var;

/** \class truncate
 * \brief A placeholder for <code>typename T::type</code> in a rebound template, for use in \ref yymp::bind "template binding".
 */
template< class T >
struct truncate;

/** \brief Defines nested template `generic` of a single type parameter that
 * substitutes \ref var "var" and \ref yymp::truncate "truncate" placeholders
 * in the type parameters of class template instantiation `T`, recursively.
 */
template< class T >
struct bind;

/* ***************************
 * IMPLEMENTATION
 */

template< class T >
struct pbind {
    template< class... >
    struct generic {
        using type = T;
    };
};

template< >
struct pbind< var > {
    template< class I, class... >
    struct generic {
        using type = I;
    };
};

template< class T >
struct pbind< truncate< T > > {
    template< class... Is >
    struct generic {
        using type = typename pbind< T >::template generic<Is...>::type;
    };
};

template< template< class... > class Template, class... Ts >
struct pbind< Template< Ts... > > {
    template< class... Is >
    struct generic {
        using type = Template< typename pbind< Ts >::template generic<Is...>::type... >;
    };
};

template< class T >
struct bind {
    template< class... Is >
    using generic = typename pbind< T >::template generic< Is... >::type;
};

}

#endif // YYMP__BIND_HPP
