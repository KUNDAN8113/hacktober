#include<iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	int n , target;
	cin >> n >> target;

	int a[n];
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	int lo = 0 , hi = n - 1 , ans = -1;
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (a[mid] == target)
		{
			ans = mid;
			break;
		}
		else if (a[mid] < target)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	cout << ans;

	return 0;
}


