/*
# Code Architecture

- Code architecture refers to the high-level structure and organization of software code within a system. It defines how different components
of a program interect, how fata flows between then, and how the system is designed to handle scalability, maintainability, and performance.
Essentially, it's the blueprint or the design plan for how the code is written, modularized, and integrated to achieve the system's goal.

# Important Aspects

1. Separation of Concerns (SoC):
- Definition: Separation of concerns mens dividing a program into distinct sections, where each section addresses a separate concern
or a responsability. 
-  Purpose: Helps in reducing code complexity, making it easier to maintain and modify. It also helps prevent different functionalities from interfering with each other.
- Example: In a web application, separating the user interface code, business logic, and data access logic into different layers or modules.

2. Modularity:
- Definition: Modularity means breaking the system into small, independent, and reusable components or modules.
- Purpose: Allows for easier testing, debugging, and reusability. Changes in one module typically do not affect others, promoting flexibility.
- Example: A payment system could have separate modules for handling credit card processing, PayPal integration, and transaction logging.

3. Abstraction
- Definition: Abstraction is the concept of hiding complex implementation details behind a simple interface or function.
- Purpose: Reduces complexity for the user and makes the system easier to understand and interact with.
- Example: A database layer in an application might expose simple CRUD operations (Create, Read, Update, Delete) while hiding the complex SQL queries behind the scenes.

4. Encapsulation
- Definition: Encapsulation involves bundling data and the methods that operate on that data within a single unit or class, and restricting direct access to some of the object's components.
- Purpose: Protects the integrity of an object by controlling access and modification of its state.
- Example: A BankAccount class might encapsulate the account balance, only allowing changes through methods like deposit() and withdraw(), preventing direct manipulation.

5. Design Patterns
- Definition: Design patterns are reusable solutions to common problems in software design. 
These patterns help structure code in a way that is modular, scalable, and maintainable.
- Examples:
1. Singleton: Ensures only one instance of a class is created.
2. Factory Method: Delegates object creation to subclasses.
3. Observer: Allows an object to notify other objects about changes in its state.

6. Layers in Architecture
- Software systems are often divided into layers, each with a specific responsibility. A common pattern is the three-layer architecture:
1. Presentation Layer (UI Layer): Manages the user interface and handles user input.
2. Business Logic Layer (Service Layer): Contains the core functionality and business rules.
3. Data Access Layer (Persistence Layer): Interacts with the database or any external storage.

7. Architectural Patterns
Architectural patterns are design strategies used to organize and structure code on a larger scale:

- Monolithic Architecture: The entire application is a single, unified unit where all functionalities reside in one codebase. It’s simpler to develop initially but can become difficult to maintain and scale over time.
- Microservices Architecture: The application is divided into small, independent services, each focusing on a specific business capability. Each service can be developed, deployed, and scaled independently.
- Client-Server Architecture: A separation between the server (backend) and client (frontend) where the client sends requests to the server, which processes them and returns the response.
- MVC (Model-View-Controller): Separates the application into three interconnected components:
- Model: Manages the data and business logic.
- View: Represents the UI.
- Controller: Handles input from the user and updates the Model and View accordingly.

8. Scalability
- Vertical Scaling (Scaling Up): Increasing the power (CPU, RAM, etc.) of a single machine to handle more load.
- Horizontal Scaling (Scaling Out): Adding more machines or servers to distribute the load across multiple nodes.

In terms of code architecture, designing systems that can scale effectively requires managing concurrency, load balancing, 
and efficient communication between distributed components.

9. Maintainability and Extensibility
- Maintainability: The code should be easy to understand, modify, and test. This includes clear structure, meaningful naming conventions, and proper documentation.
- Extensibility: The system should be easy to extend with new features or modify existing features without needing to rewrite large portions of the code.

10. SOLID Principles
These are five design principles that help in creating maintainable and scalable software.

- Single Responsibility Principle (SRP): A class should have only one reason to change, meaning it should have one job or responsibility.
- Open/Closed Principle (OCP): Software entities should be open for extension but closed for modification.
- Liskov Substitution Principle (LSP): Derived classes should be substitutable for their base classes.
- Interface Segregation Principle (ISP): No client should be forced to depend on methods it does not use.
- Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules. Both should depend on abstractions.

11. Code Architecture in Large Systems
- Event-Driven Architecture: The system reacts to events generated by different components. This is common in real-time systems and is used to decouple services.
- Service-Oriented Architecture (SOA): Services communicate with each other over a network to provide specific functionality. This is often seen in enterprise-level applications.

2. Testing and Code Quality
- Unit Testing: Testing individual components in isolation to ensure they work as expected.
- Integration Testing: Ensuring different modules or services work together correctly.
- Code Reviews: Regular peer reviews to ensure the code adheres to architectural guidelines and best practices.

# Class Definition

1. Concrete Class
Definition: A concrete class is a class that can be instantiated, meaning you can create objects from it directly. 
It provides implementations for all of its methods, and it’s complete in the sense that it doesn’t need to be extended or modified to be used.

Key Points:
- It has concrete implementations for all of its methods.
- You can create objects (instances) of a concrete class.
- It is the "normal" kind of class you use most often in programming.

class Dog {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.bark(); // Output: Woof!
}


2. Abstract Class
Definition: An abstract class is a class that cannot be instantiated on its own and is intended to be used as a base for other classes. 
It usually contains one or more pure virtual functions (methods without implementation), and subclasses are required to provide implementations for these methods.

Key Points:
- Cannot be instantiated directly.
- Can contain both implemented and unimplemented (pure virtual) methods.
- Must be inherited by another class to provide implementations for its virtual methods.

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

3. Virtual Class (or Virtual Function)
Definition: A virtual function is a function that can be overridden in a derived class. It allows subclasses to provide specific implementations of the method, even when the object is accessed via a pointer or reference to the base class. In C++, virtual functions enable runtime polymorphism.

Key Points:
- Declared using the virtual keyword in the base class.
- Ensures that the correct method is called based on the object type, not the reference type.
- Commonly used in scenarios involving inheritance.

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound(); // Output: Woof!
}

4. Base Class (Superclass)
Definition: A base class (also called a superclass) is the class that is inherited by other classes. It provides common functionality that can be shared or extended by its derived (subclass) classes.

Key Points:
- A base class provides a foundation for other classes to build upon.
- Derived classes inherit properties and behaviors (methods) from the base class.
- The base class can be abstract (with virtual functions) or concrete.

class Animal {
public:
    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.sleep(); // Output: Animal is sleeping
    myDog.bark();  // Output: Woof!
}

5. Derived Class (Subclass)
Definition: A derived class (also called a subclass) is a class that inherits from a base class. 
It can use or override the functionality of the base class and can also add new functionality specific to it.

Key Points:
- A derived class extends the behavior of the base class.
- It can override methods of the base class if they are virtual.
- It can also introduce new methods and properties.

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};


In object-oriented programming (OOP), classes are the building blocks that define the structure and behavior of objects. Different types of classes (such as concrete, abstract, base, and virtual classes) are used to achieve various design goals. Let's go through each of these concepts:

1. Concrete Class
Definition: A concrete class is a class that can be instantiated, meaning you can create objects from it directly. It provides implementations for all of its methods, and it’s complete in the sense that it doesn’t need to be extended or modified to be used.

Key Points:
- It has concrete implementations for all of its methods.
- You can create objects (instances) of a concrete class.
- It is the "normal" kind of class you use most often in programming.
Example:

cpp
Copiar código
class Dog {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.bark(); // Output: Woof!
}
In this example, Dog is a concrete class because you can create an object of it (myDog), and all methods are fully implemented.

2. Abstract Class
Definition: An abstract class is a class that cannot be instantiated on its own and is intended to be used as a base for other classes. It usually contains one or more pure virtual functions (methods without implementation), and subclasses are required to provide implementations for these methods.

Key Points:
- Cannot be instantiated directly.
- Can contain both implemented and unimplemented (pure virtual) methods.
- Must be inherited by another class to provide implementations for its virtual methods.
Example:

cpp
Copiar código
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};
In this example, Animal is an abstract class because it has a pure virtual method (makeSound()). The subclass Dog must provide the implementation of makeSound() to be instantiated.

3. Virtual Class (or Virtual Function)
Definition: A virtual function is a function that can be overridden in a derived class. It allows subclasses to provide specific implementations of the method, even when the object is accessed via a pointer or reference to the base class. In C++, virtual functions enable runtime polymorphism.

Key Points:
- Declared using the virtual keyword in the base class.
- Ensures that the correct method is called based on the object type, not the reference type.
- Commonly used in scenarios involving inheritance.
Example:

cpp
Copiar código
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->makeSound(); // Output: Woof!
}
In this example, the method makeSound() is declared virtual in the Animal class. The Dog class overrides this method, and when we call makeSound() on an Animal* pointer that actually points to a Dog object, the overridden method is executed.

4. Base Class (Superclass)
Definition: A base class (also called a superclass) is the class that is inherited by other classes. It provides common functionality that can be shared or extended by its derived (subclass) classes.

Key Points:
- A base class provides a foundation for other classes to build upon.
- Derived classes inherit properties and behaviors (methods) from the base class.
- The base class can be abstract (with virtual functions) or concrete.
Example:

cpp
Copiar código
class Animal {
public:
    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.sleep(); // Output: Animal is sleeping
    myDog.bark();  // Output: Woof!
}
In this example, Animal is the base class (or superclass), and Dog is the derived class. The Dog class inherits the sleep() method from the Animal class.

5. Derived Class (Subclass)
Definition: A derived class (also called a subclass) is a class that inherits from a base class. It can use or override the functionality of the base class and can also add new functionality specific to it.

Key Points:

A derived class extends the behavior of the base class.
It can override methods of the base class if they are virtual.
It can also introduce new methods and properties.
Example:

cpp
Copiar código
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
};
In this example, Dog is a derived class that inherits from the base class Animal and adds new behavior with the bark() method.

6. Interface (Pure Abstract Class)
Definition: In C++, an interface is typically represented by a pure abstract class, which is a class that contains only pure virtual functions and no data members or implemented methods. It defines a contract for behavior, and classes that implement the interface must provide concrete implementations of all its methods.

Key Points:
- Defines a set of methods that derived classes must implement.
- Cannot be instantiated on its own.
- Used to achieve multiple inheritance in a clean way.

class Printable {
public:
    virtual void print() = 0;  // Pure virtual function
};

class Document : public Printable {
public:
    void print() override {
        std::cout << "Printing document" << std::endl;
    }
};

7. Final Class
Definition: A final class is a class that cannot be inherited from. It is marked with the final keyword, which prevents any further subclassing.

Key Points:
- Ensures that no other class can extend it.
- Useful when you want to prevent inheritance for security or design reasons.

class FinalClass final {
public:
    void show() {
        std::cout << "This is a final class" << std::endl;
    }
};

// This would cause a compilation error
// class Derived : public FinalClass {};

Summary of Class Types
1. Concrete Class: A class with all methods fully implemented, can be instantiated.
2.Abstract Class: A class that has one or more pure virtual functions and cannot be instantiated directly.
3. Virtual Class/Function: A class or function that allows derived classes to override its behavior, enabling runtime polymorphism.
4. Base Class (Superclass): A class that is inherited by other classes.
5. Derived Class (Subclass): A class that inherits from a base class and can extend or override its behavior.
6. Interface (Pure Abstract Class): A class that only defines abstract methods, and requires derived classes to implement them.
7. Final Class: A class that cannot be inherited by any other class.
*/