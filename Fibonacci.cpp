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
}



int main() {
	FibonacciIeration(300);
}