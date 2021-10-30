#include "bits/stdc++.h"

using namespace std;

void solve() {
	int n = rand() % 30 + 1 , x = rand() % 30 + 1 , y = rand() % 30 + 1;
	cout << n << endl;
	// cout << x << " " << y << endl;

	for (int i = 0 ; i < n ; i++) {
		cout << rand() % (30) + 1 << " " ; //<< rand() % (30) << endl;
	}
	cout << endl;
	// cout << endl;
	// for (int i = 0 ; i < n ; i++) {
	// 	cout << rand() % (2 * n) + 1 << " ";
	// }
	// cout << endl;
}

signed main() {

	int seed;
	cin >> seed;
	srand(seed);

	int test_cases = rand() % 3 + 1;
	cout << test_cases << endl;
	for (int t = 1 ; t <= test_cases ; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}
}


// g++ -std=c++17 -o yo.exe yo.cpp
