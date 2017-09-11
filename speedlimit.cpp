#include <iostream>

using namespace std;

int main() {
	int tid, hast = 0, total= 0, tidnu = 0;
	
	while (total != -2) {
		cin >> total;
		if (total == -1) {
			break;
		}
		else {
			int mil = 0;
			for (int i = 0; i < total; i++) {
				cin >> hast >> tid;

				tid = tid - tidnu;

				mil = mil + (hast * tid);

				tidnu = tid + tidnu;

			}
			tidnu = 0;
			cout << mil << " miles"<< endl;
		}
	}
	getchar();
	return 0;
}