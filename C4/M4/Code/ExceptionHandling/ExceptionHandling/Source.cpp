#include <iostream>
#include <stdexcept> // For standard exception classes

int divide(int a, int b) {
	if (b == 0) {
		throw std::invalid_argument("Division by zero exception");
	}

	return a / b;
}

int main() {
	int x = 10, y = 0;

	try {
		std::cout << "Result: " << divide(x, y) << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	}

	return 0;
}