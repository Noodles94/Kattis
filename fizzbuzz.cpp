#include <iostream>
#include <string>

using namespace std;

int main() {
	int del1, del2, total;
	cin >> del1;
	cin >> del2;
	cin >> total;
	for (int i = 1; i < total + 1; i++) {
		if ((i % del1) == 0 && (i % del2) != 0) {
			cout << "Fizz" << endl;
		}

		else if ((i % del2) == 0 && (i % del1) != 0) {
			cout << "Buzz" << endl;
		}

		else if (((i % del1) == 0) && ((i % del2) == 0)) {
			cout << "FizzBuzz" << endl;
		}

		else {
			cout << i << endl;
		}

	}
	getchar();
	return 0;
}