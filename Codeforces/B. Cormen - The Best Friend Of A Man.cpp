// In the name of Aadi Shakti 
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std ;
#define endl "\n"
#define int long long

void solve()
{
    int n , k ;
    cin >> n >> k ;

    vector<int> v (n) ;
    for(auto &c : v) cin >> c ;
    int counter = 0 ;
    for(int i = 0; i < n - 1 ; i++) {
        if (v [i] + v [i + 1] < k) {
            counter += k -(v[i] + v[i + 1]) ;
            v[i + 1] = k - v[i] ;
        }
    }
    cout << counter << endl ;
    for(auto x : v) cout << x << " " ;
    cout << endl ;
}
int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--) {
        solve() ;
    }
    return 0;
}