#include <iostream>


using namespace std;

int main() {
	int total;
	cin >> total;
	if (total % 2 == 0) {
		cout << "Bob";
	}
	else {
		cout << "Alice";
	}

	getchar();
	return 0;
}