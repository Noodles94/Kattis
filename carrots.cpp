#include <iostream>
#include <string>

using namespace std;

int main() {
	int cont, problems;
	string x;
	cin >> cont;
	cin >> problems;
	
	for (int i = 0; i < cont; i++) {
		cin >> x;
	}
	cout << problems;
	getchar();
	return 0;
}