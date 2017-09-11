#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	float vinkel, hojd, pi;
	int result;
	pi = (atan(1) * 4)/180;
	cin >> hojd >> vinkel;
	vinkel = vinkel * pi;
	result = ceil(hojd/(sin(vinkel)));
	cout << result;
	system("PAUSE");
	getchar();
	return 0;
}