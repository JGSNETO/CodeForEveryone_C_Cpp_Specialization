/*
Useful to have function objects to futher leverage STL library. Numerical functions have built-in meaning using + or *, as well as user-provided binary operators
which could be passed in. 

Defined function objects can be foind in function.h or built

Function objects are classes the have the operator() defined. Inlined, compiled producing efficient object code.

This can be useful in scenarios where you need to maintain some state or configuration that will be used every time the "function" is called.

The #ifndef, #define, and #endif directives in the function.h file are part of a common C++ practice called include guards. They prevent multiple inclusions of the same header file, which can cause compilation errors.

#ifndef FUNCTION_H: This checks if the macro FUNCTION_H is not defined.

If FUNCTION_H is not defined, it means this is the first time the header is being included in this translation unit.
#define FUNCTION_H: This defines the macro FUNCTION_H. After this point, any subsequent inclusions of function.h will see that FUNCTION_H is already defined and skip the contents of the header.

Header Content: The actual content of the header file (class definitions, function declarations, etc.) is placed between the #ifndef and #endif.

#endif: This ends the conditional inclusion.
*/