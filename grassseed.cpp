#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float price = 0, cost, width, length;
	int lawns;
	cin >> cost >> lawns;
	for (int i = 0; i < lawns; ++i) {
		cin >> width >> length;
		price += width*length;
	}
	price = price*cost;
	cout << setprecision(9) << price;

	getchar();
	return 0;
}