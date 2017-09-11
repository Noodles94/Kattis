#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	int total = 1;
	getline(cin, a);

	for (int i = 0; i < a.length(); i++) {
		if ((a.at(i) == 'A') && (total == 1 || 2)) {
			if (total == 1) {
				total = 2;
			}
			else if (total == 2) {
				total = 1;
			}
		}
		
		else if ((a.at(i) == 'B') && (total == 2 || 3)) {
			if (total == 2) {
				total = 3;
			}
			else if (total == 3) {
				total = 2;
			}
		}
		else if ((a.at(i) == 'C') && (total == 1 || 3)) {
			if (total == 3) {
				total = 1;
			}
			else if (total == 1) {
				total = 3;
			}
		}
	}
	cout << total;

	getchar();
	return 0;
}