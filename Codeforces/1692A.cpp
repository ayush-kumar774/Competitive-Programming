#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    vector <int> v(4) ;
    for (auto &x : v) cin >> x ;
    int ans = 0 ;
    for (int i = 1 ; i < 4 ; i++) {
        if (v[i] > v[0]) ans++ ;
    }
    cout << ans << endl ;
}

int32_t main () 
{
    int testcases = 1 ;
    cin >> testcases ;
    while (testcases--) {
        solve() ;
    } 
    return 0 ;
}