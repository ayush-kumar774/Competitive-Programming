#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n , d ;
    cin >> n >> d ;
    vector<int> v(n) ;
    for (auto &x : v) cin >> x ;
    for (int i = 0 ; i < n - 1 ; i++) {
        if (v[i + 1] - v[i] <= d) {
            cout << v[i + 1] << endl ;
            return;
        }
    }
    cout << -1 << endl ;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcases = 1;
    // cin >> testcases;
    while (testcases--) {
        solve();
    }
    return 0 ;
}