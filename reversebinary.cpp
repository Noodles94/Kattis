#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int nr, nrstor, nynr = 0;
	vector<int> bin;
	string s;

	cin >> nr;
	for (int i = 0; i < 40; i++) {
		if (nr < pow(2, i)) {
			nrstor = i - 1;
			break;
		}
	}
	for (int i = nrstor; i >= 0; --i) {
		if (pow(2, i) <= nr) {
			bin.push_back(1);
			nr = nr - pow(2, i);
		}
		else {
			bin.push_back(0);
		}


	}

	for (int i = 0; bin.size() > i; i++) {
		//cout << bin.at(i);
		s = s + to_string(bin.at(i));
	}

	reverse(s.begin(), s.end());
	//nynr = stoi(s);

	for (int i = 0; i < s.length(); ++i) {
		if (s.at(i) == '1') {
			nynr = nynr + pow(2, (s.length() - i));
		}
	}

	cout << nynr/2;
	getchar();
	return 0;
}