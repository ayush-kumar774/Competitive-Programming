#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a, b, c, d ;
    cin >> a >> b >> c >> d ;
    if (max(a , b) >= min(c, d) and max(c, d) >= min (a, b)) {
        cout << "YES\n" ;
    }
    else cout << "NO\n" ;
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