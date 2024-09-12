#include <iostream>
#include <tuple>

int main() {
	// Create a tuple wih three different types
	std::tuple<int, double, std::string> myTuple(42, 3.14, "Hello");

	// Accessing elements using std::get
	std::cout << "Integer: " << std::get<0>(myTuple) << std::endl;
	std::cout << "Double: " << std::get<1>(myTuple) << std::endl;
	std::cout << "String: " << std::get<2>(myTuple) << std::endl;

	// Modifying tuple elements
	std::get<1>(myTuple) = 6.28;
	std::cout << "Modified Double: " << std::get<1>(myTuple) << std::endl;

	// Extract tuple values using std::tie
	int x;
	double y;
	std::string z;
	std::tie(x, y, z) = myTuple;
	std::cout << "Extracted Values: " << x << ", " << y << ", " << z << std::endl;
	return 0;
}