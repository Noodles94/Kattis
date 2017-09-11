#include <iostream>
#include <vector>

using namespace std;

int main() {
	int  n1, n2, n3, n4, tot;
	vector<int> t1;
	for (int i = 1; i <= 5; ++i) {
		cin >> n1 >> n2 >> n3 >> n4;
		tot = n1 + n2 + n3 + n4;
		
		t1.push_back(tot);
	
	}

	if (t1.at(0) > t1.at(1) && t1.at(0) > t1.at(2) && t1.at(0) > t1.at(3) && t1.at(0) > t1.at(4)) {
		cout << "1 " << t1.at(0);
	}
	else if (t1.at(1) > t1.at(0) && t1.at(1) > t1.at(2) && t1.at(1) > t1.at(3) && t1.at(1) > t1.at(4)) {
		cout << "2 " << t1.at(1);
	}
	else if (t1.at(2) > t1.at(1) && t1.at(2) > t1.at(0) && t1.at(2) > t1.at(3) && t1.at(2) > t1.at(4)) {
		cout << "3 " << t1.at(2);
	}
	else if (t1.at(3) > t1.at(1) && t1.at(3) > t1.at(2) && t1.at(3) > t1.at(0) && t1.at(3) > t1.at(4)) {
		cout << "4 " << t1.at(3);
	}
	else if (t1.at(4) > t1.at(1) && t1.at(4) > t1.at(2) && t1.at(4) > t1.at(3) && t1.at(4) > t1.at(0)) {
		cout << "5 " << t1.at(4);
	}

	getchar();
	return 0;
}