#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int total, powernr, intnr, out = 0;
	string nr, nynr, power;
	cin >> total;
	
	for (int i = 0; i < total; i++) {
		cin >> nr;

		power = nr.at(nr.length() - 1);
		powernr = atoi(power.c_str());

		nynr = nynr.insert(0, nr, 0, nr.length() - 1);
		intnr = atoi(nynr.c_str());
		out = out + (pow(intnr, powernr));

		nynr = "";
	}
	cout << out << endl;

	getchar();
	return 0;
}