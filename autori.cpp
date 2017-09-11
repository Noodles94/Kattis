#include <iostream>
#include <string>


using namespace std;

int main() {
	string namn;
	string nynamn;

	int k = 0;
	getline(cin, namn);

	for (int i = 0; i < namn.length(); ++i) {
		if (namn.at(i) >= 'A' && namn.at(i) <= 'Z') {

			nynamn.insert(k, namn, i, 1);
			++k;
		}

	}
	cout << nynamn << endl;
	getchar();
	return 0;
}