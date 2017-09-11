#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int nr, total = 1;
	vector<int> mod;

	for (int i = 0; i < 10; ++i) {
		cin >> nr;
		nr = nr % 42;
		mod.push_back(nr);
	}
	sort(mod.rbegin(), mod.rend());
	for (int i = 0; i < 9; ++i) {
		if (mod.at(i) == mod.at(i + 1)) {
			
		}
		else {
			total += 1;
		}
	}
	cout << total;

	getchar();
	return 0;
}