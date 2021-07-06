// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di 

#include <bits/stdc++.h>
using namespace std ;

#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve() {
    int n ;
    cin >> n ;
    if (n < 3 ) cout << 0 << endl ;
    else {
        if(n % 2 == 0 ) cout << n / 2 - 1 << endl ;
        else cout << n / 2 << endl ;
    }
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0 ;
}