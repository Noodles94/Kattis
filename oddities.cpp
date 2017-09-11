#include <iostream>

using namespace std;

int main() {
	int number, total;
	cin >> total;
	for (int i = 0; i < total; i++) {
		cin >> number;
		if (number % 2 == 0) {
			cout << number << " is even" <<endl;
		}
		else {
			cout << number << " is odd" <<endl;
		}
	}

	getchar();
	return 0;
}