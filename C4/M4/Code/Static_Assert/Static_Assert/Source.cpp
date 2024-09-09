#include <iostream>

template<typename T>
void checkType() {
	// Ensure the type is an integer at compile time
	static_assert(std::is_integral<T>::value, "T must be an integer type");
	std::cout << "T is an integer type" << std::endl;
}

int main() {

	checkType<int>();
	//checkType<float>();
	return 0;
}