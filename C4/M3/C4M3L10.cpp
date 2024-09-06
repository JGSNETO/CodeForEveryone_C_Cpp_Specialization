/*
# Abstract class

- In C++, an abstract class is a class that cannot be instantiated on its own and is primarily used as a base class for other classes.
Abstract classes are designed to provide a common interface or blueprint for delivered classes. The key feature of an abstract class is that it contains
at least one pure virtual function.

- A pure virtual function is a function that is declared in the base class but is not defined. Derived classes are required to provide their own
implementation of this function.

## Key points

1. Pure virtual function: A pure virtual function is declared using the syntax = 0 at the end of the function declaration.
"virtual void someFunction() = 0"
2. Instantiation: An abstract class cannot be instantiated directly. However, you can create pointers or references to the abstract class, and the actual
object must be of a class derived from the abstract class provies implementations for all pure virtual functions.
3. Purpose: Abstract classes are typically used to define interfaces or provide a base class that outlines common behaviors for derived classes. 
*/


#include <iostream>

// Abstract class (contains pure virtual function)

class Animal {
public:
    // Pure virtual function (making this class abstract)
    virtual void sound() = 0;

    // A non-pure virtual function (can have implementation)
    void sleep() {
        std::cout << "This animal is sleeping\n";
    }
};

// Derived class Dog inherits from Animal
class Dog : public Animal {
public:
    // Provide implementation of the pure virtual function
    void sound() override {
        std::cout << "Dog barks.\n";
    }
};

// Derived class Cat inherits from Animal
class Cat : public Animal {
public:
    // Provide implementation of the pure virtual function
    void sound() override {
        std::cout << "Cat meows.\n";
    }
};

int main() {
    // Abstract class cannot be instantiated directly
    // Animal a;  // This will result in a compile-time error

    // However, pointers to an abstract class are allowed
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    // Call the derived class's implementation of sound()
    animal1->sound();  // Output: Dog barks.
    animal2->sound();  // Output: Cat meows.

    // Both derived classes can also use non-abstract functions
    animal1->sleep();  // Output: This animal is sleeping.
    animal2->sleep();  // Output: This animal is sleeping.

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}