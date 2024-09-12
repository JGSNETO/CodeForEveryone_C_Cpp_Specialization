/*
# Tuple

- In C++, a tuple is a collection of fixed-size, ordered elements where each element can be of different type. The tuple is part of
the C++ Standard library and is defined in the <tuple> header. Tuples are useful when you need to group multiple values together in
a single object, but those values can be of different types, and you don't want to define a new struct or class for that purpose.

# key features of std::tuple:
1. Heterogeneous Elements: A tuple can store multiple elements of different types.
2. Fixed size: Once a tuple is created, its size cannot be changed.
3. Type safety: Each element in the tuple has a specific type that is known at compile time.

# Key functions for working with Tuples:

1. Creating a Tuple: You can create a tuple using std::make_tuple() or by directly initializing it.
auto mytuple = std::make_tuple(42, 3.14, "tuple example");

2. Accessing Tuple Elements: Elements of a tuple can be accessed using std::get<N>(tuple), where 'N' is the zero-based index of the element.
int firstElement = std::get<0>(myTuple)

3. Modifying Tuple Elements: You can modify tuple elements using std::get
std::get<1>(myTuple) = 5.5;

4. Tuple Size: The size of the tuple can be obtained at compile time using std:: tuple_size
constexpr auto tupleSize = std::tuple_size<decltype(myTuple)>::value;

5. Extracting Elements Using std::tie: You can unpack the elements of a tuple into individual variables using std::tie.
int a;
double b;
std::string c;

std::tie(a, b, c) = myTuple; //Unpack the tuple into variables

6. Comparing tuples: Tuples can be compared using comparison operators(==, !=, <, >, etc). The comparisons are lexicograohical, meaning
they compare elements in order.

auto t1 = std::make_tuple(1, 2, 3);
auto t2 = std::make_tuple(1, 2, 4);
if (t1 < t2) {
    std::cout << "t1 is less than t2" << std::endl;
}

7. Concatenating Tuples: You can concatenate two tuples using std::tuple_cat()
auto t1 = std::make_tuple(1, 2);
auto t2 = std::make_tuple(3.5, "example");
auto result = std::tuple_cat(t1, t2);  // result is a tuple: (1, 2, 3.5, "example")
*/