#include <iostream>
#include <vector>

// Function to swap two elements

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// Partition function
int partition(std::vector<int>& arr, int low, int high) {
	int pivot = arr[high]; //choosing the last element as pivot
	int i = low - 1;

	for (int j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[high]);
	return i + 1;
}

// Quick sort function
void quicksort(std::vector<int>& arr, int low, int high) {
	if (low < high) {
		// pi is partitioning index, arr[pi] is now at right place
		int pi = partition(arr, low, high);

		// Recursively sort elements before partition and after partition
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}

int main() {

	std::vector<int> arr = { 10, 80, 30, 90, 40, 50, 70 };

	std::cout << "Original array: ";
	for (int x : arr) std::cout << x << " ";
	std::cout << std::endl;

	quicksort(arr, 0, arr.size() - 1);

	std::cout << "Sorted array: ";
	for (int x : arr) std::cout << x << " ";
	std::cout << std::endl;

	return 0;
}