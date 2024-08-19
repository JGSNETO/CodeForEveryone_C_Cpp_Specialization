#include <iostream>
#include <vector>

template <typename T>
class MyBidirectionalIterator {

public:
	// Using is used to create type alias
	using iterator_category = std::bidirectional_iterator_tag;
	using value_type = T;
	using difference_type = std::ptrdiff_t;
	using pointer = T*;
	using reference = T&;

	MyBidirectionalIterator(pointer ptr) : m_ptr(ptr) {}

	// Deference operator
	reference operator*() const {
		return *m_ptr;
	}

	pointer operator ->() {
		return m_ptr;
	}

	// Pre-increment
	MyBidirectionalIterator& operator++() {
		++m_ptr;
		return *this;
	}

	// Post-increment
	MyBidirectionalIterator operator++(int) {
		MyBidirectionalIterator temp = *this;
		++m_ptr;
		return temp;
	}


	// Pre-decrement
	MyBidirectionalIterator& operator --() {
		--m_ptr;
		return *this;
	}

	// Post-decrement
	MyBidirectionalIterator operator --(int) {
		MyBidirectionalIterator temp = *this;
		--m_ptr;
		return temp;
	}

	// Equality operator
	bool operator==(const MyBidirectionalIterator& other) const {
		return m_ptr == other.m_ptr;
	}

	// Inequality oeprator
	bool operator !=(const MyBidirectionalIterator& other) const {
		return m_ptr != other.m_ptr;
	}

private:
	pointer m_ptr;
};

// Example container class

template <typename T>
class MyContainer {
public:
	using iterator = MyBidirectionalIterator<T>;
	MyContainer(std::initializer_list<T> init) : m_data(init) {}

	iterator begin() {
		return iterator(m_data.data());
	}

	iterator end() {
		return iterator(m_data.data() + m_data.size());
	}

private:
	std::vector<T> m_data;
};

int main() {

	MyContainer<int> container = { 1, 2, 3, 4, 5 };

	// Forward iteration
	for (auto it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	// Backward iteration
	for (auto it = container.end(); it != container.begin();) {
		--it;
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}