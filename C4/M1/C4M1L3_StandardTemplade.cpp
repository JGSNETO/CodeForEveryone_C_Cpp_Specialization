/*
Three Legged Stool:
1 Containers: Sequence containers: Vector, deques, list
2. Associative containers: Set, Map (Have relation)

Iterators: Input...random
Algorithms:
- Non-mutating sequence algorithms: Find, Count
- Mutating sequence: Copy Random Shuffle,
- Sorting-Related: Sort, Merge
- Numeric: Accumulate, inner product

# Some new libraries in C++11
<regex> - regular expression: A tool for searching, matching, and manipulating text based on specific patterns. 
Regular expressions are used for tasks like validating input, finding substrings, or replacing text.
<thread> - Threading: Allows concurrent execution of code within a program. 
Threads are used to perform multiple tasks simultaneously, such as handling user input while performing background computations.
<unordered_map> - hash based map:A data structure that stores key-value pairs, where each key is unique. 
It uses hashing to provide fast access, insertion, and deletion, typically in constant time.
<array> - fixed size array: A collection of elements of the same type stored in contiguous memory. 
The size of an array is fixed at the time of creation, meaning it cannot be resized dynamically.
<foreward_list> - singly linked list: A linear data structure consisting of nodes where each node contains a value and a pointer to the next node. 
It allows efficient insertion and deletion of elements, particularly at the front.
<vector> - A dynamic array that can resize itself automatically when elements are added or removed. It provides fast random access to elements,
and unlike a fixed-size array, a vector can grow or shrink in size as needed. It is part of the Standard Template Library (STL) in C++.

# In C:
- A C container is:A data structure that stores and organizes multiple elements. 
Examples include arrays, linked lists, stacks, and queues. C containers are usually implemented using pointers and structures.
- A C iterator is: A pointer or an index used to traverse through elements in a container, such as an array or a linked list. 
Iterators in C are not as standardized as in C++ but are often used in loops to access elements in a sequence.
- A C algorithm is:  function or a set of functions that operate on containers or data. Examples include sorting (like qsort), searching (like bsearch), or manipulating data structures. 
These algorithms are typically implemented as standalone functions in C.
- Generics can be done clumsily with: Macros and void* pointers. In C, generic programming is achieved using void* for type-agnostic pointers and macros for type-agnostic code, 
but this approach lacks type safety and can lead to runtime errors if not carefully managed.

# Type-Agnostic Pointers (void*):
Definition: A void* is a pointer in C that can point to any data type. It's "type-agnostic" because it doesn't have a specific type associated with it.
Usage: You can pass any type of data (e.g., int, float, struct, etc.) to a function via a void* pointer. The function can then cast the void* to the appropriate type before operating on it.
*/
