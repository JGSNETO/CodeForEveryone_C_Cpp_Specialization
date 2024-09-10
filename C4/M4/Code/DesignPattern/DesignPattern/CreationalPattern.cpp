#include <iostream>

// Singleton
class Singleton {
private:
	static Singleton* instance;
	Singleton() {}

public:
	static Singleton* getInstance() {
		if (instance == nullptr) {
			instance = new Singleton();
		}
		return instance;
	}
};

Singleton* Singleton::instance = nullptr;

// Factory Pattern
class Product {
public:
	virtual void show() = 0;
};

class ConcreteProductA : public Product {
public:
	void show() override {std::cout << "Product A" << std::endl;}
};

class ConcreteProductB : public Product {
public:
	void show() override {std::cout << "Product B" << std::endl;}

};

class Factory {
public:
	static Product* createProduct(char type) {
		
			if (type == 'A') return new ConcreteProductA();
			else if (type == 'B') return new ConcreteProductB();
			return nullptr;

	}
};
//int main() {
//	
//	return 0;
//}