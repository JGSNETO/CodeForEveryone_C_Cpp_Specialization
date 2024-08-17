#include <iostream>

// Template function to print any tye of value
template <typename T>
void print_value(T value) {
	std::cout << value << std::endl;
}

int main()
{
	int i = 42;
	float f = 3.14;
	std::string s = "Hello World!";

	print_value(i);
	print_value(f);
	print_value(s);

	return 0;
}