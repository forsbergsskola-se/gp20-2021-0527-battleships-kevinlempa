#include <iostream>
#include "Fibonacci.h"
using namespace std;

void FibonacciIeration(int max) {
	int a = 0;
	int b = 1;
	int ab = a + b;
	cout << "Fibonacci Numbers: " << a << ", " << b << ", ";
	while (ab <= max) {
		cout << ab << ", ";
		a = b;
		b = ab;
		ab = a + b;
	}
	cout << endl;
}

void FibonacciRecursion(int max, int arg1, int arg2) {
	if (arg1 == 0 && arg2 == 1)
		cout << "Fibonacci Numbers: " << arg1 << ", " << arg2 << ", ";
	int a = arg1;
	int b = arg2;
	int ab = a + b;
	cout << ab << ", ";
	a = b;
	b = ab;
	ab = a + b;
	if (ab >= max)return;
	FibonacciRecursion(max, a, b);
}


int main() {
	FibonacciIeration(300);	
	FibonacciRecursion(300);
}