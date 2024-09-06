/*
# Assertions in C++

- An assertion is a debugging tool used to check assumptions made by the program. It helps detect logic errors during development. 
If an assertion fails, the program is typically terminated, and an error message is displayed. 

Assertions are generally used to:
1. Check invariants in the code.
2. Ensure preconditions and postconditions are met.
3. Catch bugs during development.

## Keypoints
1. Development-Time Tool: Assertions are mainly used during development and testing. They are not meant to handle runtime errors or recover from them.
2. Terminating Program: When an assertion fails, the program is terminated immediately, and an error message is printed.
3. Disabling in production: You can disable assertions in the release (production) version of the program by defining NDEBUG before including
the <cassert> hearder:
#define NDEBUG
#include <cassert>

# Exception Handling in C++

- Exception handling is a mechanism for dealing with runtime errors in a way that allows the program to recover or handle the error gracefully, rather
than terminating abruptly. Exceptions are used for situations where errors can occur, but they are not necessarily bugs, and the program can potentially
continue to run after handling the exception. 

## Key Concepts in Exception Handling
1. Throwing an Exception: When an error occurs, the program "throws" and exception using the "throw" keyword.
2. Catching an Exception: The program then "catches" the exception using a "try-catch" block, where the error can be handled.
3. Exception Classes: In C++, exceptions are objects, and you can define custom exeption classes. The standard library provides
several exception classes like: std::exception, std::runtime_error, and std::invalid_argument. 

## Important points

1. Standard Exceptions: The C++ Standard Library provides various exception types such as:
- std::exception: Base class for all exceptions.
- std::runtime_error: Represents runtime errors.
- std::logic_error: Represents logic errors (like invalid arguments)
- std::out_of_range, std::overflow_error

2. Custom Exceptions: You can define your own exception classes by inheriting from std::exception
3. Exception Propagation: If an exception is not caught in a function, it propagates up the call stack until a matching "catch" block is found.
If not "catch" block is found, the program terminates.
4. std::exception::what(): This method returns a C-string represents the error message.
5. Rethrowing Exceptions: You can rethrow an exception using "throw", inside a "catch" block to propagate it further-
6. Catch-ALL block: you can catch all types of exceptions using a catch(...) block.

## Difference Between Assertions and Exception Handling:
Assertions:
- Primarily used during development for debugging purposes.
- Terminates the program when a condition fails.
- Typically disabled in production (using NDEBUG).
-Indicates logic errors or bugs that should never happen.
Exceptions:
-Used to handle runtime errors (like file not found, division by zero, etc.).
-Allows the program to recover and continue execution.
-Used in both development and production environments.
-Indicates conditions that may happen during normal execution.
*/