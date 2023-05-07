#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> v(3) ;
    for (auto &x : v) cin >> x ;
    sort(v.begin(), v.end()) ;
    cout << v[1] << endl ;
} 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcases = 1;
    cin >> testcases;
    while (testcases--) {
        solve();
    }
    return 0 ;
}