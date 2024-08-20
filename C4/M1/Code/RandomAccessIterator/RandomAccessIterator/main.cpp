#include <iostream>
#include <vector>

int main() {

	std::vector<int> v = { 10,20,30,40,50 };

	// Getting a random access iterator 
	std::vector<int>::iterator it = v.begin();

	// Access elements using the iterator
	std::cout << "First element: " << *it << std::endl; 

	// Moving the iterator forward by 3 positions 
	it += 3;
	std::cout << "Fourth element: " << *it << std::endl;

	// Accessing an element using offset
	std::cout << "Second element: " << it[-2] << std::endl;

	// Distance between two iterators
	std::vector<int>::iterator it2 = v.end();
	std::cout << "Distance from it to end" << it2 - it << std::endl;

	return 0;
}