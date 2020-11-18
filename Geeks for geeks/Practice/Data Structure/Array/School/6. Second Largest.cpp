#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

bool isPrime(int n ) {
    //bool flag = true ;
    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if(n % i == 0) return false ;
    }
    return true ;
}

void solve() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (auto &x : v ) cin >> x ; 
    sort(v.begin() , v.end()) ;
    cout << v[ n - 2 ] << endl ;
}

int32_t main() {
	fast;
    int testcases ;
	cin >> testcases ;
	while(testcases--) {
	    solve() ;
	}
	return 0;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/