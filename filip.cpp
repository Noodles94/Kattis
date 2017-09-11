#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	string nr1, nr2;
	int n1, n2;

    cin >> nr1 >> nr2;

	reverse(nr1.begin(), nr1.end());
	reverse(nr2.begin(), nr2.end());

	n1 = stoi(nr1);
	n2 = stoi(nr2);

	if (n1 > n2) {
		cout << n1;
	}

	else {
		cout << n2;
	}

	return 0;
	getchar();
}