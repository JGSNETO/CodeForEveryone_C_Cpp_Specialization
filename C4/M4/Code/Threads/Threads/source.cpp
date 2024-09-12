#include <iostream>
#include <thread>
#include <mutex> // Mutual exclusion

std::mutex mtx;
int counter = 0;

void increment() {
	for (int i = 0; i < 100000; ++i) {
		std::lock_guard<std::mutex> guard(mtx); // Automatically locks and unlocks the mutex
		++counter;
	}
}

int main() {
	std::thread t1(increment);
	std::thread t2(increment);

	t1.join();
	t2.join();

	std::cout << "Counter: " << counter << std::endl;

	return 0;
}

