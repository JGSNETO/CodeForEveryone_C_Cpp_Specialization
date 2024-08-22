#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	// Using std::for_each with a lambda expression
	std::for_each(vec.begin(), vec.end(), [](int n) {
		std::cout << n * 2 << " ";
	});

	std::cout << std::endl;


	return 0;
}