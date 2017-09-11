#include <iostream>

using namespace std;

int main() {
	int k, q, r, b, kn, p, ks, qs, rs, bs, kns, ps;
	cin >> k >> q >> r >> b >> kn >> p;
	ks = k - 1;
	qs = q - 1;
	rs = r - 2;
	bs = b - 2;
	kns = kn - 2;
	ps = p - 8;
	cout << -ks << " " << -qs << " " << -rs << " " << -bs << " " << -kns << " " << -ps;

	getchar();
	return 0;
}