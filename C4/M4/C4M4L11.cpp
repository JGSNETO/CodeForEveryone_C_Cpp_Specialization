/*
# Thread

- Thread is a basic unit of execution within a program. A program can have multiple threads, all executing concurrently. 
These threads share the same memory space (the program´s variables and resources) but can operate independently of each other.

## Key Concepts

1. Creating threads: A new thread can be created in C++ using the std::thread class. You pass the function you want to execute in the new 
thread as an argument to the std::thread constructor.
2. Theard lifecycle: Threads have a lifecycle from creation to termination. Once a thread finishes executing its function or 
reachs the end of its scope, it terminates:
- join(): The join() method waits for the thread to complete. If you don't call join() or detach(), the program will throw an error
when the thread object is detroyed. 
- detach(): A detach thread runs independently of the thread object that created it. Once detached, you can't synchronize or check its state, but
it will continue running on its own.
3. Lambda Functions with Threads: Instead of defining separate functions for thread execution, you can pass lambda function to std::thread.
4. Passing arguments to threads: You can pass arguments to the function a thread executes by passing them as additional parameters to the
std::thread constructor. C++ handles argument passing by copying the arguments into the thread function unless youspecify std:ref() for passing by reference.
5. Thread Synchronization: When multiple threads access shared data, race conditions can occur if proper synchronization is not enforced.
To prevent this, C++ provides synchronization primitives such as mutexes, condition variables, and atomic variables.
- In this case, std::lock_guard locks the mutex mtx when the thread enters the critical section, and it unlockes the mutex when the thread exits the block, 
ensuring that only one thread can print at a time.
- Condition variable: Used to block threads until a condition is met, allowing threads to communicate with each other more easily.
- Atomic Operations: The std::atomic type ensures operations on variables are atomic(They are done as a single, indivisible step), avoiding
race conditions without using locks. 
6. Thread safety: When dealing with shared resources, it's important to ensure thread safety. Data races(when two or more threads modify shared data concurrently) can lead to undefined behavior. 
Using mutexes and atomic types helps to enforce thread safety.
7. Joining and Detaching:
- Join: The main thread waits for the thread to complete
- Detach: The thread is allowed to run independently, and the main thread doesn't wait for its completion.
8. Thread Local Storage: Thread-local variables are variables that are unique to each thread. You can declare such variables using the 
thread_local keyword. Each thread has its own copy of the variable, and modification in one thread do not affect others.

*/