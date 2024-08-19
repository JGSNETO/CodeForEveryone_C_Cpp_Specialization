/*

1. Bidirectional Iterator
A Bidirectional Iterator is a type of iterator that can move both forward and backward through a container. It extends the capabilities of a forward iterator by allowing you to traverse the elements in both directions.

Characteristics of Bidirectional Iterators
- Bidirectional Movement: A bidirectional iterator supports both the ++ (increment) and -- (decrement) operators, allowing traversal forward and backward.
- Dereferenceable: You can dereference a bidirectional iterator using the * operator to access the element it points to.
- Multi-Pass: Like forward iterators, bidirectional iterators are multi-pass, meaning you can iterate over the same sequence multiple times.
- Equality and Inequality: Bidirectional iterators can be compared for equality and inequality using the == and != operators.
- In C++, a bidirectional iterator is typically implemented using a custom class that overloads the necessary operators (++, --, *, and ->)
*/