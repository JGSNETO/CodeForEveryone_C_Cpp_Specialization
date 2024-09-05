/*
# Creating a Class

## Move semantics

Introduced in C++ 11 that allows resources to be transferred from one object to another, avoiding
unnecessary coying and enhancing performance, especially for objects that manage dynamic memory or other resources. It
is a key part of "Rule of Five" in modern C++ programming, which suggest implementing a custom move contructor and mote assignment
operator if a class manages resources directly.

## How it works

1. Move contructor: This constructor is called when an object is initialized from an r-value, which is tipically
a temporary object. Instead of making a deep copy of the resources, the move constructor transfer ownershiop of the resource
from the source object to the new object.
2. Move assignment operator: This operator is invoked when an existing object is assgined an r-value. Similar to the move
constructor, it transfer ownership of resources tather than copying them. 

## Constructor type

1. Default:  is a constructor that can be called with no arguments. It initializes objects of a class with default values. If you don’t explicitly define any constructor in your class, the compiler will automatically provide a default constructor.
2. 1-arg/Conversion:  is a constructor that takes a single argument. It is called a conversion constructor because it can be used to convert a value of the type of the parameter to an object of the class type.
3. Copy: s a constructor that initializes an object using another object of the same class. It is used to create a new object as a copy of an existing object.

*/

#include <iostream>
#include <utility>

class MyClass {
private:
    int* data;
    size_t size;
public:
    // Constructor
    MyClass(size_t size) : size(size), data(new int[size]) {
        std::cout << "Constructor: Allocating resources.\n";
    }

    // Destructor
    ~MyClass() {
        delete[] data;
        std::cout << "Destructor: Releasing resources.\n";
    }

    // Copy constructor
    MyClass(MyClass&& other) noexcept : size(other.size), data(other.data){
        other.data = nullptr; // Transfer ownership
        other.size = 0;
        std::cout << "Move Constructor: Transferring ownership of resources.\n";
    }

    // Move Assignment Operator
    MyClass& operator = (MyClass&& other) noexcept{

        if(this != &other) {
            delete[] data; // Free existing resources
            data = other.data; // Transfer ownership 
            size = other.size;
            other.data = nullptr; // Leave source in valid state
            other.size = 0;
            std::cout << "Move assignment operator: Transfering ownership of resources. \n";
        }
        return *this;
    }
};

int main() {
    MyClass obj1(10);           // Regular constructor
    MyClass obj2 = std::move(obj1); // Move constructor
    MyClass obj3(5);
    obj3 = std::move(obj2);
    return 0;

}