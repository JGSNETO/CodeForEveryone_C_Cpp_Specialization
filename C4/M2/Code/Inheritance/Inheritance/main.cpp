#include <iostream>


// Base class
class Shape {
public:

	virtual double area() const = 0; 
};

// Derived class for Circle
class Circle : public Shape {
private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	// Override the base class virtual function
	double area() const override {
		return 3 * radius * radius;
	}
};

// Derived class for rectangle 
class Rectangle : public Shape {
private:
	double width, height;

public:
	Rectangle(double w, double h) :  width(w), height(h) {}

	// Override the base class's virtual function
	double area() const override {
		return width * height;
	}
};

int main() {
	// Polymorphism: base class pointer can hold derived class objects
	Shape* shape1 = new Circle(5.8); 
	Shape* shape2 = new Rectangle(4.0, 6.0);

	std::cout << "Area of Circle: " << shape1->area() << std::endl;  // Outputs: Area of Circle: 78.5398
	std::cout << "Area of Rectangle: " << shape2->area() << std::endl;  // Outputs: Area of Rectangle: 24

	// Clean up dynamically allocated memory
	delete shape1;
	delete shape2;

	return 0;
}
