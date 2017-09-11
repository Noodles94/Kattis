#include <iostream>

using namespace std;

int main() {
	int t1, t2, res;
	cin >> t1 >> t2;
	if (t1 > t2) {
		res = t1 - t2;
		for (int i = 0; i < res + 1; i++) {
			cout << t2 + 1 + i << endl;
		}
	}
	else if (t1 < t2) {
		res = t2 - t1;
		for (int i = 0; i < res + 1; i++) {
			cout << t1 + 1 + i << endl;
		}
	}
	else{
		cout << t1 + 1;
		}
	
	getchar();
	return 0;
}