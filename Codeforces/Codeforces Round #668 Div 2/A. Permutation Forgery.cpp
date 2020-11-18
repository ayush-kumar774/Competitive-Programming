#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n ;
	cin >> n ;
	vector <int> v(n) ;
	for (auto &x : v) {
		cin >> x ;
	}
	reverse(v.begin(), v.end()) ;
	for (auto x : v) cout << x << " " ;
	cout << endl ;
}

int32_t main() {
	int testcases ;
	cin >> testcases ;
	while(testcases--) {
		solve() ;
	}
	return 0;
}