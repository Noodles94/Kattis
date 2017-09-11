#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int k = 0, p = 13, kl = 13, h = 13, t = 13;
	string kort, temp;
	vector <string> nyakort;
	getline(cin, kort);
	for (int i = 0; i < kort.length() / 3; i++) {
		temp = temp + kort.at(k) + kort.at(k + 1) + kort.at(k + 2);

		nyakort.push_back(temp);
		k = k + 3;
		temp = "";
	}
	sort(nyakort.rbegin(), nyakort.rend());

	for(int i = 0; i < nyakort.size(); i++){
		
		if ((nyakort.at(i)).at(0) == 'P') {
			--p;
		}
		else if ((nyakort.at(i)).at(0) == 'K') {
			--kl;
		}
		else if ((nyakort.at(i)).at(0) == 'H') {
			--h;
		}
		else if ((nyakort.at(i)).at(0) == 'T') {
			--t;
		}
	}


	for (int i = 0; i < nyakort.size() - 1; i++) {
		if (nyakort.at(i) == nyakort.at(i + 1)) {
			cout << "GRESKA";
			break;
		}
		else if(nyakort.size() - 2 == i) {
			cout << p << " " << kl << " " << h << " " << t;
			break;
		}
	}

	getchar();
	return 0;
}