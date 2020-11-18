// https://codeforces.com/problemset/problem/47/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int n ;
    cin >> n ;
    vector<int> v ;
    for(int i = 1 ; i < 32 ; i++)
    {
        v.push_back( (i * (i + 1 ) ) / 2 ) ;
    }
    //for(auto x : v) cout << x << " " ; 
    //cout << endl ;
    int cnt = count(v.begin(), v.end(), n) ;
    if(cnt) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}

int32_t main()
{
    fast;
    int testcases = 1;
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