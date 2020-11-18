#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
#define endl '\n'

void solve()
{
	int n , d ;
	cin >> n >> d ;
	int arr[n] ;
	for (int i = 0 ; i < n ; i++) {
	    cin >> arr[(i + n - d ) % n] ; 
	}
	for (int i = 0 ; i < n ; i++) {
	    cout << arr[i] << " ";
	}
	cout << endl ;
}

int32_t main() {
	int testcases = 1 ;
	cin >> testcases ;
	while(testcases--) {
		solve();
	}
	return 0 ;
}
