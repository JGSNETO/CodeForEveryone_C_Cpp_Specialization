#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H

class MultiplyBy {

public:
	// Constructor to initialize the factor
	MultiplyBy(int factor) : factor_(factor) {}

	// Overload the operator() to make this object callable like a function
	int operator()(int number) const {
		return number * factor_;
	}

private: 
	int factor_; //the factor by which to multiply
};

#endif