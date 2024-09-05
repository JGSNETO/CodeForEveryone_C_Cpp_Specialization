/*
# Garbage Collection

- Garbage collection refers to the automatic management of memory where unused or "unreachable" objects are automatically
freeed to prevent memory leaks. However. C++ does not have a build-in garbage collector like some other languages(e.g: Java or C#).
Instead, C++ uses a manual memory management model, where the programmer is responsible for allocating and deallocating memory using new, delet or smart pointers.

- In C++, you need to manually ensure that memory is freed when no longer needed to avoid memory leaks(where memory is allocated
but not freed). To help manage memory properly, C++ provides several tools and practices:

1. RAII(Resource Acquisition is Initialization):
- In RAII, resource management (like memory or file handles) is tied to the lifetime of objects.
When an object hoes out of scope, its destructor is called, which can release resource automatically.

void example() {
    std::unique_ptr<int> ptr(new int(101)); // Memory automatically released when ptr goes out of scope
}

2. Smart Pointers(C++11 and later):
- Smart pointers simplify memory management by ensuring objects are automatically deallocated
when they are no longer needed. They help prevent common memory management problems like double-free errors
and memory leaks.

std::share_ptr<int> sp1 = std::make_shared<int>(100);
std::share_ptr<int> sp2 = sp1; // Shared ownership, object deallocated when both sp1 and sp2 go out of scope

## Polymorfic print

- In C++, polymorphic printing refers to the ability to print different types of objects or 
data using the same interface, typically enabled through polymorphism. 
Polymorphism allows objects of different types to be treated as objects of a common base type,
and the appropriate print behavior is determined at runtime.

olymorphism in C++ can be achieved in two main ways:

1. Compile-Time Polymorphism (Function Overloading)
Function overloading allows you to define multiple functions with the same name, 
but different argument types. This lets you create a polymorphic print function that works 
with different types at compile time.

#include <iostream>

// Overloaded print functions
void print(int value) {
    std::cout << "Integer: " << value << std::endl;
}

void print(double value) {
    std::cout << "Double: " << value << std::endl;
}

void print(const std::string& value) {
    std::cout << "String: " << value << std::endl;
}

int main() {
    print(42);              // Calls print(int)
    print(3.14);            // Calls print(double)
    print("Hello, World!");  // Calls print(std::string)
    return 0;
}

2. Compile-Time Polymorphism (Templates)
Templates allow for generic programming, enabling a single print function to work with any data type. The type is deduced at compile time, 
allowing for a polymorphic print function that can work with any type.

#include <iostream>

template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}

int main() {
    print(42);                  // Prints an integer
    print(3.14);                // Prints a double
    print("Hello, World!");      // Prints a string
    return 0;
}

*/

#include <gc/gc.h>
#include <iostream>

int main() {
    GC_INIT(); //Initialize the garbage collector
    int* p = (int*)GC_MALLOC(sizeof(int)); // Memory automatically managed
    *p = 100;
    std::cout << *p << std::endl;
    // No need to free memory explicitly
    return 0;
}