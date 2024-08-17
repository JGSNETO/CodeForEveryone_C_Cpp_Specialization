#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
	T1 first;/*his declares a member variable first of type T1. The type of first will be determined when the Pair class is instantiated with specific types.
For example, if T1 is int, then first will be an int.*/
	T2 second;/*Similar to first, this declares a member variable second of type T2.
If T2 is, for example, float, then second will be a float.*/

	/*This is a constructor for the Pair class. It takes two parameters a of type T1 and b of type T2.
	first(a) means that first is initialized with the value a, and second(b) means that second is initialized with the value b.*/
	Pair(T1 a, T2 b) : first(a), second(b) {}

	/*This is a member function named print that returns void (i.e., it does not return a value).
The const keyword after the function signature indicates that this function does not modify any member variables of the class. It promises not to change the internal state of the object.*/
	void print() const {
		std::cout << "Pair: " << first << ", " << second << std::endl;
	}
};

int main() {
	Pair<int, float> p1(42, 3.14);
	Pair<std::string, int> p2("Age", 25);

	p1.print();
	p2.print();

	return 0;
}