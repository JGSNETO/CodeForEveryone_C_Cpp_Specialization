#include <iostream>

// Adapter Pattern

class OldInterface {
public:
	void oldFunction() { std::cout << "Old Function" << std::endl;}
};

class NewInterface {
public:
	virtual void newFunction() = 0;
};

class Adaptor : public NewInterface {
	OldInterface* oldObj;
public:
	Adaptor(OldInterface* old) : oldObj(old) {}
	void newFunction() override {
		oldObj->oldFunction();
	}
};

// Decorator Pattern

class Component {
public:
	virtual void operation() = 0;
};

class ConcreteComponent : public Component {
public:
	void operation() override { std::cout << "Basic Operation" << std::endl;}
};

class Decorator : public Component {
protected:
	Component* component;
public:
	Decorator(Component* comp) : component(comp) {}
	void operation() override {
		component->operation();
	}
};

class ConcreteDecorator : public Decorator {
public:
	ConcreteDecorator(Component* comp) : Decorator(comp) {}
	void operation() override {
		Decorator::operation();
		std::cout << "Enhaced Operation" << std::endl;
	}
};

int main() {

	return 0;
}