#include <iostream>
#include <cassert> // Include the assert header

int divide(int a, int b) {
	// Assert that the denominator is not zero
	assert(b != 0 && "Division by zero error");
	return a / b;
}

int main() {

	int x = 10, y = 2;
	std::cout << "Results " << divide(x, y) << std::endl; // Works fine
	y = 0;
	std::cout << "Result: " << divide(x, y) << std::endl; // This will trigger assert

	return 0;

}