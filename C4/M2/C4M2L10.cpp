/*
# The inheritance Mechanism

- Means of deriving new class from existing classes, calles base classes.
- Reuses existing code eliminating tedious, error-prone task of development new code.
- Derived class developed from base by adding or altering the code.
- Hierarchy of related types created that share code & interface.

## Hierarchy Access

- Public: Members declared as public are accessible from any other code in the program. There are no restrictions on access.
- Protected: Members declared as protected are accessible within their own class, by subclasses (derived classes), and by classes within the same package (in languages like Java). Protected members are not accessible from outside these contexts.
- Private: Members declared as private are accessible only within the class they are declared. They are not accessible from any other class, including subclasses.

## Inheriting from the Base Class

- Derived class is modification of base class that inherits public and protected members of base class

## Add new members in the Derived class

- Derived class adds new members to existing class members. 

## Benefits of Inheritance

- Code is reused
- Reflects releationship in problem domain
- Polymorphic mechanisms allow client code to treat inherited class as subtype of base class

## Typing Conversions & Visibility

- Publicly derived class is subtype of base
- Variable of derived class treated as if it were base class type
1. Subtle implicit conversions occur between base and derived type
2. Difficult to follow what member is accessed if base and derived class overloaded same member name

## Determining Access Privileges

- Tradeoff in code reuse and efficiency.
- Inheritance requires thinking about three access boundaries. 
- What is to be strictly private and what is to be protected depends on what is reusable.
*/