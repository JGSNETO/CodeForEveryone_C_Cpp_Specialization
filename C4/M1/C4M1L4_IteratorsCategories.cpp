/*
- We have seen input and output itereatos. Must have a single pass algorithm such as find.
- Next up forward, bidirectional, random access. 

1. Iterator forward: A Forward Iterator is a type of iterator that supports moving forward through a container. 
It allows you to access elements sequentially from the first to the last in a single pass.
Forward iterators are more powerful than input and output iterators but less powerful than bidirectional and random-access iterators. 

Characteristics of Forward Iterators
- Single-Pass: A forward iterator can iterate through a range of elements once, but unlike input iterators, it can be dereferenced multiple times.
- Supports Increment: You can increment forward iterators using the ++ operator.
- Dereferenceable: You can dereference forward iterators to access the value they point to using the * operator.
- Equality and Inequality: Forward iterators can be compared for equality and inequality using == and != operators.
- Multiple Pass: Multiple passes through the same sequence are possible, meaning that you can reset and iterate over the same sequence again.


2. Bidirectional Iterator
A Bidirectional Iterator is a type of iterator that can move both forward and backward through a container. It extends the capabilities of a forward iterator by allowing you to traverse the elements in both directions.

Characteristics of Bidirectional Iterators
- Bidirectional Movement: A bidirectional iterator supports both the ++ (increment) and -- (decrement) operators, allowing traversal forward and backward.
- Dereferenceable: You can dereference a bidirectional iterator using the * operator to access the element it points to.
- Multi-Pass: Like forward iterators, bidirectional iterators are multi-pass, meaning you can iterate over the same sequence multiple times.
- Equality and Inequality: Bidirectional iterators can be compared for equality and inequality using the == and != operators.
*/