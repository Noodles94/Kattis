#include <iostream>

using namespace std;

int main() {
	int h, m, total;
	cin >> h >> m;
	total = m - 45;
	if (total < 0 && h == 0) {
		h = h + 23;
		m = 60 + total;
	}
	else if (total < 0 && h != 0) {
		h = h - 1;
		m = 60 + total;
	}
	else {
		m = m - 45;
	}
	cout << h << " " << m << endl;

	getchar();
	return 0;
}