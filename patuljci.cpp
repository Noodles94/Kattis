#include <iostream>


using namespace std;

int main() {
	int  n1, n2, n3, n4, n5, n6, n7, n8, n9, tot;
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;

	tot = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
	tot = tot - 100;

	if (tot == (n1 + n2)) {
		cout << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == (n1 + n3)) {
		cout << n2 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n1 + n4) {
		cout << n2 << endl << n3 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n1 + n5) {
		cout << n2 << endl << n3 << endl << n4 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n1 + n6) {
		cout << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n1 + n7) {
		cout << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n1 + n8) {
		cout << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n1 + n9) {
		cout << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n2 + n3) {
		cout << n1 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n2 + n4) {
		cout << n1 << endl << n3 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n2 + n5) {
		cout << n1 << endl << n3 << endl << n4 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n2 + n6) {
		cout << n1 << endl << n3 << endl << n4 << endl << n5 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n2 + n7) {
		cout << n1 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n2 + n8) {
		cout << n1 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n2 + n9) {
		cout << n1 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n3 + n4) {
		cout << n1 << endl << n2 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n3 + n5) {
		cout << n1 << endl << n2 << endl << n4 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n3 + n6) {
		cout << n1 << endl << n2 << endl << n4 << endl << n5 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n3 + n7) {
		cout << n1 << endl << n2 << endl << n4 << endl << n5 << endl << n6 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n3 + n8) {
		cout << n1 << endl << n2 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n3 + n9) {
		cout << n1 << endl << n2 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n4 + n5) {
		cout << n1 << endl << n2 << endl << n3 << endl << n6 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n4 + n6) {
		cout << n1 << endl << n2 << endl << n3 << endl << n5 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n4 + n7) {
		cout << n1 << endl << n2 << endl << n3 << endl << n5 << endl << n6 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n4 + n8) {
		cout << n1 << endl << n2 << endl << n3 << endl << n5 << endl << n6 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n4 + n9) {
		cout << n1 << endl << n2 << endl << n3 << endl << n5 << endl << n6 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n5 + n6) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n7 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n5 + n7) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n6 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n5 + n8) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n6 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n5 + n9) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n6 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n6 + n7) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n8 << endl << n9 << endl;
	}
	else if (tot == n6 + n8) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n7 << endl << n9 << endl;
	}
	else if (tot == n6 + n9) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n7 << endl << n8 << endl;
	}


	else if (tot == n7 + n8) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n9 << endl;
	}
	else if (tot == n7 + n9) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n8 << endl;
	}


	else if (tot == n8 + n9) {
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl;
	}



	getchar();
	return 0;
}