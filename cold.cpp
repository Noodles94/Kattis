#include <iostream>

using namespace std;

int main() {
	int number, total, temp = 0;
	cin >> total;
	for (int i = 0; i < total; i++) {
		cin >> number;
		if (number < 0) {
			temp++;
		}
	}
	cout << temp;
	getchar();
	return 0;
}