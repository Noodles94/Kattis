#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int matchi, matchil, h, l, hy;
	cin >> matchi >> h >> l;
	hy = (pow(h, 2)) + (pow(l, 2));
	hy = sqrt(hy);
	for (int i = 0; matchi > i; i++) {
		cin >> matchil;
		if (matchil <= hy) {
			cout << "DA" << endl;
		}
		else {
			cout << "NE" << endl;
		}
	}

	getchar();
	return 0;
}