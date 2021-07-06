// https://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v (n) ;
    for(auto &x : v) cin >> x ;
    sort(v.begin(), v.end()) ;
    int minn = 999999 ;
    for(int i = n - 1 ; i > 0 ; i--) {
        int a = v[i] - v[i -1] ;
        minn = min (a ,minn) ;
        if (minn == 0 ) {
            break ;
        }
    }
    cout << minn << endl ;
}

int32_t main()
{
    fast;
    int testcases ;
    cin >> testcases ;
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