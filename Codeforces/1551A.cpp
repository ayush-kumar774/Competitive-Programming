#include <bits/stdc++.h>
using namespace std ;
#define int long long

void solve() {
    int n ;
    cin >> n ;
    if (n % 3 == 0) {
        cout << n / 3 << " " << n / 3 << endl ;
    }
    else if (n % 3 == 1) {
        cout << (n / 3) + 1 << " " << (n / 3) << endl ;
    }
    else if (n % 3 == 2) {
        cout << (n / 3) << " " << (n / 3) + 1 << endl ;
    }
}

int32_t main() {
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--) {
        solve();
    }
    return 0 ;
}