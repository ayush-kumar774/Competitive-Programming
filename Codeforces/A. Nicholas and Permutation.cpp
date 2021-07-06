// https://codeforces.com/problemset/problem/676/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    int _1 , _max ;
    for(int i = 0 ; i < n ; i++ ) {
        cin >> v [i] ;
        if(v[i] == 1) _1 = i ;
        if(v[i] == n) _max = i ;
    }
    int maxx = 0 ;
    maxx = max(abs(0 - _max) , maxx) ;
    maxx = max(abs( (n - 1) - _max) , maxx) ;
    maxx = max(abs(0 - _1) , maxx) ;
    maxx = max(abs( (n - 1 ) - _1) , maxx) ;
    cout << maxx << endl ;
}

int32_t main()
{
    fast;
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