// https://www.hackerrank.com/challenges/crush/problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n , m ;
    cin >> n >> m ;
    vector<int> vec(n, 0) ;
    while(m--) {
        int l , r , k ;
        cin >> l >> r >> k ; 
        l-- , r-- ;
        vec[l] = k , vec[r] = -1 * k ;
    } 
    //vector<int> ans(n) ;
    for(int i = 1 ; i < n ; i++) {
        if (vec[i] == 0 )
            vec[i] = vec[i] + vec[i - 1]; 
    }
    for(auto x : vec) cout << x << " " ;
    //int ans = *max_element(vec.begin(), vec.end()) ;
    //cout << ans << endl ;
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