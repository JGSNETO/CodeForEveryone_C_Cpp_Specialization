/*

-In C++, a random access iterator is a type of iterator that provides the ability to access elements in a container at any arbitrary position in constant time. 
It supports a wide range of operations that allow direct access to any element, as well as efficient traversal in both directions(forward and backward). 
This makes random access iterators the most powerful type of iterator in the C++ standard library.

- The random access iterator must allow the elements to be randomly searched in fixed time. Think indexed array.
- This requires effectively being able to add or substrac to an iterator value and retrieve a value from the computed position. 
- It also means that iterator values can be compared for less and greater than as well as equality operators. 
*/