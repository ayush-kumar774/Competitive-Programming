// https://codeforces.com/problemset/problem/1374/A
// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve() {
    int x, y, n ;
    cin >> x >> y >> n ;
    if (n - n % x + y <= n) {
        cout << n - n % x + y << endl ;
    }
    else {
        cout << n - n % x - (x - y) << endl ;
    }
     
}

int32_t main() {
    fast ;
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}