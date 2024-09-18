#include <iostream>
#include <memory> // For smart pointers

// Product interface
class Product {
public:
    virtual void operation() const = 0; // Abstract method
    virtual ~Product() {}               // Virtual destructor to avoid memory leaks
};

// Concrete Product A
class ConcreteProductA : public Product {
public:
    void operation() const override {
        std::cout << "Operation of ConcreteProductA\n";
    }
};

// Concrete Product B
class ConcreteProductB : public Product {
public:
    void operation() const override {
        std::cout << "Operation of ConcreteProductB\n";
    }
};

// Creator or Factory Class
class Creator {
public:
    // Factory method - abstract
    virtual std::unique_ptr<Product> factoryMethod() const = 0;

    void someOperation() const {
        std::unique_ptr<Product> product = factoryMethod(); // Use smart pointer
        product->operation();
    }
};

// Concrete Factory A
class ConcreteCreatorA : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() const override {
        return std::make_unique<ConcreteProductA>(); // Return smart pointer
    }
};

// Concrete Factory B
class ConcreteCreatorB : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() const override {
        return std::make_unique<ConcreteProductB>(); // Return smart pointer
    }
};

int main() {
    std::unique_ptr<Creator> creatorA = std::make_unique<ConcreteCreatorA>();
    creatorA->someOperation(); // Creates and uses ConcreteProductA

    std::unique_ptr<Creator> creatorB = std::make_unique<ConcreteCreatorB>();
    creatorB->someOperation(); // Creates and uses ConcreteProductB

    return 0;
}
