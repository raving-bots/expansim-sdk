# yymp
*yymp* is a typelist manipulation library for C++14 and C++17.

# Requirements
A C++ compiler supporting at least the C++11 standard.
Some features may require the C++14 or C++17 standards to be available.

# Example Usage
There are two ways to include the headers for typelists.
``` c++
#include <yymp/typelist_fwd.hpp>
```
This will include just the typelist definition, without any other functionality.
``` c++
#include <yymp/typelist.hpp>
```
This will include the typelist definition as well as the manipulation features.
The examples that follow assume that the latter is included.

Type lists are types themselves. To create one, use the `yymp::typelist` class template.
``` c++
using my_types = yymp::typelist<int, char*, int, void*>;
```

We sometime need to join two or more typelists.
``` c++
using foo_types = yymp::typelist<void, void, short>;
using my_joined_types = typename yymp::join<foo_types, my_types, foo_types>::type; 
// -> yymp::typelist<void, void, short, int, char*, int, void*, void, void, short>
```
The result is stored as the `type` nested typename. This is the usual way of retrieving results from the features of this library.

We can also group types in a typelist by a selector, the result of which is a typelist of `group` types.
``` c++
template<class T>
struct identity_selector {
    using type = T;
};

using my_groups = typename yymp::group_by<identity_selector, my_types>::type; 
// -> yymp::typelist<yymp::group<int,   yymp::typelist<int, int>>, 
//                   yymp::group<char*, yymp::typelist<char*>>, 
//                   yymp::group<void*, yymp::typelist<void*>>>
```

The result can be manipulated by other features such as `transform` and `expand` to create interesting functionality.
``` c++
using my_distinct_types = typename yymp::transform<yymp::get_group_key, my_groups>::type;
// -> yymp::typelist<int, char*, void*>

using my_group_types = typename yymp::transform<yymp::get_group_types, my_groups>::type;
// -> yymp::typelist<yymp::typelist<int, int>, 
//                   yymp::typelist<char*>, 
//                   yymp::typelist<void*>>

using my_sorted_types = typename yymp::expand<yymp::join, my_group_types>::type; // equivalent to typename yymp::join< T... >::type for T in my_group_types
// -> yymp::typelist<int, int, char*, void*>
```

Notice that we performed a filter for duplicates when creating `my_distinct_types`. This could also have been written
``` c++
using my_distinct_types = typename yymp::filter_duplicates<my_types>::type;
```

Speaking of filters...
``` c++
#include <type_traits>
using my_ptr_types = typename yymp::filter<std::is_pointer, my_types>::type;
// -> yymp::typelist<char*, void*>
```

# License
*yymp* is licensed under the [Boost Software License](https://github.com/surrealwaffle/yymp/blob/master/LICENSE_1_0.txt).