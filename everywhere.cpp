#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string stad;
	vector<string> s;
	int test, test2, total = 0;
	cin >> test;
	for (int i = 0; i < test; ++i) {
		cin >> test2;
		for (int j = 0; j < test2 +1; ++j) {
			getline(cin, stad);
			s.push_back(stad);
		}
		sort(s.rbegin(), s.rend());
		for (int k = 0; k < s.size() - 1; ++k) {
			if (s.at(k) == s.at(k+1)) {

			}
			else {
				++total;
			}
		}
		cout << total << endl;
		total = 0;
		s.clear();
	}

	getchar();
	return 0;
}