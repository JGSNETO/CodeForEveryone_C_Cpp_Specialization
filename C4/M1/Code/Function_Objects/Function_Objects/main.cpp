#include <iostream>
#include <vector>
#include <algorithm>
#include "function.h"

int main() {

	std::vector<int> numbers = { 1, 2, 3, 4, 5 };

	// Create a MultiplyBy functor with a factor of 3
	MultiplyBy multiplyBy3(3);

	// Apply the functor to each element in the vector using std::transform
	std::vector<int> results(numbers.size());
	std::transform(numbers.begin(), numbers.end(), results.begin(), multiplyBy3);

	// Print the results
	for (int result : results) {
		std::cout << result << " ";
	}
	std::cout << std::endl;
	return 0;
}