/*
# Virtual function selection

Definition: In C++, a virtual function is a member function in a base class that you expect to override in derived classes. 
When you use virtual functions, C++ determines at runtime which function to call, based on the type of the object that is pointed to or referenced, 
rather than the type of the pointer or reference itself. This feature is a key part of polymorphism in object-oriented programming.

- Typically base has virtual function and derived have their versions of function.
- Pointer to base class can point at either base or derived class objects.
- Member function selected depends on class of object being pointed at, not on pointer type. 
- In absence of derived type member, base class virtual function used by default. 

1. For Polymorphism: Use pointers or references to base class types to achieve runtime polymorphism and call the correct overridden function in derived classes.
2. Avoid Object Slicing: Using base class objects to store derived class objects directly leads to object slicing, losing derived class functionality.
3. Use Pointers Wisely: When using polymorphism, prefer pointers or references to manage objects, ensuring dynamic dispatch works as intended. However, 
be mindful of managing memory properly to avoid leaks, using delete or smart pointers (like std::unique_ptr or std::shared_ptr) to handle dynamic allocation.

# Virtual & Overloaded Function Selection

Definition: The override keyword is used in a derived class to indicate that a member function is intended to override a virtual function in the base class. 
It provides a clear, explicit declaration that the function is overriding a base class function.
- Overloaded member function is compile-time selected based on signature. 
- It can have distinct return type. 
- Once declared virtual, this property is carried along to all redefinitions in derived classes.
1. Virtual modifier not needed in derived functions. 

# Restriction on Virtual Functions

- Only non-static member functions virtual
- Virtual characteristic is inherited. Derived class function automatically virtual virtual keywork not needed
- Constructors cannoe be virtual
- Destructors can be virtual
*/