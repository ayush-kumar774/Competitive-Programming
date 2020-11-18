// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , ans = 1;
    cin >> n ;
    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;
    // vector<int> res ;
    int maxx = 0 ;
    for(int i = 0 ; i < n - 1 ; i++) {
        if(v[i] < v[i + 1]) {
            ans++ ;
            // cout << v[i] << " " << v[i + 1] << endl ;
            // cout << "Count is " << ans << endl ;
        }
        else {
            maxx = max(ans, maxx) ;
            //res.push_back(ans) ;
            ans = 1 ;
        }
    }
    maxx = max(ans, maxx) ;
    //int ma = *max_element(res.begin(), res.end()) ;
    cout << maxx << endl ;
}
int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/