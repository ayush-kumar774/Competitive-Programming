//https://codeforces.com/contest/1196/problem/B
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {

        int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int n, k, odds = 0;
		cin >> n >> k;

                vector<int> a(n);
		for (int j = 0; j < n; j++) {
			cin >> a[j];
			odds += a[j] % 2;
		}

		if (odds < k || odds % 2 != k % 2) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;

		for (int j = 0; j < n; j++) {
			if (k == 1) break;
			if (a[j] % 2 == 1) {
				cout << j + 1 << " ";
				k--;
			}
		}
		cout << n << endl;
	}
	return 0;

}
