/*
# Defined Function Object Classes
- Arithmetic Objects
- Comparison Objects
- Logical Objects

# Arithmetic Objects

template <class T>
struct plus {
    // Overload the operator() to perform addition
    T operator()(const T& a, const T& b) const {
        return a + b;
    }
};

template <class T>
struct minus {
    // Overload the operator() to perform subtraction
    T operator()(const T& a, const T& b) const {
        return a - b;
    }
};

# Function Adapters
- Creation of function objects using adaption
- Negators for negating predicate objects
- Binders for binding a function argument
- Adapters for pointer to function

# STL based on Templates

- Key to understand STL is to use iterator logic
- When extending STL keep consistent with existing libraries
- Generality and genericity are not enough. Its not STL if it isn't efficient
*/