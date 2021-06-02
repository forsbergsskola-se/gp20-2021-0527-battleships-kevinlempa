#include <iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int arr[20]{};
	for (int i = 0; i < 10000; i++) {
		int r = (rand() % 20) + 1;
		arr[r - 1] += 1;
	}
	for (int i = 0; i < 20; i++) {
		cout << "Number " << i + 1 << " occurred: " << arr[i] << "times" << endl;
	}
	return 0;

}