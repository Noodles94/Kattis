#include <iostream>

using namespace std;

int main() {
	int articles, bribe, impact;
	cin >> articles >> impact;
	bribe = articles * (impact - 1);
	cout << bribe +1;

	getchar();
	return 0;
}