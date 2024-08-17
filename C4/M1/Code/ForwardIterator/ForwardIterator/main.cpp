#include <iostream>
#include <forward_list>

int main() {
	// Create a forward_list of integers
	std::forward_list<int> mylist = { 1,2,3,4,5 };

	// Declare a forward iterator
	std::forward_list<int>::iterator it;

	// Iterate through the list using the forward iterator
	for (it = mylist.begin(); it != mylist.end(); ++it) {
		std::cout << *it << " ";
	}


	return 0;
}